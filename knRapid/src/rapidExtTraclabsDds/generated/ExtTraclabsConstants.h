
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ExtTraclabsConstants.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ExtTraclabsConstants_884907845_h
#define ExtTraclabsConstants_884907845_h

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

namespace traclabs{

/**

 * A list of commonly used topic names.

 * Custom topic names should

 * have the standard name as the root, separated from the specialization by the "-" character, e.g.

 * <code>rapid_position_sample-relative<code>

 */
             
static const rapid::String64 NOTICE_CONFIG_TOPIC = "traclabs_notice_config";             
static const rapid::String64 NOTICE_STATE_TOPIC = "traclabs_notice_state";             
static const rapid::String64 NOTICE_ACK_TOPIC = "traclabs_notice_ack";
} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */


#endif /* ExtTraclabsConstants_884907845_h */
