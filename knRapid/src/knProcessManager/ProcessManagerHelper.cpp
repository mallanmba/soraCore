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
#include "ProcessManagerHelper.h"
#include "ProcessManagerParameters.h"

#include "rapidUtil/RapidHelper.h"

#include "rapidExtDds/ProcessManagerConfig.h"
#include "rapidExtDds/ProcessManagerConfigSupport.h"

#include "miro/Exception.h"

namespace kn
{
  using namespace std;

  rapid::ext::ProcessManagerConfig * 
  ProcessManagerHelper::createConfigFromParams(rapid::ext::ProcessManagerConfigParameters const& params)
  {
    rapid::ext::ProcessManagerConfig * config =
      rapid::ext::ProcessManagerConfigTypeSupport::create_data();
    
    rapid::RapidHelper::initHeader(config->hdr,
                                   params.hdr.srcName,
                                   params.hdr.assetName,
                                   params.hdr.timeStamp,
                                   params.hdr.statusCode,
                                   params.hdr.serial);
    try {
	// check length restrictions
      if (params.configName.size() >= 64)
	throw Miro::Exception("Name too long (>= 64)");
      strcpy(config->configName, params.configName.c_str());

      config->processes.length(params.processes.size());
      for (int i = 0; i < config->processes.length(); ++i) {
	rapid::ext::ProcessConfig& proc = config->processes[i];
        rapid::ext::ProcessConfigParameters const& p = params.processes[i];
	
	// check length restrictions
	if (p.name.size() >= 64)
	  throw Miro::Exception("Name too long (>= 64)");
	if (p.comment.size() >= 64)
	  throw Miro::Exception("Comment too long (>=64)");
	
	strcpy(proc.name, p.name.c_str());
	strcpy(proc.comment, p.comment.c_str());
	proc.environment.length(p.environment.size());
	for (int j = 0; j < proc.environment.length(); ++j) {
	  if (p.environment[j].size() >= 256)
	    throw Miro::Exception("Environment too long (>=256)");
	  strcpy(proc.environment[j], p.environment[j].c_str());
	}
	
	if (p.workingDirectory.size() >= 256)
	  throw Miro::Exception("Working directory too long (>=256)");
	strcpy(proc.workingDirectory, p.workingDirectory.c_str());
	if (p.binaryName.size() >= 32)
	  throw Miro::Exception("Binary name too long (>=32)");
	strcpy(proc.binaryName, p.binaryName.c_str());
	if (p.commandLineParams.size() >= 256)
	  throw Miro::Exception("Command-line parameterse too long (>=256)");
	strcpy(proc.commandLineParams, p.commandLineParams.c_str());
	
	proc.selfTerminating = p.selfTerminating;
	proc.startOnInit = p.startOnInit;
	proc.waitOnInit = p.waitOnInit;
	proc.startupTimeout = p.startupTimeout.msec();
	
	if (p.runningMatch.size() >= 256)
	  throw Miro::Exception("Running match too long (>=256)");
	strcpy(proc.runningMatch, p.runningMatch.c_str());
	if (p.aliveInterface.size() >= 32)
	  throw Miro::Exception("Alive interface name too long (>=32)");
	strcpy(proc.aliveInterface, p.aliveInterface.c_str());
	
	proc.restartsOnFailure = p.restartsOnFailure;
      }
    }
    catch (...) {
      rapid::ext::ProcessManagerConfigTypeSupport::delete_data(config);
      throw;
    }
    return config;
  }
}
