#include "raftFileReceiver.h"

// rapid helpers
#include "rapidUtil/RapidHelper.h"

// Robot parameters
#include <miro/Robot.h>
#include <miro/Configuration.h>
#include <miro/RobotParameters.h>
#include <miro/ShutdownHandler.h> // Ctrl-C handler

#include <knShare/Log.h>

#include <knDds/DdsSupport.h>
#include <knDds/DdsTypedConnector.h>
#include <knDds/DdsTypedSupplier.h>
#include <knDds/DdsTypedConsumer.h>
#include <knDds/DdsEntitiesFactorySvc.h>
#include <knDds/KnDdsParameters.h>

// boost includes
#include <boost/filesystem/convenience.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>

// qt includes
#include <QDir>
#include <QUrl>
#include <QFileInfo>

// ace includes
#include <ace/Get_Opt.h>

// stl includesp
#include <iostream>
#include <fstream>
#include <utility>
#include <exception>

#include "RaftParameters.h"

#define CHUNK_SIZE 1024

// globals
int g_numFilesMoved = 0;
int verbose = 0;

// namespace
namespace fs = boost::filesystem;
using namespace rapid;
using namespace kn;
using namespace std;

/**
 * FileAnnounceHandler ctor
 */
//====================================================================
FileAnnounceHandler::FileAnnounceHandler()
  : m_numFilesAnnounced(0)
{
}

/**
 * dtor
 */
FileAnnounceHandler::~FileAnnounceHandler()
{
  // delete all the pointers in the map
  for(AnnounceMap::iterator i = m_announceMap.begin();
      i != m_announceMap.end(); ++i) {
    rapid::FileAnnounceTypeSupport::delete_data(i->second.announcement);
  }
}

/**
 * @returns true if we know about uuid
 */
bool
FileAnnounceHandler::hasUuid(std::string const& uuid)
{
  ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);
  AnnounceMap::iterator itr = m_announceMap.find(uuid);
  return (itr != m_announceMap.end() && itr->second.isComplete != true);
}

/**
 * mark uuid as completed
 */
void
FileAnnounceHandler::removeUuid(std::string const& uuid)
{
  ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);
  m_announceMap.find(uuid)->second.isComplete = true;
}

/**
 * callback for FileAnnounce messages
 */
void FileAnnounceHandler::operator()(rapid::FileAnnounce const* announcement)
{
  ACE_Guard<ACE_Recursive_Thread_Mutex> guard(m_mutex);

  // see if we already have this one, I'd do this on insert, but I don't
  // want to allocato another announce topic if I don't have to.
  if (m_announceMap.find(announcement->fileUuid) != m_announceMap.end()) {
    KN_INFO_OSTR("receieved duplicate file announce: " << announcement->fileUuid);
    return;
  }

  // make a (deep) copy
  rapid::FileAnnounce * copy = rapid::FileAnnounceTypeSupport::create_data();
  if (copy == NULL) {
    KN_ERROR("ERROR: unable to initialize a new announce topic");
    return;
  }

  // store in map
  rapid::FileAnnounceTypeSupport::copy_data(copy, announcement);
  KN_DEBUG_OSTR("received file announce: " << announcement->fileLocator);
  m_announceMap.insert(std::make_pair(announcement->fileUuid, AnnounceHolder(copy)));
  m_announcedFiles.push(announcement->fileUuid);

  // we have another
  m_numFilesAnnounced++;
}

/**
 * FileSampleHandler ctor
 */
//====================================================================
FileSampleHandler::FileSampleHandler()
  : m_totalReceivedSamples(0),
    m_totalCompletedFiles(0),
    m_totalFilesStarted(0),
    m_fileStatePublisher(rapid::FILEQUEUEENTRY_STATE_RECEIVER_TOPIC,
                         "",
                         "RapidFileQueueReceiverEntryStateProfile")
{
  rapid::RapidHelper::initHeader(m_fileStatePublisher.event().hdr);
}

