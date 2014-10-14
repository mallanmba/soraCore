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
#include "rapidUtil/RapidHelper.h"

// SHA-1 hashing
#include "irgSha1/Sha1.h"

// Robot parameters
#include "miro/Robot.h"
#include "miro/RobotParameters.h"

// DDS/Rapid includes
#include "knDds/DdsSupport.h"
#include "knDds/DdsTypedSupplier.h"
#include "knDds/DdsEntitiesFactorySvc.h"
#include "knDds/KnDdsParameters.h"

// FileAnnounce includes
#include "rapidDds/FileAnnounce.h"
#include "rapidDds/FileAnnounceSupport.h"
#include "rapidDds/RapidConstants.h"

// For PATH_MAX in os_includes/os_limits.h
#include <ace/Basic_Types.h>
#include <ace/OS_NS_sys_stat.h>

// stdlib includes
#include <iostream>
#include <fstream>
#include <string>

std::string abspath(std::string const& path)
{
  char abspath[PATH_MAX];
  std::string path_copy(path);

  // not an absolute path, append to CWD
  if (path[0] != '/') {
    ACE_OS::getcwd(abspath, PATH_MAX - 1);
    path_copy = abspath;
    path_copy += "/";
    path_copy += path;
  }

  // resolve relative things and symlinks
  ACE_OS::realpath(path_copy.c_str(), abspath);
  return std::string(abspath);
}

// hash the contents of a file. include the filename as part of the hash
// as well. this will guarantee uniqueness when multiple copies of the file
// exist in multiple places.
// *NOTE* Because of this, the output for this will differ from that of
// `sha1sum file`
std::string hashFile(std::string const& path)
{
  irg::SHA1Hash hash;
  unsigned char content[1024];

  hash.init();
  hash.update((const unsigned char*) path.c_str(), path.size());

  std::ifstream in(path.c_str(), std::ios_base::binary | std::ios_base::in);
  do {
    in.read((char *) content, 1024);
    hash.update(content, in.gcount());
  }
  while(!in.eof());

  return hash.hexString(hash.final());
}

int main(int argc, char * argv[])
{
  Miro::Log::init(argc, argv);
  Miro::Robot::init(argc, argv);

  kn::DdsEntitiesFactorySvcParameters * params =
    kn::DdsEntitiesFactorySvcParameters::instance();

  // alter default parameters
  params->defaultLibrary = "RapidQosLibrary";

  kn::DdsSupport::init(argc, argv);

  // Hardcode participant name and participant Qos Profile
  params->participants[0].participantName = "FileAnnounceWriter";
  params->participants[0].profile = "RapidDefaultQos";

  kn::DdsEntitiesFactorySvc ddsEntities;
  ddsEntities.init(params);

  {
    kn::DdsTypedSupplier<rapid::FileAnnounce> publisher(rapid::FILEANNOUNCE_TOPIC,
                                                        "",
                                                        "RapidFileAnnounceProfile");

    rapid::FileAnnounce& announce = publisher.event();
    rapid::RapidHelper::initHeader(announce.hdr);

    std::cout << "List of files (separated by newlines): " << std::endl;

    std::string tmp;

    std::cin >> tmp;
    while (!std::cin.eof()) {
      std::string path(abspath(tmp));
      ACE_stat stat;

      // make sure we can read the file and that it exists
      if (ACE_OS::stat(path.c_str(), &stat) < 0) {
        std::cerr << "Error stat'ing " << path << std::endl;
      }
      else {
        rapid::RapidHelper::updateHeader(announce.hdr);

        announce.fileSize = stat.st_size;

        // generate uuid for this file
        strncpy(announce.fileUuid, hashFile(path).c_str(), 64);

        // make into a valid file uri
        path.insert(0, "file://");
        strncpy(announce.fileLocator, path.c_str(), 256);

        // publish
        publisher.sendEvent();
      }

      std::cin >> tmp;
    }
  }

  ddsEntities.fini();
  return 0;
}
