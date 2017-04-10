
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StateMachineConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StateMachineConfig_1683097370_h
#define StateMachineConfig_1683097370_h

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

#define rapid_ext_arc_TransitionTriple_LAST_MEMBER_ID 2
        
extern const char *TransitionTripleTYPENAME;
        


#ifdef __cplusplus
    struct TransitionTripleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TransitionTripleTypeSupport;
    class TransitionTripleDataWriter;
    class TransitionTripleDataReader;
#endif

#endif

            
    
class TransitionTriple                                        
{
public:            
#ifdef __cplusplus
    typedef struct TransitionTripleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TransitionTripleTypeSupport TypeSupport;
    typedef TransitionTripleDataWriter DataWriter;
    typedef TransitionTripleDataReader DataReader;
#endif

#endif
    
    DDS_Octet  sourceState;

    DDS_Octet  event;

    DDS_Octet  targetState;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TransitionTriple_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TransitionTripleSeq, TransitionTriple);
        
NDDSUSERDllExport
RTIBool TransitionTriple_initialize(
        TransitionTriple* self);
        
NDDSUSERDllExport
RTIBool TransitionTriple_initialize_ex(
        TransitionTriple* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TransitionTriple_initialize_w_params(
        TransitionTriple* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TransitionTriple_finalize(
        TransitionTriple* self);
                        
NDDSUSERDllExport
void TransitionTriple_finalize_ex(
        TransitionTriple* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TransitionTriple_finalize_w_params(
        TransitionTriple* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TransitionTriple_finalize_optional_members(
        TransitionTriple* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TransitionTriple_copy(
        TransitionTriple* dst,
        const TransitionTriple* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_TransitionSequence16K_LAST_MEMBER_ID rapid_ext_arc_TransitionTriple_LAST_MEMBER_ID
typedef  rapid::ext::arc::TransitionTripleSeq  TransitionSequence16K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TransitionSequence16K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(TransitionSequence16KSeq, TransitionSequence16K);                                        
            
NDDSUSERDllExport
RTIBool TransitionSequence16K_initialize(
        TransitionSequence16K* self);
            
NDDSUSERDllExport
RTIBool TransitionSequence16K_initialize_ex(
        TransitionSequence16K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TransitionSequence16K_initialize_w_params(
        TransitionSequence16K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void TransitionSequence16K_finalize(
        TransitionSequence16K* self);
            
NDDSUSERDllExport
void TransitionSequence16K_finalize_ex(
        TransitionSequence16K* self,RTIBool deletePointers);

NDDSUSERDllExport
void TransitionSequence16K_finalize_w_params(
        TransitionSequence16K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TransitionSequence16K_finalize_optional_members(
        TransitionSequence16K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool TransitionSequence16K_copy(
        TransitionSequence16K* dst,
        const TransitionSequence16K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class StateMachineConfigTypeSupport;

class StateMachineConfigDataWriter;

class StateMachineConfigDataReader;

struct StateMachineConfigSeq;

/** StateMachineConfig message sets up configuration for StateMachineSample messages. */

#define rapid_ext_arc_StateMachineConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 5)
        
extern const char *StateMachineConfigTYPENAME;
        


#ifdef __cplusplus
    struct StateMachineConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class StateMachineConfigTypeSupport;
    class StateMachineConfigDataWriter;
    class StateMachineConfigDataReader;
#endif

#endif

            
    
class StateMachineConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct StateMachineConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef StateMachineConfigTypeSupport TypeSupport;
    typedef StateMachineConfigDataWriter DataWriter;
    typedef StateMachineConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef StateMachineConfigTypeSupport TypeSupport;

typedef StateMachineConfigDataWriter DataWriter;

typedef StateMachineConfigDataReader DataReader;

typedef StateMachineConfigSeq Seq;

#endif

typedef StateMachineConfig Type;

    rapid::String32  subsystem;

    rapid::String32  stateMachine;

    rapid::String32Sequence128  states;

    rapid::String32Sequence128  events;

    rapid::ext::arc::TransitionSequence16K  transitions;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* StateMachineConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StateMachineConfigSeq, StateMachineConfig);
        
NDDSUSERDllExport
RTIBool StateMachineConfig_initialize(
        StateMachineConfig* self);
        
NDDSUSERDllExport
RTIBool StateMachineConfig_initialize_ex(
        StateMachineConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool StateMachineConfig_initialize_w_params(
        StateMachineConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void StateMachineConfig_finalize(
        StateMachineConfig* self);
                        
NDDSUSERDllExport
void StateMachineConfig_finalize_ex(
        StateMachineConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void StateMachineConfig_finalize_w_params(
        StateMachineConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void StateMachineConfig_finalize_optional_members(
        StateMachineConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool StateMachineConfig_copy(
        StateMachineConfig* dst,
        const StateMachineConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* StateMachineConfig_1683097370_h */
