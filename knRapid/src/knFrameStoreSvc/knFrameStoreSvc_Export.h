
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knFrameStoreSvc
// ------------------------------
#ifndef KNFRAMESTORESVC_EXPORT_H
#define KNFRAMESTORESVC_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNFRAMESTORESVC_HAS_DLL)
#  define KNFRAMESTORESVC_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNFRAMESTORESVC_HAS_DLL */

#if !defined (KNFRAMESTORESVC_HAS_DLL)
#  define KNFRAMESTORESVC_HAS_DLL 1
#endif /* ! KNFRAMESTORESVC_HAS_DLL */

#if defined (KNFRAMESTORESVC_HAS_DLL) && (KNFRAMESTORESVC_HAS_DLL == 1)
#  if defined (KNFRAMESTORESVC_BUILD_DLL)
#    define knFrameStoreSvc_Export ACE_Proper_Export_Flag
#    define KNFRAMESTORESVC_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNFRAMESTORESVC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNFRAMESTORESVC_BUILD_DLL */
#    define knFrameStoreSvc_Export ACE_Proper_Import_Flag
#    define KNFRAMESTORESVC_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNFRAMESTORESVC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNFRAMESTORESVC_BUILD_DLL */
#else /* KNFRAMESTORESVC_HAS_DLL == 1 */
#  define knFrameStoreSvc_Export
#  define KNFRAMESTORESVC_SINGLETON_DECLARATION(T)
#  define KNFRAMESTORESVC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNFRAMESTORESVC_HAS_DLL == 1 */

// Set KNFRAMESTORESVC_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNFRAMESTORESVC_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNFRAMESTORESVC_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNFRAMESTORESVC_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNFRAMESTORESVC_NTRACE */

#if (KNFRAMESTORESVC_NTRACE == 1)
#  define KNFRAMESTORESVC_TRACE(X)
#else /* (KNFRAMESTORESVC_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNFRAMESTORESVC_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNFRAMESTORESVC_NTRACE == 1) */

#endif /* KNFRAMESTORESVC_EXPORT_H */

// End of auto generated file.
