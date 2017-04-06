
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AgentConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AgentConfig_954873217_h
#define AgentConfig_954873217_h

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

class AgentConfigTypeSupport;

class AgentConfigDataWriter;

class AgentConfigDataReader;

struct AgentConfigSeq;

/**

 * AgentConfig

 */

#define rapid_AgentConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 3)
        
extern const char *AgentConfigTYPENAME;
        


#ifdef __cplusplus
    struct AgentConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AgentConfigTypeSupport;
    class AgentConfigDataWriter;
    class AgentConfigDataReader;
#endif

#endif

            
    
class AgentConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct AgentConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AgentConfigTypeSupport TypeSupport;
    typedef AgentConfigDataWriter DataWriter;
    typedef AgentConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef AgentConfigTypeSupport TypeSupport;

typedef AgentConfigDataWriter DataWriter;

typedef AgentConfigDataReader DataReader;

typedef AgentConfigSeq Seq;

#endif

typedef AgentConfig Type;

/**

 * tags that describe the Agent

 */

    rapid::String16Sequence16  agentTags;

/**

 * List of topic names for messages from Agents that have multiple of a message type.

 * The convention for topic naming is the base topic name, appended by a dash ("-")

 * and a descriptive lower-case string. For example, rapid_position_sample-right_end_effector

 */

    rapid::String128Sequence64  topics;

/**

 * Agent-specific state information can be stored in this extras sequence. The Name and Type

 * information is stored in the KeyTypeSequence, and the AgentState message provides the values. The

 * key denotes the name of a piece of information, the type is the DataType of the information, and the

 * Value is the current value of the information upon start-up. This sequence has a counterpart in

 * AgentState, named 'values'.

 *

 * For example,

 *

 * <code>

 *   AgentConfig.valueKeys[0] = 'fooBar', BOOLEAN<br>

 *   AgentConfig.valueKeys[1] = 'driveFace', INT<br>

 *   AgentConfig.valueKeys[2] = 'fluxCapacitance', FLOAT<br>

 * </code>

 *

 * Updates are published as:

 *

 * <code>

 *   AgentState.values[0] = 'false'<br>

 *   AgentState.values[1] = '2'<br>

 *   AgentState.values[2] = '3.14159'<br>

 * </code>

 *

 * The value in the Sequence is the default value for that key.

 */

    rapid::KeyTypeValueSequence64  valueKeys;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AgentConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AgentConfigSeq, AgentConfig);
        
NDDSUSERDllExport
RTIBool AgentConfig_initialize(
        AgentConfig* self);
        
NDDSUSERDllExport
RTIBool AgentConfig_initialize_ex(
        AgentConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool AgentConfig_initialize_w_params(
        AgentConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void AgentConfig_finalize(
        AgentConfig* self);
                        
NDDSUSERDllExport
void AgentConfig_finalize_ex(
        AgentConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void AgentConfig_finalize_w_params(
        AgentConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void AgentConfig_finalize_optional_members(
        AgentConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool AgentConfig_copy(
        AgentConfig* dst,
        const AgentConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* AgentConfig_954873217_h */
