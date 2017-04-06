
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NavMapSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NavMapSampleSupport_769629744_h
#define NavMapSampleSupport_769629744_h

/* Uses */
#include "NavMapSample.h"



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

DDS_TYPESUPPORT_CPP(OctetMapLayerTypeSupport, OctetMapLayer);

DDS_DATAWRITER_CPP(OctetMapLayerDataWriter, OctetMapLayer);
DDS_DATAREADER_CPP(OctetMapLayerDataReader, OctetMapLayerSeq, OctetMapLayer);


#else

DDS_TYPESUPPORT_C(OctetMapLayerTypeSupport, OctetMapLayer);
DDS_DATAWRITER_C(OctetMapLayerDataWriter, OctetMapLayer);
DDS_DATAREADER_C(OctetMapLayerDataReader, OctetMapLayerSeq, OctetMapLayer);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

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

DDS_TYPESUPPORT_CPP(ShortMapLayerTypeSupport, ShortMapLayer);

DDS_DATAWRITER_CPP(ShortMapLayerDataWriter, ShortMapLayer);
DDS_DATAREADER_CPP(ShortMapLayerDataReader, ShortMapLayerSeq, ShortMapLayer);


#else

DDS_TYPESUPPORT_C(ShortMapLayerTypeSupport, ShortMapLayer);
DDS_DATAWRITER_C(ShortMapLayerDataWriter, ShortMapLayer);
DDS_DATAREADER_C(ShortMapLayerDataReader, ShortMapLayerSeq, ShortMapLayer);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

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
DDS_TYPESUPPORT_CPP(NavMapSampleTypeSupport, NavMapSample);

DDS_DATAWRITER_CPP(NavMapSampleDataWriter, NavMapSample);
DDS_DATAREADER_CPP(NavMapSampleDataReader, NavMapSampleSeq, NavMapSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(NavMapSampleTypeSupport, NavMapSample);
DDS_DATAWRITER_C(NavMapSampleDataWriter, NavMapSample);
DDS_DATAREADER_C(NavMapSampleDataReader, NavMapSampleSeq, NavMapSample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif  /* NavMapSampleSupport_769629744_h */
