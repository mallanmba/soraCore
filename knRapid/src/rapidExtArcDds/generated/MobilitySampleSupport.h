
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MobilitySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MobilitySampleSupport_947072007_h
#define MobilitySampleSupport_947072007_h

/* Uses */
#include "MobilitySample.h"



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
DDS_TYPESUPPORT_CPP(MobilitySampleTypeSupport, MobilitySample);

DDS_DATAWRITER_CPP(MobilitySampleDataWriter, MobilitySample);
DDS_DATAREADER_CPP(MobilitySampleDataReader, MobilitySampleSeq, MobilitySample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(MobilitySampleTypeSupport, MobilitySample);
DDS_DATAWRITER_C(MobilitySampleDataWriter, MobilitySample);
DDS_DATAREADER_C(MobilitySampleDataReader, MobilitySampleSeq, MobilitySample);

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


#endif  /* MobilitySampleSupport_947072007_h */
