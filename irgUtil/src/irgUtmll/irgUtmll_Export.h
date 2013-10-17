
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl irgUtmll
// ------------------------------
#ifndef IRGUTMLL_EXPORT_H
#define IRGUTMLL_EXPORT_H

#include "ace/config-all.h"

#if !defined (IRGUTMLL_HAS_DLL)
#  define IRGUTMLL_HAS_DLL 1
#endif /* ! IRGUTMLL_HAS_DLL */

#if defined (IRGUTMLL_HAS_DLL) && (IRGUTMLL_HAS_DLL == 1)
#  if defined (IRGUTMLL_BUILD_DLL)
#    define irgUtmll_Export ACE_Proper_Export_Flag
#    define IRGUTMLL_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define IRGUTMLL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* IRGUTMLL_BUILD_DLL */
#    define irgUtmll_Export ACE_Proper_Import_Flag
#    define IRGUTMLL_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define IRGUTMLL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* IRGUTMLL_BUILD_DLL */
#else /* IRGUTMLL_HAS_DLL == 1 */
#  define irgUtmll_Export
#  define IRGUTMLL_SINGLETON_DECLARATION(T)
#  define IRGUTMLL_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* IRGUTMLL_HAS_DLL == 1 */

// Set IRGUTMLL_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (IRGUTMLL_NTRACE)
#  if (ACE_NTRACE == 1)
#    define IRGUTMLL_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define IRGUTMLL_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !IRGUTMLL_NTRACE */

#if (IRGUTMLL_NTRACE == 1)
#  define IRGUTMLL_TRACE(X)
#else /* (IRGUTMLL_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define IRGUTMLL_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (IRGUTMLL_NTRACE == 1) */

#endif /* IRGUTMLL_EXPORT_H */

// End of auto generated file.
