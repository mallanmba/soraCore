
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PositionConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PositionConfigSupport_1147397490_h
#define PositionConfigSupport_1147397490_h

/* Uses */
#include "PositionConfig.h"



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
#define RTI_VALUETYPE
DDS_TYPESUPPORT_CPP(PositionConfigTypeSupport, PositionConfig);

DDS_DATAWRITER_CPP(PositionConfigDataWriter, PositionConfig);
DDS_DATAREADER_CPP(PositionConfigDataReader, PositionConfigSeq, PositionConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(PositionConfigTypeSupport, PositionConfig);
DDS_DATAWRITER_C(PositionConfigDataWriter, PositionConfig);
DDS_DATAREADER_C(PositionConfigDataReader, PositionConfigSeq, PositionConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* PositionConfigSupport_1147397490_h */