/**
 * dtor
 */
FileSampleHandler::~FileSampleHandler()
{
}

/**
 * get local staging path
 */
std::string FileSampleHandler::pathForUuid(std::string const& uuid)
{
  std::string path(FileReceiverParameters::instance()->dataStagingDir);
  path.append("/").append(uuid);
  return path;
}

/**
 * publish FileQueueEntryState
 */
void FileSampleHandler::sendFileState(char const * uuid,
                                      FileTransferStatus status,
                                      int chunksReceived,
                                      int numChunks)
{
  rapid::FileQueueEntryState& entryState = m_fileStatePublisher.event();

  rapid::RapidHelper::updateHeader(entryState.hdr);

  strcpy(entryState.fileUuid, uuid);
  entryState.status = status;
  entryState.chunksSent = chunksReceived;
  entryState.numChunks = numChunks;
  entryState.submissionTime = 0;
  entryState.priority = 0.f;
  entryState.channelId = -1;

  m_fileStatePublisher.sendEvent();
}

/**
 * <pre>
 * if it's the first sample (not in awesomeMap)
 *   open file
 *   extend to be numChunks * (1024 * 1024) * 128;
 *   put into awesomeMap;
 * else
 *   lookup file in awesomeMap
 *   seekp to write position
 *   put chunk in
 * </pre>
 */
void FileSampleHandler::operator()(rapid::FileQueueSample const* sample)
{
  ++m_totalReceivedSamples;
  FileMap::iterator filePartP = m_fileMap.find(sample->fileUuid);
  if (filePartP == m_fileMap.end()) {
    std::ofstream * newStream = new std::ofstream(pathForUuid(sample->fileUuid).c_str());
    if (!(newStream && newStream->is_open()))
      throw std::runtime_error(std::string("Unable to open file: ") + sample->fileUuid);

    m_totalFilesStarted++;
    filePartP = (m_fileMap.insert(std::make_pair(sample->fileUuid, FilePart(newStream, sample->numChunks))).first);
  }

  FilePart & filePart = filePartP->second;
  filePart.stream->seekp(sample->chunkId * CHUNK_SIZE);
  filePart.stream->write((char *) sample->chunkData.get_contiguous_buffer(),
                         sample->chunkData.length());

  bool alreadyReceivedChunk = filePart.receivedChunks[sample->chunkId];
  if (!alreadyReceivedChunk) {
    filePart.receivedChunks[sample->chunkId] = true;
    filePart.numChunksReceived++;
  }

  if (sample->chunkId < sample->numChunks -1 && (sample->chunkId % 100) == 0) {
    // set new file
    sendFileState(sample->fileUuid,
                  rapid::RAPID_FILE_ACTIVE, sample->chunkId, sample->numChunks);

  }

  if (sample->chunkId == sample->numChunks - 1) {
    filePart.stream->flush();

    // compute file size
    ACE_UINT64 size = (sample->chunkId * CHUNK_SIZE) + sample->chunkData.length();

    ACE_OS::truncate(pathForUuid(sample->fileUuid).c_str(), size);
  }

  if ((long) filePart.numChunksReceived == sample->numChunks) {
    filePart.stream->close();

    // No leaks in muh bucket
    delete filePart.stream;
    filePart.stream = NULL;

    // add to completed files
    m_completedFiles.push(sample->fileUuid);
    m_totalCompletedFiles++;

    sendFileState(sample->fileUuid,
                  rapid::RAPID_FILE_DONE, sample->chunkId, sample->numChunks);
  }

  KN_DEBUG_OSTR("received file sample: " << sample->chunkId);
}

// free functions
//====================================================================

/**
 * Move file from staging to final destination.
 * If the RELATIVE_PATH key is found in the announce meta data, that
 * value will be appended to params->dataDestinationDir. Otherwise,
 * the full path of the fileLocator will be appended to params->dataDestinationDir
 */
