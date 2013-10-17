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
#include "DdsSupport.h"
#include "knDds/KnDdsParameters.h"

#include "miro/RobotParameters.h"
#include "miro/Configuration.h"
#include "miro/Log.h"
#include "miro/TimeHelper.h"

#include <ace/Arg_Shifter.h>

#include <ndds/dds_c/dds_c_infrastructure.h>
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>
#include <boost/iterator/iterator_concepts.hpp>

#include <vector>

namespace
{
  using namespace std;

  ACE_TCHAR const ddsConfigOpt[] = "-MiroDdsConfig";
  ACE_TCHAR const shortDdsConfigOpt[] = "-MDC";
  ACE_TCHAR const ddsDomainIdOpt[] = "-MiroDdsDomainId";
  ACE_TCHAR const shortDdsDomainIdOpt[] = "-MDI";
  ACE_TCHAR const ddsDiscoveryPeersOpt[] = "-MiroDiscoveryPeers";
  ACE_TCHAR const shortDdsDiscoveryPeersOpt[] = "-MDP";
  ACE_TCHAR const ddsMonitorOpt[] = "-MiroDdsMonitor";
  ACE_TCHAR const shortDdsMonitorOpt[] = "-MDM";
  ACE_TCHAR const ddsMonitorLibraryOpt[] = "-MiroDdsMonitorLibrary";
  ACE_TCHAR const shortDdsMonitorLibraryOpt[] = "-MDML";
  ACE_TCHAR const ddsParticipantNameOpt[] = "-MiroDdsParticipantName";
  ACE_TCHAR const shortDdsParticipantNameOpt[] = "-MDPN";
  ACE_TCHAR const ddsDefaultLibraryOpt[] = "-MiroDdsDefaultLibrary";
  ACE_TCHAR const shortDdsDefaultLibraryOpt[] = "-MDDL";
  ACE_TCHAR const ddsDefaultProfileOpt[] = "-MiroDdsDefaultProfile";
  ACE_TCHAR const shortDdsDefaultProfileOpt[] = "-MDDP";
  ACE_TCHAR const ddsEndpointDiscoveryOpt[] = "-MiroDdsEndpointDiscovery";
  ACE_TCHAR const shortDdsEndpointDiscoveryOpt[] = "-MDED";
  ACE_TCHAR const ddsParticipantDiscoveryOpt[] = "-MiroDdsParticipantDiscovery";
  ACE_TCHAR const shortDdsParticipantDiscoveryOpt[] = "-MDPD";
  ACE_TCHAR const * const helpKey = "-MiroHelp";
  ACE_TCHAR const * const shortHelpKey = "-?";

  bool printHelp = false;
  ACE_TCHAR const * const ddsHelp =
    "Miro DdsSupport parameters:\n"
    "  -MDC  (-MiroDdsConfig) <file> of RTI DDS Qos (default: RAPID_QOS_PROFILES.xml)\n"
    "  -MDI  (-MiroDdsDomainId) <int> DDS domain id (default: 0)\n"
    "  -MDM  (-MiroDdsMonitor) enable RTI DDS monitor\n"
    "  -MDML (-MiroDdsMonitorLibrary) <library> for RTI Monitor\n" 
    "        (default: RtiMonitorQosLibrary)\n"
    "  -MDPN (-MiroDdsParticipantName) <name> of DDS participant (default: <application name>)\n"
    "  -MDDL (-MiroDdsDefaultLibrary) <name> of Qos library for RTI DDS\n"
    "        (default: RapidQosLibrary)\n"
    "  -MDDP (-MiroDdsDefaultProfile) <name> of Qos profile for RTI DDS\n"
    "        (default: RapidDefaultQos)\n"
    "  -MDED (-MiroDdsEndpointDiscovery) <name> of endpoint discovery file\n"
    "  -MDPD (-MiroDdsParticipantDiscovery) <name> of participant discovery file\n";

