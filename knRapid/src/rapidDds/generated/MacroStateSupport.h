
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MacroStateSupport_2110419408_h
#define MacroStateSupport_2110419408_h

/* Uses */
#include "MacroState.h"



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

DDS_TYPESUPPORT_CPP(MacroInfoTypeSupport, MacroInfo);

DDS_DATAWRITER_CPP(MacroInfoDataWriter, MacroInfo);
DDS_DATAREADER_CPP(MacroInfoDataReader, MacroInfoSeq, MacroInfo);


#else

DDS_TYPESUPPORT_C(MacroInfoTypeSupport, MacroInfo);
DDS_DATAWRITER_C(MacroInfoDataWriter, MacroInfo);
DDS_DATAREADER_C(MacroInfoDataReader, MacroInfoSeq, MacroInfo);

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
DDS_TYPESUPPORT_CPP(MacroStateTypeSupport, MacroState);

DDS_DATAWRITER_CPP(MacroStateDataWriter, MacroState);
DDS_DATAREADER_CPP(MacroStateDataReader, MacroStateSeq, MacroState);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(MacroStateTypeSupport, MacroState);
DDS_DATAWRITER_C(MacroStateDataWriter, MacroState);
DDS_DATAREADER_C(MacroStateDataReader, MacroStateSeq, MacroState);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* MacroStateSupport_2110419408_h */
