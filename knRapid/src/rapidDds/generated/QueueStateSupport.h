
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QueueState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef QueueStateSupport_357500448_h
#define QueueStateSupport_357500448_h

/* Uses */
#include "QueueState.h"



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
DDS_TYPESUPPORT_CPP(CommandRecordTypeSupport, CommandRecord);

DDS_DATAWRITER_CPP(CommandRecordDataWriter, CommandRecord);
DDS_DATAREADER_CPP(CommandRecordDataReader, CommandRecordSeq, CommandRecord);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(CommandRecordTypeSupport, CommandRecord);
DDS_DATAWRITER_C(CommandRecordDataWriter, CommandRecord);
DDS_DATAREADER_C(CommandRecordDataReader, CommandRecordSeq, CommandRecord);

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

DDS_TYPESUPPORT_CPP(SingleQueueTypeSupport, SingleQueue);

DDS_DATAWRITER_CPP(SingleQueueDataWriter, SingleQueue);
DDS_DATAREADER_CPP(SingleQueueDataReader, SingleQueueSeq, SingleQueue);


#else

DDS_TYPESUPPORT_C(SingleQueueTypeSupport, SingleQueue);
DDS_DATAWRITER_C(SingleQueueDataWriter, SingleQueue);
DDS_DATAREADER_C(SingleQueueDataReader, SingleQueueSeq, SingleQueue);

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
DDS_TYPESUPPORT_CPP(QueueStateTypeSupport, QueueState);

DDS_DATAWRITER_CPP(QueueStateDataWriter, QueueState);
DDS_DATAREADER_CPP(QueueStateDataReader, QueueStateSeq, QueueState);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(QueueStateTypeSupport, QueueState);
DDS_DATAWRITER_C(QueueStateDataWriter, QueueState);
DDS_DATAREADER_C(QueueStateDataReader, QueueStateSeq, QueueState);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* QueueStateSupport_357500448_h */
