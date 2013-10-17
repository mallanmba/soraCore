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
#ifndef kn_LocomotorCmd_h
#define kn_LocomotorCmd_h

#include "knMotorShare_Export.h"

#include <iosfwd>

namespace kn
{
  class LocomotorCmd;
  knMotorShare_Export std::ostream& operator << (std::ostream& ostr, LocomotorCmd const& rhs);

  static int const LOC_MODE_NOP = -1; //!< setting for unitialized
  static int const LOC_MODE_EMERGENCY_STOP = 0;
  static int const LOC_MODE_STOP = 1;
  static int const LOC_MODE_ROTATE = 2;  //!< headingChange
  static int const LOC_MODE_TRANSLATE = 3; //!< distance
  static int const LOC_MODE_CRAB = 4; //!< distance, direction
  static int const LOC_MODE_ARC = 5; //!< headingChange, distance
  static int const LOC_MODE_CRAB_ARC = 6; //!< headingChange, direction, distance
  static int const LOC_MODE_DRIVE_TO = 7; //!< distance, direction
  static int const LOC_MODE_CLOTHOID = 8; 
  static int const LOC_MODE_FAST_STEER = 9; //!< targetSpeed, targetCurvature

  class LocomotorCmd
  {
  public:
    //! Locomotion mode.
    /** Use the defined constants */
     int locMode;
    //! Requested change of robot heading in rad.
    double headingChange;
    //! Linear distance 
    double distance;
    //! Crabbing angle in rad.
    double direction;

    //! Maximum speed of the fastest wheel in rad/s.
    double targetSpeed;
    //! Turn curvature (1/radius).
    double targetCurvature;
    //! Timeout in sec
    /** The default will be .5 sec. */
    double timeout;

    LocomotorCmd() throw();
    LocomotorCmd(unsigned int m, double h, double dist, double dir,
                 double speed, double curv, double t) throw();

    void setModeEmergencyStop() throw();
    void setModeStop() throw();
    void setModeTranslate(double dist) throw();
    void setModeRotate(double delta) throw();
    void setModeCrab(double dist, double phi) throw();
    void setModeArc(double dist, double delta) throw();
    void setModeCrabArc(double dist, double delta, double phi) throw();
    void setModeDriveTo(double dist, double phi, double delta) throw();
    void setModeFsd(double speed, double curvature, double time) throw();

    char const* locModeName() const;
    static char const* locModeName(int mode);
  };
  
  inline
  LocomotorCmd::LocomotorCmd() throw() :
    locMode(LOC_MODE_NOP)
  {} 

  inline
  LocomotorCmd::LocomotorCmd(unsigned int m,
                             double h,
                             double dist,
                             double dir,
                             double speed,
                             double curv,
                             double t) throw() :
    locMode(m),
    headingChange(h),
    distance(dist),
    direction(dir),
    targetSpeed(speed),
    targetCurvature(curv),
    timeout(t)
  {}

  inline
  void 
  LocomotorCmd::setModeEmergencyStop() throw()
  {
    locMode = LOC_MODE_EMERGENCY_STOP;
  }

  inline
  void 
  LocomotorCmd::setModeStop() throw()
  {
    locMode = LOC_MODE_STOP;
  }

  inline
  void 
  LocomotorCmd::setModeTranslate(double dist) throw()
  {
    locMode = LOC_MODE_TRANSLATE;
    distance = dist;
  }

  inline
  void 
  LocomotorCmd::setModeRotate(double delta) throw()
  {
    locMode = LOC_MODE_ROTATE;
    headingChange = delta;
  }

  inline
  void 
  LocomotorCmd::setModeCrab(double dist, double phi) throw()
  {
    locMode = LOC_MODE_CRAB;
    distance = dist;
    direction = phi;
  }
  
  inline
  void 
  LocomotorCmd::setModeArc(double dist, double delta) throw()
  {
    locMode = LOC_MODE_ARC;
    distance = dist;
    headingChange = delta;
  }
  
  inline
  void 
  LocomotorCmd::setModeCrabArc(double dist, double delta, double phi) throw()
  {
    locMode = LOC_MODE_CRAB_ARC;
    distance = dist;
    headingChange = delta;
    direction = phi;
  }
  
  inline
  void 
  LocomotorCmd::setModeDriveTo(double dist, double phi, double delta) throw()
  {
    locMode = LOC_MODE_DRIVE_TO;
    distance = dist;
    direction = phi;
    headingChange = delta;
  }

  inline
  void 
  LocomotorCmd::setModeFsd(double speed, double curvature, double time) throw()
  {
    locMode = LOC_MODE_FAST_STEER;
    targetSpeed = speed;
    targetCurvature = curvature;
    timeout = time;
  }
}
#endif // kn_LocomotorCmd_h
