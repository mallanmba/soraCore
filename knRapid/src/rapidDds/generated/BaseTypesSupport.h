
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BaseTypes.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BaseTypesSupport_1127121220_h
#define BaseTypesSupport_1127121220_h

/* Uses */
#include "BaseTypes.h"



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

DDS_TYPESUPPORT_CPP(ParameterUnionTypeSupport, ParameterUnion);

DDS_DATAWRITER_CPP(ParameterUnionDataWriter, ParameterUnion);
DDS_DATAREADER_CPP(ParameterUnionDataReader, ParameterUnionSeq, ParameterUnion);


#else

DDS_TYPESUPPORT_C(ParameterUnionTypeSupport, ParameterUnion);
DDS_DATAWRITER_C(ParameterUnionDataWriter, ParameterUnion);
DDS_DATAREADER_C(ParameterUnionDataReader, ParameterUnionSeq, ParameterUnion);

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

DDS_TYPESUPPORT_CPP(KeyTypePairTypeSupport, KeyTypePair);

DDS_DATAWRITER_CPP(KeyTypePairDataWriter, KeyTypePair);
DDS_DATAREADER_CPP(KeyTypePairDataReader, KeyTypePairSeq, KeyTypePair);


#else

DDS_TYPESUPPORT_C(KeyTypePairTypeSupport, KeyTypePair);
DDS_DATAWRITER_C(KeyTypePairDataWriter, KeyTypePair);
DDS_DATAREADER_C(KeyTypePairDataReader, KeyTypePairSeq, KeyTypePair);

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

DDS_TYPESUPPORT_CPP(KeyTypeValueTripleTypeSupport, KeyTypeValueTriple);

DDS_DATAWRITER_CPP(KeyTypeValueTripleDataWriter, KeyTypeValueTriple);
DDS_DATAREADER_CPP(KeyTypeValueTripleDataReader, KeyTypeValueTripleSeq, KeyTypeValueTriple);


#else

DDS_TYPESUPPORT_C(KeyTypeValueTripleTypeSupport, KeyTypeValueTriple);
DDS_DATAWRITER_C(KeyTypeValueTripleDataWriter, KeyTypeValueTriple);
DDS_DATAREADER_C(KeyTypeValueTripleDataReader, KeyTypeValueTripleSeq, KeyTypeValueTriple);

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

DDS_TYPESUPPORT_CPP(Transform3DTypeSupport, Transform3D);

DDS_DATAWRITER_CPP(Transform3DDataWriter, Transform3D);
DDS_DATAREADER_CPP(Transform3DDataReader, Transform3DSeq, Transform3D);


#else

DDS_TYPESUPPORT_C(Transform3DTypeSupport, Transform3D);
DDS_DATAWRITER_C(Transform3DDataWriter, Transform3D);
DDS_DATAREADER_C(Transform3DDataReader, Transform3DSeq, Transform3D);

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

DDS_TYPESUPPORT_CPP(NamedFloatSequenceTypeSupport, NamedFloatSequence);

DDS_DATAWRITER_CPP(NamedFloatSequenceDataWriter, NamedFloatSequence);
DDS_DATAREADER_CPP(NamedFloatSequenceDataReader, NamedFloatSequenceSeq, NamedFloatSequence);


#else

DDS_TYPESUPPORT_C(NamedFloatSequenceTypeSupport, NamedFloatSequence);
DDS_DATAWRITER_C(NamedFloatSequenceDataWriter, NamedFloatSequence);
DDS_DATAREADER_C(NamedFloatSequenceDataReader, NamedFloatSequenceSeq, NamedFloatSequence);

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

DDS_TYPESUPPORT_CPP(FloatRangeTypeSupport, FloatRange);

DDS_DATAWRITER_CPP(FloatRangeDataWriter, FloatRange);
DDS_DATAREADER_CPP(FloatRangeDataReader, FloatRangeSeq, FloatRange);


#else

DDS_TYPESUPPORT_C(FloatRangeTypeSupport, FloatRange);
DDS_DATAWRITER_C(FloatRangeDataWriter, FloatRange);
DDS_DATAREADER_C(FloatRangeDataReader, FloatRangeSeq, FloatRange);

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

DDS_TYPESUPPORT_CPP(FloatRangeValueTypeSupport, FloatRangeValue);

DDS_DATAWRITER_CPP(FloatRangeValueDataWriter, FloatRangeValue);
DDS_DATAREADER_CPP(FloatRangeValueDataReader, FloatRangeValueSeq, FloatRangeValue);


#else

DDS_TYPESUPPORT_C(FloatRangeValueTypeSupport, FloatRangeValue);
DDS_DATAWRITER_C(FloatRangeValueDataWriter, FloatRangeValue);
DDS_DATAREADER_C(FloatRangeValueDataReader, FloatRangeValueSeq, FloatRangeValue);

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

DDS_TYPESUPPORT_CPP(OptionSetValueTypeSupport, OptionSetValue);

DDS_DATAWRITER_CPP(OptionSetValueDataWriter, OptionSetValue);
DDS_DATAREADER_CPP(OptionSetValueDataReader, OptionSetValueSeq, OptionSetValue);


#else

DDS_TYPESUPPORT_C(OptionSetValueTypeSupport, OptionSetValue);
DDS_DATAWRITER_C(OptionSetValueDataWriter, OptionSetValue);
DDS_DATAREADER_C(OptionSetValueDataReader, OptionSetValueSeq, OptionSetValue);

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

DDS_TYPESUPPORT_CPP(NamedFloatRangeValueTypeSupport, NamedFloatRangeValue);

DDS_DATAWRITER_CPP(NamedFloatRangeValueDataWriter, NamedFloatRangeValue);
DDS_DATAREADER_CPP(NamedFloatRangeValueDataReader, NamedFloatRangeValueSeq, NamedFloatRangeValue);


#else

DDS_TYPESUPPORT_C(NamedFloatRangeValueTypeSupport, NamedFloatRangeValue);
DDS_DATAWRITER_C(NamedFloatRangeValueDataWriter, NamedFloatRangeValue);
DDS_DATAREADER_C(NamedFloatRangeValueDataReader, NamedFloatRangeValueSeq, NamedFloatRangeValue);

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

DDS_TYPESUPPORT_CPP(NamedOptionSetValueTypeSupport, NamedOptionSetValue);

DDS_DATAWRITER_CPP(NamedOptionSetValueDataWriter, NamedOptionSetValue);
DDS_DATAREADER_CPP(NamedOptionSetValueDataReader, NamedOptionSetValueSeq, NamedOptionSetValue);


#else

DDS_TYPESUPPORT_C(NamedOptionSetValueTypeSupport, NamedOptionSetValue);
DDS_DATAWRITER_C(NamedOptionSetValueDataWriter, NamedOptionSetValue);
DDS_DATAREADER_C(NamedOptionSetValueDataReader, NamedOptionSetValueSeq, NamedOptionSetValue);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* BaseTypesSupport_1127121220_h */
