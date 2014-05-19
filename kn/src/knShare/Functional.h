#ifndef kn_Functional_h
#define kn_Functional_h

#ifdef KN_CXX11_SUPPORT
#include <functional>
#else
#include <boost/bind.hpp>
#include <boost/mem_fn.hpp>
#include <boost/ref.hpp>
#include <boost/function.hpp>
#endif

/** @file C++ 11 transition header.
 * 
 * Boost bind is a good standin for the functional library extensions of the 
 * soon to be well supported C++11 standard. To minimize the 
 * disruption when switching over to C++11, usage of this 
 * compatibility header is strongly recommended.
 * 
 * Bottom line: We don't want to see any explicit qualification to boost::bind etc
 * in the source-code of roversw outside this header.
 */

namespace kn
{
#ifdef KN_CXX11_SUPPORT
  using std::bind;
  using std::function;
  using std::ref;
  using std::cref;
  using std::mem_fn;
  using std::reference_wrapper;
  
  using std::_1;
  using std::_2;
  using std::_3;
  using std::_4;
  using std::_5;
  #else
  using boost::bind;
  using boost::function;
  using boost::ref;
  using boost::cref;
  using boost::mem_fn;
  using boost::reference_wrapper;
  
#  ifdef DEFINED_IN_BOOST_NAMESPACE
  using boost::_1;
  using boost::_2;
  using boost::_3;
  using boost::_4;
  using boost::_5;
#  endif // DEFINED_IN_BOOST_NAMESPACE
#endif // KN_CXX11_SUPPORT
}
#endif // kn_Functional_h