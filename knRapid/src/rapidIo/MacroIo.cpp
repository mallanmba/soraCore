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
#include "MacroIo.h"
#include "RapidIoParameters.h"

#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"

#include "rapidDds/MacroConfig.h"

#include <iostream>
#include <cassert>

namespace rapid
{
  std::ostream& operator<< (std::ostream& ostr, MacroCommand const& rhs)
  {
    ostr << "{" 
         << rhs.cmdName << ", "
         << rhs.cmdIdSuffix << ", "
         << rhs.subsysName << ", "
         << rhs.arguments << ", "
         << rhs.metaData
         << "}";
    return ostr;
  }
    
  std::ostream& operator<< (std::ostream& ostr, MacroCommandSequence128 const& rhs)
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
    
  std::ostream& operator<< (std::ostream& ostr, MacroConfig const& rhs)
  {
    ostr << "MacroConfig: {" 
         << rhs.hdr << ", " 
         << rhs.name << ", "
         << rhs.commands << ", "
         << rhs.metaData << ", "
         << rhs.commandMetaDataSpec
         << "}";
    return ostr;
  }
    
  void operator<<=(MacroCommand& dst, MacroCommandParameters const& src)
  {
    strncpy(dst.cmdName, src.cmdName.c_str(), 63);
    dst.cmdName[63] = 0;
    strncpy(dst.cmdIdSuffix, src.cmdIdSuffix.c_str(), 63);
    dst.cmdIdSuffix[63] = 0;
    strncpy(dst.subsysName, src.subsysName.c_str(), 31);
    dst.subsysName[31] = 0;
      
    dst.arguments <<= src.arguments;
    dst.metaData <<= src.metaData;   
  }

  void operator<<=(MacroConfig& config, MacroConfigParameters const& params)
  {
    config.hdr <<= params.hdr;
      
    strncpy(config.name, params.name.c_str(), 63);
    config.name[63] = 0;
      
    assert(params.commands.size() < 128);
    config.commands.ensure_length(params.commands.size(), 128);
    for (int i = 0; i < config.commands.length(); ++i) {
      config.commands[i] <<= params.commands[i];
    }
      
    config.metaData <<= params.metaData;
    config.commandMetaDataSpec <<= params.commandMetaDataSpec;
  }

  void operator<<=(MacroConfig& config, MessageParameters const& params)
  {
    config.hdr <<= params.hdr;
  }


  void operator>>=(MacroCommand const& src, MacroCommandParameters& dst)
  {
    dst.cmdName = src.cmdName;
    dst.cmdIdSuffix = src.cmdIdSuffix;
    dst.subsysName = src.subsysName;
      
    src.arguments >>= dst.arguments;
    src.metaData >>= dst.metaData;   
  }

  void operator>>=(MacroConfig const& config, MacroConfigParameters& params)
  {
    config.hdr >>= params.hdr;
      
    params.name = config.name;
      
    params.commands.resize(config.commands.length());
    for (size_t i = 0; i < params.commands.size(); ++i) {
      config.commands[i] >>= params.commands[i];
    }
      
    params.metaData <<= config.metaData;
    params.commandMetaDataSpec <<= config.commandMetaDataSpec;
  }

} // namespace rapid
