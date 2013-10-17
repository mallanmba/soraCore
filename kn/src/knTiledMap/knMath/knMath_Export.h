
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knMath
// ------------------------------
#ifndef KNMATH_EXPORT_H
#define KNMATH_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNMATH_HAS_DLL)
#  define KNMATH_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNMATH_HAS_DLL */

#if !defined (KNMATH_HAS_DLL)
#  define KNMATH_HAS_DLL 1
#endif /* ! KNMATH_HAS_DLL */

#if defined (KNMATH_HAS_DLL) && (KNMATH_HAS_DLL == 1)
#  if defined (KNMATH_BUILD_DLL)
#    define knMath_Export ACE_Proper_Export_Flag
#    define KNMATH_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNMATH_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNMATH_BUILD_DLL */
#    define knMath_Export ACE_Proper_Import_Flag
#    define KNMATH_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNMATH_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNMATH_BUILD_DLL */
#else /* KNMATH_HAS_DLL == 1 */
#  define knMath_Export
#  define KNMATH_SINGLETON_DECLARATION(T)
#  define KNMATH_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNMATH_HAS_DLL == 1 */

// Set KNMATH_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNMATH_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNMATH_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNMATH_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNMATH_NTRACE */

#if (KNMATH_NTRACE == 1)
#  define KNMATH_TRACE(X)
#else /* (KNMATH_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNMATH_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNMATH_NTRACE == 1) */

#endif /* KNMATH_EXPORT_H */

// End of auto generated file.
