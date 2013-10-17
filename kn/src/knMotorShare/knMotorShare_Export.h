
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl knMotorShare
// ------------------------------
#ifndef KNMOTORSHARE_EXPORT_H
#define KNMOTORSHARE_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (KNMOTORSHARE_HAS_DLL)
#  define KNMOTORSHARE_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && KNMOTORSHARE_HAS_DLL */

#if !defined (KNMOTORSHARE_HAS_DLL)
#  define KNMOTORSHARE_HAS_DLL 1
#endif /* ! KNMOTORSHARE_HAS_DLL */

#if defined (KNMOTORSHARE_HAS_DLL) && (KNMOTORSHARE_HAS_DLL == 1)
#  if defined (KNMOTORSHARE_BUILD_DLL)
#    define knMotorShare_Export ACE_Proper_Export_Flag
#    define KNMOTORSHARE_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define KNMOTORSHARE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* KNMOTORSHARE_BUILD_DLL */
#    define knMotorShare_Export ACE_Proper_Import_Flag
#    define KNMOTORSHARE_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define KNMOTORSHARE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* KNMOTORSHARE_BUILD_DLL */
#else /* KNMOTORSHARE_HAS_DLL == 1 */
#  define knMotorShare_Export
#  define KNMOTORSHARE_SINGLETON_DECLARATION(T)
#  define KNMOTORSHARE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* KNMOTORSHARE_HAS_DLL == 1 */

// Set KNMOTORSHARE_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (KNMOTORSHARE_NTRACE)
#  if (ACE_NTRACE == 1)
#    define KNMOTORSHARE_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define KNMOTORSHARE_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !KNMOTORSHARE_NTRACE */

#if (KNMOTORSHARE_NTRACE == 1)
#  define KNMOTORSHARE_TRACE(X)
#else /* (KNMOTORSHARE_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define KNMOTORSHARE_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (KNMOTORSHARE_NTRACE == 1) */

#endif /* KNMOTORSHARE_EXPORT_H */

// End of auto generated file.
