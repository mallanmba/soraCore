
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knGeometry
// ------------------------------
#ifndef KNGEOMETRY_EXPORT_H
#define KNGEOMETRY_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNGEOMETRY_HAS_DLL)
#  define KNGEOMETRY_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNGEOMETRY_HAS_DLL */

#if !defined (KNGEOMETRY_HAS_DLL)
#  define KNGEOMETRY_HAS_DLL 1
#endif /* ! KNGEOMETRY_HAS_DLL */

#if defined (KNGEOMETRY_HAS_DLL) && (KNGEOMETRY_HAS_DLL == 1)
#  if defined (KNGEOMETRY_BUILD_DLL)
#    define knGeometry_Export ACE_Proper_Export_Flag
#    define KNGEOMETRY_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNGEOMETRY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNGEOMETRY_BUILD_DLL */
#    define knGeometry_Export ACE_Proper_Import_Flag
#    define KNGEOMETRY_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNGEOMETRY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNGEOMETRY_BUILD_DLL */
#else /* KNGEOMETRY_HAS_DLL == 1 */
#  define knGeometry_Export
#  define KNGEOMETRY_SINGLETON_DECLARATION(T)
#  define KNGEOMETRY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNGEOMETRY_HAS_DLL == 1 */

// Set KNGEOMETRY_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNGEOMETRY_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNGEOMETRY_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNGEOMETRY_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNGEOMETRY_NTRACE */

#if (KNGEOMETRY_NTRACE == 1)
#  define KNGEOMETRY_TRACE(X)
#else /* (KNGEOMETRY_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNGEOMETRY_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNGEOMETRY_NTRACE == 1) */

#endif /* KNGEOMETRY_EXPORT_H */

// End of auto generated file.
