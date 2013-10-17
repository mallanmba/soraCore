
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl rapidUtil
// ------------------------------
#ifndef RAPIDUTIL_EXPORT_H
#define RAPIDUTIL_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (RAPIDUTIL_HAS_DLL)
#  define RAPIDUTIL_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && RAPIDUTIL_HAS_DLL */

#if !defined (RAPIDUTIL_HAS_DLL)
#  define RAPIDUTIL_HAS_DLL 1
#endif /* ! RAPIDUTIL_HAS_DLL */

#if defined (RAPIDUTIL_HAS_DLL) && (RAPIDUTIL_HAS_DLL == 1)
#  if defined (RAPIDUTIL_BUILD_DLL)
#    define rapidUtil_Export ACE_Proper_Export_Flag
#    define RAPIDUTIL_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define RAPIDUTIL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* RAPIDUTIL_BUILD_DLL */
#    define rapidUtil_Export ACE_Proper_Import_Flag
#    define RAPIDUTIL_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define RAPIDUTIL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* RAPIDUTIL_BUILD_DLL */
#else /* RAPIDUTIL_HAS_DLL == 1 */
#  define rapidUtil_Export
#  define RAPIDUTIL_SINGLETON_DECLARATION(T)
#  define RAPIDUTIL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* RAPIDUTIL_HAS_DLL == 1 */

// Set RAPIDUTIL_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (RAPIDUTIL_NTRACE)
#  if (ACE_NTRACE == 1)
#    define RAPIDUTIL_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define RAPIDUTIL_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !RAPIDUTIL_NTRACE */

#if (RAPIDUTIL_NTRACE == 1)
#  define RAPIDUTIL_TRACE(X)
#else /* (RAPIDUTIL_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define RAPIDUTIL_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (RAPIDUTIL_NTRACE == 1) */

#endif /* RAPIDUTIL_EXPORT_H */

// End of auto generated file.
