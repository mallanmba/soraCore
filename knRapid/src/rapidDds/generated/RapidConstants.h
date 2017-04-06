
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RapidConstants.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RapidConstants_658707770_h
#define RapidConstants_658707770_h

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

/**

 * A list of commonly used topic names. If an Agent has multiple of the same message type, the topics

 * should be named accordingly and listed in the AgentConfig topics. Custom topic names should

 * have the standard name as the root, separated from the specialization by the "-" character, e.g.

 * <code>rapid_position_sample-relative<code>

 */
             
static const rapid::String64 ACK_TOPIC = "rapid_ack";             
static const rapid::String64 AGENT_CONFIG_TOPIC = "rapid_agent_config";             
static const rapid::String64 AGENT_STATE_TOPIC = "rapid_agent_state";             
static const rapid::String64 COMMAND_TOPIC = "rapid_command";             
static const rapid::String64 COMMAND_CONFIG_TOPIC = "rapid_command_config";             
static const rapid::String64 FILEANNOUNCE_TOPIC = "rapid_fileannounce";             
static const rapid::String64 FILEQUEUE_COMMAND_TOPIC = "rapid_filequeue_command";             
static const rapid::String64 FILEQUEUE_CONFIG_TOPIC = "rapid_filequeue_config";             
static const rapid::String64 FILEQUEUE_SAMPLE_TOPIC = "rapid_filequeue_sample";             
static const rapid::String64 FILEQUEUE_STATE_TOPIC = "rapid_filequeue_state";             
static const rapid::String64 FILEQUEUEENTRY_STATE_TOPIC = "rapid_filequeueentry_state";             
static const rapid::String64 FILEQUEUEENTRY_STATE_RECEIVER_TOPIC = "rapid_filequeueentry_state_receiver";             
static const rapid::String64 FILEQUEUERECEIVER_SAMPLE_TOPIC = "rapid_filequeuereceiver_sample";             
static const rapid::String64 FRAMESTORE_CONFIG_TOPIC = "rapid_framestore_config";             
static const rapid::String64 IMAGESENSOR_SAMPLE_TOPIC = "rapid_imagesensor_sample";             
static const rapid::String64 IMAGESENSOR_STATE_TOPIC = "rapid_imagesensor_state";             
static const rapid::String64 JOINT_CONFIG_TOPIC = "rapid_joint_config";             
static const rapid::String64 JOINT_SAMPLE_TOPIC = "rapid_joint_sample";             
static const rapid::String64 MACRO_CONFIG_TOPIC = "rapid_macro_config";             
static const rapid::String64 MACRO_STATE_TOPIC = "rapid_macro_state";             
static const rapid::String64 POINTCLOUD_CONFIG_TOPIC = "rapid_pointcloud_config";             
static const rapid::String64 POINTCLOUD_SAMPLE_TOPIC = "rapid_pointcloud_sample";             
static const rapid::String64 POSITION_CONFIG_TOPIC = "rapid_position_config";             
static const rapid::String64 POSITION_SAMPLE_TOPIC = "rapid_position_sample";             
static const rapid::String64 QUEUE_STATE_TOPIC = "rapid_queue_state";             
static const rapid::String64 TEXTMESSAGE_TOPIC = "rapid_textmessage";             
static const rapid::String64 ACCESSCONTROL_STATE_TOPIC = "rapid_accesscontrol_state";
} /* namespace rapid */


#endif /* RapidConstants_658707770_h */
