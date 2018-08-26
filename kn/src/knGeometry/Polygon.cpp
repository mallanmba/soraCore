#include "Polygon.h"

namespace kn
{
using namespace std;

bool Polygon::contains(const Vector2& point) {
  // http://local.wasp.uwa.edu.au/~pbourke/geometry/insidepoly/
  // (y - y0) (x1 - x0) - (x - x0) (y1 - y0)
  if (m_defined) {
    if (m_convex) {
      Vector2 dx(m_vertices[0] - m_vertices[m_vertices.size()-1]);
      Vector2 p(point - m_vertices[m_vertices.size()-1]);
      bool sign = (p.y()*dx.x() - p.x()*dx.y()) >= 0.;
      for (unsigned i = 1; i < m_vertices.size(); i++) {   
	dx = m_vertices[i] - m_vertices[i-1];
	p  = point - m_vertices[i];
	if (( p.y()*dx.x() - p.x()*dx.y() >= 0.) != sign)
	  return false;
      } // for
    } // if convex
    else
      assert(false);  // TODO - general polygon containment test
  } // if defined
  else 
    assert(false);
  return true;
} // contains

void Polygon::affine_transform(const Matrix2x2& A, Vector2 b)
{
  for (vector<Vector2>::iterator it = m_vertices.begin();
       it != m_vertices.end();
       it++) {
    (*it) = A * (*it);
    (*it) += b;
  }
} 

void Polygon::operator *= (const Matrix2x2& A) {
  for (vector<Vector2>::iterator it = m_vertices.begin();
       it != m_vertices.end();
       it++)
    (*it) = A*(*it);
} 

void Polygon::operator += (const Vector2 x) {
  for (vector<Vector2>::iterator it = m_vertices.begin();
       it != m_vertices.end();
       it++)
    (*it) += x;
} 

bool Polygon::_convex() {
  // TODO: test this!
  unsigned i,j,k;
  int flag = 0;
  double z;
  
  if (m_vertices.size() < 3)
    return(false);
  
  for (i=0; i<m_vertices.size(); i++) {
    j = (i + 1) % m_vertices.size();
    k = (i + 2) % m_vertices.size();
    z  = (m_vertices[j].x() - m_vertices[i].x()) * 
      (m_vertices[k].y() - m_vertices[j].y());
    z -= (m_vertices[j].y() - m_vertices[i].y()) * 
      (m_vertices[k].x() - m_vertices[j].x());
    if (z < 0)
      flag |= 1;
    else if (z > 0)
      flag |= 2;
    if (flag == 3)
      return(false);
  }
  return (flag != 0);
}
}