  ACE_TCHAR const rc_ok[] = "DDS_RETCODE_OK";
  ACE_TCHAR const rc_error[] = "DDS_RETCODE_ERROR";
  ACE_TCHAR const rc_unsupported[] = "DDS_RETCODE_UNSUPPORTED";
  ACE_TCHAR const rc_badParameter[] = "DDS_RETCODE_BAD_PARAMETER";
  ACE_TCHAR const rc_precondition[] = "DDS_RETCODE_PRECONDITION_NOT_MET";
  ACE_TCHAR const rc_resources[] = "DDS_RETCODE_OUT_OF_RESOURCES";
  ACE_TCHAR const rc_notEnabled[] = "DDS_RETCODE_NOT_ENABLED";
  ACE_TCHAR const rc_immutable[] = "DDS_RETCODE_IMMUTABLE_POLICY";
  ACE_TCHAR const rc_inconsistent[] = "DDS_RETCODE_INCONSISTENT_POLICY";
  ACE_TCHAR const rc_deleted[] = "DDS_RETCODE_ALREADY_DELETED";
  ACE_TCHAR const rc_timeout[] = "DDS_RETCODE_TIMEOUT";
  ACE_TCHAR const rc_noData[] = "DDS_RETCODE_NO_DATA";
  ACE_TCHAR const rc_illigalOp[] = "DDS_RETCODE_ILLEGAL_OPERATION";

  struct StateNamePair
  {
    unsigned int state;
    ACE_TCHAR const* name;
  };

  StateNamePair const sampleStates[] = {
    { DDS_READ_SAMPLE_STATE, "READ_SAMPLE_STATE" },
    { DDS_NOT_READ_SAMPLE_STATE, "NOT_READ_SAMPLE_STATE" }
  };
  unsigned int const numSampleStates = sizeof(sampleStates) / sizeof(StateNamePair const);

  StateNamePair const  viewStates[] = {
    { DDS_NEW_VIEW_STATE, "NEW_VIEW_STATE" },
    { DDS_NOT_NEW_VIEW_STATE, "NOT_NEW_VIEW_STATE" }
  };
  unsigned int const numViewStates = sizeof(viewStates) / sizeof(StateNamePair const);

  StateNamePair const instanceStates[] = {
    { DDS_ALIVE_INSTANCE_STATE, "ALIVE_INSTANCE_STATE" },
    { DDS_NOT_ALIVE_DISPOSED_INSTANCE_STATE, "NOT_ALIVE_DISPOSED_INSTANCE_STATE" },
    { DDS_NOT_ALIVE_NO_WRITERS_INSTANCE_STATE, "NOT_ALIVE_NO_WRITERS_INSTANCE_STATE" }
  };
  unsigned int const numInstanceStates = sizeof(instanceStates) / sizeof(StateNamePair const);

  string printBitMask(StateNamePair const * table, unsigned int max, unsigned int mask) 
  {
    stringstream ostr;
    ostr << "0x" << hex << mask 
         << " { ";
    int matches = 0;
    unsigned int bit = 1;
    for (unsigned int i = 0; i < max; ++i) {
      if (matches > 0)
        ostr << ", ";
      if ((bit & mask) == table[i].state) {
        ostr << table[i].name;
        ++matches;
      }
      bit <<= 1;
    }
    if (matches == 0) {
      ostr << "???";
    }

    ostr << " }";

    return ostr.str();
  }

  ACE_TCHAR const * rejectionReasons[] = {
    "NOT_REJECTED",
    "REJECTED_BY_INSTANCES_LIMIT",
    "REJECTED_BY_SAMPLES_LIMIT",
    "REJECTED_BY_SAMPLES_PER_INSTANCE_LIMIT",
    "REJECTED_BY_REMOTE_WRITERS_LIMIT",
    "REJECTED_BY_REMOTE_WRITERS_PER_INSTANCE_LIMIT",
    "REJECTED_BY_SAMPLES_PER_REMOTE_WRITER_LIMIT",

    "REJECTED_FOR_UNKNOWN_REASON"
  };
  int const numRejectionReasons = sizeof(rejectionReasons) / sizeof(ACE_TCHAR const *) - 1;

