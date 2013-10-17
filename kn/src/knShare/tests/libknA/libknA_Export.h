
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl libknA
// ------------------------------
#ifndef LIBKNA_EXPORT_H
#define LIBKNA_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (LIBKNA_HAS_DLL)
#  define LIBKNA_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && LIBKNA_HAS_DLL */

#if !defined (LIBKNA_HAS_DLL)
#  define LIBKNA_HAS_DLL 1
#endif /* ! LIBKNA_HAS_DLL */

#if defined (LIBKNA_HAS_DLL) && (LIBKNA_HAS_DLL == 1)
#  if defined (LIBKNA_BUILD_DLL)
#    define libknA_Export ACE_Proper_Export_Flag
#    define LIBKNA_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define LIBKNA_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* LIBKNA_BUILD_DLL */
#    define libknA_Export ACE_Proper_Import_Flag
#    define LIBKNA_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define LIBKNA_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* LIBKNA_BUILD_DLL */
#else /* LIBKNA_HAS_DLL == 1 */
#  define libknA_Export
#  define LIBKNA_SINGLETON_DECLARATION(T)
#  define LIBKNA_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* LIBKNA_HAS_DLL == 1 */

// Set LIBKNA_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (LIBKNA_NTRACE)
#  if (ACE_NTRACE == 1)
#    define LIBKNA_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define LIBKNA_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !LIBKNA_NTRACE */

#if (LIBKNA_NTRACE == 1)
#  define LIBKNA_TRACE(X)
#else /* (LIBKNA_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define LIBKNA_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (LIBKNA_NTRACE == 1) */

#endif /* LIBKNA_EXPORT_H */

// End of auto generated file.
