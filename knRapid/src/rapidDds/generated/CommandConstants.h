
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommandConstants.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommandConstants_1307673327_h
#define CommandConstants_1307673327_h

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

 * The commands in the Admin Command Group provide high-level test functions and control parameters.

 *

 * The Admin Command Group contains the following commands:

 * <ul>

 *   <li>echo: Echo the parameter text.

 *   <li>shutdown: Terminate the bridge.

 *   <li>noOp: No operation command.

 *   <li>setPositionSamplePublishRate: Publish Agent pose at given rate.

 *   <li>positionSamplePublishRate: Get Agent pose publication rate.

 *   <li>setJointSamplePublishRate: Publish Agent articulation at given rate.

 *   <li>jointSampleRate: Get Agent articulation publication rate.

 * </ul>

 */
             
static const rapid::String32 ADMIN = "Admin";
/**  Echos the parameter text. */
             
static const rapid::String32 ADMIN_METHOD_ECHO = "echo";
/** Key for parameter used in reply by bridge. */
             
static const rapid::String32 ADMIN_METHOD_ECHO_PARAM_ECHOTEXT = "echoText";             
static const rapid::DataType ADMIN_METHOD_ECHO_DTYPE_ECHOTEXT = (rapid::RAPID_STRING);
/** Terminate the bridge. */
             
static const rapid::String32 ADMIN_METHOD_SHUTDOWN = "shutdown";
/** No operation command. */
             
static const rapid::String32 ADMIN_METHOD_NOOP = "noOp";
/** Publish Agent pose at given rate. */
             
static const rapid::String32 ADMIN_METHOD_SETPOSITIONSAMPLEPUBLISHRATE = "setPositionSamplePublishRate";
/** In Hz. */
             
static const rapid::String32 ADMIN_METHOD_SETPOSITIONSAMPLEPUBLISHRATE_PARAM_POSERATE = "positionSamplePublishRate";
/** Publish Agent articulation at given rate. */
             
static const rapid::DataType ADMIN_METHOD_SETPOSITIONSAMPLEPUBLISHRATE_DTYPE_POSERATE = (rapid::RAPID_FLOAT);
/** Publish Agent articulation at given rate. */
             
static const rapid::String32 ADMIN_METHOD_SETJOINTSAMPLEPUBLISHRATE = "setJointSamplePublishRate";
/** Publish Agent articulation at given rate. */
             
static const rapid::String32 ADMIN_METHOD_SETJOINTSAMPLEPUBLISHRATE_PARAM_JOINTSAMPLERATE = "jointSampleRate";
/** Publish Agent articulation at given rate. */
             
static const rapid::DataType ADMIN_METHOD_SETJOINTSAMPLEPUBLISHRATE_DTYPE_JOINTSAMPLERATE = (rapid::RAPID_FLOAT);
/**

 * The commands in the ImageSensor Command Group are used to capture images from Agent-mounted cameras.

 *

 * The ImageSensor Command Group contains the following commands:

 * <ul>

 *   <li>reqSensorState:

 *   <li>imageAcquire:

 * </ul>

 */
             
static const rapid::String32 IMAGESENSOR = "ImageSensor";
/** ImageSensorState message. */
             
static const rapid::String32 IMAGESENSOR_METHOD_REQSENSORSTATE = "reqSensorState";
/** Message. */
             
static const rapid::String32 IMAGESENSOR_METHOD_REQSENSORSTATE_PARAM_SENSORNAME = "sensorName";
/** Message. */
             
static const rapid::DataType IMAGESENSOR_METHOD_REQSENSORSTATE_DTYPE_SENSORNAME = (rapid::RAPID_STRING);
/** Send image acquire command with this command, the ImageCommand attribute will be populated. */
             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE = "imageAcquire";             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_CAMERA_NAME = "cameraName";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_CAMERA_NAME = (rapid::RAPID_STRING);
/** IMAGESENSOR_CAMERA_TYPE_xxx. */
             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_CAMERA_TYPE = "cameraType";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_CAMERA_TYPE = (rapid::RAPID_STRING);
