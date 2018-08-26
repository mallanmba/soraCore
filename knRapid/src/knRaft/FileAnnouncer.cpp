#include "FileAnnouncer.h"

#include <irgSha1/Sha1.h>

#include <knShare/Log.h>

#include <QString>
#include <QDateTime>

#include <iostream>
#include <fstream>
#include <string>

#include "rapidDds/FileAnnounce.h"
#include "rapidDds/FileAnnounceSupport.h"
#include "rapidDds/RapidConstants.h"
#include "rapidUtil/RapidHelper.h"

namespace kn {

Singleton<FileAnnouncer> FileAnnouncer::instance;

/**
 * ctor
 */
FileAnnouncer::FileAnnouncer(const FileAnnouncerParameters& params)
  :
  m_params(params)
{
  m_publisher = new FileAnnounceSupplier(params.topic,
                                         params.publisher,
                                         params.profile,
                                         params.library,
                                         params.entityName);
  rapid::FileAnnounce& announce = m_publisher->event();
  rapid::RapidHelper::initHeader(announce.hdr);
}

/**
 * dtor
 */
FileAnnouncer::~FileAnnouncer()
{
  delete m_publisher;
}

/**
 * Publish a FileAnnounce for the file referred to by path.
 * @param path path to file on local filesystem
 * @param relativePath (optional metadata) relative path to be used by RAFT file receiver for placing file on remote filesystem
 * @param groupId (optional metadata) groupId
 * @returns true if file is valid and readable
 */
bool
FileAnnouncer::announceFile(const char* path,
                            const char* relativePath,
                            const char* groupId)
{
  QFileInfo fi(path);
  if(fi.isReadable() && fi.isFile()) {
    Lock guard(m_mutex);

    rapid::FileAnnounce& announce = m_publisher->event();
    rapid::RapidHelper::updateHeader(announce.hdr);

    std::string uuid = makeUuid(fi, (UuidGenerator)m_params.uuidType);
    QString     locator("file://"+fi.absoluteFilePath());

    announce.fileSize = fi.size();
    strncpy(announce.fileLocator, qPrintable(locator), 256);
    strncpy(announce.fileUuid, uuid.c_str(), 64);

    // metadata
    int metaCount = 0;
    announce.metaData.length(metaCount);
    // add RELATIVE_PATH meta tag if given
    if(relativePath && strlen(relativePath) > 0) {
      announce.metaData.length(metaCount+1);
      rapid::KeyTypeValueTriple& meta = announce.metaData[metaCount++];
      strncpy(meta.key, "RELATIVE_PATH", 31);
      meta.value._d = rapid::RAPID_STRING;
      strncpy(meta.value._u.s, relativePath, 127);
      meta.value._u.s[127] = 0;
    }
    // add GROUP_ID meta tag if given
    if(groupId && strlen(groupId) > 0) {
      announce.metaData.length(metaCount+1);
      rapid::KeyTypeValueTriple& meta = announce.metaData[metaCount++];
      strncpy(meta.key, "GROUP_ID", 31);
      meta.value._d = rapid::RAPID_STRING;
      strncpy(meta.value._u.s, groupId, 127);
      meta.value._u.s[127] = 0;
    }

    m_publisher->sendEvent();
    return true;
  }

  KN_ERROR_OSTR("FileAnnouncer: file \"" << path << "\" is invalid: exists=" << fi.exists() << ", isFile=" << fi.isFile() << ", isReadable=" << fi.isReadable());
  return false;
}


/**
 *
 */
std::string
FileAnnouncer::makeUuid(const QFileInfo& fileInfo, UuidGenerator generator)
{
  switch(generator) {
    case UuidFast:      return fileStatHash(fileInfo);
    case UuidThorough:  return fileContentHash(qPrintable(fileInfo.absoluteFilePath()));
  }
  return "ERROR: BAD UuidGenerator ENUM";
}


/**
 * fast hash created from canonical path of file,
 * stringified timestamp, and stringified size of file.
 */
std::string
FileAnnouncer::fileStatHash(const QFileInfo& fileInfo)
{
  QString str;
  irg::SHA1Hash hash;

  hash.init();
  str = fileInfo.absoluteFilePath();
  hash.update((const unsigned char*)qPrintable(str), str.length());
  str = fileInfo.lastModified().toString("yy.MMM.dd-hh:mm:ss.zzz");
  hash.update((const unsigned char*)qPrintable(str), str.length());
  str.setNum(fileInfo.size());
  hash.update((const unsigned char*)qPrintable(str), str.length());

  return hash.hexString(hash.final());
}

/**
 * hash the contents of a file. include the filename as part of the hash
 * as well. this will guarantee uniqueness when multiple copies of the file
 * exist in multiple places.
 * NOTE: Because of this, the output for this will differ from that of
 * `sha1sum file`
 */
std::string
FileAnnouncer::fileContentHash(const char* path)
{
  irg::SHA1Hash hash;
  unsigned char content[1024];

  hash.init();
  hash.update((const unsigned char*)path, strlen(path));

  std::ifstream in(path, std::ios_base::binary | std::ios_base::in);
  do {
    in.read((char *) content, 1024);
    hash.update(content, in.gcount());
  }
  while(!in.eof());

  return hash.hexString(hash.final());
}

#if defined (ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION)
template kn::Singleton<kn::FileAnnouncer> * kn::Singleton<kn::FileAnnouncer>::s_instance_;
#endif /* ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION */

}
