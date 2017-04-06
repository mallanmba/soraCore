
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommandConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommandConfigSupport_667935284_h
#define CommandConfigSupport_667935284_h

/* Uses */
#include "CommandConfig.h"



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

DDS_TYPESUPPORT_CPP(CommandDefTypeSupport, CommandDef);

DDS_DATAWRITER_CPP(CommandDefDataWriter, CommandDef);
DDS_DATAREADER_CPP(CommandDefDataReader, CommandDefSeq, CommandDef);


#else

DDS_TYPESUPPORT_C(CommandDefTypeSupport, CommandDef);
DDS_DATAWRITER_C(CommandDefDataWriter, CommandDef);
DDS_DATAREADER_C(CommandDefDataReader, CommandDefSeq, CommandDef);

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

DDS_TYPESUPPORT_CPP(SubsystemTypeTypeSupport, SubsystemType);

DDS_DATAWRITER_CPP(SubsystemTypeDataWriter, SubsystemType);
DDS_DATAREADER_CPP(SubsystemTypeDataReader, SubsystemTypeSeq, SubsystemType);


#else

DDS_TYPESUPPORT_C(SubsystemTypeTypeSupport, SubsystemType);
DDS_DATAWRITER_C(SubsystemTypeDataWriter, SubsystemType);
DDS_DATAREADER_C(SubsystemTypeDataReader, SubsystemTypeSeq, SubsystemType);

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

DDS_TYPESUPPORT_CPP(SubsystemTypeSupport, Subsystem);

DDS_DATAWRITER_CPP(SubsystemDataWriter, Subsystem);
DDS_DATAREADER_CPP(SubsystemDataReader, SubsystemSeq, Subsystem);


#else

DDS_TYPESUPPORT_C(SubsystemTypeSupport, Subsystem);
DDS_DATAWRITER_C(SubsystemDataWriter, Subsystem);
DDS_DATAREADER_C(SubsystemDataReader, SubsystemSeq, Subsystem);

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
DDS_TYPESUPPORT_CPP(CommandConfigTypeSupport, CommandConfig);

DDS_DATAWRITER_CPP(CommandConfigDataWriter, CommandConfig);
DDS_DATAREADER_CPP(CommandConfigDataReader, CommandConfigSeq, CommandConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(CommandConfigTypeSupport, CommandConfig);
DDS_DATAWRITER_C(CommandConfigDataWriter, CommandConfig);
DDS_DATAREADER_C(CommandConfigDataReader, CommandConfigSeq, CommandConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* CommandConfigSupport_667935284_h */
