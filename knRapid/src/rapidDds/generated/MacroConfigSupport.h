
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MacroConfigSupport_2101968535_h
#define MacroConfigSupport_2101968535_h

/* Uses */
#include "MacroConfig.h"



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

DDS_TYPESUPPORT_CPP(MacroCommandTypeSupport, MacroCommand);

DDS_DATAWRITER_CPP(MacroCommandDataWriter, MacroCommand);
DDS_DATAREADER_CPP(MacroCommandDataReader, MacroCommandSeq, MacroCommand);


#else

DDS_TYPESUPPORT_C(MacroCommandTypeSupport, MacroCommand);
DDS_DATAWRITER_C(MacroCommandDataWriter, MacroCommand);
DDS_DATAREADER_C(MacroCommandDataReader, MacroCommandSeq, MacroCommand);

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
DDS_TYPESUPPORT_CPP(MacroConfigTypeSupport, MacroConfig);

DDS_DATAWRITER_CPP(MacroConfigDataWriter, MacroConfig);
DDS_DATAREADER_CPP(MacroConfigDataReader, MacroConfigSeq, MacroConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(MacroConfigTypeSupport, MacroConfig);
DDS_DATAWRITER_C(MacroConfigDataWriter, MacroConfig);
DDS_DATAREADER_C(MacroConfigDataReader, MacroConfigSeq, MacroConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* MacroConfigSupport_2101968535_h */