/** MIMETypeConstants. */
             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_CAMERA_MIME_TYPE = "mimeType";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_CAMERA_MIME_TYPE = (rapid::RAPID_STRING);             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_PAN = "pan";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_PAN = (rapid::RAPID_FLOAT);             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_TILT = "tilt";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_TILT = (rapid::RAPID_FLOAT);             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_ZOOM = "zoom";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_ZOOM = (rapid::RAPID_FLOAT);             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_HFOV = "hFOV";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_HFOV = (rapid::RAPID_FLOAT);             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_VFOV = "vFOV";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_VFOV = (rapid::RAPID_FLOAT);
/** IMAGESENSOR_COLOR_TYPE_XXX */
             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_COLORTYPE = "colorType";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_COLORTYPE = (rapid::RAPID_STRING);
/** IMAGESENSOR_CAPTURE_XXX */
             
static const rapid::String32 IMAGESENSOR_METHOD_IMAGEACQUIRE_PARAM_CAPTURE = "captureType";             
static const rapid::DataType IMAGESENSOR_METHOD_IMAGEACQUIRE_DTYPE_CAPTURE = (rapid::RAPID_STRING);             
static const rapid::String32 IMAGESENSOR_COLOR_TYPE_COLOR = "color";             
static const rapid::String32 IMAGESENSOR_COLOR_TYPE_GRAYSCALE = "grayscale";             
static const rapid::String32 IMAGESENSOR_CAPTURE_STREAMING = "streaming";             
static const rapid::String32 IMAGESENSOR_CAPTURE_SINGLE_SHOT = "singleImage";             
static const rapid::String32 IMAGESENSOR_CAPTURE_MULTI_SHOT = "multiImage";             
static const rapid::String32 IMAGESENSOR_CAMERA_TYPE_WEBCAM = "webcam";             
static const rapid::String32 IMAGESENSOR_CAMERA_TYPE_DSLR = "dslr";             
static const rapid::String32 IMAGESENSOR_CAMERA_TYPE_GIGAPAN = "gigapan";
/**

 * The commands in the Mobility Command Group controls the motion of navigable rovers over a surface.

 *

 * The Mobility Command Group contains the following commands:

 * <ul>

 *   <li>simpleMove:

 *   <li>simpleMove6DOF:

 *   <li>move:

 *   <li>move6DOF

 * </ul>

 */
             
static const rapid::String32 MOBILITY = "Mobility";
/** Stops all motion of the Agent, joints, wheels, etc. */
             
static const rapid::String32 MOBILITY_METHOD_STOPALLMOTION = "stopAllMotion";             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE = "simpleMove";             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE_PARAM_FRAME_NAME = "referenceFrame";             
static const rapid::DataType MOBILITY_METHOD_SIMPLEMOVE_DTYPE_FRAME_NAME = (rapid::RAPID_STRING);             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE_PARAM_END_LOCATION = "xyt";             
static const rapid::DataType MOBILITY_METHOD_SIMPLEMOVE_DTYPE_END_LOCATION = (rapid::RAPID_VEC3d);             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE_PARAM_END_LOCATION_TOLERANCE = "xytTolerance";             
static const rapid::DataType MOBILITY_METHOD_SIMPLEMOVE_DTYPE_END_LOCATION_TOLERANCE = (rapid::RAPID_VEC3d);             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE6DOF = "simpleMove6DOF";             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE6DOF_PARAM_FRAME_NAME = "referenceFrame";             
static const rapid::DataType MOBILITY_METHOD_SIMPLEMOVE6DOF_DTYPE_FRAME_NAME = (rapid::RAPID_STRING);             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE6DOF_PARAM_END_LOCATION = "xyz";             
static const rapid::DataType MOBILITY_METHOD_SIMPLEMOVE6DOF_DTYPE_END_LOCATION = (rapid::RAPID_VEC3d);             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE6DOF_PARAM_END_LOCATION_TOLERANCE = "xyzTolerance";             
static const rapid::DataType MOBILITY_METHOD_SIMPLEMOVE6DOF_DTYPE_END_LOCATION_TOLERANCE = (rapid::RAPID_VEC3d);             
static const rapid::String32 MOBILITY_METHOD_SIMPLEMOVE6DOF_PARAM_ROT = "rot";             
static const rapid::DataType MOBILITY_METHOD_SIMPLEMOVE6DOF_DTYPE_ROT = (rapid::RAPID_MAT33f);             
static const rapid::String32 MOBILITY_METHOD_MOVE = "move";             
static const rapid::String32 MOBILITY_METHOD_MOVE_PARAM_FRAME_NAME = "referenceFrame";             
static const rapid::DataType MOBILITY_METHOD_MOVE_DTYPE_FRAME_NAME = (rapid::RAPID_STRING);
/**  Can be defined as a rotation about an axis. */
             
