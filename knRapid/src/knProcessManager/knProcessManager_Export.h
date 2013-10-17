
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knProcessManager
// ------------------------------
#ifndef KNPROCESSMANAGER_EXPORT_H
#define KNPROCESSMANAGER_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNPROCESSMANAGER_HAS_DLL)
#  define KNPROCESSMANAGER_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNPROCESSMANAGER_HAS_DLL */

#if !defined (KNPROCESSMANAGER_HAS_DLL)
#  define KNPROCESSMANAGER_HAS_DLL 1
#endif /* ! KNPROCESSMANAGER_HAS_DLL */

#if defined (KNPROCESSMANAGER_HAS_DLL) && (KNPROCESSMANAGER_HAS_DLL == 1)
#  if defined (KNPROCESSMANAGER_BUILD_DLL)
#    define knProcessManager_Export ACE_Proper_Export_Flag
#    define KNPROCESSMANAGER_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNPROCESSMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNPROCESSMANAGER_BUILD_DLL */
#    define knProcessManager_Export ACE_Proper_Import_Flag
#    define KNPROCESSMANAGER_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNPROCESSMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNPROCESSMANAGER_BUILD_DLL */
#else /* KNPROCESSMANAGER_HAS_DLL == 1 */
#  define knProcessManager_Export
#  define KNPROCESSMANAGER_SINGLETON_DECLARATION(T)
#  define KNPROCESSMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNPROCESSMANAGER_HAS_DLL == 1 */

// Set KNPROCESSMANAGER_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNPROCESSMANAGER_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNPROCESSMANAGER_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNPROCESSMANAGER_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNPROCESSMANAGER_NTRACE */

#if (KNPROCESSMANAGER_NTRACE == 1)
#  define KNPROCESSMANAGER_TRACE(X)
#else /* (KNPROCESSMANAGER_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNPROCESSMANAGER_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNPROCESSMANAGER_NTRACE == 1) */

#endif /* KNPROCESSMANAGER_EXPORT_H */

// End of auto generated file.
