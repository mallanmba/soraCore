
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ExtCommandConstants.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ExtCommandConstants_1970003168_h
#define ExtCommandConstants_1970003168_h

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
             
static const rapid::String32 PROCMGR = "ProcessManager";
/**  Request to start a process. */
             
static const rapid::String32 PROCMGR_METHOD_START = "start";
/**  Request to stop a process. */
             
static const rapid::String32 PROCMGR_METHOD_STOP = "stop";
/**  Request to kill a process. */
             
static const rapid::String32 PROCMGR_METHOD_KILL = "kill";
/**  Setting the command-line parameters for a process. */
             
static const rapid::String32 PROCMGR_METHOD_SETCOMMANDLINE = "setCommandLine";
/** Key for parameter used in reply by bridge. */
             
static const rapid::String32 PROCMGR_METHOD_PARAM_PROCESSID = "proccessId";             
static const rapid::DataType PROCMGR_METHOD_DTYPE_PROCESSID = (rapid::RAPID_INT);             
static const rapid::String32 PROCMGR_METHOD_PARAM_CMDLINE = "cmdLine";             
static const rapid::DataType PROCMGR_METHOD_DTYPE_CMDLINE = (rapid::RAPID_STRING);             
static const rapid::String32 VESCTRL = "VESCtrl";
/**  Request to start a process. */
             
static const rapid::String32 VESCTRL_METHOD_SETACTIVE = "setActive";             
static const rapid::String32 VESCTRL_METHOD_SETADVISORYMODE = "setAdvisoryMode";
/** Key for parameter used in VECtrl. */
             
static const rapid::String32 VESCTRL_METHOD_PARAM_FLAG = "flag";             
static const rapid::DataType VESCTRL_METHOD_DTYPE_FLAG = (rapid::RAPID_BOOL);             
static const rapid::String32 LMCTRL = "LocalMapCtrl";
/**  Request to start a process. */
             
static const rapid::String32 LMCTRL_METHOD_SETACTIVE = "setActive";             
static const rapid::String32 LMCTRL_METHOD_CLEARMAP = "clearMap";             
static const rapid::String32 LMCTRL_METHOD_CLEARCORRECTION = "clearCorrection";             
static const rapid::String32 LMCTRL_METHOD_CLEARUNDERROVER = "clearUnderRover";             
static const rapid::String32 LMCTRL_METHOD_SETREGION = "setRegion";
/** Key for parameter used in LocalMapCtrl. */
             
static const rapid::String32 LMCTRL_METHOD_PARAM_FLAG = "flag";             
static const rapid::DataType LMCTRL_METHOD_DTYPE_FLAG = (rapid::RAPID_BOOL);             
static const rapid::String32 LMCTRL_METHOD_PARAM_RADIUS = "radius";             
static const rapid::DataType LMCTRL_METHOD_DTYPE_RADIUS = (rapid::RAPID_FLOAT);             
static const rapid::String32 LMCTRL_METHOD_PARAM_X = "x";             
static const rapid::DataType LMCTRL_METHOD_DTYPE_X = (rapid::RAPID_FLOAT);             
static const rapid::String32 LMCTRL_METHOD_PARAM_Y = "y";             
static const rapid::DataType LMCTRL_METHOD_DTYPE_Y = (rapid::RAPID_FLOAT);             
static const rapid::String32 LMCTRL_METHOD_PARAM_TRAV = "traversability";             
static const rapid::DataType LMCTRL_METHOD_DTYPE_TRAV = (rapid::RAPID_FLOAT);             
static const rapid::String32 LMCTRL_METHOD_PARAM_CERT = "certainty";             
static const rapid::DataType LMCTRL_METHOD_DTYPE_CERT = (rapid::RAPID_FLOAT);
} /* namespace ext */

} /* namespace rapid */


#endif /* ExtCommandConstants_1970003168_h */
