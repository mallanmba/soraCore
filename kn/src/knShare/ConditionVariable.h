#ifndef kn_ConditionVariable_h
#define kn_ConditionVariable_h

#ifdef KN_CXX11_SUPPORT
#include <condition_variable>
#else
#include <boost/thread.hpp>
#endif

/**
 * @ingroup cpp11
 * @file ConditionVariable.h C++ 11 transition header.
 * 
 * Boost thead is a good standin for the condition_variable header of the 
 * soon to be well supported C++11 standard. To minimize the 
 * disruption when switching over to C++11, usage of this 
 * compatibility header is strongly recommended.
 * 
 * Bottom line: We don't want to see any explicit reference to boost condition primitives
 * in the source-code of roversw outside this header.
 */

namespace kn
{
#ifdef KN_CXX11_SUPPORT
  using std::condition_variable;
  using std::condition_variable_any;
  using std::cv_status;
  using std::notify_all_at_thread_exit;
#else
  using boost::condition_variable;
  using boost::condition_variable_any;
  using boost::cv_status;
  using boost::notify_all_at_thread_exit;
#endif
}
#endif // kn_ConditionVariable_h