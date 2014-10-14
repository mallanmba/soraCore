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
#include "MacroManager.h"
#include "CommandExceptions.h"
#include "RapidSubsystemRepository.h"

#include "rapidIo/RapidIoParameters.h"
#include "rapidIo/TextMessager.h"
#include "rapidDds/RapidConstants.h"

#include "knDds/DdsEventLoop.h"
#include "knShare/Functional.h"
#include "knShare/Log.h"

#include "miro/ConfigDocument.h"

#include <QFile>
#include <QTextStream>
#include <QIODevice>

static const char* className = "MacroManager";

namespace rapid
{
  using namespace std;
  using namespace Miro;
  
#ifndef _WIN32 // FIXME - Singleton probs on win32
#  define SEND_RAPID_TEXTMESSAGE(MSGLEVEL, MSGCONTENT) TextMessager::instance()->sendText(className, MSGLEVEL, MSGCONTENT);
#else
#  define SEND_RAPID_TEXTMESSAGE(MSGLEVEL, MSGCONTENT)
#endif 
  
  namespace
  {
    // wrap delete_data because after 5.1.0, the method
    // takes two arguments and can't be used as a deleter
    DDS_ReturnCode_t delete_MacroConfig(rapid::MacroConfig* ptr)
    {
      return MacroConfigTypeSupport::delete_data(ptr);
    }
  }


  MacroManager::MacroManager(MacroManagerParameters const& params, const std::string& entityName) :
    m_params(params),
    m_provider(params.provider, entityName)
  {
    {
      // load macros from disk
      MacroPtr conf(rapid::MacroConfig::TypeSupport::create_data(), delete_MacroConfig);
      KN_INFO("MacroManager loading persistency file: %s", persistencyFileName().c_str());
      ConfigDocument document;
      document.init(persistencyFileName());
      document.setSection("Rapid");
      // get previous macro manager state
      PersistentMacroManagerStateParameters state;
      document.getParameters("kn::PersistentMacroManagerStateParameters", state);

      // add macros from persistency file
      vector<MacroConfigParameters>::const_iterator first, last = state.macros.end();
      for (first = state.macros.begin(); first != last; ++first) {
        try {
          *conf <<= *first;
          addMacro(*conf);
        }
        catch (std::exception const& e) {
          KN_ERROR_OSTR("Macro " << conf->name << " from persistency file rejected: " << e.what());
        }
      }
    }

    // publish state
    publishMacroState();
    saveMacros();
  }

  /**
   * receive uploaded plans
   */
  void
  MacroManager::operator() (rapid::MacroConfig const * macro)
  {
    try { // add macro to list
      addMacro(*macro);

      publishMacroState();
      saveMacros();
      std::string msg("Macro successfully uploaded: "+std::string(macro->name));
      SEND_RAPID_TEXTMESSAGE(rapid::MSG_INFO, msg.c_str());
      KN_INFO_OSTR(msg);
    }
    catch (EDuplicate const& e) {
      std::string msg("Duplicate macro upload: "+std::string(e.what()));
      SEND_RAPID_TEXTMESSAGE(rapid::MSG_ERROR, msg.c_str());
      MIRO_LOG(LL_ERROR, msg.c_str());
    }
    catch (std::exception const& e) {
      std::string msg("Macro upload not accepted: "+std::string(e.what()));
      SEND_RAPID_TEXTMESSAGE(rapid::MSG_ERROR, msg.c_str());
      MIRO_LOG(LL_ERROR, msg.c_str());
    }
  }

  /**
   * connect to event loop
   */
  void
  MacroManager::connect(kn::DdsEventLoop& eventLoop)
  {
    eventLoop.connect<rapid::MacroConfig>(this,
                                          rapid::MACRO_CONFIG_TOPIC + m_params.configUpload.topicSuffix,
                                          m_params.configUpload.parentNode,
                                          m_params.configUpload.profile,
                                          m_params.configUpload.library);
  }

  /**
   *
   */
  void
  MacroManager::publishMacroState()
  {
    rapid::MacroProvider::MacroConfigVector macros;
    macros.reserve(m_macros.size());

    MacroMap::const_iterator first, last = m_macros.end();
    for (first = m_macros.begin(); first != last; ++first) {
      macros.push_back(first->second);
    }

    m_provider.updateMacroState(macros);
  }

