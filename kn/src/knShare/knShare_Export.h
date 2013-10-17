
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knShare
// ------------------------------
#ifndef KNSHARE_EXPORT_H
#define KNSHARE_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNSHARE_HAS_DLL)
#  define KNSHARE_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNSHARE_HAS_DLL */

#if !defined (KNSHARE_HAS_DLL)
#  define KNSHARE_HAS_DLL 1
#endif /* ! KNSHARE_HAS_DLL */

#if defined (KNSHARE_HAS_DLL) && (KNSHARE_HAS_DLL == 1)
#  if defined (KNSHARE_BUILD_DLL)
#    define knShare_Export ACE_Proper_Export_Flag
#    define KNSHARE_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNSHARE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNSHARE_BUILD_DLL */
#    define knShare_Export ACE_Proper_Import_Flag
#    define KNSHARE_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNSHARE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNSHARE_BUILD_DLL */
#else /* KNSHARE_HAS_DLL == 1 */
#  define knShare_Export
#  define KNSHARE_SINGLETON_DECLARATION(T)
#  define KNSHARE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNSHARE_HAS_DLL == 1 */

// Set KNSHARE_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNSHARE_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNSHARE_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNSHARE_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNSHARE_NTRACE */

#if (KNSHARE_NTRACE == 1)
#  define KNSHARE_TRACE(X)
#else /* (KNSHARE_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNSHARE_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNSHARE_NTRACE == 1) */

#endif /* KNSHARE_EXPORT_H */

// End of auto generated file.
