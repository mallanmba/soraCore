
#include "knConfig.h"

#include <cmath>
#include <limits>
#include <iostream>

#include "RotMat3d.h"

namespace kn
{

namespace RotMat3d
{

static const double S_EPSILON = 0.0000001;

Matrix3x3 Rx(double theta)
{
  Matrix3x3 out;
  Rx(out, theta);
  return out;
}

Matrix3x3 Ry(double theta)
{
  Matrix3x3 out;
  Ry(out, theta);
  return out;
}

Matrix3x3 Rz(double theta)
{
  Matrix3x3 out;
  Rz(out, theta);
  return out;
}

void Rz(Matrix3x3 &out, double theta)
{
  out.setIdentity();

  double s = sin(theta);
  double c = cos(theta);

  out(0,0) = c; out(0,1) = -s;
  out(1,0) = s; out(1,1) = c;
}

void Ry(Matrix3x3 &out, double theta)
{
  out.setIdentity();

  double s = sin(theta);
  double c = cos(theta);

  out(0,0) = c; out(0,2) = s;
  out(2,0) = -s; out(2,2) = c;
}

void Rx(Matrix3x3 &out, double theta)
{
  out.setIdentity();

  double s = sin(theta);
  double c = cos(theta);

  out(1,1) = c; out(1,2) = -s;
  out(2,1) = s; out(2,2) = c;
}

Matrix3x3 dRx_dtheta(double theta)
{
  Matrix3x3 out;
  dRx_dtheta(out, theta);
  return out;
}

Matrix3x3 dRy_dtheta(double theta)
{
  Matrix3x3 out;
  dRy_dtheta(out, theta);
  return out;
}

Matrix3x3 dRz_dtheta(double theta)
{
  Matrix3x3 out;
  dRz_dtheta(out, theta);
  return out;
}

void dRz_dtheta(Matrix3x3 &out, double theta)
{
  out.setZero();

  double s = sin(theta);
  double c = cos(theta);

  out(0,0) = -s; out(0,1) = -c;
  out(1,0) = c; out(1,1) = -s;
}

void dRy_dtheta(Matrix3x3 &out, double theta)
{
  out.setZero();

  double s = sin(theta);
  double c = cos(theta);

  out(0,0) = -s; out(0,2) = c;
  out(2,0) = -c; out(2,2) = -s;
}

void dRx_dtheta(Matrix3x3 &out, double theta)
{
  out.setZero();

  double s = sin(theta);
  double c = cos(theta);

  out(1,1) = -s; out(1,2) = -c;
  out(2,1) = c; out(2,2) = -s;
}

Matrix3x3 dR_dthetaz(const Vector3 &theta)
{
  Matrix3x3 out;
  dR_dthetaz(out, theta);
  return out;
}

void dR_dthetaz(Matrix3x3 &out, const Vector3 &theta)
{
  Matrix3x3 mRx(Rx(theta.x()));
  Matrix3x3 mRy(Ry(theta.y()));

  Matrix3x3 mdRz_dtheta(dRz_dtheta(theta.z()));

  out = mdRz_dtheta*mRy*mRx;
}

Matrix3x3 dR_dthetay(const Vector3 &theta)
{
  Matrix3x3 out;
  dR_dthetay(out, theta);
  return out;
}

void dR_dthetay(Matrix3x3 &out, const Vector3 &theta)
{
  Matrix3x3 mRx(Rx(theta.x()));
  Matrix3x3 mRz(Rz(theta.z()));

  Matrix3x3 mdRy_dtheta(dRy_dtheta(theta.y()));

  out = mRz*mdRy_dtheta*mRx;
}

Matrix3x3 dR_dthetax(const Vector3 &theta)
{
  Matrix3x3 out;
  dR_dthetax(out, theta);
  return out;
}

void dR_dthetax(Matrix3x3 &out, const Vector3 &theta)
{
  Matrix3x3 mRy(Ry(theta.y()));
  Matrix3x3 mRz(Rz(theta.z()));

  Matrix3x3 mdRx_dtheta(dRx_dtheta(theta.x()));

  out = mRz*mRy*mdRx_dtheta;
}

Matrix3x3 dR_dtheta(const Vector3 &theta, const Vector3 &theta_dot)
{
  Matrix3x3 out;
  dR_dtheta(out, theta, theta_dot);
  return out;
}

void dR_dtheta(Matrix3x3 &out, const Vector3 &theta, const Vector3 &theta_dot)
{
  Matrix3x3 mRx(Rx(theta.x()));
  Matrix3x3 mRy(Ry(theta.y()));
  Matrix3x3 mRz(Rz(theta.z()));

  Matrix3x3 mdRx_dtheta(dRx_dtheta(theta.x()));
  Matrix3x3 mdRy_dtheta(dRx_dtheta(theta.y()));
  Matrix3x3 mdRz_dtheta(dRx_dtheta(theta.z()));

  out = mdRz_dtheta*mRy*mRx*theta_dot.z();
  out += mRz*mdRy_dtheta*mRx*theta_dot.y();
  out += mRz*mRy*mdRx_dtheta*theta_dot.x();
}

Matrix3x3 dthetaR_dtheta(const Matrix3x3 &R, const Matrix3x3 &dR_dthetax, const Matrix3x3 &dR_dthetay, const Matrix3x3 &dR_dthetaz)
{
  Matrix3x3 out;
  dthetaR_dtheta(out, R, dR_dthetax, dR_dthetay, dR_dthetaz);
  return out;
}

void dthetaR_dtheta(Matrix3x3 &out, const Matrix3x3 &R, const Matrix3x3 &dR_dthetax, const Matrix3x3 &dR_dthetay, const Matrix3x3 &dR_dthetaz)
{
  //doesn't show up in <cmath> until c++11
#ifndef INFINITY
  const double INFINITY = std::numeric_limits<double>::infinity();
#endif

  double theta_y = asin(-R(2,0));

  Vector3 delta_x(Vector3::Zero());
  Vector3 delta_y, delta_z;

  //theta_y = asin(-R20)
  //dtheta_y/dfoo =
  //  -1/sqrt(1-R20^2) * dR20/dfoo
  delta_y.x() = dR_dthetax(2,0);
  delta_y.y() = dR_dthetay(2,0);
  delta_y.z() = dR_dthetaz(2,0);
  if (fabs(fabs(R(2,0)) - 1.0) < S_EPSILON) {
    //delta_y *= -INFINITY;
    //preserve zeros and avoid 0*infinity=nan
    delta_y.x() = (fabs(delta_y.x()) < S_EPSILON ? 0 : (delta_y.x() < 0 ? INFINITY : -INFINITY));
    delta_y.y() = (fabs(delta_y.y()) < S_EPSILON ? 0 : (delta_y.y() < 0 ? INFINITY : -INFINITY));
    delta_y.z() = (fabs(delta_y.z()) < S_EPSILON ? 0 : (delta_y.z() < 0 ? INFINITY : -INFINITY));
  }
  else
    delta_y /= -sqrt(1.0-R(2,0)*R(2,0));

  if (fabs(theta_y - M_PI_2) < S_EPSILON ||
      fabs(theta_y + M_PI_2) < S_EPSILON) {
    //theta_z = atan(R12/R02)
    //dtheta_z/dfoo =
    //  1/(1+(R12/R02)^2) * (R02*dR12/dfoo - R12*dR02/dfoo) / R02^2
    delta_z.x() = R(0,2)*dR_dthetax(1,2) - R(1,2)*dR_dthetax(0,2);
    delta_z.y() = R(0,2)*dR_dthetay(1,2) - R(1,2)*dR_dthetay(0,2);
    delta_z.z() = R(0,2)*dR_dthetaz(1,2) - R(1,2)*dR_dthetaz(0,2);
    double divisorz = R(1,2)*R(1,2)+R(0,2)*R(0,2);
    if (fabs(divisorz) < S_EPSILON) {
      //delta_z *= (divisorz >= 0 ? INFINITY : -INFINITY);
      //preserve zeros and avoid 0*infinity=nan
      delta_z.x() = (fabs(delta_z.x()) < S_EPSILON ? 0 : (delta_z.x() > 0 ? INFINITY : -INFINITY));
      delta_z.y() = (fabs(delta_z.y()) < S_EPSILON ? 0 : (delta_z.y() > 0 ? INFINITY : -INFINITY));
      delta_z.z() = (fabs(delta_z.z()) < S_EPSILON ? 0 : (delta_z.z() > 0 ? INFINITY : -INFINITY));
    }
    else
      delta_z /= divisorz;
  }
  else {
    //theta_x = atan(R21/R22)
    //dtheta_x/dfoo = 
    //  1/(1+(R21/R22)^2) * (R22*dR21/dfoo - R21*dR22/dfoo) / R22^2
    delta_x.x() = R(2,2)*dR_dthetax(2,1) - R(2,1)*dR_dthetax(2,2);
    delta_x.y() = R(2,2)*dR_dthetay(2,1) - R(2,1)*dR_dthetay(2,2);
    delta_x.z() = R(2,2)*dR_dthetaz(2,1) - R(2,1)*dR_dthetaz(2,2);
    double divisorx = R(2,2)*R(2,2)+R(2,1)*R(2,1);
    if (fabs(divisorx) < S_EPSILON) {
      //delta_x *= (divisorx >= 0 ? INFINITY : -INFINITY);
      //preserve zeros and avoid 0*infinity=nan
      delta_x.x() = (fabs(delta_x.x()) < S_EPSILON ? 0 : (delta_x.x() > 0 ? INFINITY : -INFINITY));
      delta_x.y() = (fabs(delta_x.y()) < S_EPSILON ? 0 : (delta_x.y() > 0 ? INFINITY : -INFINITY));
      delta_x.z() = (fabs(delta_x.z()) < S_EPSILON ? 0 : (delta_x.z() > 0 ? INFINITY : -INFINITY));
    }
    else
      delta_x /= divisorx;

    //theta_z = atan(R10/R00)
    //dtheta_z/dfoo =
    //  1/(1+(R10/R00)^2) * (R00*dR10/dfoo - R10*dR00/dfoo) / R00^2
    delta_z.x() = R(0,0)*dR_dthetax(1,0) - R(1,0)*dR_dthetax(0,0);
    delta_z.y() = R(0,0)*dR_dthetay(1,0) - R(1,0)*dR_dthetay(0,0);
    delta_z.z() = R(0,0)*dR_dthetaz(1,0) - R(1,0)*dR_dthetaz(0,0);
    double divisorz = R(0,0)*R(0,0)+R(1,0)*R(1,0);
    if (fabs(divisorz) < S_EPSILON) {
      //delta_z *= (divisorz >= 0 ? INFINITY : -INFINITY);
      //preserve zeros and avoid 0*infinity=nan
      delta_z.x() = (fabs(delta_z.x()) < S_EPSILON ? 0 : (delta_z.x() > 0 ? INFINITY : -INFINITY));
      delta_z.y() = (fabs(delta_z.y()) < S_EPSILON ? 0 : (delta_z.y() > 0 ? INFINITY : -INFINITY));
      delta_z.z() = (fabs(delta_z.z()) < S_EPSILON ? 0 : (delta_z.z() > 0 ? INFINITY : -INFINITY));
    }
    else
      delta_z /= divisorz;
  }

  out.row(0) = delta_x;
  out.row(1) = delta_y;
  out.row(2) = delta_z;
}

}; /* namespace RotMat3d */

}; /* namespace kn */

