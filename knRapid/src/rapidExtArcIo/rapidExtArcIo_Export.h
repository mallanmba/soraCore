
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl rapidExtArcIo
// ------------------------------
#ifndef RAPIDEXTARCIO_EXPORT_H
#define RAPIDEXTARCIO_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (RAPIDEXTARCIO_HAS_DLL)
#  define RAPIDEXTARCIO_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && RAPIDEXTARCIO_HAS_DLL */

#if !defined (RAPIDEXTARCIO_HAS_DLL)
#  define RAPIDEXTARCIO_HAS_DLL 1
#endif /* ! RAPIDEXTARCIO_HAS_DLL */

#if defined (RAPIDEXTARCIO_HAS_DLL) && (RAPIDEXTARCIO_HAS_DLL == 1)
#  if defined (RAPIDEXTARCIO_BUILD_DLL)
#    define rapidExtArcIo_Export ACE_Proper_Export_Flag
#    define RAPIDEXTARCIO_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define RAPIDEXTARCIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* RAPIDEXTARCIO_BUILD_DLL */
#    define rapidExtArcIo_Export ACE_Proper_Import_Flag
#    define RAPIDEXTARCIO_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define RAPIDEXTARCIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* RAPIDEXTARCIO_BUILD_DLL */
#else /* RAPIDEXTARCIO_HAS_DLL == 1 */
#  define rapidExtArcIo_Export
#  define RAPIDEXTARCIO_SINGLETON_DECLARATION(T)
#  define RAPIDEXTARCIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* RAPIDEXTARCIO_HAS_DLL == 1 */

// Set RAPIDEXTARCIO_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (RAPIDEXTARCIO_NTRACE)
#  if (ACE_NTRACE == 1)
#    define RAPIDEXTARCIO_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define RAPIDEXTARCIO_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !RAPIDEXTARCIO_NTRACE */

#if (RAPIDEXTARCIO_NTRACE == 1)
#  define RAPIDEXTARCIO_TRACE(X)
#else /* (RAPIDEXTARCIO_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define RAPIDEXTARCIO_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (RAPIDEXTARCIO_NTRACE == 1) */

#endif /* RAPIDEXTARCIO_EXPORT_H */

// End of auto generated file.
