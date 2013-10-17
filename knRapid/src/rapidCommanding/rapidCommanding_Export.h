
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl rapidCommanding
// ------------------------------
#ifndef RAPIDCOMMANDING_EXPORT_H
#define RAPIDCOMMANDING_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (RAPIDCOMMANDING_HAS_DLL)
#  define RAPIDCOMMANDING_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && RAPIDCOMMANDING_HAS_DLL */

#if !defined (RAPIDCOMMANDING_HAS_DLL)
#  define RAPIDCOMMANDING_HAS_DLL 1
#endif /* ! RAPIDCOMMANDING_HAS_DLL */

#if defined (RAPIDCOMMANDING_HAS_DLL) && (RAPIDCOMMANDING_HAS_DLL == 1)
#  if defined (RAPIDCOMMANDING_BUILD_DLL)
#    define rapidCommanding_Export ACE_Proper_Export_Flag
#    define RAPIDCOMMANDING_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define RAPIDCOMMANDING_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* RAPIDCOMMANDING_BUILD_DLL */
#    define rapidCommanding_Export ACE_Proper_Import_Flag
#    define RAPIDCOMMANDING_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define RAPIDCOMMANDING_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* RAPIDCOMMANDING_BUILD_DLL */
#else /* RAPIDCOMMANDING_HAS_DLL == 1 */
#  define rapidCommanding_Export
#  define RAPIDCOMMANDING_SINGLETON_DECLARATION(T)
#  define RAPIDCOMMANDING_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* RAPIDCOMMANDING_HAS_DLL == 1 */

// Set RAPIDCOMMANDING_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (RAPIDCOMMANDING_NTRACE)
#  if (ACE_NTRACE == 1)
#    define RAPIDCOMMANDING_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define RAPIDCOMMANDING_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !RAPIDCOMMANDING_NTRACE */

#if (RAPIDCOMMANDING_NTRACE == 1)
#  define RAPIDCOMMANDING_TRACE(X)
#else /* (RAPIDCOMMANDING_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define RAPIDCOMMANDING_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (RAPIDCOMMANDING_NTRACE == 1) */

#endif /* RAPIDCOMMANDING_EXPORT_H */

// End of auto generated file.
