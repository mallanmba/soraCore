/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#include "DdsEntitiesFactory.h"
#include "DdsEntityRepositories.h"
#include "DdsSupport.h"
#include "DdsTypeRegistrator.h"

#include "miro/Log.h"
#include "miro/Configuration.h"
#include "miro/RobotParameters.h"
#include "miro/Exception.h"

#include "knDdsConfig.h"

#include <ndds/ndds_utility_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#if defined(KNDDS_HAS_DDS_LBPlugin) && defined(RTIDDS_LB_BETA_VERSION)
#  include <LBEDiscoveryPlugin++.h>
#  include <LBPDiscoveryPlugin++.h>
#endif
#ifdef KNDDS_HAS_DDS_Monitor
#  include <monitor/monitor_common.h>
#endif

#include <ace/OS_NS_strings.h>
#include <ace/Get_Opt.h>

#include <vector>
#include <sstream>
#include <fstream>

namespace kn
{
  using namespace std;

  typedef vector<DdsParticipantParameters> ParticipantVector;
  typedef vector<DdsNodeParameters> NodeVector;
  typedef vector<DdsTopicParameters> TopicVector;
  typedef vector<string> StringVector;

  struct DdsEntitiesFactory::Data
  {
    //! DDS topics registered by the factory.
    /** They are remembered for later cleanup. */
    std::vector<DDS::Topic *> topics;
  };

