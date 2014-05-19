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

#include "rapidIo/RapidIoParameters.h"
#include "rapidDds/RapidConstants.h"

#include "knDds/DdsEventLoop.h"
#include "knShare/Functional.h"
#include "miro/ConfigDocument.h"

#include <QFile>
#include <QTextStream>
#include <QIODevice>


namespace rapid
{
  using namespace std;
  using namespace Miro;

  namespace {
    // wrap delete_data because after 5.1.0, the method
    // takes two arguments and can't be used as a deleter
    DDS_ReturnCode_t delete_MacroConfig(rapid::MacroConfig* ptr) {
      return MacroConfigTypeSupport::delete_data(ptr);
    }
  }


  MacroManager::MacroManager(MacroManagerParameters const& params, const std::string& entityName) :
    m_params(params),
    m_provider(params.provider, entityName)
  {

    // load macros from disk
    // publish state

    MacroPtr conf(rapid::MacroConfig::TypeSupport::create_data(),
                  delete_MacroConfig);

    {
      ConfigDocument document;
      document.init(persistencyFileName());
      document.setSection("Rapid");
      // get previous macro manager state
      PersistentMacroManagerStateParameters state;
      document.getParameters("kn::PersistentMacroManagerStateParameters", state);

      // publish them one by one
      vector<MacroConfigParameters>::const_iterator first, last = state.macros.end();
      for (first = state.macros.begin(); first != last; ++first) {
        *conf <<= *first;
        addMacro(*conf);
      }
    }

    publishMacroState();
    saveMacros();
  }

  void
  MacroManager::operator() (rapid::MacroConfig const * macro)
  {
    try {
      // add macro to list
      addMacro(*macro);

      publishMacroState();
      saveMacros();
    }
    catch (EDuplicate const& e) {
      MIRO_LOG_OSTR(LL_ERROR, "Duplicate macro upload: " << e.what());
    }
    catch (std::exception const& e) {
      MIRO_LOG_OSTR(LL_ERROR, "Macro upload not accepted: " << e.what());
    }
  }

  void
  MacroManager::connect(kn::DdsEventLoop& eventLoop)
  {
     eventLoop.connect<rapid::MacroConfig>(this,
                                                rapid::MACRO_CONFIG_TOPIC +
                                                m_params.configUpload.topicSuffix,
                                                m_params.configUpload.parentNode,
                                                m_params.configUpload.profile,
                                                m_params.configUpload.library);
  }

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

  void
  MacroManager::addMacro(rapid::MacroConfig const& macro)
  {
    vector<string> suffixes;
    suffixes.reserve(macro.commands.length());
    for (DDS::Long i = 0; i < macro.commands.length(); ++i) {
      suffixes.push_back(macro.commands[i].cmdIdSuffix);
    }
    sort(suffixes.begin(), suffixes.end());
    vector<string>::iterator newLast = unique(suffixes.begin(), suffixes.end());
    if (newLast != suffixes.end()) {
      MIRO_LOG_OSTR(LL_ERROR, "MacroManager::addMacro() - duplicate cmdIdSuffix(es) in plan [" << macro.name << "]: " << *newLast);
      return;
    }

    vector<string>::const_iterator first, last = suffixes.end();
    for (first = suffixes.begin(); first != last; ++first) {
      if (first->length() > 31) {
        MIRO_LOG_OSTR(LL_ERROR, "MacroManager::addMacro() - cmdIdSuffix in plan [" << macro.name << "] too long: (" << first->length() << ")" << *first);
        return;
      }
    }

    MacroMap::const_iterator iter = m_macros.find(macro.name);
    if (iter != m_macros.end()) {
      if (iter->second->hdr.serial == macro.hdr.serial) {
        boost::throw_exception(EDuplicate(macro.name));
      }
    }

    MacroPtr m(rapid::MacroConfig::TypeSupport::create_data(),
               delete_MacroConfig);
    rapid::MacroConfig::TypeSupport::copy_data(m.get(), &macro);
    m_macros[macro.name] = m;

    // publish new macro config instance
    m_provider.configSupplier().sendEvent(*m);
  }

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
  MacroManager::retreiveMacro(std::string const& name, int serial){
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
