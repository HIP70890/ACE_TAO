
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl PRODUCER_STUB
// ------------------------------
#ifndef PRODUCER_STUB_EXPORT_H
#define PRODUCER_STUB_EXPORT_H

#include "ace/config-all.h"

#if !defined (PRODUCER_STUB_HAS_DLL)
#  define PRODUCER_STUB_HAS_DLL 1
#endif /* ! PRODUCER_STUB_HAS_DLL */

#if defined (PRODUCER_STUB_HAS_DLL) && (PRODUCER_STUB_HAS_DLL == 1)
#  if defined (PRODUCER_STUB_BUILD_DLL)
#    define PRODUCER_STUB_Export ACE_Proper_Export_Flag
#    define PRODUCER_STUB_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define PRODUCER_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* PRODUCER_STUB_BUILD_DLL */
#    define PRODUCER_STUB_Export ACE_Proper_Import_Flag
#    define PRODUCER_STUB_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define PRODUCER_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* PRODUCER_STUB_BUILD_DLL */
#else /* PRODUCER_STUB_HAS_DLL == 1 */
#  define PRODUCER_STUB_Export
#  define PRODUCER_STUB_SINGLETON_DECLARATION(T)
#  define PRODUCER_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* PRODUCER_STUB_HAS_DLL == 1 */

// Set PRODUCER_STUB_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (PRODUCER_STUB_NTRACE)
#  if (ACE_NTRACE == 1)
#    define PRODUCER_STUB_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define PRODUCER_STUB_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !PRODUCER_STUB_NTRACE */

#if (PRODUCER_STUB_NTRACE == 1)
#  define PRODUCER_STUB_TRACE(X)
#else /* (PRODUCER_STUB_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define PRODUCER_STUB_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (PRODUCER_STUB_NTRACE == 1) */

#endif /* PRODUCER_STUB_EXPORT_H */

// End of auto generated file.
