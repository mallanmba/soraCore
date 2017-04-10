
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TextMessage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TextMessageSupport_297220591_h
#define TextMessageSupport_297220591_h

/* Uses */
#include "TextMessage.h"



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
DDS_TYPESUPPORT_CPP(TextMessageTypeSupport, TextMessage);

DDS_DATAWRITER_CPP(TextMessageDataWriter, TextMessage);
DDS_DATAREADER_CPP(TextMessageDataReader, TextMessageSeq, TextMessage);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(TextMessageTypeSupport, TextMessage);
DDS_DATAWRITER_C(TextMessageDataWriter, TextMessage);
DDS_DATAREADER_C(TextMessageDataReader, TextMessageSeq, TextMessage);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* TextMessageSupport_297220591_h */
