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
#include "FileQueue.h"
#include "RaftParameters.h"
#include "DataPriorityController.h"

#include "knFetchPool/FetchPoolParameters.h"
#include "knFetchPool/CurlFetcher.h"

#include "rapidDds/RapidConstants.h"
#include "rapidDds/FileQueueConfig.h"
#include "rapidDds/FileQueueConfigSupport.h"
#include "rapidDds/FileQueueSample.h"
#include "rapidDds/FileQueueSampleSupport.h"
#include "rapidDds/FileQueueState.h"
#include "rapidDds/FileQueueStateSupport.h"
#include "rapidDds/FileQueueEntryState.h"
#include "rapidDds/FileQueueEntryStateSupport.h"
#include "rapidDds/FileAnnounce.h"
#include "rapidDds/FileAnnounceSupport.h"
#include "rapidUtil/RapidHelper.h"

#include "knDds/KnDdsParameters.h"
#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsTypedConsumer.h"
#include "miro/Log.h"
#include "miro/TimeHelper.h"

#include <ndds/ndds_cpp.h>
#include <ndds/ndds_namespace_cpp.h>

#include <ace/Time_Value.h>
#include <ace/OS_NS_sys_stat.h>
#include <ace/OS_NS_sys_mman.h>
#include <ace/OS_NS_fcntl.h>

#include <utility>
#include <algorithm>
#include <sstream>

#include "knRapidConfig.h"

namespace
{
  char const * fileTransferStatus[] = {
    "Q", // Queued for pre-fetching
    "F", // Fetching == prefetching
    "P", // Pending/queued
    "A", // Active
    "S", // Suspended == paused
    "D",
    "C",
    "E"
  };
}

namespace kn
{
  using namespace std;

  class FileEntryCallback
    : public fetcher::Callback
  {
  public:
    FileEntryCallback(FileQueue::FileEntry *fileEntry)
      : m_entry(fileEntry)
    { }

    virtual void success() {
      MIRO_LOG_OSTR(LL_NOTICE, "FileEntryCallback::success: Success.");
      m_entry->prefetchingComplete();
    }

    virtual bool error() {
      m_entry->setStatus(rapid::RAPID_FILE_ERROR);
      m_entry->setStatusChanged(true);
      MIRO_LOG_OSTR(LL_ERROR, "FileEntryCallback::error: Error fetching file");
      return false;
    }

  private:
    FileQueue::FileEntry* m_entry;
  };

  FileQueue::FileEntry::~FileEntry() throw()
  {
    // resource cleanup
  }

  int
  FileQueue::FileEntry::totalChunks() const throw()
  {
    const int SIZE_128K = 1024; // * 128;
    int numPackets = m_length / SIZE_128K;

    if (m_length % SIZE_128K)
      ++numPackets;

    return numPackets;
  }

  int
  FileQueue::FileEntry::getNextPacket(rapid::FileQueueSample& sample)
  {
    const int SIZE_128K = 1024; // * 128;
    int numPackets = m_length / SIZE_128K;
    int remainder = m_length % SIZE_128K;

    if (remainder != 0)
      ++numPackets;

    if (m_transferedChunks >= numPackets)
      return 1;

    if (!mapFile()) {
      m_status = rapid::RAPID_FILE_ERROR;
      return -1;
    }

    if (m_transferedChunks == 0)
      m_status = rapid::RAPID_FILE_ACTIVE;

    // update header
    rapid::RapidHelper::updateHeader(sample.hdr);

    strncpy(sample.fileUuid, m_fileUuid.c_str(), 63);
    sample.fileUuid[63] = 0;
    sample.chunkId = m_transferedChunks;
    sample.numChunks = numPackets;
    sample.chunkData.length(((m_transferedChunks + 1) < numPackets || remainder == 0)? SIZE_128K : remainder);

    // copy the data
    for (int i = 0; i < sample.chunkData.length(); ++i) {
      sample.chunkData[i] = m_content[(m_transferedChunks * SIZE_128K) + i];
    }

    ++m_transferedChunks;

    if (m_transferedChunks == numPackets) {
      m_status = rapid::RAPID_FILE_DONE;
      unmapFile();
    }

    return 0;
  }

  bool
  FileQueue::FileEntry::isFileUri(std::string const& uri) {
    // pull out the scheme
    std::string scheme = uriScheme(uri);

    if (scheme != "file")
      return false;

    return true;
  }

  bool
  FileQueue::FileEntry::isUriSupported(std::string const& uri) {
    // pull out the scheme
    std::string scheme = uriScheme(uri);

    // We are dumb
    if (scheme == "file")
      return true;

    return false;
  }

