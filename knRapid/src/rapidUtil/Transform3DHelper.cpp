/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#include "Transform3DHelper.h"

#include "knMath/Matrix.h"
#include "knMath/EulerAngles.h"

#include <iostream>
#include <cmath>

namespace rapid
{
  using namespace std;

  void 
  Transform3DHelper::transform3DToATrans2(kn::ATrans2& atrans, Transform3D const& trans)
  {
    double theta = -atan2(trans.rot[1 + 0 * 3], trans.rot[0 + 0 * 0]);
    atrans = kn::ATrans2(Eigen::Translation2d(trans.xyz[0], trans.xyz[1]) * Eigen::Rotation2Dd(theta));
  }

  void 
  Transform3DHelper::transform3DToATrans3(kn::ATrans3& atrans, Transform3D const& trans, rapid::RotationEncoding encoding)
  {
    kn::Matrix3x3 rotation;

    atrans.translation()[0] = trans.xyz[0];
    atrans.translation()[1] = trans.xyz[1];
    atrans.translation()[2] = trans.xyz[2];

    switch (encoding) {
    case rapid::RAPID_ROT_NONE:
      rotation = kn::Matrix3x3::Identity();
      break;
    case rapid::RAPID_ROT_M33:
      {
        int idx = 0;
        for (int y = 0; y < 3; ++y) {
          for (int x = 0; x < 3; ++x, ++idx) {
            rotation(y, x) = trans.rot[idx];
          }
        }
      }
      break;
    case rapid::RAPID_ROT_QUAT:
      {
        Eigen::Quaterniond quat(trans.rot[3], trans.rot[0], trans.rot[1], trans.rot[2]);
        quat.normalize();
        rotation =  quat.toRotationMatrix();
      }
      break;
    case rapid::RAPID_ROT_XYZ:
      rotation = kn::eulerXyzToRotationMatrix(trans.rot[0], trans.rot[1], trans.rot[2]);
      break;
    case rapid::RAPID_ROT_ZYX:
      rotation = kn::eulerXyzToRotationMatrix(trans.rot[2], trans.rot[1], trans.rot[0]);
      break;
    case rapid::RAPID_ROT_ZYZ:
      rotation = kn::eulerXyzToRotationMatrix(trans.rot[0], trans.rot[1], trans.rot[2]);
      break;
    default:
      {
        bool const supportedRotationFormat = false;
        assert(supportedRotationFormat == true);
      }
    }

    for (int y = 0; y < 3; ++y) {
      for (int x = 0; x < 3; ++x) {
        atrans.matrix()(y, x) = rotation(y, x);
      }
    }
  }

  void 
  Transform3DHelper::atrans2ToTransform3D(Transform3D& trans, kn::ATrans2 const& atrans)
  {
    trans.xyz[0] = atrans.translation()[0];
    trans.xyz[1] = atrans.translation()[1];
    trans.xyz[2] = 0;

    Eigen::Rotation2Dd r0(0.);
    r0.fromRotationMatrix(atrans.rotation());
    Eigen::AngleAxisd r1(r0.angle(), Eigen::Vector3d::UnitZ());

    int idx = 0;
    for (int y = 0; y < 3; ++y) {
      for (int x = 0; x < 3; ++x, ++idx) {
        trans.rot[idx] = r1.matrix()(y, x);
      }
    }
  }

  void 
  Transform3DHelper::atrans3ToTransform3D(Transform3D& trans, kn::ATrans3 const& atrans, rapid::RotationEncoding encoding)
  {
    trans.xyz[0] = atrans.translation()[0];
    trans.xyz[1] = atrans.translation()[1];
    trans.xyz[2] = atrans.translation()[2];
    
    int idx = 0;
    for (int y = 0; y < 3; ++y) {
      for (int x = 0; x < 3; ++x, ++idx) {
        trans.rot[idx] = atrans.rotation()(y, x);
      }
    }
  }
}