static const rapid::String32 MOBILITY_METHOD_MOVE_PARAM_END_LOCATION = "xyt";             
static const rapid::DataType MOBILITY_METHOD_MOVE_DTYPE_END_LOCATION = (rapid::RAPID_VEC3d);
/**

 * The x,y,theta tolerance for waypoint. Theta is specified in radians. For a non-directional waypoint, use

 * negative or > PI value.

 */
             
static const rapid::String32 MOBILITY_METHOD_MOVE_PARAM_END_LOCATION_TOLERANCE = "xytTolerance";             
static const rapid::DataType MOBILITY_METHOD_MOVE_DTYPE_END_LOCATION_TOLERANCE = (rapid::RAPID_VEC3d);
/** In meters/sec. */
             
static const rapid::String32 MOBILITY_METHOD_MOVE_PARAM_HINTED_SPEED = "hintedSpeed";             
static const rapid::DataType MOBILITY_METHOD_MOVE_DTYPE_HINTED_SPEED = (rapid::RAPID_FLOAT);             
static const rapid::String32 MOBILITY_METHOD_MOVE_PARAM_NAV_ALGO = "navAlgo";             
static const rapid::DataType MOBILITY_METHOD_MOVE_DTYPE_NAV_ALGO = (rapid::RAPID_STRING);             
static const rapid::String32 MOBILITY_METHOD_MOVE6DOF = "move6DOF";             
static const rapid::String32 MOBILITY_METHOD_MOVE6DOF_PARAM_FRAME_NAME = "referenceFrame";             
static const rapid::DataType MOBILITY_METHOD_MOVE6DOF_DTYPE_FRAME_NAME = (rapid::RAPID_STRING);             
static const rapid::String32 MOBILITY_METHOD_MOVE6DOF_PARAM_END_LOCATION = "xyz";             
static const rapid::DataType MOBILITY_METHOD_MOVE6DOF_DTYPE_END_LOCATION = (rapid::RAPID_VEC3d);             
static const rapid::String32 MOBILITY_METHOD_MOVE6DOF_PARAM_END_LOCATION_TOLERANCE = "xyzTolerance";             
static const rapid::DataType MOBILITY_METHOD_MOVE6DOF_DTYPE_END_LOCATION_TOLERANCE = (rapid::RAPID_VEC3d);             
static const rapid::String32 MOBILITY_METHOD_MOVE6DOF_PARAM_ROT = "rot";             
static const rapid::DataType MOBILITY_METHOD_MOVE6DOF_DTYPE_ROT = (rapid::RAPID_MAT33f);
/**  In meters/sec. */
             
static const rapid::String32 MOBILITY_METHOD_MOVE6DOF_PARAM_HINTED_SPEED = "hintedSpeed";             
static const rapid::DataType MOBILITY_METHOD_MOVE6DOF_DTYPE_HINTED_SPEED = (rapid::RAPID_FLOAT);             
static const rapid::String32 MOBILITY_METHOD_MOVE6DOF_PARAM_NAV_ALGO = "navAlgo";             
static const rapid::DataType MOBILITY_METHOD_MOVE6DOF_DTYPE_NAV_ALGO = (rapid::RAPID_STRING);
/** Navigation Algorithm for MobilityCommand. */
             
