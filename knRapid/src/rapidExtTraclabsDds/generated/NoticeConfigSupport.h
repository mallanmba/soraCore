
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeConfigSupport_1024433843_h
#define NoticeConfigSupport_1024433843_h

/* Uses */
#include "NoticeConfig.h"



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

namespace traclabs{

/**

 * Notice item description

 */
        

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

DDS_TYPESUPPORT_CPP(NoticeItemTypeSupport, NoticeItem);

DDS_DATAWRITER_CPP(NoticeItemDataWriter, NoticeItem);
DDS_DATAREADER_CPP(NoticeItemDataReader, NoticeItemSeq, NoticeItem);


#else

DDS_TYPESUPPORT_C(NoticeItemTypeSupport, NoticeItem);
DDS_DATAWRITER_C(NoticeItemDataWriter, NoticeItem);
DDS_DATAREADER_C(NoticeItemDataReader, NoticeItemSeq, NoticeItem);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * NoticeConfig describes the possible notice items

 * and value keys for extension data

 */
        

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
DDS_TYPESUPPORT_CPP(NoticeConfigTypeSupport, NoticeConfig);

DDS_DATAWRITER_CPP(NoticeConfigDataWriter, NoticeConfig);
DDS_DATAREADER_CPP(NoticeConfigDataReader, NoticeConfigSeq, NoticeConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(NoticeConfigTypeSupport, NoticeConfig);
DDS_DATAWRITER_C(NoticeConfigDataWriter, NoticeConfig);
DDS_DATAREADER_C(NoticeConfigDataReader, NoticeConfigSeq, NoticeConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */


#endif  /* NoticeConfigSupport_1024433843_h */
