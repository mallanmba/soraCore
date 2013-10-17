
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knSystemInfoSvc
// ------------------------------
#ifndef KNSYSTEMINFOSVC_EXPORT_H
#define KNSYSTEMINFOSVC_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNSYSTEMINFOSVC_HAS_DLL)
#  define KNSYSTEMINFOSVC_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNSYSTEMINFOSVC_HAS_DLL */

#if !defined (KNSYSTEMINFOSVC_HAS_DLL)
#  define KNSYSTEMINFOSVC_HAS_DLL 1
#endif /* ! KNSYSTEMINFOSVC_HAS_DLL */

#if defined (KNSYSTEMINFOSVC_HAS_DLL) && (KNSYSTEMINFOSVC_HAS_DLL == 1)
#  if defined (KNSYSTEMINFOSVC_BUILD_DLL)
#    define knSystemInfoSvc_Export ACE_Proper_Export_Flag
#    define KNSYSTEMINFOSVC_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNSYSTEMINFOSVC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNSYSTEMINFOSVC_BUILD_DLL */
#    define knSystemInfoSvc_Export ACE_Proper_Import_Flag
#    define KNSYSTEMINFOSVC_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNSYSTEMINFOSVC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNSYSTEMINFOSVC_BUILD_DLL */
#else /* KNSYSTEMINFOSVC_HAS_DLL == 1 */
#  define knSystemInfoSvc_Export
#  define KNSYSTEMINFOSVC_SINGLETON_DECLARATION(T)
#  define KNSYSTEMINFOSVC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNSYSTEMINFOSVC_HAS_DLL == 1 */

// Set KNSYSTEMINFOSVC_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNSYSTEMINFOSVC_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNSYSTEMINFOSVC_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNSYSTEMINFOSVC_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNSYSTEMINFOSVC_NTRACE */

#if (KNSYSTEMINFOSVC_NTRACE == 1)
#  define KNSYSTEMINFOSVC_TRACE(X)
#else /* (KNSYSTEMINFOSVC_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNSYSTEMINFOSVC_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNSYSTEMINFOSVC_NTRACE == 1) */

#endif /* KNSYSTEMINFOSVC_EXPORT_H */

// End of auto generated file.
