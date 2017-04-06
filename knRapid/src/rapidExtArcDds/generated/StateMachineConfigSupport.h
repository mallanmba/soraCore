
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StateMachineConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StateMachineConfigSupport_1683097370_h
#define StateMachineConfigSupport_1683097370_h

/* Uses */
#include "StateMachineConfig.h"



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

DDS_TYPESUPPORT_CPP(TransitionTripleTypeSupport, TransitionTriple);

DDS_DATAWRITER_CPP(TransitionTripleDataWriter, TransitionTriple);
DDS_DATAREADER_CPP(TransitionTripleDataReader, TransitionTripleSeq, TransitionTriple);


#else

DDS_TYPESUPPORT_C(TransitionTripleTypeSupport, TransitionTriple);
DDS_DATAWRITER_C(TransitionTripleDataWriter, TransitionTriple);
DDS_DATAREADER_C(TransitionTripleDataReader, TransitionTripleSeq, TransitionTriple);

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
DDS_TYPESUPPORT_CPP(StateMachineConfigTypeSupport, StateMachineConfig);

DDS_DATAWRITER_CPP(StateMachineConfigDataWriter, StateMachineConfig);
DDS_DATAREADER_CPP(StateMachineConfigDataReader, StateMachineConfigSeq, StateMachineConfig);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(StateMachineConfigTypeSupport, StateMachineConfig);
DDS_DATAWRITER_C(StateMachineConfigDataWriter, StateMachineConfig);
DDS_DATAREADER_C(StateMachineConfigDataReader, StateMachineConfigSeq, StateMachineConfig);

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


#endif  /* StateMachineConfigSupport_1683097370_h */
