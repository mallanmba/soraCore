
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageSensorStateSupport_260437485_h
#define ImageSensorStateSupport_260437485_h

/* Uses */
#include "ImageSensorState.h"



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

/**

 * Holds status information for an image sensor - typically a camera, but could be a laser scanner, gpr, or any

 * sensor that can pack a data sample into a 2D array

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
DDS_TYPESUPPORT_CPP(ImageSensorStateTypeSupport, ImageSensorState);

DDS_DATAWRITER_CPP(ImageSensorStateDataWriter, ImageSensorState);
DDS_DATAREADER_CPP(ImageSensorStateDataReader, ImageSensorStateSeq, ImageSensorState);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(ImageSensorStateTypeSupport, ImageSensorState);
DDS_DATAWRITER_C(ImageSensorStateDataWriter, ImageSensorState);
DDS_DATAREADER_C(ImageSensorStateDataReader, ImageSensorStateSeq, ImageSensorState);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* ImageSensorStateSupport_260437485_h */