  DdsEntitiesFactory::DdsEntitiesFactory(DdsEntitiesFactoryParameters const& params) :
    m_params(params),
    m_data(new Data())
  {
    MIRO_LOG_CTOR("kn::DdsEntitiesFactory");

    // for error reporting
    stringstream ostr;

    DDS::DomainParticipantFactory * dpf =
      DDS::DomainParticipantFactory::get_instance();

    //---------------------------------------------------
    // disable default locations for Qos policy lookup
    DDS::DomainParticipantFactoryQos dpfQos;
    DDS_DomainParticipantFactoryQos_initialize(&dpfQos);

    DDS::ReturnCode_t rc;
    if ((rc = dpf->get_qos(dpfQos)) != DDS_RETCODE_OK) {
      ostr << "DdsSupport::init() - Failed to query Qos (" << ((int)rc) << "): " << DdsSupport::getError(rc);
      throw Miro::Exception(ostr.str());
    }

    // start participants disabled, so we can set discovery modules
    dpfQos.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;

    // if configuration file is given, disable all other config options
    if (!m_params.configFiles.empty()) {
      Miro::SearchPaths paths(KNDDS_INSTALL_PREFIX "/etc");
      paths.addMiroEtcPaths();

      dpfQos.profile.url_profile.maximum(m_params.configFiles.size());
      dpfQos.profile.url_profile.length(m_params.configFiles.size());

      dpfQos.profile.ignore_user_profile = true;
      dpfQos.profile.ignore_environment_profile = true;
      dpfQos.profile.ignore_resource_profile = true;

      for (unsigned int i = 0; i < m_params.configFiles.size(); ++i) {
	string absFilePath = paths.findFile(m_params.configFiles[i]);
	if (absFilePath.empty()) {
          ostr << "DdsSupport::init() - DDS config file given not found (" << m_params.configFiles[i] << ")";
          throw Miro::Exception(ostr.str());
	}

	dpfQos.profile.url_profile[i] =  DDS_String_dup(("file://" + absFilePath).c_str());

      }
      if ((rc = dpf->set_qos(dpfQos)) != DDS_RETCODE_OK) {
	ostr << "DdsSupport::init() - Failed to set Qos: " << DdsSupport::getError(rc);
	throw Miro::Exception(ostr.str());
      }
    }

    if (!m_params.defaultLibrary.empty() &&
                (rc = dpf->set_default_library(m_params.defaultLibrary.c_str())) != DDS_RETCODE_OK) {
      ostr << "DdsSupport::init() - Failed to set default library: " << DdsSupport::getError(rc);
      throw Miro::Exception(ostr.str());
    }
    if (!m_params.defaultProfile.empty() &&
                (rc = dpf->set_default_profile(m_params.defaultLibrary.c_str(),
                                               m_params.defaultProfile.c_str())) != DDS_RETCODE_OK) {
      ostr << "DdsSupport::init() - Failed to set default library: " << DdsSupport::getError(rc);
      throw Miro::Exception(ostr.str());
    }

    //-------------------------------------------
    // create all participants
    // (default is 1)
    DdsDomainParticipantRepository * partRepo = DdsDomainParticipantRepository::instance();
    DdsTypeRegistratorRepository * typeRepo = DdsTypeRegistratorRepository::instance();
    {
      ParticipantVector::const_iterator first, last = m_params.participants.end();
      for (first = m_params.participants.begin(); first != last; ++first) {
        // create one participant
        char const * library = first->library.empty() ? NULL : first->library.c_str();
        char const * profile = first->profile.empty() ? NULL : first->profile.c_str();

        DDS::DomainParticipantQos qos;
        DDS_DomainParticipantQos_initialize(&qos);
        if (profile == NULL &&
           (m_params.defaultLibrary.empty() || m_params.defaultProfile.empty())) {
          DDS::ReturnCode_t rc = dpf->get_default_participant_qos(qos);
          if (rc != DDS_RETCODE_OK) {
            ostr << "Get default participant Qos profile: " << DdsSupport::getError(rc);
            throw Miro::Exception(ostr.str());
          }
        }
        else {
          DDS::ReturnCode_t rc = dpf->get_participant_qos_from_profile(qos, library, profile);
          if (rc != DDS_RETCODE_OK) {
            ostr << "Load participant Qos profile: " << DdsSupport::getError(rc);
            throw Miro::Exception(ostr.str());
          }
        }

        // set participant name from Miro parameters
        if (!first->participantName.empty()) {
          qos.participant_name.name = DDS_String_dup(first->participantName.c_str());
        }

        // handle discovery-peers processing
        // just print the stuff as a first step...
        
        if (!first->discoveryPeersFiles.empty())  {
          DDS_DiscoveryQosPolicy& discovery = qos.discovery;

          
          StringVector peers;

          StringVector::const_iterator f, l = first->discoveryPeersFiles.end();
          for (f = first->discoveryPeersFiles.begin(); f != l; ++f) {
            StringVector const p = parseDiscoveryPeersFile(*f);
            peers.insert(peers.end(), p.begin(), p.end());
          }

          // set peers list in qos
          if (discovery.initial_peers.maximum() < (int)peers.size()) {
            discovery.initial_peers.maximum(peers.size());
          }
          discovery.initial_peers.length(peers.size());
          for (int i = 0; i < discovery.initial_peers.length(); ++i) {
            assert (peers[i].length() < 100);

            DDS_String_free(discovery.initial_peers[i]);
            discovery.initial_peers[i] = DDS_String_dup(peers[i].c_str());
          }

          MIRO_LOG_OSTR(LL_NOTICE, "DDS Initial peers layout for " << qos.participant_name.name);
          for (int i = 0; i < qos.discovery.initial_peers.length(); ++i) {
            MIRO_LOG_OSTR(LL_NOTICE, qos.discovery.initial_peers[i]);
          }
        }
#ifdef KNDDS_HAS_DDS_Monitor
        if (first->enableMonitor) {
          int rc;
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "rti.monitor.library",
                                                        "rtimonintoring",
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);
          char valueBuffer[17];
          sprintf(valueBuffer, "%p", RTIDefaultMonitor_create);
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "rti.monitor.create_function_ptr",
                                                        valueBuffer,
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);

          int id = (first->monitorDomainId >= 0)?
            first->monitorDomainId : first->domainId + 1;
          sprintf(valueBuffer, "%i", id);
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "rti.monitor.config.new_participant_domain_id",
                                                        valueBuffer,
                                                        DDS_BOOLEAN_FALSE);
          if (!first->monitorLibrary.empty()) {
            rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                          "rti.monitor.config.qos_library",
                                                          first->monitorLibrary.c_str(),
                                                          DDS_BOOLEAN_FALSE);
            assert (rc == DDS_RETCODE_OK);
            rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                          "rti.monitor.config.qos_profile",
                                                          first->monitorProfile.c_str(),
                                                          DDS_BOOLEAN_FALSE);
            assert (rc == DDS_RETCODE_OK);
          }
        }
