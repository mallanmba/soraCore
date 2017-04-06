
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from K10Defs.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef K10Defs_1493337355_h
#define K10Defs_1493337355_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#include "BaseTypes.h"


namespace rapid{

/** Indexes for k10 motor group messages. */

namespace k10{

namespace joint{

/** Motor group includes steering and wheel angles. */
             
static const rapid::String32 JOINTS_MOTOR_GROUP = "MotorGroup";
/** Arm that had been mounted on K9 previously. */
             
static const rapid::String32 JOINTS_K9_ARM = "K9Arm";
/** Indexes for the motor group. */
             
static const DDS_Long FL_DRIVE = 0;             
static const DDS_Long FR_DRIVE = 1;             
static const DDS_Long RL_DRIVE = 2;             
static const DDS_Long RR_DRIVE = 3;             
static const DDS_Long FL_STEER = 4;             
static const DDS_Long FR_STEER = 5;             
static const DDS_Long RL_STEER = 6;             
static const DDS_Long RR_STEER = 7;
} /* namespace joint */

} /* namespace k10 */

} /* namespace rapid */


#endif /* K10Defs_1493337355_h */