  std::string
  FileQueue::FileEntry::uriScheme(std::string const& uri) {
    // according to rfc3986, the scheme *must* be separated from the
    // rest of the URI by a colon.
    string::size_type pos = uri.find(':');
    if (pos == std::string::npos) {
      // handle the case that we are actually just a file path...
      if (uri[0] == '/')
        return "file";
      return "";
    }

    // according to rfc3986, the scehme should be in lowercase, but
    // implementations should accept uppercase, and convert accordingly.
    // therefore, make sure it's in lowercase.
    std::string scheme = uri.substr(0, pos);
    std::transform(scheme.begin(), scheme.end(), scheme.begin(), ACE_OS::ace_tolower);

    return scheme;
  }

  std::string
  FileQueue::FileEntry::uriPath(std::string const& uri) {
    // at this point I'm assuming we are dealing with a file uri with an
    // absolute path. hence file://[path]
    string::size_type pos = uri.find("://");
    if (pos == std::string::npos) {
      if (uri[0] == '/')
        return uri;
      return "";
    }

    // return everything after "://"
    return uri.substr(pos + 3);
  }

  bool
  FileQueue::FileEntry::mapFile() {
    // don't map an already mapped file
    if(m_content > 0) return true;

    std::string path = m_localPath;
    if (path == "") return false;

    ACE_stat stat; int retval;
    if ((retval = ACE_OS::stat(path.c_str(), &stat)) < 0) {
      MIRO_LOG_OSTR(LL_ERROR, "FileQueue::FileEntry::mapFile: Error stating file: " << retval);
      return false;
    }

    // sanity check
    if (stat.st_size < m_length) {
      MIRO_LOG_OSTR(LL_ERROR,
                    "FileQueue::FileEntry::mapFile: file size is less than required length");
      return false;
    }

    // open the file
    ACE_HANDLE fd = ACE_OS::open(path.c_str(), O_RDONLY | O_BINARY);
    if (fd < 0) {
      MIRO_LOG_OSTR(LL_ERROR, "FileQueue::FileEntry::mapFile: Error opening file: " << fd);
      return false;
    }

    // map the file
    m_content = (unsigned char *) ACE_OS::mmap(0, m_length, PROT_READ, MAP_SHARED, fd, 0);
    if (m_content < 0) {
      MIRO_LOG_OSTR(LL_ERROR, "FileQueue::FileEntry::mapFile: Error mapping file: " << m_content);
      return false;
    }

    // close the file
    ACE_OS::close(fd);

    return true;
  }

  bool
  FileQueue::FileEntry::unmapFile() {
    if (m_content <= 0) return true;

    int retval = 0;
    if((retval = ACE_OS::munmap(m_content, m_length)) < 0) {
      MIRO_LOG_OSTR(LL_ERROR, "FileQueue::FileEntry::unmapFile: Error unmapping file: " << m_content);
      return false;
    }

    return true;
  }

  bool
  FileQueue::FileEntry::isLocal() {
    if (isFileUri(m_uri))
      return true;

    // Shortcut to cached prefetched files.
    if (!m_prefetched) {
      std::string path = m_fetchPool->getLocalPath(m_fileUuid);
      ACE_stat stat;
      int retval = 0;
      if ((retval = ACE_OS::stat(path.c_str(), &stat)) < 0) {
        MIRO_LOG_OSTR(LL_ERROR, "FileQueue::FileEntry::islocal: error stating file: " << path << " (" << retval << ")");
        return m_prefetched;
      }

      // Already been prefetched
      if (stat.st_size == m_length) {
        m_localPath = path;
        m_prefetched = true;
      } else {
        MIRO_LOG_OSTR(LL_ERROR, "FileQueue::FileEntry::islocal: file size " << m_length << " != " << stat.st_size);
      }
    }

    return m_prefetched;
  }

  bool
  FileQueue::FileEntry::ensureExists() {
    if (isLocal()) {
      ACE_stat stat;
      if (ACE_OS::stat(m_localPath.c_str(), &stat) < 0) {
        return false;
      }

      return true;
    }

    return false;
  }

  bool
  FileQueue::FileEntry::startPrefetching() {
    if (m_prefetched) {
      m_status = rapid::RAPID_FILE_PENDING;
      return true;
    }

    m_localPath = m_fetchPool->getLocalPath(m_fileUuid);

    FileEntryCallback cb(this);
    fetcher::CurlPool::QueueResult retval = m_fetchPool->queue(m_uri, m_localPath, cb);
    if (retval == fetcher::CurlPool::QUEUE_SUCCESS) {
      m_status = rapid::RAPID_FILE_PREFETCHING;
    }

    return retval == fetcher::CurlPool::QUEUE_SUCCESS;
  }

