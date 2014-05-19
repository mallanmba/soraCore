#ifndef kn_Mutex_h
#define kn_Mutex_h

#ifdef KN_CXX11_SUPPORT
#include <mutex>
#else
#include <boost/thread.hpp>
#endif

/** @file C++ 11 transition header.
 * 
 * Boost thread is a good standin for the mutex library of the 
 * soon to be well supported C++11 standard. To minimize the 
 * disruption when switching over to C++11, usage of this 
 * compatibility header is strongly recommended.
 * 
 * Bottom line: We don't want to see any explicit reference to mutex primitives
 * in the source-code of roversw outside this header.
 */

namespace kn
{
#ifdef KN_CXX11_SUPPORT
  using std::mutex;
  using std::recursive_mutex;
  using std::timed_mutex;
  using std::recursive_timed_mutex;
  using std::lock_guard;
  using std::unique_lock;
  
  using std::once_flag;
  using std::adopt_lock_t;
  using std::defer_lock_t;
  using std::try_to_lock_t;
  
  using std::try_lock;
  using std::lock;
  using std::call_once;
#else
  using boost::mutex;
  using boost::recursive_mutex;
  using boost::timed_mutex;
  using boost::recursive_timed_mutex;
  using boost::lock_guard;
  using boost::unique_lock;

  using boost::once_flag;
  using boost::adopt_lock_t;
  using boost::defer_lock_t;
  using boost::try_to_lock_t;
  
  using boost::try_lock;
  using boost::lock;
  using boost::call_once;
#endif
}
#endif // kn_Mutex_h