
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectorySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "TrajectorySampleSupport.h"
#include "TrajectorySamplePlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace rapid{

namespace ext{

/**

 * SegmentType describes the type of segment that is being represented.

 */

/**

 * SingleSegment holds the info for an "atomic" segment.

 *

 */



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'SingleSegment' support classes.

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
#define TTYPENAME   SingleSegmentTYPENAME

/* Defines */
#define TDataWriter SingleSegmentDataWriter
#define TData       ::rapid::ext::SingleSegment


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
#define TTYPENAME   SingleSegmentTYPENAME

/* Defines */
#define TDataReader SingleSegmentDataReader
#define TDataSeq    SingleSegmentSeq
#define TData       ::rapid::ext::SingleSegment


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
#define TTYPENAME    SingleSegmentTYPENAME
#define TPlugin_new  ::rapid::ext::SingleSegmentPlugin_new
#define TPlugin_delete  ::rapid::ext::SingleSegmentPlugin_delete

/* Defines */
#define TTypeSupport SingleSegmentTypeSupport
#define TData        ::rapid::ext::SingleSegment
#define TDataReader  SingleSegmentDataReader
#define TDataWriter  SingleSegmentDataWriter
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



/**

 * TrajectorySample is a message that holds the current sequence of geometric trajectory segments that the robot plans to follow.

 * The receiver will need to convert this to whatever form they need to identify potential collisions or to render it in a GUI

 */



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'TrajectorySample' support classes.

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
#define TTYPENAME   TrajectorySampleTYPENAME

/* Defines */
#define TDataWriter TrajectorySampleDataWriter
#define TData       ::rapid::ext::TrajectorySample


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
#define TTYPENAME   TrajectorySampleTYPENAME

/* Defines */
#define TDataReader TrajectorySampleDataReader
#define TDataSeq    TrajectorySampleSeq
#define TData       ::rapid::ext::TrajectorySample


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
#define TTYPENAME    TrajectorySampleTYPENAME
#define TPlugin_new  ::rapid::ext::TrajectorySamplePlugin_new
#define TPlugin_delete  ::rapid::ext::TrajectorySamplePlugin_delete

/* Defines */
#define TTypeSupport TrajectorySampleTypeSupport
#define TData        ::rapid::ext::TrajectorySample
#define TDataReader  TrajectorySampleDataReader
#define TDataWriter  TrajectorySampleDataWriter
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



} /* namespace ext */

} /* namespace rapid */
