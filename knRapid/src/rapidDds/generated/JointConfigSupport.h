
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from JointConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef JointConfigSupport_714822731_h
#define JointConfigSupport_714822731_h

/* Uses */
#include "JointConfig.h"



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

DDS_TYPESUPPORT_CPP(JointDefTypeSupport, JointDef);

DDS_DATAWRITER_CPP(JointDefDataWriter, JointDef);
DDS_DATAREADER_CPP(JointDefDataReader, JointDefSeq, JointDef);


#else

DDS_TYPESUPPORT_C(JointDefTypeSupport, JointDef);
DDS_DATAWRITER_C(JointDefDataWriter, JointDef);
DDS_DATAREADER_C(JointDefDataReader, JointDefSeq, JointDef);

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
DDS_TYPESUPPORT_CPP(JointConfigTypeSupport, JointConfig);

DDS_DATAWRITER_CPP(JointConfigDataWriter, JointConfig);
DDS_DATAREADER_CPP(JointConfigDataReader, JointConfigSeq, JointConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(JointConfigTypeSupport, JointConfig);
DDS_DATAWRITER_C(JointConfigDataWriter, JointConfig);
DDS_DATAREADER_C(JointConfigDataReader, JointConfigSeq, JointConfig);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* JointConfigSupport_714822731_h */
