#ifndef kn_Thread_h
#define kn_Thread_h

#ifdef KN_CXX11_SUPPORT
#include <thread>
#else
#include <boost/thread.hpp>
#endif

/**
 * @ingroup cpp11
 * @file Thread.h C++ 11 transition header.
 * 
 * Boost thread is a good standin for the thread library of the 
 * soon to be well supported C++11 standard. To minimize the 
 * disruption when switching over to C++11, usage of this 
 * compatibility header is strongly recommended.
 * 
 * Bottom line: We don't want to see any explicit reference to boost::thread
 * in the source-code of roversw outside this header.
 */


namespace kn
{
#ifdef KN_CXX11_SUPPORT
  using std::thread;
  namespace this_thread = std::this_thread;
#else
  using boost::thread;  
  namespace this_thread = boost::this_thread;
#endif
}
#endif // kn_Thread_h