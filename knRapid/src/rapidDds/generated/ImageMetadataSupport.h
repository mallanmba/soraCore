
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageMetadata.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageMetadataSupport_1779228579_h
#define ImageMetadataSupport_1779228579_h

/* Uses */
#include "ImageMetadata.h"



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

DDS_TYPESUPPORT_CPP(ImageMetadataTypeSupport, ImageMetadata);

DDS_DATAWRITER_CPP(ImageMetadataDataWriter, ImageMetadata);
DDS_DATAREADER_CPP(ImageMetadataDataReader, ImageMetadataSeq, ImageMetadata);


#else

DDS_TYPESUPPORT_C(ImageMetadataTypeSupport, ImageMetadata);
DDS_DATAWRITER_C(ImageMetadataDataWriter, ImageMetadata);
DDS_DATAREADER_C(ImageMetadataDataReader, ImageMetadataSeq, ImageMetadata);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* ImageMetadataSupport_1779228579_h */
