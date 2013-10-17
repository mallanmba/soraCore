
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl rapidIo
// ------------------------------
#ifndef RAPIDIO_EXPORT_H
#define RAPIDIO_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (RAPIDIO_HAS_DLL)
#  define RAPIDIO_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && RAPIDIO_HAS_DLL */

#if !defined (RAPIDIO_HAS_DLL)
#  define RAPIDIO_HAS_DLL 1
#endif /* ! RAPIDIO_HAS_DLL */

#if defined (RAPIDIO_HAS_DLL) && (RAPIDIO_HAS_DLL == 1)
#  if defined (RAPIDIO_BUILD_DLL)
#    define rapidIo_Export ACE_Proper_Export_Flag
#    define RAPIDIO_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define RAPIDIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* RAPIDIO_BUILD_DLL */
#    define rapidIo_Export ACE_Proper_Import_Flag
#    define RAPIDIO_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define RAPIDIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* RAPIDIO_BUILD_DLL */
#else /* RAPIDIO_HAS_DLL == 1 */
#  define rapidIo_Export
#  define RAPIDIO_SINGLETON_DECLARATION(T)
#  define RAPIDIO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* RAPIDIO_HAS_DLL == 1 */

// Set RAPIDIO_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (RAPIDIO_NTRACE)
#  if (ACE_NTRACE == 1)
#    define RAPIDIO_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define RAPIDIO_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !RAPIDIO_NTRACE */

#if (RAPIDIO_NTRACE == 1)
#  define RAPIDIO_TRACE(X)
#else /* (RAPIDIO_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define RAPIDIO_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (RAPIDIO_NTRACE == 1) */

#endif /* RAPIDIO_EXPORT_H */

// End of auto generated file.
