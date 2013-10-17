
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knFrameStore
// ------------------------------
#ifndef KNFRAMESTORE_EXPORT_H
#define KNFRAMESTORE_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNFRAMESTORE_HAS_DLL)
#  define KNFRAMESTORE_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNFRAMESTORE_HAS_DLL */

#if !defined (KNFRAMESTORE_HAS_DLL)
#  define KNFRAMESTORE_HAS_DLL 1
#endif /* ! KNFRAMESTORE_HAS_DLL */

#if defined (KNFRAMESTORE_HAS_DLL) && (KNFRAMESTORE_HAS_DLL == 1)
#  if defined (KNFRAMESTORE_BUILD_DLL)
#    define knFrameStore_Export ACE_Proper_Export_Flag
#    define KNFRAMESTORE_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNFRAMESTORE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNFRAMESTORE_BUILD_DLL */
#    define knFrameStore_Export ACE_Proper_Import_Flag
#    define KNFRAMESTORE_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNFRAMESTORE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNFRAMESTORE_BUILD_DLL */
#else /* KNFRAMESTORE_HAS_DLL == 1 */
#  define knFrameStore_Export
#  define KNFRAMESTORE_SINGLETON_DECLARATION(T)
#  define KNFRAMESTORE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNFRAMESTORE_HAS_DLL == 1 */

// Set KNFRAMESTORE_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNFRAMESTORE_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNFRAMESTORE_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNFRAMESTORE_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNFRAMESTORE_NTRACE */

#if (KNFRAMESTORE_NTRACE == 1)
#  define KNFRAMESTORE_TRACE(X)
#else /* (KNFRAMESTORE_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNFRAMESTORE_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNFRAMESTORE_NTRACE == 1) */

#endif /* KNFRAMESTORE_EXPORT_H */

// End of auto generated file.