  bool
  FileQueue::FileEntry::cancelPrefetching() {
    return false;
  }

  void
  FileQueue::FileEntry::prefetchingComplete() {
    m_status = rapid::RAPID_FILE_PENDING;
    m_statusChanged = true;
    m_prefetched = true;
  }

  FileQueue::FileQueue(FileQueueParameters const * params) :
    m_params(params),
    m_fetchPool(new fetcher::CurlPool(params->fetchPool)), // setup prefetcher pool
    m_connected(false),
    m_channels(params->channels.size()),
    m_channelTokenIndex(0),
    m_fileQueueConfigPublisher(new FileQueueConfigPublisher(rapid::FILEQUEUE_CONFIG_TOPIC,
                                                            "",
                                                            "RapidFileQueueConfigProfile")),
    m_fileQueueStatePublisher(new FileQueueStatePublisher(rapid::FILEQUEUE_STATE_TOPIC,
                                                          "",
                                                          "RapidFileQueueStateProfile")),
    m_fileQueueSamplePublisher(new FileQueueSamplePublisher(rapid::FILEQUEUE_SAMPLE_TOPIC,
                  "",
                  "RapidFileQueueSampleProfile")),
    m_fileQueueEntryStatePublisher(new FileQueueEntryStatePublisher(rapid::FILEQUEUEENTRY_STATE_TOPIC,
                                                                    "",
                                                                    "RapidFileQueueEntryStateProfile")),
    m_fileAnnounceSubscriber(new FileAnnounceSubscriber(rapid::FILEANNOUNCE_TOPIC,
                                                        "",
                                                        "RapidFileAnnounceProfile")),
    m_fileAnnouncePublisher(params->fileAnnounceRepeater?
                            new FileAnnouncePublisher(rapid::FILEANNOUNCE_TOPIC,
                                                      "",
                                                      "RaftFileAnnounceRepeaterProfile") :
                            NULL),
    m_dataPriorityController(new DataPriorityController((*this), params))
  {
    // calculate file-queue-sample qos async, reliable writer parameters

    // configure channels
    unsigned int tokens = 0;
    for (unsigned int i = 0; i < m_channels.size(); ++i) {
      m_channels[i].active = m_params->channels[i].startActive;
      tokens += m_params->channels[i].numTokens;
    }

    // calculate channelTokenList
    {
      m_channelTokenList.reserve(tokens);
      for (unsigned int i = 0; i < m_params->channels.size(); ++i) {
        assert( m_params->channels[i].numTokens > 0);
        double spreading =
          (double)m_channelTokenList.size() /  (double)m_params->channels[i].numTokens;
        for (unsigned int j = 0; j <  m_params->channels[i].numTokens; ++j) {
          vector<unsigned int>::iterator first = m_channelTokenList.begin();
          advance(first, j + (int)nearbyint(spreading * (j + 1)));
          m_channelTokenList.insert(first, i);
        }
      }
    }

    {
      vector<unsigned int>::const_iterator first, last = m_channelTokenList.end();
      for (first = m_channelTokenList.begin(); first != last; ++first) {
        cerr << *first;
      }
      cerr << endl;
    }

    // publish file queue config
    rapid::FileQueueConfig& config = m_fileQueueConfigPublisher->event();
    rapid::RapidHelper::initHeader(config.hdr);

    config.channels.length(m_channels.size());
    for (unsigned int i = 0; i < m_channels.size(); ++i) {
      strncpy(config.channels[i].name, m_params->channels[i].name.c_str(), 32);
      config.channels[i].name[31] = 0;
      config.channels[i].numTokens = m_params->channels[i].numTokens;
    }
    m_fileQueueConfigPublisher->sendEvent();

    // initialize the other headers
    rapid::RapidHelper::initHeader(m_fileQueueStatePublisher->event().hdr);
    sendFileQueueState();

    rapid::RapidHelper::initHeader(m_fileQueueEntryStatePublisher->event().hdr);
    rapid::RapidHelper::initHeader(m_fileQueueSamplePublisher->event().hdr);
    if (m_fileAnnouncePublisher != NULL) {
      rapid::RapidHelper::initHeader(m_fileAnnouncePublisher->event().hdr);
    }

    // initialize flow-controller
    m_bandwidth = params->bandwidth;
    setFlowControllerThroughput();
  }

