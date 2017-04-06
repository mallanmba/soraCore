
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "GeometryConfigSupport.h"
#include "GeometryConfigPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace rapid{

namespace ext{

namespace arc{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'GeometryConfig' support classes.

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
#define TTYPENAME   GeometryConfigTYPENAME

/* Defines */
#define TDataWriter GeometryConfigDataWriter
#define TData       ::rapid::ext::arc::GeometryConfig


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
#define TTYPENAME   GeometryConfigTYPENAME

/* Defines */
#define TDataReader GeometryConfigDataReader
#define TDataSeq    GeometryConfigSeq
#define TData       ::rapid::ext::arc::GeometryConfig


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
#define TTYPENAME    GeometryConfigTYPENAME
#define TPlugin_new  ::rapid::ext::arc::GeometryConfigPlugin_new
#define TPlugin_delete  ::rapid::ext::arc::GeometryConfigPlugin_delete

/* Defines */
#define TTypeSupport GeometryConfigTypeSupport
#define TData        ::rapid::ext::arc::GeometryConfig
#define TDataReader  GeometryConfigDataReader
#define TDataWriter  GeometryConfigDataWriter
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



} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */
