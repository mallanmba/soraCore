
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef DlpSampleSupport_1024894760_h
#define DlpSampleSupport_1024894760_h

/* Uses */
#include "DlpSample.h"



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

DDS_TYPESUPPORT_CPP(DlpChannelSampleTypeSupport, DlpChannelSample);

DDS_DATAWRITER_CPP(DlpChannelSampleDataWriter, DlpChannelSample);
DDS_DATAREADER_CPP(DlpChannelSampleDataReader, DlpChannelSampleSeq, DlpChannelSample);


#else

DDS_TYPESUPPORT_C(DlpChannelSampleTypeSupport, DlpChannelSample);
DDS_DATAWRITER_C(DlpChannelSampleDataWriter, DlpChannelSample);
DDS_DATAREADER_C(DlpChannelSampleDataReader, DlpChannelSampleSeq, DlpChannelSample);

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

DDS_TYPESUPPORT_CPP(DlpBoardSampleTypeSupport, DlpBoardSample);

DDS_DATAWRITER_CPP(DlpBoardSampleDataWriter, DlpBoardSample);
DDS_DATAREADER_CPP(DlpBoardSampleDataReader, DlpBoardSampleSeq, DlpBoardSample);


#else

DDS_TYPESUPPORT_C(DlpBoardSampleTypeSupport, DlpBoardSample);
DDS_DATAWRITER_C(DlpBoardSampleDataWriter, DlpBoardSample);
DDS_DATAREADER_C(DlpBoardSampleDataReader, DlpBoardSampleSeq, DlpBoardSample);

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
DDS_TYPESUPPORT_CPP(DlpSampleTypeSupport, DlpSample);

DDS_DATAWRITER_CPP(DlpSampleDataWriter, DlpSample);
DDS_DATAREADER_CPP(DlpSampleDataReader, DlpSampleSeq, DlpSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(DlpSampleTypeSupport, DlpSample);
DDS_DATAWRITER_C(DlpSampleDataWriter, DlpSample);
DDS_DATAREADER_C(DlpSampleDataReader, DlpSampleSeq, DlpSample);

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


#endif  /* DlpSampleSupport_1024894760_h */
