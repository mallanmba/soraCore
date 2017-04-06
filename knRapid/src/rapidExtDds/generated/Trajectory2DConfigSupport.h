
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory2DConfigSupport_1630800299_h
#define Trajectory2DConfigSupport_1630800299_h

/* Uses */
#include "Trajectory2DConfig.h"



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
DDS_TYPESUPPORT_CPP(Trajectory2DConfigTypeSupport, Trajectory2DConfig);

DDS_DATAWRITER_CPP(Trajectory2DConfigDataWriter, Trajectory2DConfig);
DDS_DATAREADER_CPP(Trajectory2DConfigDataReader, Trajectory2DConfigSeq, Trajectory2DConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(Trajectory2DConfigTypeSupport, Trajectory2DConfig);
DDS_DATAWRITER_C(Trajectory2DConfigDataWriter, Trajectory2DConfig);
DDS_DATAREADER_C(Trajectory2DConfigDataReader, Trajectory2DConfigSeq, Trajectory2DConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif  /* Trajectory2DConfigSupport_1630800299_h */
