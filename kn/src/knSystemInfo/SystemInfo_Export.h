
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl SystemInfo
// ------------------------------
#ifndef SYSTEMINFO_EXPORT_H
#define SYSTEMINFO_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (SYSTEMINFO_HAS_DLL)
#  define SYSTEMINFO_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && SYSTEMINFO_HAS_DLL */

#if !defined (SYSTEMINFO_HAS_DLL)
#  define SYSTEMINFO_HAS_DLL 1
#endif /* ! SYSTEMINFO_HAS_DLL */

#if defined (SYSTEMINFO_HAS_DLL) && (SYSTEMINFO_HAS_DLL == 1)
#  if defined (SYSTEMINFO_BUILD_DLL)
#    define SystemInfo_Export ACE_Proper_Export_Flag
#    define SYSTEMINFO_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define SYSTEMINFO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* SYSTEMINFO_BUILD_DLL */
#    define SystemInfo_Export ACE_Proper_Import_Flag
#    define SYSTEMINFO_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define SYSTEMINFO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* SYSTEMINFO_BUILD_DLL */
#else /* SYSTEMINFO_HAS_DLL == 1 */
#  define SystemInfo_Export
#  define SYSTEMINFO_SINGLETON_DECLARATION(T)
#  define SYSTEMINFO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* SYSTEMINFO_HAS_DLL == 1 */

// Set SYSTEMINFO_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (SYSTEMINFO_NTRACE)
#  if (ACE_NTRACE == 1)
#    define SYSTEMINFO_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define SYSTEMINFO_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !SYSTEMINFO_NTRACE */

#if (SYSTEMINFO_NTRACE == 1)
#  define SYSTEMINFO_TRACE(X)
#else /* (SYSTEMINFO_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define SYSTEMINFO_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (SYSTEMINFO_NTRACE == 1) */

#endif /* SYSTEMINFO_EXPORT_H */

// End of auto generated file.
