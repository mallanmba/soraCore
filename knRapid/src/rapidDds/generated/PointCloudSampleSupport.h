
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PointCloudSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PointCloudSampleSupport_1945903382_h
#define PointCloudSampleSupport_1945903382_h

/* Uses */
#include "PointCloudSample.h"



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

DDS_TYPESUPPORT_CPP(PointSampleTypeSupport, PointSample);

DDS_DATAWRITER_CPP(PointSampleDataWriter, PointSample);
DDS_DATAREADER_CPP(PointSampleDataReader, PointSampleSeq, PointSample);


#else

DDS_TYPESUPPORT_C(PointSampleTypeSupport, PointSample);
DDS_DATAWRITER_C(PointSampleDataWriter, PointSample);
DDS_DATAREADER_C(PointSampleDataReader, PointSampleSeq, PointSample);

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
DDS_TYPESUPPORT_CPP(PointCloudSampleTypeSupport, PointCloudSample);

DDS_DATAWRITER_CPP(PointCloudSampleDataWriter, PointCloudSample);
DDS_DATAREADER_CPP(PointCloudSampleDataReader, PointCloudSampleSeq, PointCloudSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(PointCloudSampleTypeSupport, PointCloudSample);
DDS_DATAWRITER_C(PointCloudSampleDataWriter, PointCloudSample);
DDS_DATAREADER_C(PointCloudSampleDataReader, PointCloudSampleSeq, PointCloudSample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* PointCloudSampleSupport_1945903382_h */
