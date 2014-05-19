#ifndef kn_Chrono_h
#define kn_Chrono_h

#ifdef KN_CXX11_SUPPORT
#include <chrono>
#else
#include <boost/chrono.hpp>
#endif

/** @file C++ 11 transition header.
 * 
 * Boost chrono is a good standin for the chrono library of the 
 * soon to be well supported C++11 standard. To minimize the 
 * disruption when switching over to C++11, usage of this 
 * compatibility header is strongly recommended.
 * 
 * Bottom line: We don't want to see any explicit reference to boost::chrono
 * in the source-code of roversw outside this header.
 */

namespace kn
{
#ifdef KN_CXX11_SUPPORT
  using std::duration;
  using std::time_point;
  using std::system_clock;
  using std::steady_clock;
  using std::high_resolution_clock;
  using std::treat_as_floating_point;
  using std::duration_values;
  using std::duration_cast;
  using std::time_point_cast;
  using std::hours;
  using std::minues;
  using std::seconds;
  using std::milliseconds;
  using std::microseconds;
  using std::nanoseconds;
#else
  using namespace boost::chrono;  
#endif
}
#endif // kn_Chrono_h