  FileQueue::~FileQueue() throw()
  {
    delete m_dataPriorityController;

    // delete all readers/writers
    delete m_fileAnnouncePublisher;
    delete m_fileAnnounceSubscriber;
    delete m_fileQueueEntryStatePublisher;
    delete m_fileQueueSamplePublisher;
    delete m_fileQueueStatePublisher;
    delete m_fileQueueConfigPublisher;

    // delete all FileEntry-s
    for (unsigned int i = 0; i < m_channels.size(); ++i) {
      ChannelPQueue::const_iterator first, last = m_channels[i].queue.end();
      for (first = m_channels[i].queue.begin(); first != last; ++first) {
        delete first->second;
      }
    }

    // delete fetcher pool
    delete m_fetchPool;
  }

  //-----------------------------------------------
  // file queue interface
  int
  FileQueue::putFile(std::string const& fileUuid, ACE_INT16 channel, float priority)
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    if (channel < 0 ||
        (int)m_channels.size() <= channel)
      return -1;

    FileAnnounceMap::const_iterator i = m_fileAnnounceMap.find(fileUuid);
    if (i == m_fileAnnounceMap.end())
      return -2;

    FileEntry * entry = NULL;
    for (unsigned int i = 0; i < m_channels.size(); ++i) {
      ChannelPQueue::iterator first, last = m_channels[i].queue.end();
      for (first = m_channels[i].queue.begin(); first != last; ++first) {
        if (first->second->fileUuid() == fileUuid) {
          entry = first->second;
          m_channels[i].queue.erase(first);
          entry->setChannelId(channel);
          break;
        }
      }
    }

    if (entry == NULL) {
      // make sure this is a supported uri
      std::string scheme = FileEntry::uriScheme(i->second.uri);

      if (scheme != "file" && !m_fetchPool->schemeSupported(scheme))
      {
        return -3;
      }

      entry = new FileEntry(channel, fileUuid, i->second.uri, i->second.length, m_fetchPool);

      if (entry->isLocal()) {
        // make sure the file exists
        if (!entry->ensureExists()) {
          delete entry;
          return -4;
        }

        if (checkFileSent(fileUuid)) {
          return 0;
        }
      }
    }

    FilePriority p(priority, ACE_OS::gettimeofday());
    pair<ChannelPQueue::iterator, bool> e =
      m_channels[channel].queue.insert(make_pair(p, entry));

    // update/send file queue entry state
    sendFileQueueEntryState(e.first);
    sendFileQueueState();

