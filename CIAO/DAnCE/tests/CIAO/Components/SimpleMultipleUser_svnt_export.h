
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl SIMPLEMULTIPLEUSER_SVNT
// ------------------------------
#ifndef SIMPLEMULTIPLEUSER_SVNT_EXPORT_H
#define SIMPLEMULTIPLEUSER_SVNT_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (SIMPLEMULTIPLEUSER_SVNT_HAS_DLL)
#  define SIMPLEMULTIPLEUSER_SVNT_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && SIMPLEMULTIPLEUSER_SVNT_HAS_DLL */

#if !defined (SIMPLEMULTIPLEUSER_SVNT_HAS_DLL)
#  define SIMPLEMULTIPLEUSER_SVNT_HAS_DLL 1
#endif /* ! SIMPLEMULTIPLEUSER_SVNT_HAS_DLL */

#if defined (SIMPLEMULTIPLEUSER_SVNT_HAS_DLL) && (SIMPLEMULTIPLEUSER_SVNT_HAS_DLL == 1)
#  if defined (SIMPLEMULTIPLEUSER_SVNT_BUILD_DLL)
#    define SIMPLEMULTIPLEUSER_SVNT_Export ACE_Proper_Export_Flag
#    define SIMPLEMULTIPLEUSER_SVNT_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define SIMPLEMULTIPLEUSER_SVNT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* SIMPLEMULTIPLEUSER_SVNT_BUILD_DLL */
#    define SIMPLEMULTIPLEUSER_SVNT_Export ACE_Proper_Import_Flag
#    define SIMPLEMULTIPLEUSER_SVNT_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define SIMPLEMULTIPLEUSER_SVNT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* SIMPLEMULTIPLEUSER_SVNT_BUILD_DLL */
#else /* SIMPLEMULTIPLEUSER_SVNT_HAS_DLL == 1 */
#  define SIMPLEMULTIPLEUSER_SVNT_Export
#  define SIMPLEMULTIPLEUSER_SVNT_SINGLETON_DECLARATION(T)
#  define SIMPLEMULTIPLEUSER_SVNT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* SIMPLEMULTIPLEUSER_SVNT_HAS_DLL == 1 */

// Set SIMPLEMULTIPLEUSER_SVNT_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (SIMPLEMULTIPLEUSER_SVNT_NTRACE)
#  if (ACE_NTRACE == 1)
#    define SIMPLEMULTIPLEUSER_SVNT_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define SIMPLEMULTIPLEUSER_SVNT_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !SIMPLEMULTIPLEUSER_SVNT_NTRACE */

#if (SIMPLEMULTIPLEUSER_SVNT_NTRACE == 1)
#  define SIMPLEMULTIPLEUSER_SVNT_TRACE(X)
#else /* (SIMPLEMULTIPLEUSER_SVNT_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define SIMPLEMULTIPLEUSER_SVNT_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (SIMPLEMULTIPLEUSER_SVNT_NTRACE == 1) */

#endif /* SIMPLEMULTIPLEUSER_SVNT_EXPORT_H */

// End of auto generated file.