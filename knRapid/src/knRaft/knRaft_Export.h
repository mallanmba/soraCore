
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knRaft
// ------------------------------
#ifndef KNRAFT_EXPORT_H
#define KNRAFT_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNRAFT_HAS_DLL)
#  define KNRAFT_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNRAFT_HAS_DLL */

#if !defined (KNRAFT_HAS_DLL)
#  define KNRAFT_HAS_DLL 1
#endif /* ! KNRAFT_HAS_DLL */

#if defined (KNRAFT_HAS_DLL) && (KNRAFT_HAS_DLL == 1)
#  if defined (KNRAFT_BUILD_DLL)
#    define knRaft_Export ACE_Proper_Export_Flag
#    define KNRAFT_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNRAFT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNRAFT_BUILD_DLL */
#    define knRaft_Export ACE_Proper_Import_Flag
#    define KNRAFT_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNRAFT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNRAFT_BUILD_DLL */
#else /* KNRAFT_HAS_DLL == 1 */
#  define knRaft_Export
#  define KNRAFT_SINGLETON_DECLARATION(T)
#  define KNRAFT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNRAFT_HAS_DLL == 1 */

// Set KNRAFT_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNRAFT_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNRAFT_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNRAFT_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNRAFT_NTRACE */

#if (KNRAFT_NTRACE == 1)
#  define KNRAFT_TRACE(X)
#else /* (KNRAFT_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNRAFT_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNRAFT_NTRACE == 1) */

#endif /* KNRAFT_EXPORT_H */

// End of auto generated file.
