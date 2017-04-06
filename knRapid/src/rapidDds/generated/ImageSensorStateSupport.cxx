
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "ImageSensorStateSupport.h"
#include "ImageSensorStatePlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace rapid{

/**

 * Holds status information for an image sensor - typically a camera, but could be a laser scanner, gpr, or any

 * sensor that can pack a data sample into a 2D array

 */



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'ImageSensorState' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   ImageSensorStateTYPENAME

/* Defines */
#define TDataWriter ImageSensorStateDataWriter
#define TData       ::rapid::ImageSensorState


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   ImageSensorStateTYPENAME

/* Defines */
#define TDataReader ImageSensorStateDataReader
#define TDataSeq    ImageSensorStateSeq
#define TData       ::rapid::ImageSensorState


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    ImageSensorStateTYPENAME
#define TPlugin_new  ::rapid::ImageSensorStatePlugin_new
#define TPlugin_delete  ::rapid::ImageSensorStatePlugin_delete

/* Defines */
#define TTypeSupport ImageSensorStateTypeSupport
#define TData        ::rapid::ImageSensorState
#define TDataReader  ImageSensorStateDataReader
#define TDataWriter  ImageSensorStateDataWriter
#ifdef __cplusplus

#define RTI_VALUETYPE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef RTI_VALUETYPE

#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete



} /* namespace rapid */
