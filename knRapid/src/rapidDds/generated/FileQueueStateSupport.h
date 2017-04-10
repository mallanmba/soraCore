
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueStateSupport_1566277297_h
#define FileQueueStateSupport_1566277297_h

/* Uses */
#include "FileQueueState.h"



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

DDS_TYPESUPPORT_CPP(ChannelStateTypeSupport, ChannelState);

DDS_DATAWRITER_CPP(ChannelStateDataWriter, ChannelState);
DDS_DATAREADER_CPP(ChannelStateDataReader, ChannelStateSeq, ChannelState);


#else

DDS_TYPESUPPORT_C(ChannelStateTypeSupport, ChannelState);
DDS_DATAWRITER_C(ChannelStateDataWriter, ChannelState);
DDS_DATAREADER_C(ChannelStateDataReader, ChannelStateSeq, ChannelState);

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
DDS_TYPESUPPORT_CPP(FileQueueStateTypeSupport, FileQueueState);

DDS_DATAWRITER_CPP(FileQueueStateDataWriter, FileQueueState);
DDS_DATAREADER_CPP(FileQueueStateDataReader, FileQueueStateSeq, FileQueueState);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(FileQueueStateTypeSupport, FileQueueState);
DDS_DATAWRITER_C(FileQueueStateDataWriter, FileQueueState);
DDS_DATAREADER_C(FileQueueStateDataReader, FileQueueStateSeq, FileQueueState);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* FileQueueStateSupport_1566277297_h */
