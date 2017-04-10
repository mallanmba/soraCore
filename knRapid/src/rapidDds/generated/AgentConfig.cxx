
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AgentConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "AgentConfig.h"


namespace rapid{
/* ========================================================================= */
const char *AgentConfigTYPENAME = "rapid::AgentConfig";

DDS_TypeCode* AgentConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AgentConfig_g_tc_members[3]=
    {
        {
            (char *)"agentTags",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 1),/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"topics",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 2),/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"valueKeys",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 3),/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode AgentConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::AgentConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        AgentConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for AgentConfig*/

    if (is_initialized) {
        return &AgentConfig_g_tc;
    }


    AgentConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String16Sequence16_get_typecode();
    AgentConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String128Sequence64_get_typecode();
    AgentConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence64_get_typecode();

    AgentConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &AgentConfig_g_tc;
}


RTIBool AgentConfig_initialize(
    AgentConfig* sample) {
  return ::rapid::AgentConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool AgentConfig_initialize_ex(
    AgentConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::AgentConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool AgentConfig_initialize_w_params(
        AgentConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String16Sequence16_initialize_w_params(&sample->agentTags,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128Sequence64_initialize_w_params(&sample->topics,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence64_initialize_w_params(&sample->valueKeys,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void AgentConfig_finalize(
    AgentConfig* sample)
{
    ::rapid::AgentConfig_finalize_ex(sample,RTI_TRUE);
}
        
void AgentConfig_finalize_ex(
    AgentConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::AgentConfig_finalize_w_params(
        sample,&deallocParams);
}

void AgentConfig_finalize_w_params(
        AgentConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String16Sequence16_finalize_w_params(&sample->agentTags, deallocParams);
            

    rapid::String128Sequence64_finalize_w_params(&sample->topics, deallocParams);
            

    rapid::KeyTypeValueSequence64_finalize_w_params(&sample->valueKeys, deallocParams);
            

}

void AgentConfig_finalize_optional_members(
    AgentConfig* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_optional_members((rapid::Message*)sample, deletePointers);
        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String16Sequence16_finalize_optional_members(&sample->agentTags, deallocParams->delete_pointers);
            

    rapid::String128Sequence64_finalize_optional_members(&sample->topics, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence64_finalize_optional_members(&sample->valueKeys, deallocParams->delete_pointers);
            

}

RTIBool AgentConfig_copy(
    AgentConfig* dst,
    const AgentConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String16Sequence16_copy(
        &dst->agentTags, &src->agentTags)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128Sequence64_copy(
        &dst->topics, &src->topics)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence64_copy(
        &dst->valueKeys, &src->valueKeys)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'AgentConfig' sequence class.
 */
#define T AgentConfig
#define TSeq AgentConfigSeq
#define T_initialize_w_params ::rapid::AgentConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::AgentConfig_finalize_w_params
#define T_copy       ::rapid::AgentConfig_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T


} /* namespace rapid */
