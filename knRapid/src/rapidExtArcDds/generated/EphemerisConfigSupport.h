
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EphemerisConfigSupport_2055029897_h
#define EphemerisConfigSupport_2055029897_h

/* Uses */
#include "EphemerisConfig.h"



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

DDS_TYPESUPPORT_CPP(EphemerisConfigEntryTypeSupport, EphemerisConfigEntry);

DDS_DATAWRITER_CPP(EphemerisConfigEntryDataWriter, EphemerisConfigEntry);
DDS_DATAREADER_CPP(EphemerisConfigEntryDataReader, EphemerisConfigEntrySeq, EphemerisConfigEntry);


#else

DDS_TYPESUPPORT_C(EphemerisConfigEntryTypeSupport, EphemerisConfigEntry);
DDS_DATAWRITER_C(EphemerisConfigEntryDataWriter, EphemerisConfigEntry);
DDS_DATAREADER_C(EphemerisConfigEntryDataReader, EphemerisConfigEntrySeq, EphemerisConfigEntry);

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
DDS_TYPESUPPORT_CPP(EphemerisConfigTypeSupport, EphemerisConfig);

DDS_DATAWRITER_CPP(EphemerisConfigDataWriter, EphemerisConfig);
DDS_DATAREADER_CPP(EphemerisConfigDataReader, EphemerisConfigSeq, EphemerisConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(EphemerisConfigTypeSupport, EphemerisConfig);
DDS_DATAWRITER_C(EphemerisConfigDataWriter, EphemerisConfig);
DDS_DATAREADER_C(EphemerisConfigDataReader, EphemerisConfigSeq, EphemerisConfig);

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


#endif  /* EphemerisConfigSupport_2055029897_h */
