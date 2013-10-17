
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knSystemInfo
// ------------------------------
#ifndef KNSYSTEMINFO_EXPORT_H
#define KNSYSTEMINFO_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNSYSTEMINFO_HAS_DLL)
#  define KNSYSTEMINFO_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNSYSTEMINFO_HAS_DLL */

#if !defined (KNSYSTEMINFO_HAS_DLL)
#  define KNSYSTEMINFO_HAS_DLL 1
#endif /* ! KNSYSTEMINFO_HAS_DLL */

#if defined (KNSYSTEMINFO_HAS_DLL) && (KNSYSTEMINFO_HAS_DLL == 1)
#  if defined (KNSYSTEMINFO_BUILD_DLL)
#    define knSystemInfo_Export ACE_Proper_Export_Flag
#    define KNSYSTEMINFO_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNSYSTEMINFO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNSYSTEMINFO_BUILD_DLL */
#    define knSystemInfo_Export ACE_Proper_Import_Flag
#    define KNSYSTEMINFO_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNSYSTEMINFO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNSYSTEMINFO_BUILD_DLL */
#else /* KNSYSTEMINFO_HAS_DLL == 1 */
#  define knSystemInfo_Export
#  define KNSYSTEMINFO_SINGLETON_DECLARATION(T)
#  define KNSYSTEMINFO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNSYSTEMINFO_HAS_DLL == 1 */

// Set KNSYSTEMINFO_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNSYSTEMINFO_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNSYSTEMINFO_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNSYSTEMINFO_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNSYSTEMINFO_NTRACE */

#if (KNSYSTEMINFO_NTRACE == 1)
#  define KNSYSTEMINFO_TRACE(X)
#else /* (KNSYSTEMINFO_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNSYSTEMINFO_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNSYSTEMINFO_NTRACE == 1) */

#endif /* KNSYSTEMINFO_EXPORT_H */

// End of auto generated file.
