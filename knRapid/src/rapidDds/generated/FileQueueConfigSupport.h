
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueConfigSupport_1881571180_h
#define FileQueueConfigSupport_1881571180_h

/* Uses */
#include "FileQueueConfig.h"



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

DDS_TYPESUPPORT_CPP(ChannelConfigTypeSupport, ChannelConfig);

DDS_DATAWRITER_CPP(ChannelConfigDataWriter, ChannelConfig);
DDS_DATAREADER_CPP(ChannelConfigDataReader, ChannelConfigSeq, ChannelConfig);


#else

DDS_TYPESUPPORT_C(ChannelConfigTypeSupport, ChannelConfig);
DDS_DATAWRITER_C(ChannelConfigDataWriter, ChannelConfig);
DDS_DATAREADER_C(ChannelConfigDataReader, ChannelConfigSeq, ChannelConfig);

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
DDS_TYPESUPPORT_CPP(FileQueueConfigTypeSupport, FileQueueConfig);

DDS_DATAWRITER_CPP(FileQueueConfigDataWriter, FileQueueConfig);
DDS_DATAREADER_CPP(FileQueueConfigDataReader, FileQueueConfigSeq, FileQueueConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(FileQueueConfigTypeSupport, FileQueueConfig);
DDS_DATAWRITER_C(FileQueueConfigDataWriter, FileQueueConfig);
DDS_DATAREADER_C(FileQueueConfigDataReader, FileQueueConfigSeq, FileQueueConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* FileQueueConfigSupport_1881571180_h */
