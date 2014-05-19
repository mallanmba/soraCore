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
#ifndef rapid_Transform3DHelper_h
#define rapid_Transform3DHelper_h

#include "rapidUtil_Export.h"

#include "rapidDds/BaseTypes.h"

#include "knMath/ATrans.h"
#include "knMath/Vector.h"

namespace rapid
{
  class rapidUtil_Export Transform3DHelper
  {
  public:
    static void tranform3DToVector2(kn::Vector2& pos, Transform3D const& trans);
    static void transform3DToATrans2(kn::ATrans2& atrans, Transform3D const& trans);

    static void tranform3DToVector3(kn::Vector3& pos, Transform3D const& trans);
    static void transform3DToATrans3(kn::ATrans3& atrans, Transform3D const& trans, rapid::RotationEncoding encoding);

    static void vector2ToTransform3D(Transform3D& trans, kn::Vector2 const& pos);
    static void atrans2ToTransform3D(Transform3D& trans, kn::ATrans2 const& atrans);

    static void vector3ToTransform3D(Transform3D& trans, kn::Vector3 const& pos);
    static void atrans3ToTransform3D(Transform3D& trans, kn::ATrans3 const& atrans, rapid::RotationEncoding encoding);
    
    static void identity(Vec3d& xyz);
    static void identity(Mat33f& rot);
    static void identity(Transform3D& trans);
  };

  inline
  void
  Transform3DHelper::tranform3DToVector2(kn::Vector2& pos, Transform3D const& trans)
  {
    pos[0] = trans.xyz[0];
    pos[1] = trans.xyz[1];
  }

  inline
  void 
  Transform3DHelper::tranform3DToVector3(kn::Vector3& pos, Transform3D const& trans)
  {
    pos[0] = trans.xyz[0];
    pos[1] = trans.xyz[1];
    pos[2] = trans.xyz[2];
  }

  inline
  void 
  Transform3DHelper::vector2ToTransform3D(Transform3D& trans, kn::Vector2 const& pos)
  {
    trans.xyz[0] = pos[0];
    trans.xyz[1] = pos[1];
    identity(trans.rot);
  }

  inline
  void
  Transform3DHelper::vector3ToTransform3D(Transform3D& trans, kn::Vector3 const& pos)
  {
    trans.xyz[0] = pos[0];
    trans.xyz[1] = pos[1];
    trans.xyz[2] = pos[2];
    identity(trans.rot);
  }

  inline
  void
  Transform3DHelper::identity(Vec3d& xyz)
  {
    xyz[0] = 0.f;
    xyz[1] = 0.f;
    xyz[2] = 0.f;
  }
  
  inline
  void
  Transform3DHelper::identity(Mat33f& rot)
  {
    for (int i = 0; i < 9; ++i) {
      rot[i] = (i % 4)? 0.f : 1.f;
    }
  }

  inline
  void 
  Transform3DHelper::identity(Transform3D& trans)
  {
    identity(trans.xyz);
    identity(trans.rot);
  }
}

#endif // rapid_Transform3DHelper_h