static const rapid::String32 NAV_ALGO_SAFE = "RAPID_NAV_SAFE";             
static const rapid::String32 NAV_ALGO_BLIND = "RAPID_NAV_BLIND";
/** Frame information for MobilityCommand and CameraCommand. */
             
static const rapid::String32 FRAME_NAME_UTM = "RAPID_UTM_FRAME";             
static const rapid::String32 FRAME_NAME_SITE = "RAPID_SITE_FRAME";             
static const rapid::String32 FRAME_NAME_ROVER = "RAPID_ROVER_FRAME";
/**

 * The commands in the Queue command group control task execution within the Sequencer.

 *

 * The Queue Command Group contains the following commands:

 * <ul>

 *   <li>cancelCurrentTask:

 *   <li>cancelAll:

 *   <li>deleteAll:

 *   <li>suspendOnCompletion:

 *   <li>suspend:

 *   <li>resume:

 *   <li>loadMacro:

 * </ul>

 */
             
static const rapid::String32 QUEUE = "Queue";
/** Abort all active commands (as possible). */
             
static const rapid::String32 QUEUE_METHOD_CANCELCURRENTTASK = "cancelCurrentTask";
/** Mark all commands as canceled. */
             
static const rapid::String32 QUEUE_METHOD_CANCELALL = "cancelAll";
/** Clear all commands. */
             
static const rapid::String32 QUEUE_METHOD_DELETEALL = "deleteAll";
/** Complete currently executed command and suspend queue execution. */
             
static const rapid::String32 QUEUE_METHOD_SUSPENDONCOMPLETE = "suspendOnCompletion";
/** Abort currently executed command (if possible) and suspend queue execution. */
             
static const rapid::String32 QUEUE_METHOD_SUSPEND = "suspend";
/** Resume queue execution. */
             
static const rapid::String32 QUEUE_METHOD_RESUME = "resume";
/** Load the macro with the specified name and version number. */
             
static const rapid::String32 QUEUE_METHOD_LOADMACRO = "loadMacro";
/** Queue paramter: macroName key field name */
             
static const rapid::String32 QUEUE_METHOD_LOADMACRO_PARAM_NAME = "name";             
static const rapid::DataType QUEUE_METHOD_LOADMACRO_DTYPE_NAME = (rapid::RAPID_STRING);             
static const rapid::String32 QUEUE_METHOD_LOADMACRO_PARAM_VERSION = "serial";             
static const rapid::DataType QUEUE_METHOD_LOADMACRO_DTYPE_VERSION = (rapid::RAPID_INT);
/** Delete the macro with the specified name from the Macro library (not the Queue). */
             
static const rapid::String32 QUEUE_METHOD_DELETEMACRO = "deleteMacro";             
static const rapid::String32 QUEUE_METHOD_DELETEMACRO_PARAM_NAME = "name";             
static const rapid::DataType QUEUE_METHOD_DELETEMACRO_DTYPE_NAME = (rapid::RAPID_STRING);
/** Mark a command as canceled (moving it to the completed queue). */
             
static const rapid::DataType QUEUE_METHOD_DTYPE_CMDID = (rapid::RAPID_STRING);             
static const rapid::String32 QUEUE_METHOD_CANCELCOMMAND = "cancelCommand";             
static const rapid::String32 QUEUE_METHOD_CANCELCOMMAND_PARAM_CMDID = "cmdId";
/** To come. */
             
static const rapid::String32 QUEUE_METHOD_REQUEUE = "requeue";             
static const rapid::String32 QUEUE_METHOD_REQUEUE_PARAM_CMDID = "cmdId";             
static const rapid::String32 QUEUE_METHOD_REQUEUE_PARAM_TARGETCMDID = "targetCmdId";
/**

 * The commands in the AccessControl command group govern transfer of control of agents between operators.

 *

 * The AccessControl Command Group contains the following commands:

 * <ul>

 *   <li>requestControl:

 *   <li>grabControl:

 *   <li>releaseControl:

 *   <li>transferControl:

 * </ul>

 */
             
static const rapid::String32 ACCESSCONTROL = "AccessControl";
/** AccessControl method type for requesting control of an Agent. */
             
