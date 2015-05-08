#ifndef kn_FileAnnouncer_h
#define kn_FileAnnouncer_h

#include "rapidDds/RapidConstants.h"

#include <knDds/DdsTypedSupplier.h>

#include <knShare/SmartPtr.h>
#include <knShare/Singleton.h>
#include <knShare/Mutex.h>

#include <QFileInfo>

#include "RaftParameters.h"
#include "knRaft_Export.h"

namespace rapid
{
  class FileAnnounce;
}

namespace kn
{

  /**
   * FileAnnouncer is a convenience class for publishing RAFT FileAnnounce
   * messages. A singleton is provided so an application can share a single
   * data writer - if used, please call FileAnnouncer::instance.close() to
   * cleanly destroy the singleton during shutdown.
   */
  class knRaft_Export FileAnnouncer
  {
  public:
    FileAnnouncer(const FileAnnouncerParameters& params = FileAnnouncerParameters());
    ~FileAnnouncer();

    bool announceFile(const char* path,
                      const char* relativePath = NULL,
                      const char* groupId      = NULL);

    static Singleton<FileAnnouncer> instance;

  protected:
    enum UuidGenerator {
      UuidFast,
      UuidThorough
    };
    std::string makeUuid(const QFileInfo& fileInfo, UuidGenerator generator = UuidFast);
    std::string fileContentHash(const char* path);
    std::string fileStatHash(const QFileInfo& fileInfo);

  protected:
    typedef lock_guard<mutex> Lock;
    typedef DdsTypedSupplier<rapid::FileAnnounce> FileAnnounceSupplier;

    FileAnnouncerParameters m_params;
    FileAnnounceSupplier*   m_publisher;
    mutable mutex           m_mutex;
  };
}

KNRAFT_SINGLETON_DECLARATION(kn::Singleton<kn::FileAnnouncer>);

#endif // kn_FileAnnouncer_h
