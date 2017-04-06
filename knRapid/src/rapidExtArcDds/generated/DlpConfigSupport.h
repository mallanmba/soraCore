
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef DlpConfigSupport_1713252555_h
#define DlpConfigSupport_1713252555_h

/* Uses */
#include "DlpConfig.h"



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

DDS_TYPESUPPORT_CPP(DlpWarnCriticalRangeTypeSupport, DlpWarnCriticalRange);

DDS_DATAWRITER_CPP(DlpWarnCriticalRangeDataWriter, DlpWarnCriticalRange);
DDS_DATAREADER_CPP(DlpWarnCriticalRangeDataReader, DlpWarnCriticalRangeSeq, DlpWarnCriticalRange);


#else

DDS_TYPESUPPORT_C(DlpWarnCriticalRangeTypeSupport, DlpWarnCriticalRange);
DDS_DATAWRITER_C(DlpWarnCriticalRangeDataWriter, DlpWarnCriticalRange);
DDS_DATAREADER_C(DlpWarnCriticalRangeDataReader, DlpWarnCriticalRangeSeq, DlpWarnCriticalRange);

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

DDS_TYPESUPPORT_CPP(DlpChannelConfigTypeSupport, DlpChannelConfig);

DDS_DATAWRITER_CPP(DlpChannelConfigDataWriter, DlpChannelConfig);
DDS_DATAREADER_CPP(DlpChannelConfigDataReader, DlpChannelConfigSeq, DlpChannelConfig);


#else

DDS_TYPESUPPORT_C(DlpChannelConfigTypeSupport, DlpChannelConfig);
DDS_DATAWRITER_C(DlpChannelConfigDataWriter, DlpChannelConfig);
DDS_DATAREADER_C(DlpChannelConfigDataReader, DlpChannelConfigSeq, DlpChannelConfig);

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

DDS_TYPESUPPORT_CPP(DlpBoardConfigTypeSupport, DlpBoardConfig);

DDS_DATAWRITER_CPP(DlpBoardConfigDataWriter, DlpBoardConfig);
DDS_DATAREADER_CPP(DlpBoardConfigDataReader, DlpBoardConfigSeq, DlpBoardConfig);


#else

DDS_TYPESUPPORT_C(DlpBoardConfigTypeSupport, DlpBoardConfig);
DDS_DATAWRITER_C(DlpBoardConfigDataWriter, DlpBoardConfig);
DDS_DATAREADER_C(DlpBoardConfigDataReader, DlpBoardConfigSeq, DlpBoardConfig);

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
DDS_TYPESUPPORT_CPP(DlpConfigTypeSupport, DlpConfig);

DDS_DATAWRITER_CPP(DlpConfigDataWriter, DlpConfig);
DDS_DATAREADER_CPP(DlpConfigDataReader, DlpConfigSeq, DlpConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(DlpConfigTypeSupport, DlpConfig);
DDS_DATAWRITER_C(DlpConfigDataWriter, DlpConfig);
DDS_DATAREADER_C(DlpConfigDataReader, DlpConfigSeq, DlpConfig);

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


#endif  /* DlpConfigSupport_1713252555_h */
