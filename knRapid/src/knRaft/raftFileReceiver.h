#ifndef raftFileReceiver_h
#define raftFileReceiver_h

// DDS/Rapid includes
#include <knDds/DdsTypedSupplier.h>
#include <knDds/DdsTypedConsumer.h>

// Rapid includes
#include <rapidDds/RapidConstants.h>
#include <rapidDds/FileAnnounce.h>
#include <rapidDds/FileAnnounceSupport.h>
#include <rapidDds/FileQueueSample.h>
#include <rapidDds/FileQueueSampleSupport.h>
#include <rapidDds/FileQueueReceiverSample.h>
#include <rapidDds/FileQueueReceiverSampleSupport.h>
#include <rapidDds/FileQueueEntryState.h>
#include <rapidDds/FileQueueEntryStateSupport.h>

// ace includes
#include <ace/Recursive_Thread_Mutex.h>
#include <ace/Condition_Thread_Mutex.h>

// stl includes
#include <string>
#include <map>
#include <vector>
#include <deque>

typedef kn::DdsTypedConsumer<rapid::FileAnnounce>            FileAnnounceSubscriber;
typedef kn::DdsTypedConsumer<rapid::FileQueueSample>         FileSampleSubscriber;
typedef kn::DdsTypedSupplier<rapid::FileQueueReceiverSample> FileQueueReceiverSamplePublisher;
typedef kn::DdsTypedSupplier<rapid::FileQueueEntryState>     FileQueueEntryStatePublisher;

/**
 * SafeQueue
 */
//----------------------------------------------------------
template<class Type, class Mutex=ACE_Recursive_Thread_Mutex, class Guard=ACE_Guard<Mutex> >
class SafeQueue
{
public:
  void push(const Type& x) {
    Guard guard(m_mutex);
    m_deque.push_back(x);
  }
  Type pop() {
    Guard guard(m_mutex);
    Type r = m_deque.front();
    m_deque.pop_front();
    return r;
  }
  bool empty() {
    Guard guard(m_mutex);
    return m_deque.empty();
  }
private:
  std::deque<Type> m_deque;
  Mutex m_mutex;
};
typedef SafeQueue<std::string> StringQueue;

/**
 * FileAnnounceHandler
 */
//----------------------------------------------------------
class FileAnnounceHandler
{
public:
  FileAnnounceHandler();
  ~FileAnnounceHandler();

  bool hasUuid(std::string const& uuid);
  void removeUuid(std::string const& uuid);

  StringQueue& getAnnouncedFiles() {
    return m_announcedFiles;
  }
  int getNumAnnounced() const { return m_numFilesAnnounced; }
  rapid::FileAnnounce const* getFileAnnounce(std::string const& uuid) const {
    return m_announceMap.find(uuid)->second.announcement;
  }
  void operator()(rapid::FileAnnounce const* announcement);

private:
  struct AnnounceHolder {
    rapid::FileAnnounce* announcement;
    bool                 isComplete;
    AnnounceHolder(rapid::FileAnnounce* announcementIn, bool isCompleteIn=false)
      : announcement(announcementIn), isComplete(isCompleteIn)
    { }
  };
  typedef std::map<std::string, AnnounceHolder> AnnounceMap;

  int         m_numFilesAnnounced;
  StringQueue m_announcedFiles;
  AnnounceMap m_announceMap;
  ACE_Recursive_Thread_Mutex m_mutex;
};

/**
 * FileSampleHandler
 */
//----------------------------------------------------------
class FileSampleHandler
{
public:
  FileSampleHandler();
  ~FileSampleHandler();

  std::string pathForUuid(std::string const& uuid);
  bool hasUuid(std::string const& uuid) const {
    return (m_fileMap.find(uuid) != m_fileMap.end());
  }
  void removeUuid(std::string const& uuid) {
    m_fileMap.erase(uuid);
  }
  bool isFileComplete(std::string const& uuid) {
    return m_fileMap.find(uuid)->second.isComplete();
  }

  void sendFileState(char const * uuid, rapid::FileTransferStatus status,
                     int chunksReceived, int numChunks);

  void operator()(rapid::FileQueueSample const* sample);

  StringQueue& getCompletedFiles() {
    return m_completedFiles;
  }
  int getNumCompleted() const {
    return m_totalCompletedFiles;
  }
  int getNumStarted() const {
    return m_totalFilesStarted;
  }
  int getNumTotalSamples() const {
    return m_totalReceivedSamples;
  }

private:
  struct FilePart {
    typedef std::vector<bool> BitVector;
    std::ofstream* stream;
    BitVector      receivedChunks;
    unsigned long  numChunksReceived;

    FilePart(std::ofstream * stream_, const long numChunks)
      : stream(stream_), receivedChunks(numChunks, false), numChunksReceived(0)
    { }

    bool isComplete() {
      return (receivedChunks.size() == numChunksReceived);
    }
  };

  typedef std::map<std::string, FilePart> FileMap;
  typedef std::deque<std::string> StringDeque;
  FileMap     m_fileMap;
  int         m_totalReceivedSamples;
  int         m_totalCompletedFiles;
  int         m_totalFilesStarted;
  StringQueue m_completedFiles;
  FileQueueEntryStatePublisher m_fileStatePublisher;
};

#endif // raftFileReceiver_h