bool moveFile(std::string const &uuid, FileAnnounceHandler &announceHandler)
{
  KN_DEBUG_OSTR("moving uuid: " << uuid);

  // get the file announce topic for the uuid
  const rapid::FileAnnounce* fileAnnounce = announceHandler.getFileAnnounce(uuid);

  // search for the RELATIVE_PATH key
  string relativePath;
  int relativePathIdx = -1;
  for (int i = 0; i < fileAnnounce->metaData.length(); ++i) {
    if (ACE_OS::strncmp(fileAnnounce->metaData[i].key, "RELATIVE_PATH", 14) == 0) {
      assert(fileAnnounce->metaData[i].value._d == rapid::RAPID_STRING);
      relativePathIdx = i;
      break;
    }
  }

  if (relativePathIdx == -1) {
    QUrl url(fileAnnounce->fileLocator);
    KN_DEBUG("No relative path set for uuid. Using full path of fileLocator (%s).", qPrintable(url.path()));
    relativePath = url.path().mid(1).toStdString();
  }
  else {
    relativePath = fileAnnounce->metaData[relativePathIdx].value._u.s;
  }
  KN_DEBUG_OSTR("relative path for uuid: " << relativePath);

  fs::path rootPath(FileReceiverParameters::instance()->dataDestinationDir);
  fs::path stagingPath(FileReceiverParameters::instance()->dataStagingDir);

  // compute staging path
  fs::path stagingFilePath = stagingPath / uuid;

  // compute final path
  fs::path finalPath = fs::absolute(fs::path(relativePath), rootPath);

  KN_DEBUG_OSTR("final resting place: " << finalPath);

  if (fs::exists(finalPath)) {
    KN_WARN_OSTR("WARNING: " << finalPath << " exists. skipping.");
    return true;
  }
  else {
    KN_INFO_OSTR("wrote file: " << finalPath);
    g_numFilesMoved++;
  }

  // create parent directories
  fs::create_directories(finalPath.parent_path());

  // move/rename file
  fs::rename(stagingFilePath, finalPath);

  return true;
}

/**
 * parse command line arguments
 */
int parseArgs(int& argc, char* argv[])
{
  int rc = 0;
  int c;

  // initialize parameters with global instance
  FileReceiverParameters* params = FileReceiverParameters::instance();

  // initialize parameters from config file
  Miro::ConfigDocument* config = Miro::Configuration::document();
  config->setSection("Rapid");
  config->getParameters("kn::FileReceiverParameters", *params);

  // initialize parameters from command line
  ACE_Get_Opt get_opts(argc, argv, "D:S:v?");

  while ((c = get_opts()) != -1) {
    switch (c) {
      case 'D':
        params->dataDestinationDir = get_opts.optarg;
        break;
      case 'S':
        params->dataStagingDir = get_opts.optarg;
        break;
      case 'v':
        verbose = true;
        break;
      case '?':
      default:
        cerr << "usage: " << argv[0] << "[-v?]" << endl
             << "  -D <path> Destination root directory (default: " << params->dataDestinationDir << ")" << endl
             << "  -S <path> Staging directory (default: " << params->dataStagingDir << ")" << endl
             << "  -v verbose mode" << endl
             << "  -? help: emit this text and stop" << endl;
        rc = 1;
    }
  }

  if (verbose) {
    cerr << "RAFT FileReceiver parameters:" << endl;
    cerr << *params << endl;
  }
  return rc;
}

