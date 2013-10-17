
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl irgSha1
// ------------------------------
#ifndef IRGSHA1_EXPORT_H
#define IRGSHA1_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (IRGSHA1_HAS_DLL)
#  define IRGSHA1_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && IRGSHA1_HAS_DLL */

#if !defined (IRGSHA1_HAS_DLL)
#  define IRGSHA1_HAS_DLL 1
#endif /* ! IRGSHA1_HAS_DLL */

#if defined (IRGSHA1_HAS_DLL) && (IRGSHA1_HAS_DLL == 1)
#  if defined (IRGSHA1_BUILD_DLL)
#    define irgSha1_Export ACE_Proper_Export_Flag
#    define IRGSHA1_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define IRGSHA1_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* IRGSHA1_BUILD_DLL */
#    define irgSha1_Export ACE_Proper_Import_Flag
#    define IRGSHA1_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define IRGSHA1_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* IRGSHA1_BUILD_DLL */
#else /* IRGSHA1_HAS_DLL == 1 */
#  define irgSha1_Export
#  define IRGSHA1_SINGLETON_DECLARATION(T)
#  define IRGSHA1_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* IRGSHA1_HAS_DLL == 1 */

// Set IRGSHA1_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (IRGSHA1_NTRACE)
#  if (ACE_NTRACE == 1)
#    define IRGSHA1_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define IRGSHA1_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !IRGSHA1_NTRACE */

#if (IRGSHA1_NTRACE == 1)
#  define IRGSHA1_TRACE(X)
#else /* (IRGSHA1_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define IRGSHA1_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (IRGSHA1_NTRACE == 1) */

#endif /* IRGSHA1_EXPORT_H */

// End of auto generated file.