  /**
   * add macro to MacroManager. Does some checks for validity first.
   */
  void
  MacroManager::addMacro(rapid::MacroConfig const& macro)
  {
    const size_t MAX_cmdIdSuffix_LENGTH = 31;
    stringstream msg;
    RapidSubsystemRepository::InstanceMap subsystemRepo;
    subsystemRepo = RapidSubsystemRepository::instance()->exportMap();

    vector<string> suffixes;
    suffixes.reserve(macro.commands.length());
    for (DDS::Long i = 0; i < macro.commands.length(); ++i) {
      suffixes.push_back(macro.commands[i].cmdIdSuffix);
      // check if subsystem exists
      string ssName(macro.commands[i].subsysName);
      if(subsystemRepo.find(ssName) == subsystemRepo.end()) {
        KN_DEBUG_OSTR("subsystemRepo has " << subsystemRepo.size() << " entries");
        RapidSubsystemRepository::InstanceMap::iterator it;
        KN_DEBUG("RapidSubsystemRepository contents:");
        for(it = subsystemRepo.begin(); it != subsystemRepo.end(); ++it) {
          KN_DEBUG_OSTR("    key=\"" << it->first << "\"");
        }
        msg << "Subsystem \"" << ssName << "\" does not exist (macro command " << i << ") ["<< macro.name << "]";

        boost::throw_exception(ENotFound(msg.str()));
      }
    }

    sort(suffixes.begin(), suffixes.end());
    vector<string>::iterator newLast = unique(suffixes.begin(), suffixes.end());
    if (newLast != suffixes.end()) {
      msg << "MacroManager::addMacro() - duplicate cmdIdSuffix(es) in plan [" << macro.name << "]: " << *newLast;
      boost::throw_exception(EBadMacro(msg.str()));
    }

    vector<string>::const_iterator first, last = suffixes.end();
    for (first = suffixes.begin(); first != last; ++first) {
      if (first->length() > MAX_cmdIdSuffix_LENGTH) {
        msg << "MacroManager::addMacro() - cmdIdSuffix in plan [" << macro.name << "] too long: (" << first->length() << ")" << *first;
        boost::throw_exception(EBadMacro(msg.str()));
      }
    }

    MacroMap::const_iterator iter = m_macros.find(macro.name);
    if (iter != m_macros.end()) {
      if (iter->second->hdr.serial == macro.hdr.serial) {
        boost::throw_exception(EDuplicate(macro.name));
      }
    }

    // copy macro into m_macros map
    MacroPtr m(rapid::MacroConfig::TypeSupport::create_data(), delete_MacroConfig);
    rapid::MacroConfig::TypeSupport::copy_data(m.get(), &macro);
    m_macros[macro.name] = m;

    // publish new macro config instance
    m_provider.configSupplier().sendEvent(*m);
  }

  /**
   *
   */
  void
  MacroManager::delMacro(std::string const& name)
  {
    MacroMap::iterator iter = m_macros.find(name);
    if (iter == m_macros.end()) {
      boost::throw_exception(EExecFailed("Trying to load unknown macro name: " + name));
    }

    // invalidate dds macro-config instance
    m_provider.configSupplier().dataWriter().unregister_instance(*(iter->second), DDS_HANDLE_NIL);
    m_macros.erase(iter);


    publishMacroState();
    saveMacros();
  }

  MacroManager::MacroPtr
  MacroManager::retreiveMacro(std::string const& name, int serial)
  {
    MacroMap::const_iterator iter = m_macros.find(name);
    if (iter == m_macros.end()) {
      boost::throw_exception(EExecFailed("Trying to load unknown macro name: " + name));
    }
    if (iter->second->hdr.serial != serial) {
      stringstream ostr;
      ostr << "Trying to load wrong version of macro "
           << name
           << ": "
           << serial
           << ". - Current version is: "
           << iter->second->hdr.serial;
      boost::throw_exception(EExecFailed(ostr.str()));
    }

    return iter->second;
  }

  void
  MacroManager::saveMacros() const
  {
    QDomDocument document("MiroConfigDocument");

    // init default document
    QDomElement root = document.createElement("config");
    QDomNode n = document.appendChild( root );
    QDomElement section = document.createElement("section");
    section.setAttribute("name", "Rapid");
    n = n.appendChild( section );

    PersistentMacroManagerStateParameters state;
    state.macros.reserve(m_macros.size());

    MacroMap::const_iterator first, last = m_macros.end();
    for (first = m_macros.begin(); first != last; ++first) {
      MacroConfigParameters m;
      *first->second >>= m;

      state.macros.push_back(m);
    }

    QDomElement e = state >>= n;
    e.setAttribute("name", "kn::PersistentMacroManagerStateParameters");

    string tmpFileName = persistencyFileName() + ".part";
    QFile f(tmpFileName.c_str());
    if (!f.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
      MIRO_LOG_OSTR(LL_ERROR, "MacroManager: file error!: " + persistencyFileName());
    }
    else {
      QTextStream ts(&f);
      document.save(ts, 2);
      rename(tmpFileName.c_str(), persistencyFileName().c_str());
    }
  }

  string
  MacroManager::persistencyFileName() const
  {
    string fileName;
    if (m_params.persistencyFile == "~/.MacroManagerConfig.xml") {
      // read from file
      char const * const home = getenv("HOME");
      fileName = home;
      if (fileName.length() > 0)
        fileName += "/";
      fileName += ".MacroManagerConfig.xml";
    }
    else {
      fileName = m_params.persistencyFile;
    }
    return fileName;
  }

}