#endif

#if defined(KNDDS_HAS_DDS_LBPlugin) && defined(RTIDDS_LB_BETA_VERSION)
        // disable simple-endpoind discovery if static discovery modules are specified
        // we need to double-check if they can coexist peacefully...
        if (!first->lbpdFile.empty()) {
          qos.discovery_config.builtin_discovery_plugins &= ~DDS_DISCOVERYCONFIG_BUILTIN_SPDP;
        }
        if (!first->lbedFile.empty()) {
          qos.discovery_config.builtin_discovery_plugins &= ~DDS_DISCOVERYCONFIG_BUILTIN_SEDP;
        }
#endif

        DDS::DomainParticipant * participant =
          dpf->create_participant(first->domainId,
                                  qos,
                                  NULL /* listener */,
                                  DDS::STATUS_MASK_NONE);

        if (participant == NULL) {
          throw Miro::Exception("DdsSupport::init() - Failed to create participant.");
        }

        // set default library/profile
        if (library != NULL &&
            (rc = participant->set_default_library(library)) != DDS_RETCODE_OK) {
          ostr << "DdsSupport::init() - Failed to set participant default library: " << DdsSupport::getError(rc);
          throw Miro::Exception(ostr.str());
        }
        if (profile != NULL &&
            (rc = participant->set_default_profile(library, profile)) != DDS_RETCODE_OK) {
          ostr << "DdsSupport::init() - Failed to set participant default profile: " << DdsSupport::getError(rc);
          throw Miro::Exception(ostr.str());
        }


#if defined(KNDDS_HAS_DDS_LBPlugin)
        // add static discovery modules if specified
        if (!first->lbpdFile.empty()) {
          MIRO_LOG(LL_NOTICE, "DDS Static Participant Discovery");
#  if defined(RTIDDS_LB_BETA_VERSION)
          DDSLBPDiscoveryPlugin *pPlugin = new DDSLBPDiscoveryPlugin();
          pPlugin->parseXmlFile(first->lbpdFile.c_str());
          pPlugin->registerPlugin(participant);
#  else
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.participant.lbpdiscovery.library",
                                                        "rtilbpdisc",
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.participant.lbpdiscovery.create_function",
                                                        "DDS_LBPDiscoveryPlugin_create",
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);

          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.participant.lbpdiscovery.config_file",
                                                        first->lbpdFile.c_str(),
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);

          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.participant.load_plugin",
                                                       "dds.discovery.endpoint.lbpdiscovery",
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);

          char valueBuffer[18];
          sprintf(valueBuffer, "%i", first->lbedLogVerbosity);
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.participant.lbpdiscovery.verbosity",
                                                        valueBuffer,
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);
#  endif
        }
        if (!first->lbedFile.empty()) {
          MIRO_LOG(LL_NOTICE, "DDS Static Endpoint Discovery");
#  if defined(RTIDDS_LB_BETA_VERSION)
          DDSLBEDiscoveryPlugin *ePlugin = new DDSLBEDiscoveryPlugin();
          ePlugin->parseXmlFile(first->lbedFile.c_str());
          ePlugin->registerPlugin(participant);
#  else
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.endpoint.lbediscovery.library",
                                                        "rtilbedisc",
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.endpoint.lbediscovery.create_function",
                                                        "DDS_LBEDiscoveryPlugin_create",
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);

          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.endpoint.lbediscovery.config_file",
                                                        first->lbedFile.c_str(),
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);

          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.endpoint.load_plugin",
                                                       "dds.discovery.endpoint.lbediscovery",
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);

          char valueBuffer[18];
          sprintf(valueBuffer, "%i", first->lbedLogVerbosity);
          rc = DDS_PropertyQosPolicyHelper_add_property(&qos.property,
                                                       "dds.discovery.endpoint.lbediscovery.verbosity",
                                                        valueBuffer,
                                                        DDS_BOOLEAN_FALSE);
          assert (rc == DDS_RETCODE_OK);
