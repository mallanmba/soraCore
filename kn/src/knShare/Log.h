#ifndef kn_Log_h
#define kn_Log_h

/*! \file Log.h
The kn logging macros integrate with Miro::Log (which is a wrapper for ACE Logging).
The KN_LOG macros accept varargs, so printf-style strings can be used. For formatting
details, see
http://www.dre.vanderbilt.edu/Doxygen/6.0.1/html/libace-doc/a00266.html#ab18ecb507bada88d9a7661fb926b0854

Macros are provided that use the standard log4cxx/log4j levels
 * KN_TRACE - maps to Miro::Log::LL_TRACE
 * KN_DEBUG - maps to Miro::Log::LL_DEBUG
 * KN_INFO  - maps to Miro::Log::LL_NOTICE
 * KN_WARN  - maps to Miro::Log::LL_WARNING
 * KN_ERROR - maps to Miro::Log::LL_ERROR
 * KN_FATAL - maps to Miro::Log::LL_CRITICAL

These macros do *not* use the Miro::Log::format() string because we don't want to
give up fprintf style formatting. These macros have a fixed format of
`[timestamp] [LEVEL]: [message][cr]`

 */

#include <miro/Log.h>

#define KN_LOG_PREFIX  "%D "
#define KN_LOG_POSTFIX "\n"

// NOTE: the do{ ... } while(0) construct is used in macros to
// 1. enforce the requirement for a ; at the end of the line
// 2. maintain expected operator precedence
// #2 is not required for logging statements, but we
// do want #1

// NOTE: The ##__VA_ARGS__ syntax is GCC specific.
// There is no standards-compliant way to avoid the trailing ','
// if __VA_ARGS__ is empty. Ugh.
// If ##__VA_ARGS__ fails to compile on windows, try this:
// http://stackoverflow.com/questions/5588855/standard-alternative-to-gccs-va-args-trick

//== TRACE ================================================
#define KN_TRACE(FormatString, ...) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_TRACE) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_TRACE), \
                  KN_LOG_PREFIX "TRACE: " FormatString KN_LOG_POSTFIX, ##__VA_ARGS__); \
    } \
  } while (0)

#define KN_TRACE_OSTR(Output) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_TRACE) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      std::ostringstream ostr__; \
      ostr__ << Output; \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_TRACE), \
                  KN_LOG_PREFIX "TRACE: %s" KN_LOG_POSTFIX, ostr__.str().c_str()); \
    } \
  } while (0)


//== DEBUG ================================================
#define KN_DEBUG(FormatString, ...) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_DEBUG) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_DEBUG), \
                  KN_LOG_PREFIX "DEBUG: " FormatString KN_LOG_POSTFIX, ##__VA_ARGS__); \
    } \
  } while (0)

#define KN_DEBUG_OSTR(Output) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_DEBUG) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      std::ostringstream ostr__; \
      ostr__ << Output; \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_DEBUG), \
                  KN_LOG_PREFIX "DEBUG: %s" KN_LOG_POSTFIX, ostr__.str().c_str()); \
    } \
  } while (0)


//== INFO =================================================
#define KN_INFO(FormatString, ...) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_NOTICE) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_NOTICE), \
                  KN_LOG_PREFIX " INFO: " FormatString KN_LOG_POSTFIX, ##__VA_ARGS__); \
    } \
  } while (0)

#define KN_INFO_OSTR(Output) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_NOTICE) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      std::ostringstream ostr__; \
      ostr__ << Output; \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_NOTICE), \
                  KN_LOG_PREFIX " INFO: %s" KN_LOG_POSTFIX, ostr__.str().c_str()); \
    } \
  } while (0)

//== WARN =================================================
#define KN_WARN(FormatString, ...) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_WARNING) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_WARNING), \
                  KN_LOG_PREFIX " WARN: " FormatString KN_LOG_POSTFIX, ##__VA_ARGS__); \
    } \
  } while (0)

#define KN_WARN_OSTR(Output) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_WARNING) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      std::ostringstream ostr__; \
      ostr__ << Output; \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_WARNING), \
                  KN_LOG_PREFIX " WARN: %s" KN_LOG_POSTFIX, ostr__.str().c_str()); \
    } \
  } while (0)

//== ERROR ================================================
#define KN_ERROR(FormatString, ...) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_ERROR) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_ERROR), \
                  KN_LOG_PREFIX "ERROR: " FormatString KN_LOG_POSTFIX, ##__VA_ARGS__); \
    } \
  } while (0)

#define KN_ERROR_OSTR(Output) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_ERROR) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      std::ostringstream ostr__; \
      ostr__ << Output; \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_ERROR), \
                  KN_LOG_PREFIX "ERROR: %s" KN_LOG_POSTFIX, ostr__.str().c_str()); \
    } \
  } while (0)

//== FATAL ================================================
#define KN_FATAL(FormatString, ...) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_CRITICAL) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_CRITICAL), \
                  KN_LOG_PREFIX "FATAL: " FormatString KN_LOG_POSTFIX, ##__VA_ARGS__); \
    } \
  } while (0)

#define KN_FATAL_OSTR(Output) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_CRITICAL) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      std::ostringstream ostr__; \
      ostr__ << Output; \
      ace___->log(::Miro::Log::ll2LM(::Miro::Log::LL_CRITICAL), \
                  KN_LOG_PREFIX "FATAL: %s" KN_LOG_POSTFIX, ostr__.str().c_str()); \
    } \
  } while (0)

//== CTOR / DTOR ==========================================
// These are almost exact copies of Miro::Log equivalents, just so we
// don't have to mix Miro and KN. These macros can accept string variables
// as a parameter, not just string constants
#define KN_CTOR(X) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_CTOR_DTOR) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(LM_DEBUG, "Constructing %s.\n", X); \
    } \
  } while (0)
#define KN_CTOR_END(X) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_CTOR_DTOR) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(LM_DEBUG, "Construction of %s finished.\n", X); \
    } \
  } while (0)
#define KN_DTOR(X) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_CTOR_DTOR) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(LM_DEBUG, "Destructing %s.\n", X); \
    } \
  } while (0)
#define KN_DTOR_END(X) \
  do { \
    if (::Miro::Log::level() >= ::Miro::Log::LL_CTOR_DTOR) { \
      ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
      ace___->conditional_set (__FILE__, __LINE__, 0, 0); \
      ace___->log(LM_DEBUG, "Destruction of %s finished.\n", X); \
    } \
  } while (0)


#endif // kn_Log_h
