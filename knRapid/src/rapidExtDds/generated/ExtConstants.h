
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ExtConstants.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ExtConstants_807604016_h
#define ExtConstants_807604016_h

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

/**

 * A list of commonly used topic names. If an Agent has multiple of the same message type, the topics

 * should be named accordingly and listed in the AgentConfig topics. Custom topic names should

 * have the standard name as the root, separated from the specialization by the "-" character, e.g.

 * <code>rapid_position_sample-relative<code>

 */
             
static const rapid::String64 NAVMAP_CONFIG_TOPIC = "rapid_navmap_config";             
static const rapid::String64 NAVMAP_SAMPLE_TOPIC = "rapid_navmap_sample";             
static const rapid::String64 RANGESCAN_CONFIG_TOPIC = "rapid_rangescan_config";             
static const rapid::String64 RANGESCAN_SAMPLE_TOPIC = "rapid_rangescan_sample";             
static const rapid::String64 PROCESSMANAGER_CONFIG_TOPIC = "rapid_processmanager_config";             
static const rapid::String64 PROCESSMANAGER_STATE_TOPIC = "rapid_processmanager_state";             
static const rapid::String64 PROCESSIO_SAMPLE_TOPIC = "rapid_processio_sample";             
static const rapid::String64 SYSTEMINFO_CONFIG_TOPIC = "rapid_systeminfo_config";             
static const rapid::String64 SYSTEMINFO_SAMPLE_TOPIC = "rapid_systeminfo_sample";             
static const rapid::String64 TRAJECTORY_CONFIG_TOPIC = "rapid_trajectory_config";             
static const rapid::String64 TRAJECTORY_SAMPLE_TOPIC = "rapid_trajectory_sample";             
static const rapid::String64 TRAJECTORY2D_CONFIG_TOPIC = "rapid_trajectory2d_config";             
static const rapid::String64 TRAJECTORY2D_SAMPLE_TOPIC = "rapid_trajectory2d_sample";             
static const rapid::String64 VESTOP_CONFIG_TOPIC = "rapid_vestop_config";             
static const rapid::String64 VESTOP_STATE_TOPIC = "rapid_vestop_state";
} /* namespace ext */

} /* namespace rapid */


#endif /* ExtConstants_807604016_h */
