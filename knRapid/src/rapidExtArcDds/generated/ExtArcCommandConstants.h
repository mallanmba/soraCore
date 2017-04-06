
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ExtArcCommandConstants.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ExtArcCommandConstants_163129021_h
#define ExtArcCommandConstants_163129021_h

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
             
static const rapid::String32 FIELDDMAPPING = "FieldDMapping";
/**  Request to start a process. */
             
static const rapid::String32 FIELDDMAPPING_METHOD_SETACTIVE = "setActive";
/** Key for parameter used in FIELDDMAPPING. */
             
static const rapid::String32 FIELDDMAPPING_METHOD_PARAM_FLAG = "flag";             
static const rapid::DataType FIELDDMAPPING_METHOD_DTYPE_FLAG = (rapid::RAPID_BOOL);             
static const rapid::String32 DSTARLITEMAPPING = "DStarLiteMapping";             
static const rapid::String32 DSTARLITEMAPPING_METHOD_SETACTIVE = "setActive";             
static const rapid::String32 DSTARLITEMAPPING_METHOD_PARAM_FLAG = "flag";             
static const rapid::DataType DSTARLITEMAPPING_METHOD_DTYPE_FLAG = (rapid::RAPID_BOOL);             
static const rapid::String32 MOTION = "Motion";             
static const rapid::DataType MOTION_METHOD_DTYPE = (rapid::RAPID_FLOAT);             
static const rapid::String32 MOTION_METHOD_ABORT = "abort";             
static const rapid::String32 MOTION_METHOD_SETSPEED = "setSpeed";             
static const rapid::String32 MOTION_METHOD_SETSPEED_PARAM_MAXWHEELSPEED = "maxWheelSpeed";             
static const rapid::String32 MOTION_METHOD_DRIVEARC = "driveArc";             
static const rapid::String32 MOTION_METHOD_DRIVEARC_PARAM_DISTANCE = "distance";             
static const rapid::String32 MOTION_METHOD_DRIVEARC_PARAM_HEADINGCHANGE = "headingChange";             
static const rapid::String32 MOTION_METHOD_DRIVEARC_PARAM_CRABDIRECTION = "crabDirection";             
static const rapid::String32 MOTION_METHOD_DRIVETO = "driveTo";             
static const rapid::String32 MOTION_METHOD_DRIVETO_PARAM_DELTAX = "dX";             
static const rapid::String32 MOTION_METHOD_DRIVETO_PARAM_DELTAY = "dY";             
static const rapid::String32 MOTION_METHOD_DRIVETO_PARAM_HEADINGCHANGE = "headingChange";             
static const rapid::String32 PAINTER = "Painter";             
static const rapid::String32 PAINTER_METHOD_DRAWLINE = "drawLine";             
static const rapid::String32 PAINTER_METHOD_DRAWLINE_PARAM_LABEL = "label";             
static const rapid::DataType PAINTER_METHOD_DRAWLINE_DTYPE_LABEL = (rapid::RAPID_STRING);             
static const rapid::String32 PAINTER_METHOD_DRAWLINE_PARAM_TYPE = "type";             
static const rapid::DataType PAINTER_METHOD_DRAWLINE_DTYPE_TYPE = (rapid::RAPID_STRING);             
static const rapid::String32 PAINTER_METHOD_DRAWLINE_PARAM_WIDTH = "width";             
static const rapid::DataType PAINTER_METHOD_DRAWLINE_DTYPE_WIDTH = (rapid::RAPID_FLOAT);             
static const rapid::String32 PAINTER_METHOD_DRAWLINE_PARAM_XYZ0 = "xyz0";             
static const rapid::DataType PAINTER_METHOD_DRAWLINE_DTYPE_XYZ0 = (rapid::RAPID_VEC3d);             
static const rapid::String32 PAINTER_METHOD_DRAWLINE_PARAM_XYZ1 = "xyz1";             
static const rapid::DataType PAINTER_METHOD_DRAWLINE_DTYPE_XYZ1 = (rapid::RAPID_VEC3d);             
static const rapid::String32 PAINTER_METHOD_ERASELINE = "eraseLine";             
static const rapid::String32 PAINTER_METHOD_ERASELINE_PARAM_LABEL = "label";             
static const rapid::DataType PAINTER_METHOD_ERASELINE_DTYPE_LABEL = (rapid::RAPID_STRING);             
static const rapid::String32 SCI = "ScienceInstrument";             
static const rapid::String32 SCI_METHOD_SETPARAMETERS = "setParameters";             
static const rapid::DataType SCI_METHOD_DTYPE_DOCUMENT = (rapid::RAPID_STRING);             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT0 = "document0";             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT1 = "document1";             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT2 = "document2";             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT3 = "document3";             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT4 = "document4";             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT5 = "document5";             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT6 = "document6";             
static const rapid::String32 SCI_METHOD_PARAM_DOCUMENT7 = "document7";             
static const rapid::String32 SCI_METHOD_ACQUIRE = "acquire";             
static const rapid::DataType SCI_METHOD_DTYPE_STATIONMETADATA = (rapid::RAPID_STRING);             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA0 = "stationMetadata0";             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA1 = "stationMetadata1";             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA2 = "stationMetadata2";             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA3 = "stationMetadata3";             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA4 = "stationMetadata4";             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA5 = "stationMetadata5";             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA6 = "stationMetadata6";             
static const rapid::String32 SCI_METHOD_PARAM_STATIONMETADATA7 = "stationMetadata7";             
static const rapid::String32 IMGSTREAM = "ImageStream";             
static const rapid::String32 IMGSTREAM_METHOD_setResolution = "setResolution";             
static const rapid::String32 IMGSTREAM_METHOD_setResolution_PARAM_divisor = "divisor";             
static const rapid::DataType IMGSTREAM_METHOD_setResolution_DTYPE_divisor = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setResizeWidth = "setResizeWidth";             
static const rapid::String32 IMGSTREAM_METHOD_setResizeWidth_PARAM_width = "width";             
static const rapid::DataType IMGSTREAM_METHOD_setResizeWidth_DTYPE_width = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setResizeHeight = "setResizeHeight";             
static const rapid::String32 IMGSTREAM_METHOD_setResizeHeight_PARAM_height = "height";             
static const rapid::DataType IMGSTREAM_METHOD_setResizeHeight_DTYPE_height = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setResize = "setResize";             
static const rapid::String32 IMGSTREAM_METHOD_setResize_PARAM_width = "width";             
static const rapid::DataType IMGSTREAM_METHOD_setResize_DTYPE_width = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setResize_PARAM_height = "height";             
static const rapid::DataType IMGSTREAM_METHOD_setResize_DTYPE_height = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setResizeQuality = "setResizeQuality";             
static const rapid::String32 IMGSTREAM_METHOD_setResizeQuality_PARAM_quality = "quality";             
static const rapid::DataType IMGSTREAM_METHOD_setResizeQuality_DTYPE_quality = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setCrop = "setCrop";             
static const rapid::String32 IMGSTREAM_METHOD_setCrop_PARAM_cropX = "cropX";             
static const rapid::DataType IMGSTREAM_METHOD_setCrop_DTYPE_cropX = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setCrop_PARAM_cropY = "cropY";             
static const rapid::DataType IMGSTREAM_METHOD_setCrop_DTYPE_cropY = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setCrop_PARAM_width = "width";             
static const rapid::DataType IMGSTREAM_METHOD_setCrop_DTYPE_width = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setCrop_PARAM_height = "height";             
static const rapid::DataType IMGSTREAM_METHOD_setCrop_DTYPE_height = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setQuality = "setQuality";             
static const rapid::String32 IMGSTREAM_METHOD_setQuality_PARAM_quality = "quality";             
static const rapid::DataType IMGSTREAM_METHOD_setQuality_DTYPE_quality = (rapid::RAPID_INT);             
static const rapid::String32 IMGSTREAM_METHOD_setSaveImages = "setSaveImages";             
static const rapid::String32 IMGSTREAM_METHOD_setSaveImages_PARAM_saveImages = "saveImages";             
static const rapid::DataType IMGSTREAM_METHOD_setSaveImages_DTYPE_saveImages = (rapid::RAPID_BOOL);             
static const rapid::String32 IMGSTREAM_METHOD_reconnect = "reconnect";             
static const rapid::String32 ADVNAV = "AdvNav";             
static const rapid::String32 ADVNAV_METHOD_startGlobalAlign = "startGlobalAlign";             
static const rapid::String32 ROSBRIDGE = "RosBridge";             
static const rapid::String32 ROSBRIDGE_METHOD_setMinSeparation = "setMinSeparation";             
static const rapid::String32 ROSBRIDGE_METHOD_setMinSeparation_PARAM_msec = "msec";             
static const rapid::DataType ROSBRIDGE_METHOD_setMinSeparation_DTYPE_msec = (rapid::RAPID_INT);             
static const rapid::String32 GIMBAL = "Gimbal";             
static const rapid::String32 GIMBAL_METHOD_setPanTilt = "setPanTilt";             
static const rapid::String32 GIMBAL_METHOD_setPanTilt_PARAM_pan = "pan";             
static const rapid::DataType GIMBAL_METHOD_setPanTilt_DTYPE_pan = (rapid::RAPID_FLOAT);             
static const rapid::String32 GIMBAL_METHOD_setPanTilt_PARAM_tilt = "tilt";             
static const rapid::DataType GIMBAL_METHOD_setPanTilt_DTYPE_tilt = (rapid::RAPID_FLOAT);
} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* ExtArcCommandConstants_163129021_h */
