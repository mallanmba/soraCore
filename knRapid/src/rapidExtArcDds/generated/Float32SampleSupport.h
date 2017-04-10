
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Float32Sample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Float32SampleSupport_220235351_h
#define Float32SampleSupport_220235351_h

/* Uses */
#include "Float32Sample.h"



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

namespace arc{
        

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
DDS_TYPESUPPORT_CPP(Float32SampleTypeSupport, Float32Sample);

DDS_DATAWRITER_CPP(Float32SampleDataWriter, Float32Sample);
DDS_DATAREADER_CPP(Float32SampleDataReader, Float32SampleSeq, Float32Sample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(Float32SampleTypeSupport, Float32Sample);
DDS_DATAWRITER_C(Float32SampleDataWriter, Float32Sample);
DDS_DATAREADER_C(Float32SampleDataReader, Float32SampleSeq, Float32Sample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif  /* Float32SampleSupport_220235351_h */
