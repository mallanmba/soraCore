
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HydraConfigSupport_1295220390_h
#define HydraConfigSupport_1295220390_h

/* Uses */
#include "HydraConfig.h"



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
DDS_TYPESUPPORT_CPP(HydraConfigTypeSupport, HydraConfig);

DDS_DATAWRITER_CPP(HydraConfigDataWriter, HydraConfig);
DDS_DATAREADER_CPP(HydraConfigDataReader, HydraConfigSeq, HydraConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(HydraConfigTypeSupport, HydraConfig);
DDS_DATAWRITER_C(HydraConfigDataWriter, HydraConfig);
DDS_DATAREADER_C(HydraConfigDataReader, HydraConfigSeq, HydraConfig);

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


#endif  /* HydraConfigSupport_1295220390_h */