  ACE_TCHAR const * policyIds[] = {
    "INVALID_QOS_POLICY",
    "USERDATA_QOS_POLICY",
    "DURABILITY_QOS_POLICY",
    "PRESENTATION_QOS_POLICY",
    "DEADLINE_QOS_POLICY",
    "LATENCYBUDGET_QOS_POLICY",
    "OWNERSHIP_QOS_POLICY",
    "OWNERSHIPSTRENGTH_QOS_POLICY",
    "LIVELINESS_QOS_POLICY",
    "TIMEBASEDFILTER_QOS_POLICY",
    "PARTITION_QOS_POLICY",
    "RELIABILITY_QOS_POLICY",
    "DESTINATIONORDER_QOS_POLICY",
    "HISTORY_QOS_POLICY",
    "RESOURCELIMITS_QOS_POLICY",
    "ENTITYFACTORY_QOS_POLICY",
    "WRITERDATALIFECYCLE_QOS_POLICY",
    "READERDATALIFECYCLE_QOS_POLICY",
    "TOPICDATA_QOS_POLICY",
    "GROUPDATA_QOS_POLICY",
    "TRANSPORTPRIORITY_QOS_POLICY",
    "LIFESPAN_QOS_POLICY",
    "DURABILITYSERVICE_QOS_POLICY"
  };
  int const numPolicyIds = sizeof(policyIds) / sizeof(ACE_TCHAR const *);

  ACE_TCHAR const * extPolicyIds[] = {
    "WIREPROTOCOL_QOS_POLICY",
    "DISCOVERY_QOS_POLICY",
    "DATAREADERRESOURCELIMITS_QOS_POLICY",
    "DATAWRITERRESOURCELIMITS_QOS_POLICY",
    "DATAREADERPROTOCOL_QOS_POLICY",
    "DATAWRITERPROTOCOL_QOS_POLICY",
    "DOMAINPARTICIPANTRESOURCELIMITS_QOS_POLICY",
    "EVENT_QOS_POLICY",
    "DATABASE_QOS_POLICY",
    "RECEIVERPOOL_QOS_POLICY",
    "DISCOVERYCONFIG_QOS_POLICY",
    "EXCLUSIVEAREA_QOS_POLICY",
    "USEROBJECT_QOS_POLICY",
    "SYSTEMRESOURCELIMITS_QOS_POLICY",
    "TRANSPORTSELECTION_QOS_POLICY",
    "TRANSPORTUNICAST_QOS_POLICY",
    "TRANSPORTMULTICAST_QOS_POLICY",
    "TRANSPORTBUILTIN_QOS_POLICY",
    "TYPESUPPORT_QOS_POLICY",
    "PROPERTY_QOS_POLICY",
    "PUBLISHMODE_QOS_POLICY",
    "ASYNCHRONOUSPUBLISHER_QOS_POLICY",
    "ENTITYNAME_QOS_POLICY",
    "UNDEFINED",
    "SERVICE_QOS_POLICY",
    "BATCH_QOS_POLICY",
    "PROFILE_QOS_POLICY",
    "LOCATORFILTER_QOS_POLICY",
    "MULTICHANNEL_QOS_POLICY",
    "TRANSPORTENCAPSULATION_QOS_POLICY",
    "PUBLISHERPROTOCOL_QOS_POLICY",
    "SUBSCRIBERPROTOCOL_QOS_POLICY",
    "TOPICPROTOCOL_QOS_POLICY",
    "DOMAINPARTICIPANTPROTOCOL_QOS_POLICY"
  };
  int const numExtPolicyIds = sizeof(policyIds) / sizeof(ACE_TCHAR const *);

  typedef std::vector<kn::DdsNodeParameters> NodeVector;

  void
  substituteROBOT_NAME(kn::DdsEntitiesFactorySvcParameters * params)
  {
    {
      NodeVector::iterator first, last = params->publishers.end();
      for (first = params->publishers.begin(); first != last; ++first) {
        if (first->name == "<ROBOTNAME>") {
          first->name = Miro::RobotParameters::instance()->name.c_str();
        }
        if (first->partition == "<ROBOTNAME>") {
          first->partition = Miro::RobotParameters::instance()->name.c_str();
        }
      }
    }
    {
      NodeVector::iterator first, last = params->subscribers.end();
      for (first = params->subscribers.begin(); first != last; ++first) {
        if (first->name == "<ROBOTNAME>") {
          first->name = Miro::RobotParameters::instance()->name.c_str();
        }
        if (first->partition == "<ROBOTNAME>") {
          first->partition = Miro::RobotParameters::instance()->name.c_str();
        }
      }
    }
  }
}

