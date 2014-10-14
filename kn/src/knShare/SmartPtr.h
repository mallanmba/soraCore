#ifndef kn_SmartPtr_h
#define kn_SmartPtr_h

#ifdef KN_CXX11_SUPPORT
#include <memory>
#else
#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/make_shared.hpp>
#include <boost/enable_shared_from_this.hpp>
#endif

/** @defgroup cpp11 C++ 11
 * 
 * This module contains a set of header-files that are designed to ease the transtion 
 * from boost libraries to their corresponding C++11 standard library counterparts.
 */

/** 
 * @ingroup cpp11
 * @file SmartPtr.h C++ 11 transition header.
 * 
 * Boost shared_ptr and scoped_ptr are good standins for the std shared_ptr and unique_ptr data-types
 * soon to be well supported as part of the C++11 standard. To minimize the 
 * disruption when switching over to C++11, usage of this 
 * compatibility header is strongly recommended.
 * 
 * boost::shared_ptr and std::shared_ptr are equivalent
 * boost::scoped_ptr does not have the full range of functionality that std::unique_ptr provides
 * boost::shared_ptr can be used in place of unique_ptr when scoped_ptr does not fully work.
 * boost::shared_ptr has a slightly higher run-time cost, but that's the best we can do for now.
 * kn::unique_ptr will be mapped to std::unique_ptr once C++11 is used in rovers
 * 
 * Bottom line: We don't want to see any explicit reference to boost::shared_ptr and boost::unique_ptr
 * in the source-code of roversw outside this header.
 */

namespace kn
{
#ifdef KN_CXX11_SUPPORT
  using std::shared_ptr;  
  using std::unique_ptr=scoped_ptr;
  using std::weak_ptr;
  
  using std::make_shared;
  using std::allocate_shared;
  using std::enable_shared_from_this;
  using std::static_pointer_cast;
  using std::dynamic_pointer_cast;
  using std::const_pointer_cast;
#else
  
  using boost::shared_ptr;  
  using boost::scoped_ptr;
  using boost::weak_ptr;
  
  using boost::make_shared;
  using boost::allocate_shared;
  using boost::enable_shared_from_this;
  
  using boost::static_pointer_cast;
  using boost::dynamic_pointer_cast;
  using boost::const_pointer_cast;
#endif
}
#endif // kn_SmartPtr_h
