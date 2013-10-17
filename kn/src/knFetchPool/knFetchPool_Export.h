
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knFetchPool
// ------------------------------
#ifndef KNFETCHPOOL_EXPORT_H
#define KNFETCHPOOL_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNFETCHPOOL_HAS_DLL)
#  define KNFETCHPOOL_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNFETCHPOOL_HAS_DLL */

#if !defined (KNFETCHPOOL_HAS_DLL)
#  define KNFETCHPOOL_HAS_DLL 1
#endif /* ! KNFETCHPOOL_HAS_DLL */

#if defined (KNFETCHPOOL_HAS_DLL) && (KNFETCHPOOL_HAS_DLL == 1)
#  if defined (KNFETCHPOOL_BUILD_DLL)
#    define knFetchPool_Export ACE_Proper_Export_Flag
#    define KNFETCHPOOL_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNFETCHPOOL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNFETCHPOOL_BUILD_DLL */
#    define knFetchPool_Export ACE_Proper_Import_Flag
#    define KNFETCHPOOL_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNFETCHPOOL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNFETCHPOOL_BUILD_DLL */
#else /* KNFETCHPOOL_HAS_DLL == 1 */
#  define knFetchPool_Export
#  define KNFETCHPOOL_SINGLETON_DECLARATION(T)
#  define KNFETCHPOOL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNFETCHPOOL_HAS_DLL == 1 */

// Set KNFETCHPOOL_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNFETCHPOOL_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNFETCHPOOL_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNFETCHPOOL_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNFETCHPOOL_NTRACE */

#if (KNFETCHPOOL_NTRACE == 1)
#  define KNFETCHPOOL_TRACE(X)
#else /* (KNFETCHPOOL_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNFETCHPOOL_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNFETCHPOOL_NTRACE == 1) */

#endif /* KNFETCHPOOL_EXPORT_H */

// End of auto generated file.