std::ostream& operator << (std::ostream& ostr, DDS_RequestedDeadlineMissedStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
    // << ", last_instance_handle" << rhs.last_instance_handle
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_RequestedIncompatibleQosStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << ", last_policy_id=";
  if (rhs.last_policy_id < numPolicyIds)
    ostr << policyIds[rhs.last_policy_id];
  else if (rhs.last_policy_id - 1000 < numExtPolicyIds)
    ostr << extPolicyIds[rhs.last_policy_id - 1000];
  else 
    ostr << rhs.last_policy_id;
  ostr << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_SampleLostStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_SampleRejectedStatus const& rhs)
{
  int last_reason = std::min((int)rhs.last_reason, numRejectionReasons);

  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << ", last_reason=" << rejectionReasons[last_reason]
    // << ", last_instance_handle" << rhs.last_instance_handle
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_LivelinessChangedStatus const& rhs)
{
  ostr << "{ alive_count=" << rhs.alive_count
       << ", not_alive_count=" << rhs.not_alive_count
       << ", alive_count_change=" << rhs.alive_count_change
       << ", not_alive_count_change=" << rhs.not_alive_count_change
    // << ", last_publication_handle" << rhs.last_publication_handle
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_SubscriptionMatchedStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << ", current_count=" << rhs.current_count
       << ", current_count_peak=" << rhs.current_count_peak
       << ", current_count_change=" << rhs.current_count_change
    // << ", last_publication_handle=" << rhs.last_publication_handle
       << " }";

  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_SampleInfo const& rhs)
{
  ACE_Time_Value source_timestamp;
  source_timestamp.set((double)rhs.source_timestamp.sec + 
                       (double)rhs.source_timestamp.nanosec / 1000000000.);
  ACE_Time_Value reception_timestamp;
  reception_timestamp.set((double)rhs.reception_timestamp.sec + 
                          (double)rhs.reception_timestamp.nanosec / 1000000000.);

  ostr << "{  valid_data=" << ( rhs.valid_data != 0);
  if (rhs.valid_data != 0) {
    ostr << ", sample_state=" << printBitMask(sampleStates, numSampleStates, rhs.sample_state)
         << ", view_state=" << printBitMask(viewStates, numViewStates, rhs.view_state)
         << ", instance_state=" << printBitMask(instanceStates, numInstanceStates, rhs.instance_state)
         << ", source_timestamp=" << source_timestamp
         << ", reception_timestamp=" << reception_timestamp
         << ", disposed_generation_count=" << rhs.disposed_generation_count
         << ", no_writers_generation_count=" << rhs.no_writers_generation_count
         << ", sample_rank=" << rhs.sample_rank
         << ", current_count_peak=" << rhs.generation_rank
         << ", current_count_change=" << rhs.absolute_generation_rank;
  }
  else {
    ostr << ", instance_state=" << printBitMask(instanceStates, numInstanceStates, rhs.instance_state)
         << ", reception_timestamp=" << reception_timestamp;
  }
  ostr << " }";

  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_OfferedDeadlineMissedStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_LivelinessLostStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_OfferedIncompatibleQosStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << ", last_policy_id=";
  if (rhs.last_policy_id < numPolicyIds)
    ostr << policyIds[rhs.last_policy_id];
  else if (rhs.last_policy_id - 1000 < numExtPolicyIds)
    ostr << extPolicyIds[rhs.last_policy_id - 1000];
  else 
    ostr << rhs.last_policy_id;
  ostr << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_PublicationMatchedStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << ", current_count=" << rhs.current_count
       << ", current_count_peak=" << rhs.current_count_peak
       << ", current_count_change=" << rhs.current_count_change
    // << ", last_publication_handle=" << rhs.last_publication_handle
       << " }";
  return ostr;
}

