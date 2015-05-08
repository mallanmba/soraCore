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
#ifndef kn_FileQueue_h
#define kn_FileQueue_h

#include "rapidDds/FileQueueEntryState.h"

#include <ace/Recursive_Thread_Mutex.h>
#include <ace/Task.h>

#include <map>
#include <string>
#include <vector>

#include "knRaft_Export.h"

namespace rapid
{
  class FileAnnounce;
  class FileQueueConfig;
  class FileQueueState;
  class FileQueueSample;
}


namespace kn
{
  template<class T> class DdsTypedSupplier;
  template<class T> class DdsTypedConsumer;

  namespace fetcher
  {
    class CurlFetcher;
    template<class F> class FetcherPool;
    typedef FetcherPool<CurlFetcher> CurlPool;
  }

  class FetchPoolParameters;
  class FileQueueParameters;
  class DataPriorityController;
  class FileEntryCallback;

  /**
   * Key value in the priority queue
   */
  struct knRaft_Export FilePriority {
    float priority;
    ACE_Time_Value submissionTime;

    FilePriority() {}
    FilePriority(float p, ACE_Time_Value const& t) :
      priority(p),
      submissionTime(t)
    {}
  };

  bool operator> (FilePriority const& lhs, FilePriority const& rhs) throw();
  bool operator== (FilePriority const& lhs, FilePriority const& rhs) throw();

  /**
   * FileQueue
   */
  class knRaft_Export FileQueue : public ACE_Task_Base
  {
  public:
    friend class FileEntryCallback;

    using ACE_Task_Base::resume;

    FileQueue(FileQueueParameters const * params);
    virtual ~FileQueue() throw();

    typedef std::map<std::string, std::string> MetadataMap;

    // file queue interface

    int putFile(std::string const& fileUuid, ACE_INT16 channel, float priotiry);
    int putMatching(std::string const& key, std::string const& value, ACE_INT16 channel, float priority);
    int removeFile(std::string const& fileUuid);
    int pause(ACE_INT16 channel);
    int resume(ACE_INT16 channel);
    int setBandwidth(ACE_INT32 bandwidth, ACE_INT32 prefetchBandwidth);

    // ace task base interface
    virtual int svc();

    // public for test-program
    bool addFileRefEntry(std::string const& uuid,
                         std::string const& uri, ACE_INT64 length, MetadataMap const& map);

    // debug dump
    void dump(std::ostream& ostr);

  private:

    /**
     * The file announce messages we received
     */
    struct FileRef {
      std::string uri;
      ACE_INT64 length;
      MetadataMap metaData;

      FileRef() {}
      FileRef(std::string const& i, ACE_INT64 l, MetadataMap const &m) :
        uri(i),
        length(l),
        metaData(m)
      {}
    };

    /**
     * Entry in the priority queue
     */
    struct FileEntry {
      std::string const& fileUuid() const throw() { return m_fileUuid; }

      ACE_INT16 channelId() const throw() { return m_channelId; }
      void setChannelId(ACE_INT16 channel) throw() { m_channelId = channel; }
      rapid::FileTransferStatus status() const throw() { return m_status; }
      void setStatus(rapid::FileTransferStatus status) throw() { m_status = status; }
      bool statusChanged() throw() { return m_statusChanged; }
      void setStatusChanged(bool changed) throw() { m_statusChanged = changed; }
      int chunksTransmitted() const throw() { return m_transferedChunks; }
      int totalChunks() const throw();

      explicit FileEntry(ACE_INT16 channel, std::string const& uuid,
                         std::string const& uri, ACE_INT64 l, fetcher::CurlPool *fetchPool) :
        m_channelId(channel),
        m_fileUuid(uuid),
        m_uri(uri),
        m_length(l),
        m_localPath(""),
        m_fetchPool(fetchPool),
        m_prefetched(false),
        m_content(0),
        m_status(rapid::RAPID_FILE_PENDING),
        m_statusChanged(false),
        m_transferedChunks(0) {
        if (isFileUri(m_uri)) {
          m_localPath = uriPath(m_uri);
          m_prefetched = true;
        }
        else {
          m_status = rapid::RAPID_FILE_PREFETCH_PENDING;
        }
      }
      ~FileEntry() throw();

      // fill the data-structure with the next chunk to be sent
      // return 0 for success.
      // return -1 for error.
      // return 1 file last chunk sent
      int getNextPacket(rapid::FileQueueSample& sample);

