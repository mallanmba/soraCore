//==========================================================================
//
// File: Plane.h
//
// PROJECT: rovernav
// MODULE: math
//
// $Author: pedersen $
// $Date: 2008-11-21 09:37:07 -0800 (Fri, 21 Nov 2008) $
// $Revision: 2432 $
//
// (c) Copyright NASA Ames Research Center. All rights reserved.
//===========================================================================

/*! \brief Definition of a Plane in the form of Ax + By + C = z

    This is defintion of a Plane in normal cartesian coordinates with a formula:

    Ax + By + C = z

    \note Non-obvious functionality notes.
*/

#ifndef _ROVERNAV_PLANE3_H_
#define _ROVERNAV_PLANE3_H_
#include <iostream>
#include <iomanip>
#include "Vector.h"
#include "Matrix.h"

namespace kn
{


  class Plane {
  public:
    /// Construct plane represented by z = a*x + b*y + c
    Plane(double a = 0, double b = 0, double c = 0);
    Plane(const Vector3& normal, const Vector3& origin); 
    ~Plane() {};
    void clear();
    
    Vector3 getNormal() const { Vector3 temp; computeNormal(temp); return temp; }
    void computeNormal(Vector3& normal) const;
    void computeGradient(double& gradient) const;
    void computeRollPitch(double& roll, double& pitch, double yaw = 0) const;

    double height(double x, double y) const;
    
    friend std::ostream& operator << (std::ostream& o, 
				      const Plane& rhs) {
      return (o << std::setprecision(2) << std::setw(3)
	      << "(" << rhs.A() << " " 
	      << rhs.B() << " " 
	      << rhs.C()) << ")";
    }

    inline const double& A() const { return m_A; }
    inline const double& B() const { return m_B; }
    inline const double& C() const { return m_C; }

    inline double& A() { return m_A; }
    inline double& B() { return m_B; }
    inline double& C() { return m_C; }
    
  private:
    double m_A, m_B, m_C;
  }; // class Plane
  
  /////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////
  
  class PlaneFitMoments {
  public:
    PlaneFitMoments();
    ~PlaneFitMoments();
    
    void addPoint(const Vector3& p);
    void clear();
    
    /*! Compute best fit plane (minizing error in z) */
    Plane getPlane() const { Plane temp; computePlane(temp); return temp; }
    void computePlane(Plane& plane) const;

    /*! mean residual chi^2 error ((z - plane.height(x,y))^2) between 
      @param plane and points in plane fit moments */
    double getResidual(const Plane& plane) const;

    double meanHeight() const;
    bool computeMean(Vector3& mean) const;

    double heightVariance() const;
    bool computeCovariance(Matrix3x3& cov) const;

    /*! cumulative weight */
    inline int numPoints() const { return m_numPoints ; }
    inline double weight() const { return m_weight; }
    
    void operator+=(const PlaneFitMoments& rhs);
    void operator-=(const PlaneFitMoments& rhs);
    PlaneFitMoments operator-(const PlaneFitMoments& rhs) const;
    PlaneFitMoments operator+(const PlaneFitMoments& rhs) const;
    
    void operator *= (double rhs);
    void operator /= (double rhs);
    PlaneFitMoments operator * (double rhs) const;
    PlaneFitMoments operator / (double rhs) const;

  private:
    int m_numPoints;
    double m_weight;
    double Sx, Sy, Sz, Sxx, Syy, Szz, Sxy, Sxz, Syz;
  }; // class PlaneFitMoments
  
} // namespace rovernav
#endif


