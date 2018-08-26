//==========================================================================
//
// File: Polygon.h
//
// PROJECT: rovernav
// MODULE: math
//
// $Author: pedersen $
// $Date: (Sat, July 2008) $
// $Revision:  $
//
// (c) Copyright NASA Ames Research Center. All rights reserved.
//===========================================================================

/*! Polygon classes */

#ifndef _ROVERNAV_POLYGON_H_
#define _ROVERNAV_POLYGON_H_

#include "knMath/Vector.h"
#include "knMath/Matrix.h"

#include <vector>

namespace kn {

  //! Convex polygon class (assumes constructors correct)
  class Polygon {
  public:
    Polygon() : 
      m_defined(false),
      m_convex(false),
      m_vertices() {}
    Polygon(const std::vector<Vector2>& vertices) :
      m_defined(vertices.size() > 2),
      m_convex(true),
      m_vertices(vertices) {}
    // todo: check for convexity.
    ~Polygon() {}

    unsigned size() { return m_vertices.size(); }
    Vector2 operator() (unsigned i) const { return m_vertices[i]; }
    Vector2& operator() (unsigned i) { return m_vertices[i]; }
    
    bool contains(const Vector2& point);

    void affine_transform(const Matrix2x2& A, Vector2 b);
    void operator *= (const Matrix2x2& A);
    void operator += (const Vector2 b);
      
  private:
    bool m_defined;
    bool m_convex;
    std::vector<Vector2> m_vertices;
    bool _convex();
  }; // class Polygon

} // namespace rovernav
#endif // _ROVERNAV_POLYGON_H_
