
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectorySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TrajectorySampleSupport_1187602883_h
#define TrajectorySampleSupport_1187602883_h

/* Uses */
#include "TrajectorySample.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
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
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus
#define RTI_VALUETYPE
DDS_TYPESUPPORT_CPP(SingleSegmentTypeSupport, SingleSegment);

DDS_DATAWRITER_CPP(SingleSegmentDataWriter, SingleSegment);
DDS_DATAREADER_CPP(SingleSegmentDataReader, SingleSegmentSeq, SingleSegment);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(SingleSegmentTypeSupport, SingleSegment);
DDS_DATAWRITER_C(SingleSegmentDataWriter, SingleSegment);
DDS_DATAREADER_C(SingleSegmentDataReader, SingleSegmentSeq, SingleSegment);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * TrajectorySample is a message that holds the current sequence of geometric trajectory segments that the robot plans to follow.

 * The receiver will need to convert this to whatever form they need to identify potential collisions or to render it in a GUI

 */
        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus
#define RTI_VALUETYPE
DDS_TYPESUPPORT_CPP(TrajectorySampleTypeSupport, TrajectorySample);

DDS_DATAWRITER_CPP(TrajectorySampleDataWriter, TrajectorySample);
DDS_DATAREADER_CPP(TrajectorySampleDataReader, TrajectorySampleSeq, TrajectorySample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(TrajectorySampleTypeSupport, TrajectorySample);
DDS_DATAWRITER_C(TrajectorySampleDataWriter, TrajectorySample);
DDS_DATAREADER_C(TrajectorySampleDataReader, TrajectorySampleSeq, TrajectorySample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif  /* TrajectorySampleSupport_1187602883_h */
