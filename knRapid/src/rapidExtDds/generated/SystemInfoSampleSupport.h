
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SystemInfoSampleSupport_1849709991_h
#define SystemInfoSampleSupport_1849709991_h

/* Uses */
#include "SystemInfoSample.h"



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

DDS_TYPESUPPORT_CPP(BatteryInfoSampleTypeSupport, BatteryInfoSample);

DDS_DATAWRITER_CPP(BatteryInfoSampleDataWriter, BatteryInfoSample);
DDS_DATAREADER_CPP(BatteryInfoSampleDataReader, BatteryInfoSampleSeq, BatteryInfoSample);


#else

DDS_TYPESUPPORT_C(BatteryInfoSampleTypeSupport, BatteryInfoSample);
DDS_DATAWRITER_C(BatteryInfoSampleDataWriter, BatteryInfoSample);
DDS_DATAREADER_C(BatteryInfoSampleDataReader, BatteryInfoSampleSeq, BatteryInfoSample);

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

DDS_TYPESUPPORT_CPP(CpuInfoSampleTypeSupport, CpuInfoSample);

DDS_DATAWRITER_CPP(CpuInfoSampleDataWriter, CpuInfoSample);
DDS_DATAREADER_CPP(CpuInfoSampleDataReader, CpuInfoSampleSeq, CpuInfoSample);


#else

DDS_TYPESUPPORT_C(CpuInfoSampleTypeSupport, CpuInfoSample);
DDS_DATAWRITER_C(CpuInfoSampleDataWriter, CpuInfoSample);
DDS_DATAREADER_C(CpuInfoSampleDataReader, CpuInfoSampleSeq, CpuInfoSample);

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

DDS_TYPESUPPORT_CPP(FilesystemInfoSampleTypeSupport, FilesystemInfoSample);

DDS_DATAWRITER_CPP(FilesystemInfoSampleDataWriter, FilesystemInfoSample);
DDS_DATAREADER_CPP(FilesystemInfoSampleDataReader, FilesystemInfoSampleSeq, FilesystemInfoSample);


#else

DDS_TYPESUPPORT_C(FilesystemInfoSampleTypeSupport, FilesystemInfoSample);
DDS_DATAWRITER_C(FilesystemInfoSampleDataWriter, FilesystemInfoSample);
DDS_DATAREADER_C(FilesystemInfoSampleDataReader, FilesystemInfoSampleSeq, FilesystemInfoSample);

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

DDS_TYPESUPPORT_CPP(MemoryInfoSampleTypeSupport, MemoryInfoSample);

DDS_DATAWRITER_CPP(MemoryInfoSampleDataWriter, MemoryInfoSample);
DDS_DATAREADER_CPP(MemoryInfoSampleDataReader, MemoryInfoSampleSeq, MemoryInfoSample);


#else

DDS_TYPESUPPORT_C(MemoryInfoSampleTypeSupport, MemoryInfoSample);
DDS_DATAWRITER_C(MemoryInfoSampleDataWriter, MemoryInfoSample);
DDS_DATAREADER_C(MemoryInfoSampleDataReader, MemoryInfoSampleSeq, MemoryInfoSample);

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

DDS_TYPESUPPORT_CPP(ThermalInfoSampleTypeSupport, ThermalInfoSample);

DDS_DATAWRITER_CPP(ThermalInfoSampleDataWriter, ThermalInfoSample);
DDS_DATAREADER_CPP(ThermalInfoSampleDataReader, ThermalInfoSampleSeq, ThermalInfoSample);


#else

DDS_TYPESUPPORT_C(ThermalInfoSampleTypeSupport, ThermalInfoSample);
DDS_DATAWRITER_C(ThermalInfoSampleDataWriter, ThermalInfoSample);
DDS_DATAREADER_C(ThermalInfoSampleDataReader, ThermalInfoSampleSeq, ThermalInfoSample);

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

DDS_TYPESUPPORT_CPP(NetTrafficInfoSampleTypeSupport, NetTrafficInfoSample);

DDS_DATAWRITER_CPP(NetTrafficInfoSampleDataWriter, NetTrafficInfoSample);
DDS_DATAREADER_CPP(NetTrafficInfoSampleDataReader, NetTrafficInfoSampleSeq, NetTrafficInfoSample);


#else

DDS_TYPESUPPORT_C(NetTrafficInfoSampleTypeSupport, NetTrafficInfoSample);
DDS_DATAWRITER_C(NetTrafficInfoSampleDataWriter, NetTrafficInfoSample);
DDS_DATAREADER_C(NetTrafficInfoSampleDataReader, NetTrafficInfoSampleSeq, NetTrafficInfoSample);

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

DDS_TYPESUPPORT_CPP(WifiInfoSampleTypeSupport, WifiInfoSample);

DDS_DATAWRITER_CPP(WifiInfoSampleDataWriter, WifiInfoSample);
DDS_DATAREADER_CPP(WifiInfoSampleDataReader, WifiInfoSampleSeq, WifiInfoSample);


#else

DDS_TYPESUPPORT_C(WifiInfoSampleTypeSupport, WifiInfoSample);
DDS_DATAWRITER_C(WifiInfoSampleDataWriter, WifiInfoSample);
DDS_DATAREADER_C(WifiInfoSampleDataReader, WifiInfoSampleSeq, WifiInfoSample);

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
DDS_TYPESUPPORT_CPP(SystemInfoSampleTypeSupport, SystemInfoSample);

DDS_DATAWRITER_CPP(SystemInfoSampleDataWriter, SystemInfoSample);
DDS_DATAREADER_CPP(SystemInfoSampleDataReader, SystemInfoSampleSeq, SystemInfoSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(SystemInfoSampleTypeSupport, SystemInfoSample);
DDS_DATAWRITER_C(SystemInfoSampleDataWriter, SystemInfoSample);
DDS_DATAREADER_C(SystemInfoSampleDataReader, SystemInfoSampleSeq, SystemInfoSample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif  /* SystemInfoSampleSupport_1849709991_h */
