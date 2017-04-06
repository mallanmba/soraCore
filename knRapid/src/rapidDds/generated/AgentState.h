
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AgentState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AgentState_4797555_h
#define AgentState_4797555_h

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

class AgentStateTypeSupport;

class AgentStateDataWriter;

class AgentStateDataReader;

struct AgentStateSeq;

/**

 * AgentState message sends low-frequency updates of the state

 * of a specific Agent.

 */

#define rapid_AgentState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *AgentStateTYPENAME;
        


#ifdef __cplusplus
    struct AgentStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AgentStateTypeSupport;
    class AgentStateDataWriter;
    class AgentStateDataReader;
#endif

#endif

            
    
class AgentState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct AgentStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AgentStateTypeSupport TypeSupport;
    typedef AgentStateDataWriter DataWriter;
    typedef AgentStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef AgentStateTypeSupport TypeSupport;

typedef AgentStateDataWriter DataWriter;

typedef AgentStateDataReader DataReader;

typedef AgentStateSeq Seq;

#endif

typedef AgentState Type;

/**

 * The AgentConfig message defines the names, data types

 * and order of the values contained in the sequence.

 */

    rapid::ValueSequence64  values;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AgentState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AgentStateSeq, AgentState);
        
NDDSUSERDllExport
RTIBool AgentState_initialize(
        AgentState* self);
        
NDDSUSERDllExport
RTIBool AgentState_initialize_ex(
        AgentState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool AgentState_initialize_w_params(
        AgentState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void AgentState_finalize(
        AgentState* self);
                        
NDDSUSERDllExport
void AgentState_finalize_ex(
        AgentState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void AgentState_finalize_w_params(
        AgentState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void AgentState_finalize_optional_members(
        AgentState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool AgentState_copy(
        AgentState* dst,
        const AgentState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* AgentState_4797555_h */
