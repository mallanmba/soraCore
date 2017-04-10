
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StateMachineState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StateMachineState_2126867909_h
#define StateMachineState_2126867909_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#include "Message.h"


namespace rapid{

namespace ext{

namespace arc{

class StateMachineStateTypeSupport;

class StateMachineStateDataWriter;

class StateMachineStateDataReader;

struct StateMachineStateSeq;

/**

 * StateMachineState message delivers the position of the Agent. Corresponding Float32Config sets up the

 * coordinate frame and specifies how the Transform3D.rot field is to be interpreted for pose and velocity.

 */

#define rapid_ext_arc_StateMachineState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 6)
        
extern const char *StateMachineStateTYPENAME;
        


#ifdef __cplusplus
    struct StateMachineStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class StateMachineStateTypeSupport;
    class StateMachineStateDataWriter;
    class StateMachineStateDataReader;
#endif

#endif

            
    
class StateMachineState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct StateMachineStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef StateMachineStateTypeSupport TypeSupport;
    typedef StateMachineStateDataWriter DataWriter;
    typedef StateMachineStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef StateMachineStateTypeSupport TypeSupport;

typedef StateMachineStateDataWriter DataWriter;

typedef StateMachineStateDataReader DataReader;

typedef StateMachineStateSeq Seq;

#endif

typedef StateMachineState Type;

    rapid::String32  subsystem;

    rapid::String32  stateMachine;

    DDS_Octet  currentState;

    DDS_Octet  previousState;

    DDS_Octet  lastEvent;

    rapid::String128  message;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* StateMachineState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StateMachineStateSeq, StateMachineState);
        
NDDSUSERDllExport
RTIBool StateMachineState_initialize(
        StateMachineState* self);
        
NDDSUSERDllExport
RTIBool StateMachineState_initialize_ex(
        StateMachineState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool StateMachineState_initialize_w_params(
        StateMachineState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void StateMachineState_finalize(
        StateMachineState* self);
                        
NDDSUSERDllExport
void StateMachineState_finalize_ex(
        StateMachineState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void StateMachineState_finalize_w_params(
        StateMachineState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void StateMachineState_finalize_optional_members(
        StateMachineState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool StateMachineState_copy(
        StateMachineState* dst,
        const StateMachineState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* StateMachineState_2126867909_h */