#  endif
        }
#endif

        // enable participant
        rc = participant->enable();
        if (rc != DDS_RETCODE_OK) {
          ostr << "DdsSupport::init() - Failed to enable participant: " << DdsSupport::getError(rc);
          throw Miro::Exception(ostr.str());
        }

        try {
          partRepo->add(first->name, participant);
        }
        catch (Miro::RepositoryBase::EAlreadyRegistered const&) {
          throw Miro::Exception("DdsSupport::init() - Duplicate name for participant at repo.");
        }

        //-------------------------------------------------
        // register all relevant types with the participant

        // by default assume, that all types are for all domains
        if (first->types.empty()) {
          DdsTypeRegistratorRepository::InstanceMap const& types =
            typeRepo->getMap();

          DdsTypeRegistratorRepository::InstanceMap::const_iterator f, l = types.end();
          for (f = types.begin(); f != l; ++f) {
            try {
              f->second->registerType(participant);
            }
            catch (Miro::Exception const& e) {
              ostr << "Error registering type" << f->first << " at participant " << first->name << ": " << e.what();
              throw Miro::Exception(ostr.str());
            }
          }
        }
        else {
          StringVector::const_iterator f, l = first->types.end();
          for (f = first->types.begin(); f != l; ++f) {
            try {
              DdsTypeRegistratorBase * tReg = typeRepo->get(*f);
              tReg->registerType(participant);
            }
            catch (Miro::Exception const& e) {
              ostr << "Error registering type" << *f << " at participant " << first->name << ": " << e.what();
              throw Miro::Exception(ostr.str());
            }
          }
        }

        //-------------------------------------------------
        // create all flow controllers configured for the participant
        vector<DdsFlowControllerParameters>::const_iterator f, l = first->flowControllers.end();
        for  (f = first->flowControllers.begin(); f != l; ++f) {
          DDS::FlowControllerProperty_t property;

          property.scheduling_policy =
            (f->schedulingPolicy == "DDS_RR_FLOW_CONTROLLER_SCHED_POLICY")?
            DDS_RR_FLOW_CONTROLLER_SCHED_POLICY : DDS_EDF_FLOW_CONTROLLER_SCHED_POLICY;
          property.token_bucket.max_tokens = (f->tokenBucket.maxTokens < 0)?
            DDS_LENGTH_UNLIMITED : f->tokenBucket.maxTokens;
          property.token_bucket.tokens_added_per_period = (f->tokenBucket.tokensAddedPerPeriod < 0)?
            DDS_LENGTH_UNLIMITED : f->tokenBucket.tokensAddedPerPeriod;
          property.token_bucket.tokens_leaked_per_period = (f->tokenBucket.tokensLeakedPerPeriod < 0)?
            DDS_LENGTH_UNLIMITED : f->tokenBucket.tokensLeakedPerPeriod;
          if (f->tokenBucket.period > ACE_Time_Value::zero) {
            property.token_bucket.period.sec = f->tokenBucket.period.sec();
            property.token_bucket.period.nanosec = f->tokenBucket.period.usec() * 1000;
          }
          else {
            property.token_bucket.period = DDS_DURATION_INFINITE;
          }
          property.token_bucket.bytes_per_token = (f->tokenBucket.bytesPerToken < 0)?
            DDS_LENGTH_UNLIMITED : f->tokenBucket.bytesPerToken;
          participant->create_flowcontroller(DDS::String_dup(f->name.c_str()), property);
        }
        DDS_DomainParticipantQos_finalize(&qos);
      }
    }

    //-------------------------------------------------
    // create all publishers in configuration file
    // (default is 1)
    DdsPublisherRepository * pubRepo = DdsPublisherRepository::instance();
    {
      NodeVector::const_iterator first, last = m_params.publishers.end();
      for (first = m_params.publishers.begin(); first != last; ++first) {
        // per publisher
        DDS::DomainParticipant * participant = NULL;
        try {
          participant = partRepo->get(first->participant);
        }
        catch (Miro::Exception const&) {
          ostr << "Publisher specified unknown participant: " << first->participant;
          throw Miro::Exception(ostr.str());
        }

        char const * profile = first->profile.empty() ? NULL : first->profile.c_str();
        char const * library = first->library.empty() ? NULL : first->library.c_str();

        DDS::PublisherQos qos;
        DDS_PublisherQos_initialize(&qos);
        if (profile == NULL &&
           (m_params.defaultLibrary.empty() || m_params.defaultProfile.empty())) {
          DDS::ReturnCode_t rc = participant->get_default_publisher_qos(qos);
          if (rc != DDS_RETCODE_OK) {
            ostr << "Get default publisher Qos profile: " << DdsSupport::getError(rc);
            throw Miro::Exception(ostr.str());
          }
        }
        else {
          DDS::ReturnCode_t rc = dpf->get_publisher_qos_from_profile(qos, library, profile);
          if (rc != DDS_RETCODE_OK) {
            ostr << "Load publisher Qos profile: " << DdsSupport::getError(rc);
            throw Miro::Exception(ostr.str());
          }
        }

        char const * partition = (first->partition.empty() || first->partition == "<NONE>")?
          NULL : first->partition.c_str();

        if (partition != NULL) {
          qos.partition.name.maximum(1);
          qos.partition.name.length(1);
          qos.partition.name[0] = DDS_String_dup(partition);
        }

        DDS::Publisher * publisher =
          participant->create_publisher(qos,
                                        NULL /* listener */,
                                        DDS::STATUS_MASK_NONE);
        if (publisher == NULL) {
          throw Miro::Exception("Failed to create publisher.");
        }

        // set default library/profile
        if (library != NULL &&
            (rc = publisher->set_default_library(library)) != DDS_RETCODE_OK) {
          ostr << "DdsSupport::init() - Failed to set publisher default library: " << DdsSupport::getError(rc);
          throw Miro::Exception(ostr.str());
        }
        if (profile != NULL &&
            (rc = publisher->set_default_profile(library, profile)) != DDS_RETCODE_OK) {
          ostr << "DdsSupport::init() - Failed to set publisher default profile: " << DdsSupport::getError(rc);
          throw Miro::Exception(ostr.str());
        }

        try {
          pubRepo->add(first->name, publisher);
        }
        catch (Miro::RepositoryBase::EAlreadyRegistered const&) {
          throw Miro::Exception("DdsSupport::init() - Duplicate name for publisher at repo.");
        }
        DDS_PublisherQos_finalize(&qos);
      }
    }

    //-------------------------------------------------
    // create all subscribers in configuration file
    // (default is 2)
    DdsSubscriberRepository * subRepo = DdsSubscriberRepository::instance();
    {
      NodeVector::const_iterator first, last = m_params.subscribers.end();
      for (first = m_params.subscribers.begin(); first != last; ++first) {
        // per subscriber
        DDS::DomainParticipant * participant = NULL;
        try {
          participant = partRepo->get(first->participant);
        }
        catch (Miro::Exception const&) {
          ostr << "Subscriber specified unknown participant: " << first->participant;
          throw Miro::Exception(ostr.str());
        }

        char const * profile = first->profile.empty() ? NULL : first->profile.c_str();
        char const * library = first->library.empty() ? NULL : first->library.c_str();

        DDS::SubscriberQos qos;
        DDS_SubscriberQos_initialize(&qos);

        if (profile == NULL &&
           (m_params.defaultLibrary.empty() || m_params.defaultProfile.empty())) {
          DDS::ReturnCode_t rc = participant->get_default_subscriber_qos(qos);
          if (rc != DDS_RETCODE_OK) {
            ostr << "Get default subscriber Qos profile: " << DdsSupport::getError(rc);
            throw Miro::Exception(ostr.str());
          }
        }
        else {
          DDS::ReturnCode_t rc = dpf->get_subscriber_qos_from_profile(qos, library, profile);
          if (rc != DDS_RETCODE_OK) {
            ostr << "Load subscriber Qos profile: " << DdsSupport::getError(rc);
            throw Miro::Exception(ostr.str());
          }
        }
        char const * partition = (first->partition.empty() || first->partition == "<NONE>")?
          NULL : first->partition.c_str();

        if (partition != NULL) {
          if (strcmp("<TEAM>", partition) == 0) {
            Miro::RobotParameters * rp = Miro::RobotParameters::instance();

	    if (!rp->teamMembers.empty()) {
	      qos.partition.name.maximum(rp->teamMembers.size());
	      qos.partition.name.length(rp->teamMembers.size());
	      for (unsigned int i = 0; i < rp->teamMembers.size(); ++i) {
		qos.partition.name[i] = DDS_String_dup(rp->teamMembers[i].c_str());
	      }
	    }
	    else {
	      MIRO_LOG(LL_WARNING, "Team partition requested, but RobotParameters::teamMembers is empty, assuming ALL.");

	      qos.partition.name.maximum(1);
	      qos.partition.name.length(1);
	      qos.partition.name[0] = DDS_String_dup("*");
	    }
	  }
	  else {
	    qos.partition.name.maximum(1);
	    qos.partition.name.length(1);
	    qos.partition.name[0] = DDS_String_dup(partition);
	  }
	}

        DDS::Subscriber * subscriber =
          participant->create_subscriber(qos,
                                         NULL /* listener */,
                                         DDS::STATUS_MASK_NONE);
        if (subscriber == NULL) {
          throw Miro::Exception("Failed to create subscriber.");
        }

        // set default library/profile
        if (library != NULL &&
            (rc = subscriber->set_default_library(library)) != DDS_RETCODE_OK) {
          ostr << "DdsSupport::init() - Failed to set subscriber default library: " << DdsSupport::getError(rc);
          throw Miro::Exception(ostr.str());
        }
        if (profile != NULL &&
            (rc = subscriber->set_default_profile(library, profile)) != DDS_RETCODE_OK) {
          ostr << "DdsSupport::init() - Failed to set subscriber default profile: " << DdsSupport::getError(rc);
          throw Miro::Exception(ostr.str());
        }

        try {
          subRepo->add(first->name, subscriber);
        }
        catch (Miro::RepositoryBase::EAlreadyRegistered const&) {
          throw Miro::Exception("DdsSupport::init() - Duplicate name for subscriber at repo.");
        }

        DDS_SubscriberQos_finalize(&qos);
      }
    }

    //-------------------------------------------------
    // create all topics in configuration file
    // (default is 0)
    {
      TopicVector::const_iterator first, last = m_params.topics.end();
      for (first = m_params.topics.begin(); first != last; ++first) {

        DDS::DomainParticipant * participant = NULL;
        try {
          participant = partRepo->get(first->participant);
        }
        catch (Miro::Exception const&) {
          ostr << "Topic specified unknown participant: " << first->participant;
          throw Miro::Exception(ostr.str());
        }

        char const * profile = first->profile.empty() ? NULL : first->profile.c_str();
        char const * library = first->library.empty() ? NULL : first->library.c_str();

        DDS::Topic * topic =
          (profile  ||
           (!m_params.defaultLibrary.empty() && !m_params.defaultProfile.empty())) ?
          participant->create_topic_with_profile(first->name.c_str(),
                                                 first->typeName.c_str(),
                                                 library,
                                                 profile,
                                                 NULL /* listener */,
                                                 DDS::STATUS_MASK_NONE) :
          participant->create_topic(first->name.c_str(),
                                    first->typeName.c_str(),
                                    DDS_TOPIC_QOS_DEFAULT,
                                    NULL /* listener */,
                                    DDS::STATUS_MASK_NONE);
        if (topic == NULL) {
          throw Miro::Exception("Failed to create topic.");
        }
      }
    }

  }

  DdsEntitiesFactory::~DdsEntitiesFactory()
  {
    MIRO_LOG_DTOR("kn::DdsEntitiesFactory");

   // delete all topics we created
    {
      vector<DDS::Topic *>::const_iterator first, last = m_data->topics.end();
      for (first = m_data->topics.begin(); first != last; ++first) {

        DDS::DomainParticipant * participant = (*first)->get_participant();
        DDS::ReturnCode_t rc = participant->delete_topic(*first);
        if (rc != DDS::RETCODE_OK) {
          MIRO_LOG_OSTR(LL_ERROR , "Failed to delete topic: " << DdsSupport::getError(rc));
        }
      }
      m_data->topics.clear();
    }

    MIRO_LOG(LL_NOTICE, "Cleaning up DDS subscribers...");
    DdsSubscriberRepository::SingletonType::ACE_Singleton_Type::close();
    MIRO_LOG(LL_NOTICE, "Cleaning up DDS publishers...");
    DdsPublisherRepository::SingletonType::ACE_Singleton_Type::close();

    MIRO_LOG(LL_NOTICE, "Cleaning up DDS flow-controllers...");
    {
      ParticipantVector::const_iterator first, last = m_params.participants.end();
      for (first = m_params.participants.begin(); first != last; ++first) {
        DDS::DomainParticipant * dp =
          DdsDomainParticipantRepository::instance()->get(first->name);
        vector<DdsFlowControllerParameters>::const_iterator f, l = first->flowControllers.end();
        for  (f = first->flowControllers.begin(); f != l; ++f) {
          DDS::FlowController * fc = dp->lookup_flowcontroller(f->name.c_str());
          dp->delete_flowcontroller(fc);
        }
      }
    }
    MIRO_LOG(LL_NOTICE, "Cleaning up DDS participants...");
    DdsDomainParticipantRepository::SingletonType::ACE_Singleton_Type::close();
    DDS::DomainParticipantFactory * dpf =
      DDS::DomainParticipantFactory::get_instance();
    dpf->finalize_instance();

    delete m_data;
  }

  vector<string>
  DdsEntitiesFactory::parseDiscoveryPeersFile(string const& filename)
  {
    StringVector peers;
    
    Miro::SearchPaths paths(KNDDS_INSTALL_PREFIX "/etc");
    paths.addMiroEtcPaths();
    
    string absFilePath = paths.findFile(filename);
    if (absFilePath.empty()) {
      stringstream ostr;
      ostr << "DdsSupport::init() - DDS config file given not found (" << filename << ")";
      throw Miro::Exception(ostr.str());
    }
    
    ifstream file(absFilePath.c_str());
    string line;
    while (std::getline(file, line)) {
      size_t begin = line.find_first_not_of(" \t");
      
      if (begin != string::npos) {
        // cut comments and trailing whitesapce or comments
        size_t end = line.find_first_of(" \t;", begin);
        
        // only add none-blank lines
        if (begin != end) {
          peers.push_back(line.substr(begin, end));
        }
      }
    }   
    return peers;
  }
}