namespace
{
  std::ostream& operator << (std::ostream& ostr, DDS_ReliableWriterCacheEventCount const& rhs)
  {
    ostr << "{ total_count=" << rhs.total_count
         << ", total_count_change=" << rhs.total_count_change
         << " }";
    return ostr;
  }
}

std::ostream& operator << (std::ostream& ostr, DDS_ReliableWriterCacheChangedStatus const& rhs)
{
  ostr << "{ empty_reliable_writer_cache=" << rhs.empty_reliable_writer_cache
       << ", full_reliable_writer_cache=" << rhs.full_reliable_writer_cache
       << ", low_watermark_reliable_writer_cache=" << rhs.low_watermark_reliable_writer_cache
       << ", high_watermark_reliable_writer_cache=" << rhs.high_watermark_reliable_writer_cache
       << ", unacknowledged_sample_count=" << rhs.unacknowledged_sample_count
       << ", unacknowledged_sample_count_peak=" << rhs.unacknowledged_sample_count_peak
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr, DDS_ReliableReaderActivityChangedStatus const& rhs)
{
  ostr << "{ active_count=" << rhs.active_count
       << ", inactive_count=" << rhs.inactive_count
       << ", active_count_change=" << rhs.active_count_change
       << ", inactive_count_change=" << rhs.inactive_count_change
       << " }";
  return ostr;
}

std::ostream& operator << (std::ostream& ostr,  DDS_InconsistentTopicStatus const& rhs)
{
  ostr << "{ total_count=" << rhs.total_count
       << ", total_count_change=" << rhs.total_count_change
       << " }";
  return ostr;
}

namespace kn
{
  using namespace std;


  ACE_TCHAR const *
  DdsSupport::getError(int rc) throw()
  {
    ACE_TCHAR const * text = "unknown error";
    switch (rc) {
      case DDS_RETCODE_OK:
        text = rc_ok;
        break;
      case DDS_RETCODE_ERROR:
        text = rc_error;
        break;
      case DDS_RETCODE_UNSUPPORTED:
        text = rc_unsupported;
        break;
      case DDS_RETCODE_BAD_PARAMETER:
        text = rc_badParameter;
        break;
      case DDS_RETCODE_PRECONDITION_NOT_MET:
        text = rc_precondition;
        break;
      case DDS_RETCODE_OUT_OF_RESOURCES:
        text = rc_resources;
        break;
      case DDS_RETCODE_NOT_ENABLED:
        text = rc_notEnabled;
        break;
      case DDS_RETCODE_IMMUTABLE_POLICY:
        text = rc_immutable;
        break;
      case DDS_RETCODE_INCONSISTENT_POLICY:
        text = rc_inconsistent;
        break;
      case DDS_RETCODE_ALREADY_DELETED:
        text = rc_deleted;
        break;
      case DDS_RETCODE_TIMEOUT:
        text = rc_timeout;
        break;
      case DDS_RETCODE_NO_DATA:
        text = rc_noData;
        break;
      case DDS_RETCODE_ILLEGAL_OPERATION:
        text = rc_illigalOp;
        break;
      default:
        break;
    }
    return text;
  }
  
  const char* 
  DdsSupport::initHelpString() {
    return ddsHelp;
  }

