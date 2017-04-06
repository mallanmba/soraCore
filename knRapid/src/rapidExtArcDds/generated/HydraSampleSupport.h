
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HydraSampleSupport_1983579152_h
#define HydraSampleSupport_1983579152_h

/* Uses */
#include "HydraSample.h"



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
DDS_TYPESUPPORT_CPP(HydraSampleTypeSupport, HydraSample);

DDS_DATAWRITER_CPP(HydraSampleDataWriter, HydraSample);
DDS_DATAREADER_CPP(HydraSampleDataReader, HydraSampleSeq, HydraSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(HydraSampleTypeSupport, HydraSample);
DDS_DATAWRITER_C(HydraSampleDataWriter, HydraSample);
DDS_DATAREADER_C(HydraSampleDataReader, HydraSampleSeq, HydraSample);

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


#endif  /* HydraSampleSupport_1983579152_h */
