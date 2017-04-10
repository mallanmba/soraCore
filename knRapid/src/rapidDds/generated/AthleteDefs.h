
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AthleteDefs.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AthleteDefs_1728187668_h
#define AthleteDefs_1728187668_h

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
             
static const DDS_Long ATHLETE_LEG_1 = 0;             
static const DDS_Long ATHLETE_LEG_2 = 1;             
static const DDS_Long ATHLETE_LEG_3 = 2;             
static const DDS_Long ATHLETE_LEG_4 = 3;             
static const DDS_Long ATHLETE_LEG_5 = 4;             
static const DDS_Long ATHLETE_LEG_6 = 5;             
static const DDS_Long ATHLETE_AUX_LEG_ID_INDEX = 0;             
static const DDS_Long ATHLETE_AUX_MOTOR_ANGLE_INDEX = 1;             
static const rapid::String32 ATHLETE_SUBSYS_NAME_EHA = "ATHLETE_EHA";             
static const rapid::String32 ATHLETE_SUBSYS_NAME_FORCE_TORQUE = "ATHLETE_FORCE_TORQUE";             
static const rapid::String32 ATHLETE_SUBSYS_NAME_BATT = "ATHLETE_BATTERY";             
static const rapid::String16 ATHLETE_HEADING_RAD_KEY = "ATHLETE_HEADING_RAD";             
static const rapid::String16 ATHLETE_BODY_TILT_KEY = "ATHLETE_BODY_TILT";             
static const rapid::String16 ATHLETE_BODY_ROLL_KEY = "ATHLETE_BODY_ROLL";             
static const rapid::String16 ATHLETE_BODY_PITCH_KEY = "ATHLETE_BODY_PITCH";             
static const rapid::String16 ATHLETE_ODOMETRY_KEY = "ATHLETE_ODOMETRY";             
static const rapid::String16 ATHLETE_HEADING_FLOAT = "ATHLETE_HEADING_RAD__FLOAT__";             
static const rapid::String16 ATHLETE_TILT_FLOAT = "ATHLETE_BODY_TILT__FLOAT__";             
static const rapid::String16 ATHLETE_ROLL_FLOAT = "ATHLETE_BODY_ROLL__FLOAT__";             
static const rapid::String16 ATHLETE_PITCH_FLOAT = "ATHLETE_BODY_PITCH__FLOAT__";             
static const rapid::String16 ATHLETE_ODOMETRY_FLOAT = "ATHLETE_ODOMETRY__FLOAT__";             
static const rapid::String16 ATHLETE_PROC_ID_INT = "ATHLETE_PROCESSOR_ID__INT__";             
static const rapid::String16 ATHLETE_CAM_REFP_X_FLOAT = "ATHLETE_CAM_REFP_X__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_REFP_Y_FLOAT = "ATHLETE_CAM_REFP_Y__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_REFP_Z_FLOAT = "ATHLETE_CAM_REFP_Z__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_REFQ_P_FLOAT = "ATHLETE_CAM_REFQ_P__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_REFQ_Y_FLOAT = "ATHLETE_CAM_REFQ_Y__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_REFQ_R_FLOAT = "ATHLETE_CAM_REFQ_R__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_REFQ_W_FLOAT = "ATHLETE_CAM_REFQ_W__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_V2_FLOAT = "ATHLETE_CAM_V2__FLOAT__";             
static const rapid::String16 ATHLETE_CAM_IMG_ACQ_TIME_FLOAT = "ATHLETE_CAM_IMGACQTIM__FLOAT__";             
static const rapid::String16 ATHLETE_BATT1_INT = "ATHLETE_BATT1__INT__";             
static const rapid::String16 ATHLETE_BATT2_INT = "ATHLETE_BATT2__INT__";             
static const rapid::String16 ATHLETE_BATT3_INT = "ATHLETE_BATT3__INT__";             
static const rapid::String16 ATHLETE_BATT4_INT = "ATHLETE_BATT4__INT__";             
static const rapid::String16 ATHLETE_BATT5_INT = "ATHLETE_BATT5__INT__";             
static const rapid::String16 ATHLETE_BATT6_INT = "ATHLETE_BATT6__INT__";             
static const rapid::String16 ATHLETE_BATTV12_INT = "ATHLETE_BATTV12__INT__";             
static const rapid::String16 ATHLETE_BATTV24_INT = "ATHLETE_BATTV24__INT__";             
static const rapid::String16 ATHLETE_BATTV48_INT = "ATHLETE_BATTV48__INT__";             
static const rapid::String16 ATHLETE_BATTSOC_INT = "ATHLETE_BATTSOC__INT__";             
static const rapid::String32 ATHLETE_NUM_LEGS = "ATHLETE_NUM_LEGS";             
static const rapid::String32 ATHLETE_DRIVE_FACE = "ATHLETE_DRIVE_FACE";             
static const rapid::String32 ATHLETE_NUM_JOINTS = "ATHLETE_NUM_JOINTS";             
static const rapid::String32 ATHLETE_CAMERA_SET = "ATHLETE_CAMERA_SET";             
static const rapid::String32 ATHLETE_CAMERA_SELECTION = "ATHLETE_CAMERA_SELECTION";             
static const rapid::String32 ATHLETE_CAMERA_LEG = "ATHLETE_CAMERA_LEG";
/** Articulation indexes for the JointData arrays. */
             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_HIP_YAW = 0;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_HIP_PITCH = 1;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_THIGH_PITCH = 2;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_KNEE_PITCH = 3;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_KNEE_ROLL = 4;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_ANKLE_PITCH = 5;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_ANKLE_ROLL = 6;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_GRIPPER = 7;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_WHEEL = 8;             
static const DDS_Long ATHLETE_ARTIC_JOINTDATA_INDEX_DOCK = 9;             
static const rapid::String16 FLOAT_TYPE_KEY = "__FLOAT__";             
static const rapid::String16 INT_TYPE_KEY = "__INT__";
} /* namespace rapid */


#endif /* AthleteDefs_1728187668_h */