  void
  DdsSupport::init(int& argc, ACE_TCHAR * argv[])
  {
    static bool initialized = false;

    if (initialized)
      return;

    initialized = true;

    DdsEntitiesFactorySvcParameters * params =
      DdsEntitiesFactorySvcParameters::instance();

    Miro::ConfigDocument * config = Miro::Configuration::document();
    config->setSection("Robot");
    config->getParameters("kn::DdsEntitiesFactorySvcParameters", *params);

    substituteROBOT_NAME(params);
    
    // if participantName is empty, default to application name
    if (argc > 0) {
      for(int i = 0; i < params->participants.size(); i++) {
	if(params->participants[i].participantName.size() == 0) {
	  params->participants[i].participantName = argv[0];
	}
      }
    }

    bool configOverwrite = false;
    bool peersFileOverwrite = false;
    // override defaults from command line
    ACE_Arg_Shifter arg_shifter(argc, argv);
    while (arg_shifter.is_anything_left()) {
      const ACE_TCHAR *current_arg = arg_shifter.get_current();

      // Qos file
      if ((ACE_OS::strcasecmp(ddsConfigOpt, current_arg) == 0) ||
          (ACE_OS::strcasecmp(shortDdsConfigOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
	if (!configOverwrite) {
	  params->configFiles.clear();
	  configOverwrite = true;
	}
        if (arg_shifter.is_parameter_next()) {
          params->configFiles.push_back(arg_shifter.get_current());
          arg_shifter.consume_arg();
        }
	else {
	  MIRO_LOG(LL_NOTICE, "DdsSupport - Dds config option given w/o parameter, clearing config file set.");
	  params->configFiles.clear();
	}
      }
      // DomainId
      else if ((ACE_OS::strcasecmp(ddsDomainIdOpt, current_arg) == 0) ||
               (ACE_OS::strcasecmp(shortDdsDomainIdOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
        if (arg_shifter.is_parameter_next()) {
          if (params->participants.size() == 1) {
            params->participants[0].domainId = atoi(arg_shifter.get_current());
            arg_shifter.consume_arg();
          }
          else {
            MIRO_LOG(LL_ERROR, "DdsSupport - Ignored domainId specification from command line.");
            MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
          }
        }
      }
      // DiscoveryPeers
      else  if ((ACE_OS::strcasecmp(ddsDiscoveryPeersOpt, current_arg) == 0) ||
                (ACE_OS::strcasecmp(shortDdsDiscoveryPeersOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
	if (!peersFileOverwrite) {
          for (size_t i = 0; i < params->participants.size(); ++i) {
            params->participants[i].discoveryPeersFiles.clear();
          }
	  peersFileOverwrite = true;
	}
        if (arg_shifter.is_parameter_next()) {
          for (size_t i = 0; i < params->participants.size(); ++i) {
            params->participants[i].discoveryPeersFiles.push_back(arg_shifter.get_current());
          }
          arg_shifter.consume_arg();
        }
	else {
	  MIRO_LOG(LL_NOTICE, "DdsSupport - Dds discovery peers file option given w/o parameter, clearing discovery peers files set.");
         for (size_t i = 0; i < params->participants.size(); ++i) {
            params->participants[i].discoveryPeersFiles.clear();
         }
	}
      }
      // Monitor
      else if ((ACE_OS::strcasecmp(ddsMonitorOpt, current_arg) == 0) ||
                  (ACE_OS::strcasecmp(shortDdsMonitorOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
        if (params->participants.size() == 1) {
          params->participants[0].enableMonitor = true;
        }
        else {
          MIRO_LOG(LL_ERROR, "DdsSupport - Ignored monitorEnable from command line.");
          MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
        }
      }
      else if ((ACE_OS::strcasecmp(ddsMonitorLibraryOpt, current_arg) == 0) ||
                  (ACE_OS::strcasecmp(shortDdsMonitorLibraryOpt, current_arg) == 0)) {
        if (arg_shifter.is_parameter_next()) {
          arg_shifter.consume_arg();
          if (params->participants.size() == 1) {
            params->participants[0].enableMonitor = true;
            params->participants[0].monitorLibrary = arg_shifter.get_current();
          }
          else {
            MIRO_LOG(LL_ERROR, "DdsSupport - Ignored monitorLibrary specification from command line.");
            MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
          }
          arg_shifter.consume_arg();
        }
      }
      // Participant name
      else if ((ACE_OS::strcasecmp(ddsParticipantNameOpt, current_arg) == 0) ||
                  (ACE_OS::strcasecmp(shortDdsParticipantNameOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
        if (arg_shifter.is_parameter_next()) {
          if (params->participants.size() == 1) {
            params->participants[0].participantName = arg_shifter.get_current();
            arg_shifter.consume_arg();
          }
          else {
            MIRO_LOG(LL_ERROR, "DdsSupport - Ignored participant name specification from command line.");
            MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
          }
        }
      }
      // Library & Profile
      else if ((ACE_OS::strcasecmp(ddsDefaultLibraryOpt, current_arg) == 0) ||
                  (ACE_OS::strcasecmp(shortDdsDefaultLibraryOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
        if (params->participants.size() == 1) {
          params->defaultLibrary = arg_shifter.get_current();
          arg_shifter.consume_arg();
        }
        else {
          MIRO_LOG(LL_ERROR, "DdsSupport - Ignored default library from command line.");
          MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
        }
      }
      else if ((ACE_OS::strcasecmp(ddsDefaultProfileOpt, current_arg) == 0) ||
                  (ACE_OS::strcasecmp(shortDdsDefaultProfileOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
        if (params->participants.size() == 1) {
          params->defaultProfile = arg_shifter.get_current();
          arg_shifter.consume_arg();
        }
        else {
          MIRO_LOG(LL_ERROR, "DdsSupport - Ignored default profile from command line.");
          MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
        }
      }
      // Limited Bandwidth Plugins
      else if ((ACE_OS::strcasecmp(ddsEndpointDiscoveryOpt, current_arg) == 0) ||
                  (ACE_OS::strcasecmp(shortDdsEndpointDiscoveryOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
        if (arg_shifter.is_parameter_next()) {
          if (params->participants.size() == 1) {
            params->participants[0].lbedFile = arg_shifter.get_current();
            arg_shifter.consume_arg();
          }
          else {
            MIRO_LOG(LL_ERROR, "DdsSupport - Ignored endpoint specification from command line.");
            MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
          }
        }
      }
      else if ((ACE_OS::strcasecmp(ddsParticipantDiscoveryOpt, current_arg) == 0) ||
                  (ACE_OS::strcasecmp(shortDdsParticipantDiscoveryOpt, current_arg) == 0)) {
        arg_shifter.consume_arg();
        if (arg_shifter.is_parameter_next()) {
          if (params->participants.size() == 1) {
            params->participants[0].lbpdFile = arg_shifter.get_current();
            arg_shifter.consume_arg();
          }
          else {
            MIRO_LOG(LL_ERROR, "DdsSupport - Ignored endpoint specification from command line.");
            MIRO_LOG(LL_NOTICE, "DdsSupport - Dds configuration holds multiple domain participants.");
          }
        }
      }
      else if (ACE_OS::strcasecmp(current_arg, helpKey) == 0 ||
               ACE_OS::strcasecmp(current_arg, shortHelpKey) == 0) {
        arg_shifter.ignore_arg();

        printHelp = true;                 
      }
      else
        arg_shifter.ignore_arg();
    }
   
#ifdef ASDF 
   /* Uncomment this to turn on additional logging */
    NDDSConfigLogger::get_instance()->
      set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API,
                                NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);

    // Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
        set_verbosity(NDDS_CONFIG_LOG_VERBOSITY_WARNING);
#endif
    if (printHelp) {
      cerr << ddsHelp << endl;;
    }
  }

  void
  DdsSupport::printReaderStatus(std::ostream& ostr,
                                 DDS::DataReader & reader, ACE_UINT32 mask)
  {
    DDS::ReturnCode_t rc = DDS_RETCODE_OK;

    if (mask & DDS_REQUESTED_DEADLINE_MISSED_STATUS) {
      ostr << "DDS Reader Status: Requested deadline missed." << endl;
      DDS::RequestedDeadlineMissedStatus status;
      if ((rc = reader.get_requested_deadline_missed_status(status)) == DDS_RETCODE_OK) {
        ostr << status << endl;
      }
    }
    if (mask & DDS_REQUESTED_INCOMPATIBLE_QOS_STATUS) {
      ostr << "DDS Reader Status: Incompatible Qos." << endl;
      DDS::RequestedIncompatibleQosStatus status;
      if ((rc = reader.get_requested_incompatible_qos_status(status)) == DDS_RETCODE_OK) {
        ostr << status << endl;
      }
    }
    if (mask & DDS_SAMPLE_LOST_STATUS) {
      ostr << "DDS Reader Status: Sample lost." << endl;
      DDS::SampleLostStatus status;
      if ((rc = reader.get_sample_lost_status(status)) == DDS_RETCODE_OK) {
        ostr << status << endl;
      }
    }
    if (mask & DDS_SAMPLE_REJECTED_STATUS) {
      ostr << "DDS Reader Status: Sample rejected." << endl;
      DDS::SampleRejectedStatus status;
      if ((rc = reader.get_sample_rejected_status(status)) == DDS_RETCODE_OK) {
        ostr << status << endl;
      }
    }
    if (mask & DDS_LIVELINESS_CHANGED_STATUS) {
      ostr << "DDS Reader Status: Liveliness changed." << endl;
      DDS::LivelinessChangedStatus status;
      if ((rc = reader.get_liveliness_changed_status(status)) == DDS_RETCODE_OK) {
        ostr << status << endl;
      }
    }
    if (mask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
      ostr << "DDS Reader Status: Subscription matched." << endl;
      DDS::SubscriptionMatchedStatus status;
      if ((rc = reader.get_subscription_matched_status(status)) == DDS_RETCODE_OK) {
        ostr << status << endl;
      }
    }

    if (rc != DDS_RETCODE_OK) {
      MIRO_LOG_OSTR(LL_ERROR, "Failed to obtain reader status: " << getError(rc));
    }
  }

  DDS_Long
  DdsSupport::maxNumInstances(DDSDataWriter& writer)
  {
    DDS_DataWriterQos qos;
    writer.get_qos(qos);

    return qos.resource_limits.max_instances;
  }

  void
  DdsSupport::DataWriterListener::on_offered_deadline_missed(DDSDataWriter *writer, DDS_OfferedDeadlineMissedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_WARNING, "DDS Writer " << writer->get_topic()->get_name() << " OfferedDeadlineMissed: " << status);
  };

  void 
  DdsSupport::DataWriterListener::on_liveliness_lost(DDSDataWriter *writer, DDS_LivelinessLostStatus const&status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Writer " << writer->get_topic()->get_name() << " LivelinessLost: " << status);
  };

  void 
  DdsSupport::DataWriterListener::on_offered_incompatible_qos (DDSDataWriter *writer, DDS_OfferedIncompatibleQosStatus const& status)
  {
    MIRO_LOG_OSTR(LL_WARNING, "DDS Writer " << writer->get_topic()->get_name() << " OfferedIncompatibleQos: " << status);
  };

  void
  DdsSupport::DataWriterListener::on_publication_matched (DDSDataWriter *writer, DDS_PublicationMatchedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Writer " << writer->get_topic()->get_name() << " PublicationMatched: " << status);
  };

  void 
  DdsSupport::DataWriterListener::on_reliable_writer_cache_changed (DDSDataWriter *writer, DDS_ReliableWriterCacheChangedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Writer " << writer->get_topic()->get_name() << " ReliableWriterCacheChanged: " << status);
  };

  void 
  DdsSupport::DataWriterListener::on_reliable_reader_activity_changed (DDSDataWriter *writer, DDS_ReliableReaderActivityChangedStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Writer " << writer->get_topic()->get_name() << " ReliableReaderActivityChanged: " << status);
  };

  void 
  DdsSupport::DataWriterListener::on_instance_replaced (DDSDataWriter *writer, DDS_InstanceHandle_t const& handle)
  {
    DDSTopic * topic = writer->get_topic();
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Writer " << topic->get_name() << " InstanceReplaced");
  };

  ACE_Recursive_Thread_Mutex DdsSupport::m_topicMutex;
  Miro::Singleton<DdsSupport::TopicListener> DdsSupport::TopicListener::instance;
  
  void
  DdsSupport::TopicListener::on_inconsistent_topic(DDSTopic *topic, DDS_InconsistentTopicStatus const& status)
  {
    MIRO_LOG_OSTR(LL_NOTICE, "DDS Writer " << topic->get_name() << " - " <<  topic->get_type_name() << " InconsistentTopic: " << status);
  }
}
