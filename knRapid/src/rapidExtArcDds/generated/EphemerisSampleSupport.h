
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EphemerisSampleSupport_1366671838_h
#define EphemerisSampleSupport_1366671838_h

/* Uses */
#include "EphemerisSample.h"



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
DDS_TYPESUPPORT_CPP(EphemerisSampleTypeSupport, EphemerisSample);

DDS_DATAWRITER_CPP(EphemerisSampleDataWriter, EphemerisSample);
DDS_DATAREADER_CPP(EphemerisSampleDataReader, EphemerisSampleSeq, EphemerisSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(EphemerisSampleTypeSupport, EphemerisSample);
DDS_DATAWRITER_C(EphemerisSampleDataWriter, EphemerisSample);
DDS_DATAREADER_C(EphemerisSampleDataReader, EphemerisSampleSeq, EphemerisSample);

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


#endif  /* EphemerisSampleSupport_1366671838_h */
