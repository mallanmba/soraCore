
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knDds
// ------------------------------
#ifndef KNDDS_EXPORT_H
#define KNDDS_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNDDS_HAS_DLL)
#  define KNDDS_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNDDS_HAS_DLL */

#if !defined (KNDDS_HAS_DLL)
#  define KNDDS_HAS_DLL 1
#endif /* ! KNDDS_HAS_DLL */

#if defined (KNDDS_HAS_DLL) && (KNDDS_HAS_DLL == 1)
#  if defined (KNDDS_BUILD_DLL)
#    define knDds_Export ACE_Proper_Export_Flag
#    define KNDDS_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNDDS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNDDS_BUILD_DLL */
#    define knDds_Export ACE_Proper_Import_Flag
#    define KNDDS_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNDDS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNDDS_BUILD_DLL */
#else /* KNDDS_HAS_DLL == 1 */
#  define knDds_Export
#  define KNDDS_SINGLETON_DECLARATION(T)
#  define KNDDS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNDDS_HAS_DLL == 1 */

// Set KNDDS_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNDDS_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNDDS_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNDDS_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNDDS_NTRACE */

#if (KNDDS_NTRACE == 1)
#  define KNDDS_TRACE(X)
#else /* (KNDDS_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNDDS_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNDDS_NTRACE == 1) */

#endif /* KNDDS_EXPORT_H */

// End of auto generated file.
