
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knDdsUtil
// ------------------------------
#ifndef KNDDSUTIL_EXPORT_H
#define KNDDSUTIL_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNDDSUTIL_HAS_DLL)
#  define KNDDSUTIL_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNDDSUTIL_HAS_DLL */

#if !defined (KNDDSUTIL_HAS_DLL)
#  define KNDDSUTIL_HAS_DLL 1
#endif /* ! KNDDSUTIL_HAS_DLL */

#if defined (KNDDSUTIL_HAS_DLL) && (KNDDSUTIL_HAS_DLL == 1)
#  if defined (KNDDSUTIL_BUILD_DLL)
#    define knDdsUtil_Export ACE_Proper_Export_Flag
#    define KNDDSUTIL_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNDDSUTIL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNDDSUTIL_BUILD_DLL */
#    define knDdsUtil_Export ACE_Proper_Import_Flag
#    define KNDDSUTIL_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNDDSUTIL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNDDSUTIL_BUILD_DLL */
#else /* KNDDSUTIL_HAS_DLL == 1 */
#  define knDdsUtil_Export
#  define KNDDSUTIL_SINGLETON_DECLARATION(T)
#  define KNDDSUTIL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNDDSUTIL_HAS_DLL == 1 */

// Set KNDDSUTIL_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNDDSUTIL_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNDDSUTIL_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNDDSUTIL_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNDDSUTIL_NTRACE */

#if (KNDDSUTIL_NTRACE == 1)
#  define KNDDSUTIL_TRACE(X)
#else /* (KNDDSUTIL_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNDDSUTIL_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNDDSUTIL_NTRACE == 1) */

#endif /* KNDDSUTIL_EXPORT_H */

// End of auto generated file.
