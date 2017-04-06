
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory3D.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory3DSupport_1790257475_h
#define Trajectory3DSupport_1790257475_h

/* Uses */
#include "Trajectory3D.h"



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

namespace arc{
        

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

DDS_TYPESUPPORT_CPP(TrajPoint3DTypeSupport, TrajPoint3D);

DDS_DATAWRITER_CPP(TrajPoint3DDataWriter, TrajPoint3D);
DDS_DATAREADER_CPP(TrajPoint3DDataReader, TrajPoint3DSeq, TrajPoint3D);


#else

DDS_TYPESUPPORT_C(TrajPoint3DTypeSupport, TrajPoint3D);
DDS_DATAWRITER_C(TrajPoint3DDataWriter, TrajPoint3D);
DDS_DATAREADER_C(TrajPoint3DDataReader, TrajPoint3DSeq, TrajPoint3D);

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

DDS_TYPESUPPORT_CPP(Trajectory3DTypeSupport, Trajectory3D);

DDS_DATAWRITER_CPP(Trajectory3DDataWriter, Trajectory3D);
DDS_DATAREADER_CPP(Trajectory3DDataReader, Trajectory3DSeq, Trajectory3D);


#else

DDS_TYPESUPPORT_C(Trajectory3DTypeSupport, Trajectory3D);
DDS_DATAWRITER_C(Trajectory3DDataWriter, Trajectory3D);
DDS_DATAREADER_C(Trajectory3DDataReader, Trajectory3DSeq, Trajectory3D);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif  /* Trajectory3DSupport_1790257475_h */
