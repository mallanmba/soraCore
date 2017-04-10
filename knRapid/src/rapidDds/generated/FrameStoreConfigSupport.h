
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FrameStoreConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FrameStoreConfigSupport_2002790448_h
#define FrameStoreConfigSupport_2002790448_h

/* Uses */
#include "FrameStoreConfig.h"



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

DDS_TYPESUPPORT_CPP(FrameDefTypeSupport, FrameDef);

DDS_DATAWRITER_CPP(FrameDefDataWriter, FrameDef);
DDS_DATAREADER_CPP(FrameDefDataReader, FrameDefSeq, FrameDef);


#else

DDS_TYPESUPPORT_C(FrameDefTypeSupport, FrameDef);
DDS_DATAWRITER_C(FrameDefDataWriter, FrameDef);
DDS_DATAREADER_C(FrameDefDataReader, FrameDefSeq, FrameDef);

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
DDS_TYPESUPPORT_CPP(FrameStoreConfigTypeSupport, FrameStoreConfig);

DDS_DATAWRITER_CPP(FrameStoreConfigDataWriter, FrameStoreConfig);
DDS_DATAREADER_CPP(FrameStoreConfigDataReader, FrameStoreConfigSeq, FrameStoreConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(FrameStoreConfigTypeSupport, FrameStoreConfig);
DDS_DATAWRITER_C(FrameStoreConfigDataWriter, FrameStoreConfig);
DDS_DATAREADER_C(FrameStoreConfigDataReader, FrameStoreConfigSeq, FrameStoreConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* FrameStoreConfigSupport_2002790448_h */