//====================================================================
//== main
//====================================================================
int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  Miro::Robot::init(argc, argv);

  kn::DdsEntitiesFactorySvcParameters * ddsParams = kn::DdsEntitiesFactorySvcParameters::instance();
  ddsParams->defaultLibrary = "RapidQosLibrary";

  kn::DdsSupport::init(argc, argv);

  ddsParams->participants[0].participantName = "RaftFileQueueReceiver";
  ddsParams->participants[0].profile         = "RapidDefaultQos";

  if (parseArgs(argc, argv) != 0) {
    return 1;
  }

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(ddsParams);

  {
    // make sure our staging and destination directories exist
    FileReceiverParameters* params = FileReceiverParameters::instance();
    QDir dir;
    if( !dir.mkpath(params->dataDestinationDir.c_str()) ) {
      KN_ERROR("Failed to create data destination directory: %s", params->dataDestinationDir.c_str());
      return -1;
    }
    if( !dir.mkpath(params->dataStagingDir.c_str()) ) {
      KN_ERROR("Failed to create staging directory: %s", params->dataStagingDir.c_str());
      return -1;
    }
  }

  {
    // make sure that all dds readers/writers end their scope
    // before we finalize the ddsEntities factory
    FileQueueReceiverSamplePublisher statistics(rapid::FILEQUEUERECEIVER_SAMPLE_TOPIC,
                                                "",
                                                "RapidFileQueueReceiverSampleProfile");
    rapid::RapidHelper::initHeader(statistics.event().hdr);

    DDS::WaitSet waitset;
    DDS::ReturnCode_t retcode = DDS_RETCODE_OK;

    FileAnnounceHandler announceHandler;
    FileAnnounceSubscriber announceSubscriber(rapid::FILEANNOUNCE_TOPIC,
                                              Miro::RobotParameters::instance()->name,
                                              "RapidFileAnnounceProfile");
    FileAnnounce::DataReader& announceReader = announceSubscriber.dataReader();
    DDS::StatusCondition * announceCondition = announceReader.get_statuscondition();

    announceCondition->set_enabled_statuses(DDS_DATA_AVAILABLE_STATUS);
    retcode = waitset.attach_condition(announceCondition);
    if (retcode != DDS_RETCODE_OK) {
      KN_FATAL_OSTR("attach_condition error: " << kn::DdsSupport::getError(retcode));
      return -1;
    }

    FileSampleHandler sampleHandler;
    FileSampleSubscriber sampleSubscriber(rapid::FILEQUEUE_SAMPLE_TOPIC,
                                          "",
                                          "RapidFileQueueSampleProfile");
    FileQueueSample::DataReader& sampleReader = sampleSubscriber.dataReader();
    DDS::StatusCondition * sampleCondition = sampleReader.get_statuscondition();
    sampleCondition->set_enabled_statuses(DDS_DATA_AVAILABLE_STATUS);
    retcode = waitset.attach_condition(sampleCondition);
    if (retcode != DDS_RETCODE_OK) {
      KN_FATAL_OSTR("attach_condition error: " << kn::DdsSupport::getError(retcode));
      return -1;
    }


    DDS::ConditionSeq activeConditions;
    DDS::Duration_t const timeout = {1, 0}; // wait for 1 sec max

    int length;
    FileAnnounceSeq fileAnnounces;
    FileQueueSampleSeq samples;
    DDS::SampleInfoSeq infos;


    ACE_Time_Value lastReceiverSampleSend(0);

    Miro::ShutdownHandler shutdownHandler;
    while (!shutdownHandler.isShutdown()) { // main loop

      // some feedback for now...
      cout << "." << flush;
      // DDS event-loop processing
      // The triggered condition(s) will be placed in activeConditions
      retcode = waitset.wait(activeConditions, timeout);
      if (retcode != DDS_RETCODE_TIMEOUT) {
        if (retcode != DDS_RETCODE_OK) {
          KN_FATAL_OSTR("waitset error" << kn::DdsSupport::getError(retcode));
          return -1;
        }

        for (int i = 0; i < activeConditions.length(); ++i) { // dds subscribers
          if (activeConditions[i] == announceCondition) {
            do {
              announceReader.take(fileAnnounces,
                                  infos,
                                  1024,
                                  DDS::ANY_SAMPLE_STATE,
                                  DDS::ANY_VIEW_STATE,
                                  DDS::ANY_INSTANCE_STATE);

              length = fileAnnounces.length();
              for (DDS::Long j = 0; j < length; ++j) {
                if (infos[j].valid_data) {
                  announceHandler(&fileAnnounces[j]);
                }
                else {
                  KN_INFO("DDS FileSample take !valid_data");
                }
              }
              ACE_OS::sleep(1);
              retcode = announceReader.return_loan(fileAnnounces, infos);
              if (retcode != DDS::RETCODE_OK) {
                KN_ERROR_OSTR("DDS FileAnnounce return loan error: " << kn::DdsSupport::getError(retcode));
              }
            }
            while (length == 1024);
          }

          if (activeConditions[i] == sampleCondition) {
            do {
              sampleReader.take(samples,
                                infos,
                                1024,
                                DDS::ANY_SAMPLE_STATE,
                                DDS::ANY_VIEW_STATE,
                                DDS::ANY_INSTANCE_STATE);

              length = samples.length();
              for (DDS::Long i = 0; i < length; ++i) {
                if (infos[i].valid_data) {
                  KN_INFO("FileQueueSample");
                  sampleHandler(&samples[i]);
                }
                else {
                  KN_INFO("DDS FileSample take !valid_data");
                }
              }

              retcode = sampleReader.return_loan(samples, infos);
              if (retcode != DDS::RETCODE_OK) {
                KN_ERROR_OSTR("DDS FileQueueSample return loan error: " << kn::DdsSupport::getError(retcode));
              }
            }
            while (length == 1024);
          }
        }
      }

      StringQueue& completedFiles = sampleHandler.getCompletedFiles();
      while (!completedFiles.empty()) {
        std::string uuid = completedFiles.pop();

        if(announceHandler.hasUuid(uuid)) {
          moveFile(uuid, announceHandler);
          sampleHandler.removeUuid(uuid);
          announceHandler.removeUuid(uuid);
        }
      }

      StringQueue& announcedFiles = announceHandler.getAnnouncedFiles();
      while (!announcedFiles.empty()) {
        std::string uuid = announcedFiles.pop();

        if(sampleHandler.hasUuid(uuid) && sampleHandler.isFileComplete(uuid)) {
          moveFile(uuid, announceHandler);
          sampleHandler.removeUuid(uuid);
          announceHandler.removeUuid(uuid);
        }
      }

      // send statistics
      ACE_Time_Value now = ACE_OS::gettimeofday();
      if (lastReceiverSampleSend + ACE_Time_Value(1) < now) {
        rapid::FileQueueReceiverSample& event = statistics.event();

        DDS::LivelinessChangedStatus livelinessStatus;
        sampleReader.get_liveliness_changed_status(livelinessStatus);

        // santity checking
        if (livelinessStatus.alive_count > 1) {
          KN_WARN("Subscribed to more than one sample writer.");
        }

        DDS::DataReaderCacheStatus cacheStatus;
        sampleReader.get_datareader_cache_status(cacheStatus);

        rapid::RapidHelper::updateHeader(event.hdr);
        event.connected = livelinessStatus.alive_count > 0;
        event.bufferedChunks = cacheStatus.sample_count;
        event.processedChunks = sampleHandler.getNumTotalSamples();
        event.completedFiles = sampleHandler.getNumCompleted();

        statistics.sendEvent();
        lastReceiverSampleSend = now;
      }
    }

    // print statistics
    // XXX: We are double-counting some announce topics. I'm not sure why...
    std::cout << "Statistics: " << std::endl
              << "  Announced: " << announceHandler.getNumAnnounced() << std::endl
              << "    Started: " << sampleHandler.getNumStarted()     << std::endl
              << "  Completed: " << sampleHandler.getNumCompleted()   << std::endl
              << "      Moved: " << g_numFilesMoved                   << std::endl;
    if (sampleHandler.getNumStarted() != sampleHandler.getNumCompleted()) {
      std::cout << " INCOMPLETE: " << sampleHandler.getNumStarted() - sampleHandler.getNumCompleted() << std::endl;
    }

  }
  ddsEntities.fini();
  return 0;
}
