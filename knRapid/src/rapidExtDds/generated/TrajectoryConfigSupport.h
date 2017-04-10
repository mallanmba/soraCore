
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectoryConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TrajectoryConfigSupport_1875959215_h
#define TrajectoryConfigSupport_1875959215_h

/* Uses */
#include "TrajectoryConfig.h"



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

 * TrajectoryConfig is a message that tells the receiver what frame the TrajectorySample messages will be in.

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
DDS_TYPESUPPORT_CPP(TrajectoryConfigTypeSupport, TrajectoryConfig);

DDS_DATAWRITER_CPP(TrajectoryConfigDataWriter, TrajectoryConfig);
DDS_DATAREADER_CPP(TrajectoryConfigDataReader, TrajectoryConfigSeq, TrajectoryConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(TrajectoryConfigTypeSupport, TrajectoryConfig);
DDS_DATAWRITER_C(TrajectoryConfigDataWriter, TrajectoryConfig);
DDS_DATAREADER_C(TrajectoryConfigDataReader, TrajectoryConfigSeq, TrajectoryConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif  /* TrajectoryConfigSupport_1875959215_h */
