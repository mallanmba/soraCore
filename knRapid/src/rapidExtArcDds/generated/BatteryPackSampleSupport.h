
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BatteryPackSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BatteryPackSampleSupport_1354374548_h
#define BatteryPackSampleSupport_1354374548_h

/* Uses */
#include "BatteryPackSample.h"



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

DDS_TYPESUPPORT_CPP(BatteryTypeSupport, Battery);

DDS_DATAWRITER_CPP(BatteryDataWriter, Battery);
DDS_DATAREADER_CPP(BatteryDataReader, BatterySeq, Battery);


#else

DDS_TYPESUPPORT_C(BatteryTypeSupport, Battery);
DDS_DATAWRITER_C(BatteryDataWriter, Battery);
DDS_DATAREADER_C(BatteryDataReader, BatterySeq, Battery);

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

DDS_TYPESUPPORT_CPP(BatterySlotTypeSupport, BatterySlot);

DDS_DATAWRITER_CPP(BatterySlotDataWriter, BatterySlot);
DDS_DATAREADER_CPP(BatterySlotDataReader, BatterySlotSeq, BatterySlot);


#else

DDS_TYPESUPPORT_C(BatterySlotTypeSupport, BatterySlot);
DDS_DATAWRITER_C(BatterySlotDataWriter, BatterySlot);
DDS_DATAREADER_C(BatterySlotDataReader, BatterySlotSeq, BatterySlot);

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

DDS_TYPESUPPORT_CPP(BatteryControllerTypeSupport, BatteryController);

DDS_DATAWRITER_CPP(BatteryControllerDataWriter, BatteryController);
DDS_DATAREADER_CPP(BatteryControllerDataReader, BatteryControllerSeq, BatteryController);


#else

DDS_TYPESUPPORT_C(BatteryControllerTypeSupport, BatteryController);
DDS_DATAWRITER_C(BatteryControllerDataWriter, BatteryController);
DDS_DATAREADER_C(BatteryControllerDataReader, BatteryControllerSeq, BatteryController);

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
DDS_TYPESUPPORT_CPP(BatteryPackSampleTypeSupport, BatteryPackSample);

DDS_DATAWRITER_CPP(BatteryPackSampleDataWriter, BatteryPackSample);
DDS_DATAREADER_CPP(BatteryPackSampleDataReader, BatteryPackSampleSeq, BatteryPackSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(BatteryPackSampleTypeSupport, BatteryPackSample);
DDS_DATAWRITER_C(BatteryPackSampleDataWriter, BatteryPackSample);
DDS_DATAREADER_C(BatteryPackSampleDataReader, BatteryPackSampleSeq, BatteryPackSample);

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


#endif  /* BatteryPackSampleSupport_1354374548_h */
