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
#include "ProcessManagerIo.h"
#include "RapidExtIoParameters.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidExtDds/ProcessManagerConfig.h"

#include "miro/Exception.h"

#include <iostream>
#include <cassert>
#include <cstdlib>

namespace rapid
{
  namespace ext
  {
    using namespace std;

    std::ostream& operator<< (std::ostream& ostr, ext::ProcessConfig const& rhs)
    {
      ostr << "{" << endl
           << "  " << rhs.name << endl
           << "  " << rhs.comment << endl
           << "{" << endl;
      for (int i = 0; i < rhs.environment.length(); ++i) {
        ostr << "    " << rhs.environment[i] << endl;
      }
      ostr << "}" << endl
           << "  " << rhs.workingDirectory << endl
           << "  " << rhs.binaryName << endl
           << "  " << rhs.commandLineParams << endl
           << "  " << rhs.selfTerminating << ", "
           << "  " << rhs.startOnInit << ", "
           << "  " << rhs.waitOnInit << endl
           << "  " << rhs.runningMatch << endl
           << "  " << rhs.aliveInterface << endl
           << "}";
      return ostr;
    }
    
    std::ostream& operator<< (std::ostream& ostr, ext::ProcessConfigSequence const& rhs)
    {
      ostr << "{";
      for (DDS_Long i = 0; i < rhs.length(); ++i) {
        if (i > 0) {
          ostr << ", ";
        }
        ostr << rhs[i];
      }
      ostr << "}";
      return ostr;
    }
    
    std::ostream& operator<< (std::ostream& ostr, ext::ProcessManagerConfig const& rhs)
    {
      ostr << "ProcessManagerConfig: {" 
           << rhs.hdr << ", " 
           << rhs.configName << ", "
           << rhs.processes 
           << "}";
      return ostr;
    }
    
    void operator<<=(ProcessConfig& dst, ProcessConfigParameters const& src)
    {
      // check length restrictions
      if (src.name.size() >= 64)
        throw Miro::Exception("Name too long (>= 64)");
      if (src.comment.size() >= 64)
        throw Miro::Exception("Comment too long (>=64)");
      
      strcpy(dst.name, src.name.c_str());
      strcpy(dst.comment, src.comment.c_str());
      dst.environment.length(src.environment.size());
      for (int j = 0; j < dst.environment.length(); ++j) {
	  if (src.environment[j].size() >= 256)
	    throw Miro::Exception("Environment too long (>=256)");
	  strcpy(dst.environment[j], src.environment[j].c_str());
      }
      
      if (src.workingDirectory.size() >= 256)
        throw Miro::Exception("Working directory too long (>=256)");
      strcpy(dst.workingDirectory, src.workingDirectory.c_str());
      if (src.binaryName.size() >= 32)
        throw Miro::Exception("Binary name too long (>=32)");
      strcpy(dst.binaryName, src.binaryName.c_str());
      if (src.commandLineParams.size() >= 256)
        throw Miro::Exception("Command-line parameterse too long (>=256)");
      strcpy(dst.commandLineParams, src.commandLineParams.c_str());
      
      dst.selfTerminating = src.selfTerminating;
      dst.startOnInit = src.startOnInit;
      dst.waitOnInit = src.waitOnInit;
      dst.startupTimeout = src.startupTimeout.msec();
      
      if (src.runningMatch.size() >= 256)
        throw Miro::Exception("Running match too long (>=256)");
      strcpy(dst.runningMatch, src.runningMatch.c_str());
      if (src.aliveInterface.size() >= 32)
        throw Miro::Exception("Alive interface name too long (>=32)");
      strcpy(dst.aliveInterface, src.aliveInterface.c_str());
      
      dst.restartsOnFailure = src.restartsOnFailure;
    }

    void operator<<=(ProcessManagerConfig& config, ProcessManagerConfigParameters const& params)
    {
      config.hdr <<= params.hdr;
      
      if (params.configName.size() >= 64)
	throw Miro::Exception("Name too long (>= 64)");
      strcpy(config.configName, params.configName.c_str());

      config.processes.length(params.processes.size());
      for (int i = 0; i < config.processes.length(); ++i) {
	config.processes[i] <<= params.processes[i];
      }
    }
  }
} // namespace rapid
