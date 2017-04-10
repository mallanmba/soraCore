
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from WheelGroupSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef WheelGroupSampleSupport_498487715_h
#define WheelGroupSampleSupport_498487715_h

/* Uses */
#include "WheelGroupSample.h"



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

DDS_TYPESUPPORT_CPP(MotorProfileTypeSupport, MotorProfile);

DDS_DATAWRITER_CPP(MotorProfileDataWriter, MotorProfile);
DDS_DATAREADER_CPP(MotorProfileDataReader, MotorProfileSeq, MotorProfile);


#else

DDS_TYPESUPPORT_C(MotorProfileTypeSupport, MotorProfile);
DDS_DATAWRITER_C(MotorProfileDataWriter, MotorProfile);
DDS_DATAREADER_C(MotorProfileDataReader, MotorProfileSeq, MotorProfile);

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

DDS_TYPESUPPORT_CPP(MotorStateTypeSupport, MotorState);

DDS_DATAWRITER_CPP(MotorStateDataWriter, MotorState);
DDS_DATAREADER_CPP(MotorStateDataReader, MotorStateSeq, MotorState);


#else

DDS_TYPESUPPORT_C(MotorStateTypeSupport, MotorState);
DDS_DATAWRITER_C(MotorStateDataWriter, MotorState);
DDS_DATAREADER_C(MotorStateDataReader, MotorStateSeq, MotorState);

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
DDS_TYPESUPPORT_CPP(WheelGroupSampleTypeSupport, WheelGroupSample);

DDS_DATAWRITER_CPP(WheelGroupSampleDataWriter, WheelGroupSample);
DDS_DATAREADER_CPP(WheelGroupSampleDataReader, WheelGroupSampleSeq, WheelGroupSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(WheelGroupSampleTypeSupport, WheelGroupSample);
DDS_DATAWRITER_C(WheelGroupSampleDataWriter, WheelGroupSample);
DDS_DATAREADER_C(WheelGroupSampleDataReader, WheelGroupSampleSeq, WheelGroupSample);

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


#endif  /* WheelGroupSampleSupport_498487715_h */
