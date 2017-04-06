
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AgentState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AgentStateSupport_4797555_h
#define AgentStateSupport_4797555_h

/* Uses */
#include "AgentState.h"



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

 * AgentState message sends low-frequency updates of the state

 * of a specific Agent.

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
DDS_TYPESUPPORT_CPP(AgentStateTypeSupport, AgentState);

DDS_DATAWRITER_CPP(AgentStateDataWriter, AgentState);
DDS_DATAREADER_CPP(AgentStateDataReader, AgentStateSeq, AgentState);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(AgentStateTypeSupport, AgentState);
DDS_DATAWRITER_C(AgentStateDataWriter, AgentState);
DDS_DATAREADER_C(AgentStateDataReader, AgentStateSeq, AgentState);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* AgentStateSupport_4797555_h */