      // start/cancel pre-fetching of remote URLs
      // return true on success, false otherwise
      bool startPrefetching();
      bool cancelPrefetching();

      // signal the completion of prefetching. Note that this may be called
      // from another thread!
      void prefetchingComplete();

      // in the case of a file uri, returns true.
      // in the case of remote uri's, whether we have prefetched it or not.
      bool isLocal();

      // in the case of file:// uri's:
      // ensure that it exists and readable.
      // return true on success, false otherwise
      // always returns true for remote urls
      bool ensureExists();

      // uri-related functions. this does not handle every uri pattern
      // known to man. except for isUriSupported and uriScheme, these are
      // specific to 'file' schemed uri's.
      static bool isUriSupported(std::string const& uri);
      static std::string uriScheme(std::string const& uri);
      static std::string uriPath(std::string const& uri);
      static bool isFileUri(std::string const& uri);

    private:
      // memory-map the file
      bool mapFile();
      bool unmapFile();

      ACE_INT16 m_channelId;
      std::string m_fileUuid;
      std::string m_uri;
      ACE_INT64 m_length;

      // Local file for remote files to copy/cache to
      // For local files, the extracted path
      std::string m_localPath;

      // Whether we have fetched the remote file or not
      fetcher::CurlPool *m_fetchPool;
      bool m_prefetched;

      // Memory-mapped file content
      unsigned char * m_content;

      // @TODO: state tracking not fully implemented
      //  * putFile() with higher priority in queue -> paused
      //  * should suspend/resume channel(s) put entries to paused?
      //    that would be redundant with QueueState
      //  * error for connection lost or something like that
      rapid::FileTransferStatus m_status;
      bool m_statusChanged;
      int m_transferedChunks;

      FileEntry(FileEntry const& ce);
      FileEntry& operator= (FileEntry const& rhs);
    };

    typedef std::map<std::string, FileRef> FileAnnounceMap;
    typedef std::map<FilePriority, FileEntry*> ChannelPQueue;

    struct Channel {
      bool active;
      ChannelPQueue queue;
    };
    typedef std::vector<Channel> ChannelVector;

    typedef kn::DdsTypedConsumer<rapid::FileAnnounce> FileAnnounceSubscriber;
    typedef kn::DdsTypedSupplier<rapid::FileAnnounce> FileAnnouncePublisher;
    typedef kn::DdsTypedSupplier<rapid::FileQueueConfig> FileQueueConfigPublisher;
    typedef kn::DdsTypedSupplier<rapid::FileQueueState> FileQueueStatePublisher;
    typedef kn::DdsTypedSupplier<rapid::FileQueueEntryState> FileQueueEntryStatePublisher;
    typedef kn::DdsTypedSupplier<rapid::FileQueueSample> FileQueueSamplePublisher;

    void sendFileQueueState();
    void sendFileQueueEntryState(ChannelPQueue::const_iterator queueEntry);

    bool anyChannelActive();
    bool anyChannelNotEmpty();

    void setFlowControllerThroughput();

    bool checkFileSent(std::string uuid);
    void markFileSent(std::string uuid);

    FileQueueParameters const * m_params;
    fetcher::CurlPool *m_fetchPool;

    ACE_Recursive_Thread_Mutex m_mutex;

    bool m_connected;

    FileAnnounceMap m_fileAnnounceMap;
    ChannelVector m_channels;
    ACE_INT32 m_bandwidth;

    std::vector<unsigned int> m_channelTokenList;
    unsigned int m_channelTokenIndex;

    FileQueueConfigPublisher * m_fileQueueConfigPublisher;
    FileQueueStatePublisher * m_fileQueueStatePublisher;
    FileQueueSamplePublisher * m_fileQueueSamplePublisher;
    FileQueueEntryStatePublisher * m_fileQueueEntryStatePublisher;
    FileAnnounceSubscriber * m_fileAnnounceSubscriber;
    FileAnnouncePublisher * m_fileAnnouncePublisher;

    DataPriorityController * m_dataPriorityController;
  };

  inline
  bool
  operator< (FilePriority const& lhs, FilePriority const& rhs) throw()
  {
    return
      (lhs.priority < rhs.priority) ||
      (lhs.priority == rhs.priority && lhs.submissionTime < rhs.submissionTime);
  }
  inline
  bool
  operator== (FilePriority const& lhs, FilePriority const& rhs) throw()
  {
    return
      (lhs.priority == rhs.priority && lhs.submissionTime == rhs.submissionTime);
  }
}
#endif // kn_FileQueue_h