static const rapid::String32 ACCESSCONTROL_METHOD_REQUESTCONTROL = "requestControl";
/** AccessControl method type for grabbing control of an Agent. */
             
static const rapid::String32 ACCESSCONTROL_METHOD_GRABCONTROL = "grabControl";
/** AccessControl method type for release control of an Agent. */
             
static const rapid::String32 ACCESSCONTROL_METHOD_RELEASECONTROL = "releaseControl";
/** AccessControl method type for transferring control of an Agent.*/
             
static const rapid::String32 ACCESSCONTROL_METHOD_TRANSFERCONTROL = "transferControl";             
static const rapid::String32 ACCESSCONTROL_METHOD_TRANSFERCONTROL_PARAM_RECIPIENT = "controlRecipient";             
static const rapid::DataType ACCESSCONTROL_METHOD_TRANSFERCONTROL_DTYPE_RECIPIENT = (rapid::RAPID_STRING);
/**

 *  RAFT: RAPID Advanced File Transfer subsystem.

 *

 * The RAFT Command Group contains the following commands:

 *

 * <ul>

 *   <li>putFile:

 *   <li>putMatching:

 *   <li>removeFile:

 *   <li>pause:

 *   <li>resume:

 *   <li>setBandwidth:

 * </ul>

 *

 */
             
static const rapid::String32 RAFT = "RAFT";
/** RAFT paramter: Uuid of file. */
             
static const rapid::String32 RAFT_METHOD_PARAM_UUID = "uuid";             
static const rapid::DataType RAFT_METHOD_DTYPE_UUID = (rapid::RAPID_STRING);
/** RAFT paramter: Priority of file. */
             
static const rapid::String32 RAFT_METHOD_PARAM_PRIORITY = "priority";             
static const rapid::DataType RAFT_METHOD_DTYPE_PRIORITY = (rapid::RAPID_FLOAT);
/** RAFT paramter: metaData key field name */
             
static const rapid::String32 RAFT_METHOD_PARAM_KEY = "key";             
static const rapid::DataType RAFT_METHOD_DTYPE_KEY = (rapid::RAPID_STRING);
/** RAFT paramter: value of the metaData key field. For now, only stings are supported. */
             
static const rapid::String32 RAFT_METHOD_PARAM_VALUE = "value";             
static const rapid::DataType RAFT_METHOD_DTYPE_VALUE = (rapid::RAPID_STRING);
/** RAFT paramter: Channel id. */
             
static const rapid::String32 RAFT_METHOD_PARAM_CHANNELID = "channelId";             
static const rapid::DataType RAFT_METHOD_DTYPE_CHANNELID = (rapid::RAPID_INT);
/** RAFT paramter: Bandwidth. */
             
static const rapid::String32 RAFT_METHOD_PARAM_BANDWIDTHBPS = "bandwidthBps";             
static const rapid::DataType RAFT_METHOD_DTYPE_BANDWIDTHBPS = (rapid::RAPID_INT);             
static const rapid::String32 RAFT_METHOD_PARAM_PREFETCHKBANDWIDTHBPS = "prefetchBandwidthBps";             
static const rapid::DataType RAFT_METHOD_DTYPE_PREFETCHKBANDWIDTHBPS = (rapid::RAPID_INT);
/**  Put file into RAFT queue. */
             
static const rapid::String32 RAFT_METHOD_PUTFILE = "putFile";
/**  Put data product files into RAFT queue. */
             
static const rapid::String32 RAFT_METHOD_PUTMATCHING = "putMatching";
/** Remove file from RAFT queue. */
             
static const rapid::String32 RAFT_METHOD_REMOVEFILE = "removeFile";
/** Pause a RAFT queue. */
             
static const rapid::String32 RAFT_METHOD_PAUSE = "pause";
/** Resume a RAFT queue. */
             
static const rapid::String32 RAFT_METHOD_RESUME = "resume";
/** Resume a RAFT queue. */
             
static const rapid::String32 RAFT_METHOD_SETBANDWIDTH = "setBandwidth";
} /* namespace rapid */


#endif /* CommandConstants_1307673327_h */
