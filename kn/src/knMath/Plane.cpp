//==========================================================================
//
// File: Plane.cpp
//
// PROJECT: rovernav
// MODULE: travmap
//
// $Author: pedersen $
// $Date: 2008-11-21 09:37:07 -0800 (Fri, 21 Nov 2008) $
// $Revision: 2432 $
//
// (c) Copyright NASA Ames Research Center. All rights reserved.
//===========================================================================

#include "Plane.h"
#include <iostream>
#include <math.h>

namespace kn
{

  using namespace std;

///////////////////////////////////////////////////////////////////////
// Plane    
/// Construct plane represented by z = a*x + b*y + c
Plane::Plane(double a, double b, double c) :
  m_A(a), m_B(b), m_C(c)
{}

Plane::Plane(const Vector3& normal, const Vector3& origin) :
  m_A(-normal.x()/normal.z()),
  m_B(-normal.y()/normal.z()),
  m_C(-m_A*origin.x() - m_B*origin.y() + origin.z())
{}

void Plane::clear() {
  m_A = m_B = m_C = 0.0;
}

void Plane::computeNormal(Vector3& normal) const {
  normal.x() = -m_A;
  normal.y() = -m_B;
  normal.z() = 1.0;
  normal /= normal.norm();
}

void Plane::computeGradient(double& gradient) const {
  double x = sqrt(1/(1+ m_A*m_A));
  double y = sqrt(1/(1+ m_B*m_B));
  double Zxy = fabs(x*m_A + y*m_B);
   
  //get the slope of the line through this point and the origin
  gradient = Zxy / sqrt(x*x + y*y);
}

void Plane::computeRollPitch(double &roll, double &pitch, double yaw) 
  const {
  double q, cy, sy;
  
  cy = cos(yaw); sy = sin(yaw);
  q = sqrt(m_A*m_A + m_B*m_B + 1);   
  pitch = asin((m_B*cy - m_A*sy)/q);
  roll = atan(-m_A*cy-m_B*sy);   
}

double Plane::height(double x, double y) const {
  return m_A*x + m_B*y + m_C;
}
    

///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
    
PlaneFitMoments::PlaneFitMoments() :
  m_numPoints(0),
  m_weight(0.0),
  Sx(0), Sy(0), Sz(0),
  Sxx(0), Syy(0), Szz(0), Sxy(0), Sxz(0), Syz(0)
{
}

PlaneFitMoments::~PlaneFitMoments()
{
}

void PlaneFitMoments::addPoint(const Vector3& p)
{
  m_numPoints++;
  m_weight++;
  Sx += p.x();
  Sy += p.y();
  Sz += p.z();
  Sxx += (p.x()*p.x());
  Syy += (p.y()*p.y());
  Szz += (p.z()*p.z());
  Sxy += (p.x()*p.y());
  Sxz += (p.x()*p.z());
  Syz += (p.y()*p.z());
}

void PlaneFitMoments::clear()
{
  m_numPoints = 0;
  m_weight = 0.0;
  Sx = Sy = Sz = Sxx = Syy = Szz = Sxy = Sxz = Syz = 0.0;
}

void PlaneFitMoments::computePlane(Plane& plane) const {
  if (m_numPoints < 3.0) {
    // TODO: better statistical test for sufficient data
    plane.clear();
  }
  else 
    {
      double det = 
	Sx*(-(Syy*Sx) + Sxy*Sy) + 
	Sxy*( (Sy*Sx) - Sxy*m_weight) +
	Sxx*(-(Sy*Sy) + Syy*m_weight);
      
      plane.A() = 
	(Sz *  (-(Sx*Syy) + Sxy*Sy) + 
	 Syz * ( (Sx*Sy) - Sxy*m_weight) + 
	 Sxz * (-(Sy*Sy) + Syy*m_weight))
	/det;
      
      plane.B() = 
	(Sz *  ( (Sx*Sxy) - Sxx*Sy) + 
	 Syz * (-(Sx*Sx) + Sxx*m_weight) + 
	 Sxz * ( (Sy*Sx) - Sxy*m_weight))
	/det;
      
      plane.C() = 
	(Sz *  (-(Sxy*Sxy) + Sxx*Syy) +
	 Syz * ( (Sxy*Sx) - Sxx*Sy) + 
	 Sxz * (-(Syy*Sx) + Sxy*Sy))
	/det;
    }
}

double PlaneFitMoments::getResidual(const Plane& plane) const
{
  double residual;
  if (m_weight <= 0.0)
    residual = 0.0; // TODO: better statistical test
  else
    {
      /*   SQR((Sz)-A(Sx)-B(Sy)-C(S))*/
      double A = plane.A(), B = plane.B(), C = plane.C();
      double chiSquared = 
	Szz + A*A*Sxx + B*B*Syy + C*C*m_weight
	+ 2*(A*(C*Sx - Sxz + B*Sxy)+ B*(C*Sy - Syz) - C*Sz);
      
      // sanity/numerical precision check
      if (chiSquared < 0)  {
	// only print the message if it's really bad...
	if (chiSquared <-1e-4)
	  cout << "WARNING! Chi Squared <0? ChiSquared = "  
	       << chiSquared <<endl;
	chiSquared = -chiSquared;
      }
      
      residual = chiSquared/m_weight;
    }
  return residual;
}

double PlaneFitMoments::meanHeight() const {
  return (m_weight <= 0.0 ? 0.0 : (Sz/m_weight));
}

bool PlaneFitMoments::computeMean(Vector3& mean) const {
  if (m_weight <= 0.0)
    return false;
  else {
    mean.x() = Sx/m_weight;
    mean.y() = Sy/m_weight;
    mean.z() = Sz/m_weight;
    return true;
  }
}

bool PlaneFitMoments::computeCovariance(Matrix3x3& cov) const {
  if (m_weight < 2.0)
    return false;
  else {
    cov(0,0) = (Sxx - Sx*Sx/m_weight)/(m_weight - 1);
    cov(0,1) = (Sxy - Sx*Sy/m_weight)/(m_weight - 1);
    cov(0,2) = (Sxz - Sx*Sz/m_weight)/(m_weight - 1);
    cov(1,0) = (Sxy - Sx*Sy/m_weight)/(m_weight - 1);
    cov(1,1) = (Syy - Sy*Sy/m_weight)/(m_weight - 1);
    cov(1,2) = (Syz - Sy*Sz/m_weight)/(m_weight - 1);
    cov(2,0) = (Sxz - Sx*Sz/m_weight)/(m_weight - 1);
    cov(2,1) = (Syz - Sy*Sz/m_weight)/(m_weight - 1);
    cov(2,2) = (Szz - Sz*Sz/m_weight)/(m_weight - 1);  
    return true;
  }
}

double PlaneFitMoments::heightVariance() const {
  return (m_weight <= 1 ? 0 : (Szz - Sz*Sz/m_weight)/(m_weight - 1));
}

void PlaneFitMoments::operator+=(const PlaneFitMoments &rhs) 
{
  m_numPoints += rhs.m_numPoints;
  m_weight  += rhs.m_weight;
  Sx += rhs.Sx;
  Sy += rhs.Sy;
  Sz += rhs.Sz;
  Sxx += rhs.Sxx;
  Syy += rhs.Syy;
  Szz += rhs.Szz;
  Sxy += rhs.Sxy;
  Sxz += rhs.Sxz;
  Syz += rhs.Syz;
}

void PlaneFitMoments::operator-=(const PlaneFitMoments &rhs) 
{
  m_numPoints -= rhs.m_numPoints;
  m_weight  -= rhs.m_weight;
  Sx -= rhs.Sx;
  Sy -= rhs.Sy;
  Sz -= rhs.Sz;
  Sxx -= rhs.Sxx;
  Syy -= rhs.Syy;
  Szz -= rhs.Szz;
  Sxy -= rhs.Sxy;
  Sxz -= rhs.Sxz;
  Syz -= rhs.Syz;
}

void PlaneFitMoments::operator*=(double rhs) 
{
  m_weight *= rhs;
  Sx  *= rhs;
  Sy  *= rhs;
  Sz  *= rhs;
  Sxx *= rhs;
  Syy *= rhs;
  Szz *= rhs;
  Sxy *= rhs;
  Sxz *= rhs;
  Syz *= rhs;
}

void PlaneFitMoments::operator/=(double rhs) 
{
  m_weight /= rhs;
  Sx  /= rhs;
  Sy  /= rhs;
  Sz  /= rhs;
  Sxx /= rhs;
  Syy /= rhs;
  Szz /= rhs;
  Sxy /= rhs;
  Sxz /= rhs;
  Syz /= rhs;
}


PlaneFitMoments PlaneFitMoments::operator+(const PlaneFitMoments &rhs) const
{
  PlaneFitMoments ret;
  
  ret.m_numPoints = m_numPoints + rhs.m_numPoints;
  ret.m_weight = m_weight + rhs.m_weight;
  ret.Sx = Sx + rhs.Sx;
  ret.Sy = Sy + rhs.Sy;
  ret.Sz = Sz + rhs.Sz;
  ret.Sxx = Sxx + rhs.Sxx;
  ret.Syy = Syy + rhs.Syy;
  ret.Szz = Szz + rhs.Szz;
  ret.Sxy = Sxy + rhs.Sxy;
  ret.Sxz = Sxz + rhs.Sxz;
  ret.Syz = Syz + rhs.Syz;
  return ret;
}

PlaneFitMoments PlaneFitMoments::operator-(const PlaneFitMoments &rhs) const
{
  PlaneFitMoments ret;
  
  ret.m_numPoints = m_numPoints - rhs.m_numPoints;
  ret.m_weight = m_weight - rhs.m_weight;
  ret.Sx = Sx - rhs.Sx;
  ret.Sy = Sy - rhs.Sy;
  ret.Sz = Sz - rhs.Sz;
  ret.Sxx = Sxx - rhs.Sxx;
  ret.Syy = Syy - rhs.Syy;
  ret.Szz = Szz - rhs.Szz;
  ret.Sxy = Sxy - rhs.Sxy;
  ret.Sxz = Sxz - rhs.Sxz;
  ret.Syz = Syz - rhs.Syz;
  return ret;
}

PlaneFitMoments PlaneFitMoments::operator*(double rhs) const
{
  PlaneFitMoments ret;
  
  ret.m_weight = m_weight * rhs;
  ret.Sx = Sx * rhs;
  ret.Sy = Sy * rhs;
  ret.Sz = Sz * rhs;
  ret.Sxx = Sxx * rhs;
  ret.Syy = Syy * rhs;
  ret.Szz = Szz * rhs;
  ret.Sxy = Sxy * rhs;
  ret.Sxz = Sxz * rhs;
  ret.Syz = Syz * rhs;
  return ret;
}


PlaneFitMoments PlaneFitMoments::operator / (double rhs) const
{
  PlaneFitMoments ret;
  
  ret.m_weight = m_weight * rhs;
  ret.Sx = Sx * rhs;
  ret.Sy = Sy * rhs;
  ret.Sz = Sz * rhs;
  ret.Sxx = Sxx * rhs;
  ret.Syy = Syy * rhs;
  ret.Szz = Szz * rhs;
  ret.Sxy = Sxy * rhs;
  ret.Sxz = Sxz * rhs;
  ret.Syz = Syz * rhs;
  return ret;
}
}
