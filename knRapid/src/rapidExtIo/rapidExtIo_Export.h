
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl rapidExtIo
// ------------------------------
#ifndef RAPIDEXTIO_EXPORT_H
#define RAPIDEXTIO_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (RAPIDEXTIO_HAS_DLL)
#  define RAPIDEXTIO_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && RAPIDEXTIO_HAS_DLL */

#if !defined (RAPIDEXTIO_HAS_DLL)
#  define RAPIDEXTIO_HAS_DLL 1
#endif /* ! RAPIDEXTIO_HAS_DLL */

#if defined (RAPIDEXTIO_HAS_DLL) && (RAPIDEXTIO_HAS_DLL == 1)
#  if defined (RAPIDEXTIO_BUILD_DLL)
#    define rapidExtIo_Export ACE_Proper_Export_Flag
#    define RAPIDEXTIO_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define RAPIDEXTIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* RAPIDEXTIO_BUILD_DLL */
#    define rapidExtIo_Export ACE_Proper_Import_Flag
#    define RAPIDEXTIO_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define RAPIDEXTIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* RAPIDEXTIO_BUILD_DLL */
#else /* RAPIDEXTIO_HAS_DLL == 1 */
#  define rapidExtIo_Export
#  define RAPIDEXTIO_SINGLETON_DECLARATION(T)
#  define RAPIDEXTIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* RAPIDEXTIO_HAS_DLL == 1 */

// Set RAPIDEXTIO_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (RAPIDEXTIO_NTRACE)
#  if (ACE_NTRACE == 1)
#    define RAPIDEXTIO_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define RAPIDEXTIO_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !RAPIDEXTIO_NTRACE */

#if (RAPIDEXTIO_NTRACE == 1)
#  define RAPIDEXTIO_TRACE(X)
#else /* (RAPIDEXTIO_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define RAPIDEXTIO_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (RAPIDEXTIO_NTRACE == 1) */

#endif /* RAPIDEXTIO_EXPORT_H */

// End of auto generated file.