    return 0;
  }

  int
  FileQueue::putMatching(std::string const& key, std::string const& value, ACE_INT16 channel, float priority)
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    int retval;

    FileAnnounceMap::iterator announceItr = m_fileAnnounceMap.begin();
    for (; announceItr != m_fileAnnounceMap.end(); ++announceItr) {
      MetadataMap::iterator metaItr = announceItr->second.metaData.find(key);
      if (metaItr != announceItr->second.metaData.end()) {
        if (metaItr->second == value) {
          retval = putFile(announceItr->first, channel, priority);
          if (retval != 0)
            return retval;
        }
      }
    }

    return 0;
  }

  int
  FileQueue::removeFile(std::string const& fileUuid)
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    int rc = -1;

    for (unsigned int channel = 0; channel < m_channels.size(); ++channel) {
      ChannelPQueue::iterator first, last = m_channels[channel].queue.end();
      for (first = m_channels[channel].queue.begin(); first != last; ++first) {
        if (first->second->fileUuid() == fileUuid) {
          // update/send file queue entry state
          first->second->setStatus(rapid::RAPID_FILE_CANCELED);
          sendFileQueueEntryState(first);

          delete first->second;
          m_channels[channel].queue.erase(first);

          // update/send file queue entry state
          sendFileQueueState();

          rc = 0;
          break;
        }
      }
    }

    return rc;
  }

  int
  FileQueue::pause(ACE_INT16 channel)
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    if (channel < -1 ||
        (int)m_channels.size() <= channel)
      return -1;

    // pause all channels
    if (channel == -1) {
      ChannelVector::iterator first, last = m_channels.end();
      for (first = m_channels.begin(); first != last; ++first) {
        first->active = false;
      }
    }
    // pause single channel
    else {
      m_channels[channel].active = false;
    }

    if (!anyChannelActive()) {
      setFlowControllerThroughput();
    }
    sendFileQueueState();
    return 0;
  }

  int
  FileQueue::resume(ACE_INT16 channel)
  {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    bool const alreadyActive = anyChannelActive();

    if (channel < -1 ||
        (int)m_channels.size() <= channel)
      return -1;

    // resume all channels
    if (channel == -1) {
      ChannelVector::iterator first, last = m_channels.end();
      for (first = m_channels.begin(); first != last; ++first) {
        first->active = true;
      }
    }
    // resume single channel
    else {
      m_channels[channel].active = true;
    }

    if (!alreadyActive && anyChannelActive()) {
      setFlowControllerThroughput();
    }
    sendFileQueueState();
    return 0;
  }

  int
  FileQueue::setBandwidth(ACE_INT32 bandwidth, ACE_INT32 prefetchBandwidth)
  {
    m_bandwidth = bandwidth;
    setFlowControllerThroughput();
    m_fetchPool->setBandwidth(prefetchBandwidth);

    sendFileQueueState();

    return 0;
  }


  void
  FileQueue::setFlowControllerThroughput()
  {
    DDS::DataWriter& writer = m_fileQueueSamplePublisher->dataWriter();
    DDS::DataWriterQos qos;
    //    DDS_DataWriterQosTypeSupport::init(&qos);
    writer.get_qos(qos);

    // no flowcontroller not further processing
    if (qos.publish_mode.flow_controller_name == NULL ||
        strlen(qos.publish_mode.flow_controller_name) == 0) {
      MIRO_LOG(LL_WARNING, "RAFT FileQueue: No flow controller in use. No bandwidth control.");
      return;
    }

    DDS::Publisher * publisher = writer.get_publisher();
    DDS::DomainParticipant * participant = publisher->get_participant();
    DDS::FlowController * fc = participant->lookup_flowcontroller(qos.publish_mode.flow_controller_name);


    DDS::FlowControllerProperty_t fcProperty;
    DDS::ReturnCode_t rc = fc->get_property(fcProperty);
    if (rc != DDS_RETCODE_OK) {
      MIRO_LOG_OSTR(LL_ERROR, "Get flowcontroller property: " << kn::DdsSupport::getError(rc));
      return;
    }


    if (anyChannelActive()) {

      fcProperty.token_bucket.bytes_per_token = 5000;
      fcProperty.token_bucket.tokens_added_per_period = 2;

      // set the update-period accordingly
      double bytesPerPeriod =
        fcProperty.token_bucket.bytes_per_token * fcProperty.token_bucket.tokens_added_per_period;

      // bandwidth/s == bytesPerPeriod / period (s)
      double period = bytesPerPeriod / m_bandwidth;

      fcProperty.token_bucket.period.sec = (int) floor(period);
      fcProperty.token_bucket.period.nanosec = (int)((period - floor(period)) * 1000000000.);

    }
    else {
      // this is not really stopping the flow
      // but just configuring for a rather low bandwdith 100 bytes/sec
      fcProperty.token_bucket.bytes_per_token = 1024;
      fcProperty.token_bucket.tokens_added_per_period = 1;
      // we can't set this two high, as the next change will
      // not be committed before the period expires
      fcProperty.token_bucket.period.sec = 10; // 3600 * 24; // one drop every day
      fcProperty.token_bucket.period.nanosec = 0;
    }

    rc = fc->set_property(fcProperty);
    if (rc != DDS_RETCODE_OK) {
      MIRO_LOG_OSTR(LL_ERROR, "Set flow-controller property: " << kn::DdsSupport::getError(rc));
      return;
    }

    // make changes take effect immediately
    // This seems not to work!
    //     rc = fc->trigger_flow();
    //     if (rc != DDS_RETCODE_OK) {
    //       MIRO_LOG_OSTR(LL_ERROR, "Trigger flow-controller: " << kn::DdsSupport::getError(rc));
    //     }
  }

  void FileQueue::markFileSent(std::string uuid) {
    string state_path = m_params->stateDirectory + std::string("/") + uuid;
    ACE_HANDLE fd = ACE_OS::open(state_path.c_str(), O_WRONLY | O_CREAT);
    if (fd < 0) {
      MIRO_LOG_OSTR(LL_ERROR, "FileQueue::markFileSent: Error opening file: " << fd);
      return;
    }

    if(ACE_OS::write(fd, "sent\n", 5) < 0) {
      MIRO_LOG_OSTR(LL_ERROR, "FileQueue::markFileSent: Error writing.");
      return;
    }

    ACE_OS::close(fd);
    return;
  }

  bool FileQueue::checkFileSent(std::string uuid) {
    // see if we sent it before
    string state_path = m_params->stateDirectory + std::string("/") + uuid;
    ACE_stat stat;
    if (ACE_OS::stat(state_path.c_str(), &stat) >= 0) {
      MIRO_LOG_OSTR(LL_DEBUG, "FileQueue::putFile: not queueing " << uuid << ": already sent");
      return true;
    }

    return false;
  }

  //-----------------------------------------------
  // ace task base interface
  int
  FileQueue::svc()
  {
    rapid::FileQueueSample& sample = m_fileQueueSamplePublisher->event();
    FileQueueSamplePublisher::DataWriter& dataWriter = m_fileQueueSamplePublisher->dataWriter();
    DDS::DataWriterQos qos;
    dataWriter.get_qos(qos);

    rapid::RapidHelper::initHeader(sample.hdr);

    MIRO_LOG(LL_NOTICE, "Entering (detached) file-queue loop.");
    ACE_Thread_Manager * mgr = this->thr_mgr();

    ACE_Time_Value tv(0, 100000);

    rapid::FileAnnounce announceSample;
    rapid::FileAnnounceTypeSupport::initialize_data(&announceSample);
    DDS::SampleInfo announceInfo;

    // while thread not canceled
    while (!mgr->testcancel(mgr->thr_self())) {

      // check to see if any file announce topics are available
      int retval;
      while ((retval = m_fileAnnounceSubscriber->dataReader().take_next_sample(announceSample, announceInfo)) == DDS_RETCODE_OK) {
        MIRO_LOG_OSTR(LL_NOTICE, "received file announced: " << sample.fileUuid);

        FileQueue::MetadataMap metaData;
        for (DDS_Long i = 0; i < announceSample.metaData.length(); ++i) {
          rapid::KeyTypeValueTriple & triplet = announceSample.metaData[i];
          
          stringstream value;
          switch (triplet.value._d) {
          case rapid::RAPID_STRING:
            value << triplet.value._u.s;
            break;
          case rapid::RAPID_DOUBLE:
            value << triplet.value._u.d;
            break;
          case rapid::RAPID_FLOAT:
            value << triplet.value._u.f;
            break;
          case rapid::RAPID_INT:
            value << triplet.value._u.i;
            break;
          case rapid::RAPID_BOOL:
            value << triplet.value._u.b;
            break;
          case rapid::RAPID_VEC3d:
          case rapid::RAPID_MAT33f:
            value << "FileQueue: Unsupported meta-data type for field: " << triplet.key;
            MIRO_LOG(LL_ERROR, value.str().c_str());
            break;
          case rapid::RAPID_LONGLONG:
            value << triplet.value._u.ll;
            break;
          }
          metaData.insert(make_pair(string(triplet.key), value.str()));
        }
        // add to list
        bool original = addFileRefEntry(string(announceSample.fileUuid),
                                        string(announceSample.fileLocator),
                                        announceSample.fileSize, metaData);

        // do something with it, but only if it didn't exist before
        if (original) {
          // let DPC do something with it (possibly adding it to the queue)
          //if (m_dataPriorityController != 0)
          (*m_dataPriorityController)(&announceSample);

          if (m_fileAnnouncePublisher != NULL) {
            // republish
            m_fileAnnouncePublisher->sendEvent(announceSample);
          }
        } else {
          MIRO_LOG_OSTR(LL_NOTICE, "duplicate file announce: " << sample.fileUuid);
        }
      }

      // sanity check
      if(retval != DDS_RETCODE_NO_DATA) {
        MIRO_LOG_OSTR(LL_ERROR, "take_next_sample error: " << retval);
      }


      // see if any of the queued files have changed statuses, and send out new
      // state samples for them. (Prefetching)
      for (unsigned int i = 0; i < m_channels.size(); ++i) {
        ChannelPQueue::const_iterator first, last = m_channels[i].queue.end();
        for (first = m_channels[i].queue.begin(); first != last; ++first) {
          if (first->second->statusChanged()) {
            sendFileQueueEntryState(first);
            first->second->setStatusChanged(false);
          }
        }
      }

      /*
      bool idle = true;
      {
        ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);
        ChannelVector::const_iterator first, last = m_channels.end();
        for (first = m_channels.begin(); first != last; ++first) {
          if (first->active && (!first->queue.empty())) {
            idle = false;
          }
        }
      }

      if (idle) {
        ACE_OS::sleep(ACE_Time_Value(0, 100000));
      }
      */

      // make sure there are readers listening to the writer
      // no point writing data if there are no readers...
      // XXX: Possibly add another state
      DDS::PublicationMatchedStatus readers_status;
      if(dataWriter.get_publication_matched_status(readers_status) != DDS_RETCODE_OK) {
        MIRO_LOG(LL_ERROR, "FileQueue::svc error getting readers status");
        return -1;
      }

      bool m_prevConnected = m_connected;
      m_connected = (readers_status.current_count != 0);

      //  * if we changed connection state, send the state
      if (m_prevConnected != m_connected) {
        sendFileQueueState();
      }

      if (!m_connected) {
        MIRO_LOG(LL_DEBUG, "FileQueue::svc no readers - sleeping.");
        ACE_OS::sleep(tv);
        continue;
      }

      //  * if all channels are empty or paused
      //    * sleep
      // @TODO thread safety.
      if (!anyChannelActive() || !anyChannelNotEmpty()) {
        ACE_OS::sleep(tv);
        continue;
      }

      //    * if there is no space in the send-queue/flow-controller
      //      * sleep
      // check space in the send-queue/flow-controller
      // @XXX: Not sure if this is the right way of doing this...
      DDS::DataWriterProtocolStatus wire_status;
      if(dataWriter.get_datawriter_protocol_status(wire_status) != DDS_RETCODE_OK) {
        MIRO_LOG(LL_ERROR, "FileQueue::svc error getting wire protocol status");
        return -1;
      }
      if (wire_status.send_window_size == 0) {
        MIRO_LOG(LL_DEBUG, "FileQueue::svc no room in the queue - sleeping.");
        ACE_OS::sleep(tv);
        continue;
      }

      DDS::DataWriterCacheStatus cache_status;
      if (dataWriter.get_datawriter_cache_status(cache_status) != DDS_RETCODE_OK) {
        MIRO_LOG(LL_ERROR, "FileQueue::svc error getting cache status");
        return -1;
      }
      if ((qos.resource_limits.max_samples - cache_status.sample_count) == 0) {
        MIRO_LOG(LL_DEBUG, "FileQueue::svc no room in the queue - sleeping.");
        ACE_OS::sleep(tv);
        continue;
      }

      //    * while we can send data
      //      * if channel channelTokenList[channelTokenIndex] is active && non-empty
      Channel& channel = m_channels[m_channelTokenList[m_channelTokenIndex]];
      if (channel.active &&
          !channel.queue.empty()) {

        //          * send next chunk of file
        ChannelPQueue::iterator first, last = channel.queue.end();
        for (first = channel.queue.begin(); first != last; ++first) {
          rapid::FileTransferStatus oldStatus = first->second->status();

          bool shouldBreak = false;

          // a file needs prefetching
          if (oldStatus == rapid::RAPID_FILE_PREFETCH_PENDING &&
              m_fetchPool->fetcherFree())
          {
            first->second->startPrefetching();
            if (oldStatus != first->second->status())
              sendFileQueueEntryState(first);

            shouldBreak = true;
          }

          // if we are not prefetching a file...
          else if (oldStatus != rapid::RAPID_FILE_ERROR &&
                   oldStatus != rapid::RAPID_FILE_PREFETCHING &&
                   oldStatus != rapid::RAPID_FILE_PREFETCH_PENDING)
          {
            int retval = first->second->getNextPacket(sample);

            // Status has changed OR number of chunks is on an interval of 100
            if (( oldStatus != first->second->status()) ||
                ( (first->second->chunksTransmitted() % 100) == 0) ||
                ( (first->second->chunksTransmitted() + 1) == first->second->totalChunks()) )
              sendFileQueueEntryState(first);

            if (retval == 0) {
              try {
                m_fileQueueSamplePublisher->sendEvent();
              }
              catch (Miro::Exception const& e) {
                MIRO_LOG_OSTR(LL_ERROR, "m_fileQueueSamplePublisher->sendEvent(); threw exception: " << e.what());
              }

              shouldBreak = true;
            }
          }

          if (shouldBreak) break;
        }

        //          * if file is fully sent (and confirmed) remove from queue
        // @TODO: implement this fully with sent-confirmation
        // and or callback to flag error
        if (first != channel.queue.begin()) {
          //channel.queue.erase(channel.queue.begin(), first);
          bool changed = false;
          ChannelPQueue::iterator i, tmp;
          i = channel.queue.begin();
          while (i != first) {
            if (i->second->status() == rapid::RAPID_FILE_DONE) {
              tmp = i; ++tmp;
              markFileSent(i->second->fileUuid());
              channel.queue.erase(i);
              i = tmp;
              changed = true;
            } else {
              ++i;
            }
          }

          //        * update/send file queue entry state
          if (changed)
            sendFileQueueState();
        }
      }

      //        * increase (with wraparound) channelTokenIndex
      ++m_channelTokenIndex;
      if (m_channelTokenIndex >= m_channelTokenList.size())
        m_channelTokenIndex = 0;

    }

    MIRO_LOG(LL_NOTICE, "FileQueue::svc: cancelled. goodbye.");

    return 0;
  }

  // Go through the channels. If any of them are active, return true.
  // Returning false means they are all inactive.
  bool
  FileQueue::anyChannelActive() {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    for (ChannelVector::iterator i = m_channels.begin();
         i != m_channels.end();
         ++i)
    {
      if (i->active)
        return true;
    }

    return false;
  }

  // Go through the channels. If any of the channels are not empty, return true.
  // Returning false means all of the channels are empty.
  bool
  FileQueue::anyChannelNotEmpty() {
    ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

    for (ChannelVector::iterator i = m_channels.begin();
         i != m_channels.end();
         ++i)
    {
      // channel has stuff in it
      if (!i->queue.empty())
        return true;
    }

    return false;
  }

  bool
  FileQueue::addFileRefEntry(std::string const& uuid,
                             std::string const& uri, ACE_INT64 length, MetadataMap const & map)
  {
    bool original = m_fileAnnounceMap.insert(make_pair(uuid, FileRef(uri, length, map))).second;
    if (!original) {
      MIRO_LOG(LL_WARNING, "FileQueue received duplicate file announcement.");
    }

    return original;
  }


  void
  FileQueue::sendFileQueueState()
  {
    rapid::FileQueueState& state = m_fileQueueStatePublisher->event();
    rapid::RapidHelper::updateHeader(state.hdr);

    state.bandwidth = m_bandwidth;
    state.prefetchBandwidth = m_fetchPool->bandwidth();
    state.channels.length(m_params->channels.size());
    for (unsigned int i = 0; i < m_params->channels.size(); ++i) {
      state.channels[i].status = m_channels[i].active? rapid::FILE_QUEUE_CHANNEL_ACTIVE : rapid::FILE_QUEUE_CHANNEL_PAUSED;
      state.channels[i].queuedFiles = m_channels[i].queue.size();

      state.channels[i].queuedDataVolume = 0;
      ChannelPQueue::const_iterator first, last = m_channels[i].queue.end();
      for (first = m_channels[i].queue.begin(); first != last; ++first) {
        state.channels[i].queuedDataVolume +=
          m_fileAnnounceMap[first->second->fileUuid()].length;
      }
    }

    state.connected = m_connected;

    m_fileQueueStatePublisher->sendEvent();
  }

  void
  FileQueue::sendFileQueueEntryState(ChannelPQueue::const_iterator queueEntry)
  {
    rapid::FileQueueEntryState& state = m_fileQueueEntryStatePublisher->event();
    rapid::RapidHelper::updateHeader(state.hdr);

    strncpy(state.fileUuid, queueEntry->second->fileUuid().c_str(), 64);
    state.fileUuid[63] = 0;
    state.status = queueEntry->second->status();
    ACE_UINT64 t;
    queueEntry->first.submissionTime.to_usec(t);
    state.submissionTime = t;
    state.priority = queueEntry->first.priority;
    state.channelId = queueEntry->second->channelId();
    state.chunksSent = queueEntry->second->chunksTransmitted();
    state.numChunks = queueEntry->second->totalChunks();

    m_fileQueueEntryStatePublisher->sendEvent();
  }

  void
  FileQueue::dump(std::ostream& ostr)
  {
    ostr << "Known Files: " << m_fileAnnounceMap.size() << endl;
    {
      FileAnnounceMap::const_iterator first, last = m_fileAnnounceMap.end();
      for (first = m_fileAnnounceMap.begin(); first != last; ++first) {
        ostr << "  " << first->first << endl;
      }
    }

    ostr << "Channels: " << endl;
    for (unsigned int i = 0; i < m_channels.size(); ++i) {
      ostr << "[" << i << "]: active=" << m_channels[i].active << endl;
      ChannelPQueue::const_iterator first, last = m_channels[i].queue.end();
      for (first = m_channels[i].queue.begin(); first != last; ++first) {
        ostr << "  " << fileTransferStatus[first->second->status()] << " "
             << first->second->fileUuid() << ": " << first->first.submissionTime << ", " << first->first.priority << endl;
      }
    }
  }
}
