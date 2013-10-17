
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knTiledMap
// ------------------------------
#ifndef KNTILEDMAP_EXPORT_H
#define KNTILEDMAP_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNTILEDMAP_HAS_DLL)
#  define KNTILEDMAP_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNTILEDMAP_HAS_DLL */

#if !defined (KNTILEDMAP_HAS_DLL)
#  define KNTILEDMAP_HAS_DLL 1
#endif /* ! KNTILEDMAP_HAS_DLL */

#if defined (KNTILEDMAP_HAS_DLL) && (KNTILEDMAP_HAS_DLL == 1)
#  if defined (KNTILEDMAP_BUILD_DLL)
#    define knTiledMap_Export ACE_Proper_Export_Flag
#    define KNTILEDMAP_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNTILEDMAP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNTILEDMAP_BUILD_DLL */
#    define knTiledMap_Export ACE_Proper_Import_Flag
#    define KNTILEDMAP_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNTILEDMAP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNTILEDMAP_BUILD_DLL */
#else /* KNTILEDMAP_HAS_DLL == 1 */
#  define knTiledMap_Export
#  define KNTILEDMAP_SINGLETON_DECLARATION(T)
#  define KNTILEDMAP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNTILEDMAP_HAS_DLL == 1 */

// Set KNTILEDMAP_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNTILEDMAP_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNTILEDMAP_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNTILEDMAP_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNTILEDMAP_NTRACE */

#if (KNTILEDMAP_NTRACE == 1)
#  define KNTILEDMAP_TRACE(X)
#else /* (KNTILEDMAP_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNTILEDMAP_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNTILEDMAP_NTRACE == 1) */

#endif /* KNTILEDMAP_EXPORT_H */

// End of auto generated file.
