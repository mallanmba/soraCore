//==========================================================================
//
// File: Functions.h
//
// PROJECT: kn
// MODULE: knMath
//
// $Author: pedersen $
// $Date: July 2008 $
// $Revision:  $
//
// (c) Copyright NASA Ames Research Center. All rights reserved.
//===========================================================================

#ifndef kn_Functions_h
#define kn_Functions_h

#include <cmath>

namespace kn
{
  template <class T>
  inline T degrees(T x) { return x * 180.0 / M_PI; }

  template <class T>
  inline T radians(T x) { return x * M_PI / 180.0; }

  template <class T>
  inline int signum(T x, T epsilon = T(0)) { return (epsilon < x) - (x < epsilon); }

  template <class T>
  inline T sqr(T x) { return x*x; };

  template <class T>
  inline T cube(T x) { return x*x*x; };

  template <class T, class T2>
  inline T mean(T a,T2 b) { return (a+(T)b)/2; };

}
#endif // kn_Functions_h
