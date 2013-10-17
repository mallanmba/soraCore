
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl libknC
// ------------------------------
#ifndef LIBKNC_EXPORT_H
#define LIBKNC_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (LIBKNC_HAS_DLL)
#  define LIBKNC_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && LIBKNC_HAS_DLL */

#if !defined (LIBKNC_HAS_DLL)
#  define LIBKNC_HAS_DLL 1
#endif /* ! LIBKNC_HAS_DLL */

#if defined (LIBKNC_HAS_DLL) && (LIBKNC_HAS_DLL == 1)
#  if defined (LIBKNC_BUILD_DLL)
#    define libknC_Export ACE_Proper_Export_Flag
#    define LIBKNC_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define LIBKNC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* LIBKNC_BUILD_DLL */
#    define libknC_Export ACE_Proper_Import_Flag
#    define LIBKNC_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define LIBKNC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* LIBKNC_BUILD_DLL */
#else /* LIBKNC_HAS_DLL == 1 */
#  define libknC_Export
#  define LIBKNC_SINGLETON_DECLARATION(T)
#  define LIBKNC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* LIBKNC_HAS_DLL == 1 */

// Set LIBKNC_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (LIBKNC_NTRACE)
#  if (ACE_NTRACE == 1)
#    define LIBKNC_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define LIBKNC_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !LIBKNC_NTRACE */

#if (LIBKNC_NTRACE == 1)
#  define LIBKNC_TRACE(X)
#else /* (LIBKNC_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define LIBKNC_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (LIBKNC_NTRACE == 1) */

#endif /* LIBKNC_EXPORT_H */

// End of auto generated file.
