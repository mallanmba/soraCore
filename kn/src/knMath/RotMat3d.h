#ifndef kn_RotMat3d_h
#define kn_RotMat3d_h

#include "Matrix.h"
#include "Vector.h"

#include "knConfig.h"
#include "knMath_Export.h"

/**
 *
 * Helper functions to ease generating and manipulating rotation matrices.
 * Primarily, these deal with various forms of derivatives and Jacobians of
 *   rotation matrices with changing corresponding euler angles.
 * Perpetual TODO: improve the documentation of what these functions actually do
 *
 **** EULER ANGLE CONVENTION ****
 *
 * Unless otherwise specified, euler angles are in these equivalent conventions:
 *
 *  - X-Y-Z fixed
 *    Rotate around the original X axis, then the original Y axis, then the
 *    original Z axis.
 *
 *  - Z-Y-X local
 *    Rotate around the original Z axis, then the new Y axis, then the new-new
 *    X axis.
 *
 *  Angles are provided as (theta_x,theta_y,theta_z) = (roll,pitch,yaw) in rads
 */

namespace kn
{

  //segregate things a bit more
  namespace RotMat3d
  {

    //rotation matrices corresponding to a single rotation around x, y, or z:
    //R_{x,y,z}
    knMath_Export Matrix3x3 Rx(double theta);
    knMath_Export Matrix3x3 Ry(double theta);
    knMath_Export Matrix3x3 Rz(double theta);

    knMath_Export void Rx(Matrix3x3 &out, double theta);
    knMath_Export void Ry(Matrix3x3 &out, double theta);
    knMath_Export void Rz(Matrix3x3 &out, double theta);

    //partial derivative matrix corresponding to
    //dR_{x,y,z}/dtheta
    //for a single rotation around x, y, or z
    knMath_Export Matrix3x3 dRx_dtheta(double theta);
    knMath_Export Matrix3x3 dRy_dtheta(double theta);
    knMath_Export Matrix3x3 dRz_dtheta(double theta);

    knMath_Export void dRx_dtheta(Matrix3x3 &out, double theta);
    knMath_Export void dRy_dtheta(Matrix3x3 &out, double theta);
    knMath_Export void dRz_dtheta(Matrix3x3 &out, double theta);

    //partial derivative matrix corresponding to
    //dR(theta[x,y,z])/dtheta_{x,y, or z}
    //at an arbitrary current rotation specified by input euler vector theta
    //  dR_dthetax: R_z * R_y * dR_x/dtheta_x
    //  dR_dthetay: R_z * dR_y/dtheta_y * R_x
    //  dR_dthetaz: dR_z/dtheta_z * R_y * R_x
    knMath_Export Matrix3x3 dR_dthetax(const Vector3 &theta);
    knMath_Export Matrix3x3 dR_dthetay(const Vector3 &theta);
    knMath_Export Matrix3x3 dR_dthetaz(const Vector3 &theta);

    knMath_Export void dR_dthetax(Matrix3x3 &out, const Vector3 &theta);
    knMath_Export void dR_dthetay(Matrix3x3 &out, const Vector3 &theta);
    knMath_Export void dR_dthetaz(Matrix3x3 &out, const Vector3 &theta);

    //[rate of] change matrix corresponding to
    //dR(theta[x,y,z])/dtheta_x * thetadot_x
    // + dR(theta[x,y,z])/dtheta_y * thetadot_y
    // + dR(theta[x,y,z])/dtheta_z * thetadot_z
    //at an arbitrary current rotation specified by input euler vector theta
    //and a current angular rate specified by input vector thetadot
    knMath_Export Matrix3x3 dR_dtheta(const Vector3 &theta, const Vector3 &theta_dot);
    knMath_Export void dR_dtheta(Matrix3x3 &out, const Vector3 &theta, const Vector3 &theta_dot);

    //jacobian matrix of a rotation represented as a rotation matrix R
    //  whose output is represented in euler angles
    //  with respect to an euler angle change in R
    //  given the supplied derivative matrices of R wrt x, y, and z euler angles
    //corresponding to
    //d(rotation2euler(R))/dtheta_[x,y,z] | dR/dtheta_[x,y,z]
    knMath_Export Matrix3x3 dthetaR_dtheta(const Matrix3x3 &R, const Matrix3x3 &dR_dthetax, const Matrix3x3 &dR_dthetay, const Matrix3x3 &dR_dthetaz);
    knMath_Export void dthetaR_dtheta(Matrix3x3 &out, const Matrix3x3 &R, const Matrix3x3 &dR_dthetax, const Matrix3x3 &dR_dthetay, const Matrix3x3 &dR_dthetaz);

  }; /* namespace RotMat3d */

}; /* namespace kn */

#endif //kn_RotMat3d_h

