
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BatteryPackConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BatteryPackConfigSupport_666013808_h
#define BatteryPackConfigSupport_666013808_h

/* Uses */
#include "BatteryPackConfig.h"



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
DDS_TYPESUPPORT_CPP(BatteryPackConfigTypeSupport, BatteryPackConfig);

DDS_DATAWRITER_CPP(BatteryPackConfigDataWriter, BatteryPackConfig);
DDS_DATAREADER_CPP(BatteryPackConfigDataReader, BatteryPackConfigSeq, BatteryPackConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(BatteryPackConfigTypeSupport, BatteryPackConfig);
DDS_DATAWRITER_C(BatteryPackConfigDataWriter, BatteryPackConfig);
DDS_DATAREADER_C(BatteryPackConfigDataReader, BatteryPackConfigSeq, BatteryPackConfig);

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


#endif  /* BatteryPackConfigSupport_666013808_h */
