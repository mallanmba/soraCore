
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StateMachineState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StateMachineStateSupport_2126867909_h
#define StateMachineStateSupport_2126867909_h

/* Uses */
#include "StateMachineState.h"



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
#define RTI_VALUETYPE
DDS_TYPESUPPORT_CPP(StateMachineStateTypeSupport, StateMachineState);

DDS_DATAWRITER_CPP(StateMachineStateDataWriter, StateMachineState);
DDS_DATAREADER_CPP(StateMachineStateDataReader, StateMachineStateSeq, StateMachineState);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(StateMachineStateTypeSupport, StateMachineState);
DDS_DATAWRITER_C(StateMachineStateDataWriter, StateMachineState);
DDS_DATAREADER_C(StateMachineStateDataReader, StateMachineStateSeq, StateMachineState);

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


#endif  /* StateMachineStateSupport_2126867909_h */
