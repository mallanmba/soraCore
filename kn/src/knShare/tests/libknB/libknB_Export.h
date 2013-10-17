
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl libknB
// ------------------------------
#ifndef LIBKNB_EXPORT_H
#define LIBKNB_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (LIBKNB_HAS_DLL)
#  define LIBKNB_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && LIBKNB_HAS_DLL */

#if !defined (LIBKNB_HAS_DLL)
#  define LIBKNB_HAS_DLL 1
#endif /* ! LIBKNB_HAS_DLL */

#if defined (LIBKNB_HAS_DLL) && (LIBKNB_HAS_DLL == 1)
#  if defined (LIBKNB_BUILD_DLL)
#    define libknB_Export ACE_Proper_Export_Flag
#    define LIBKNB_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define LIBKNB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* LIBKNB_BUILD_DLL */
#    define libknB_Export ACE_Proper_Import_Flag
#    define LIBKNB_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define LIBKNB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* LIBKNB_BUILD_DLL */
#else /* LIBKNB_HAS_DLL == 1 */
#  define libknB_Export
#  define LIBKNB_SINGLETON_DECLARATION(T)
#  define LIBKNB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* LIBKNB_HAS_DLL == 1 */

// Set LIBKNB_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (LIBKNB_NTRACE)
#  if (ACE_NTRACE == 1)
#    define LIBKNB_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define LIBKNB_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !LIBKNB_NTRACE */

#if (LIBKNB_NTRACE == 1)
#  define LIBKNB_TRACE(X)
#else /* (LIBKNB_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define LIBKNB_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (LIBKNB_NTRACE == 1) */

#endif /* LIBKNB_EXPORT_H */

// End of auto generated file.
