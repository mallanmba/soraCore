//==========================================================================
//
// File: Functions.h
//
// PROJECT: kn
//
// $Author: pedersen $
// $Date: July 2008 $
// $Revision:  $
//
// (c) Copyright NASA Ames Research Center. All rights reserved.
//===========================================================================

#ifndef knMath_Functions_h
#define knMath_Functions_h

#include <cmath>

namespace kn
{
  template <class T>
  inline T degrees(T x) { return x * 180.0 / M_PI; }

  template <class T>
  inline T radians(T x) { return x * M_PI / 180.0; }

  template <class T>
  inline void mod(T& x, T y)
  /*!< replace x by x mod y, extending C++ % to give valid
    results for all signs of x and y :
    By convention:
    mod(x, y) has same sign as y.
    x mod 0 is undefined.
    x < 0 ==>  mod(x,y) in [0,y)
               x%y in (-abs(y),0]

    This guarantees that mod(x,y) is always a valid
    index for example.
  */
  {
    x %= y;
    if ((x < 0 && y > 0) || (y < 0 && x > 0))
      x += y;
  }

  template <class T>
  inline int signum(T x) { return (x > 0 ? 1 : (x < 0 ? -1:0)); }

//   template <class T>
//   inline int sgn(T x)    { return (x > 0 ? 1 : (x < 0 ? -1:0)); }

//   template <class T>
//   inline T sign(T a, T b) { return (b > 0 ? fabs(a): -fabs(b)); }

  template <class T>
  inline T sqr(T x) { return x*x; };

  template <class T>
  inline T cube(T x) { return x*x*x; };

  template <class T, class T2>
  inline T mean(T a,T2 b) { return (a+(T)b)/2; };

//   template <class T, class T1>
//   inline T step(T x, T1 threshold)
//   {
//     return (x <= threshold ? 0 : 1);
//   }

  template <typename A, typename B, typename C>
  inline A linear_scale(A value, B min, C max)
  {
    return (value <= min ? 0 : value >= max ? 1 : (value-min)/(max-min));
  }

};
#endif // knMath_Functions_h
