
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory2DSampleSupport_1975814187_h
#define Trajectory2DSampleSupport_1975814187_h

/* Uses */
#include "Trajectory2DSample.h"



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

DDS_TYPESUPPORT_CPP(RTrans2DMetaTypeSupport, RTrans2DMeta);

DDS_DATAWRITER_CPP(RTrans2DMetaDataWriter, RTrans2DMeta);
DDS_DATAREADER_CPP(RTrans2DMetaDataReader, RTrans2DMetaSeq, RTrans2DMeta);


#else

DDS_TYPESUPPORT_C(RTrans2DMetaTypeSupport, RTrans2DMeta);
DDS_DATAWRITER_C(RTrans2DMetaDataWriter, RTrans2DMeta);
DDS_DATAREADER_C(RTrans2DMetaDataReader, RTrans2DMetaSeq, RTrans2DMeta);

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
DDS_TYPESUPPORT_CPP(Trajectory2DSampleTypeSupport, Trajectory2DSample);

DDS_DATAWRITER_CPP(Trajectory2DSampleDataWriter, Trajectory2DSample);
DDS_DATAREADER_CPP(Trajectory2DSampleDataReader, Trajectory2DSampleSeq, Trajectory2DSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(Trajectory2DSampleTypeSupport, Trajectory2DSample);
DDS_DATAWRITER_C(Trajectory2DSampleDataWriter, Trajectory2DSample);
DDS_DATAREADER_C(Trajectory2DSampleDataReader, Trajectory2DSampleSeq, Trajectory2DSample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif  /* Trajectory2DSampleSupport_1975814187_h */
