
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SpectrumConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SpectrumConfigSupport_457348536_h
#define SpectrumConfigSupport_457348536_h

/* Uses */
#include "SpectrumConfig.h"



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

DDS_TYPESUPPORT_CPP(NamedIndexRangeTypeSupport, NamedIndexRange);

DDS_DATAWRITER_CPP(NamedIndexRangeDataWriter, NamedIndexRange);
DDS_DATAREADER_CPP(NamedIndexRangeDataReader, NamedIndexRangeSeq, NamedIndexRange);


#else

DDS_TYPESUPPORT_C(NamedIndexRangeTypeSupport, NamedIndexRange);
DDS_DATAWRITER_C(NamedIndexRangeDataWriter, NamedIndexRange);
DDS_DATAREADER_C(NamedIndexRangeDataReader, NamedIndexRangeSeq, NamedIndexRange);

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
DDS_TYPESUPPORT_CPP(SpectrumConfigTypeSupport, SpectrumConfig);

DDS_DATAWRITER_CPP(SpectrumConfigDataWriter, SpectrumConfig);
DDS_DATAREADER_CPP(SpectrumConfigDataReader, SpectrumConfigSeq, SpectrumConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(SpectrumConfigTypeSupport, SpectrumConfig);
DDS_DATAWRITER_C(SpectrumConfigDataWriter, SpectrumConfig);
DDS_DATAREADER_C(SpectrumConfigDataReader, SpectrumConfigSeq, SpectrumConfig);

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


#endif  /* SpectrumConfigSupport_457348536_h */
