
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ExtArcConstants.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ExtArcConstants_1325243030_h
#define ExtArcConstants_1325243030_h

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

namespace ext{

namespace arc{

/**

 * A list of commonly used topic names. If an Agent has multiple of the same message type, the topics

 * should be named accordingly and listed in the AgentConfig topics. Custom topic names should

 * have the standard name as the root, separated from the specialization by the "-" character, e.g.

 * <code>rapid_position_sample-relative<code>

 */
             
static const rapid::String64 BATTERYPACK_CONFIG_TOPIC = "rapid_batterypack_config";             
static const rapid::String64 BATTERYPACK_SAMPLE_TOPIC = "rapid_batterypack_sample";             
static const rapid::String64 DLP_CONFIG_TOPIC = "rapid_dlp_config";             
static const rapid::String64 DLP_SAMPLE_TOPIC = "rapid_dlp_sample";             
static const rapid::String64 EPHEMERIS_CONFIG_TOPIC = "rapid_ephemeris_config";             
static const rapid::String64 EPHEMERIS_SAMPLE_TOPIC = "rapid_ephemeris_sample";             
static const rapid::String64 FLOAT32_CONFIG_TOPIC = "rapid_float32_config";             
static const rapid::String64 FLOAT32_SAMPLE_TOPIC = "rapid_float32_sample";             
static const rapid::String64 GEOMETRY_CONFIG_TOPIC = "rapid_geometry_config";             
static const rapid::String64 GEOMETRYMESH_SAMPLE_TOPIC = "rapid_geometrymesh_sample";             
static const rapid::String64 GPS_CONFIG_TOPIC = "rapid_gps_config";             
static const rapid::String64 GPS_SAMPLE_TOPIC = "rapid_gps_sample";             
static const rapid::String64 HYDRA_CONFIG_TOPIC = "rapid_hydra_config";             
static const rapid::String64 HYDRA_SAMPLE_TOPIC = "rapid_hydra_sample";             
static const rapid::String64 MOBILITY_SAMPLE_TOPIC = "rapid_mobility_sample";             
static const rapid::String64 SPECTRUM_CONFIG_TOPIC = "rapid_spectrum_config";             
static const rapid::String64 SPECTRUM_SAMPLE_TOPIC = "rapid_spectrum_sample";             
static const rapid::String64 STATEMACHINE_CONFIG_TOPIC = "rapid_statemachine_config";             
static const rapid::String64 STATEMACHINE_STATE_TOPIC = "rapid_statemachine_state";             
static const rapid::String64 WHEELGROUP_SAMPLE_TOPIC = "rapid_wheelgroup_sample";             
static const rapid::String64 ROSMARKERARRAY_SAMPLE_TOPIC = "rapid_rosmarkerarray_sample";
} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* ExtArcConstants_1325243030_h */
