
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StateMachineConfig.idl using "rtiddsgen".
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



#include "StateMachineConfig.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *TransitionTripleTYPENAME = "rapid::ext::arc::TransitionTriple";

DDS_TypeCode* TransitionTriple_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TransitionTriple_g_tc_members[3]=
    {
        {
            (char *)"sourceState",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"event",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"targetState",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TransitionTriple_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::TransitionTriple", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TransitionTriple_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TransitionTriple*/

    if (is_initialized) {
        return &TransitionTriple_g_tc;
    }


    TransitionTriple_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TransitionTriple_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    TransitionTriple_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &TransitionTriple_g_tc;
}


RTIBool TransitionTriple_initialize(
    TransitionTriple* sample) {
  return ::rapid::ext::arc::TransitionTriple_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TransitionTriple_initialize_ex(
    TransitionTriple* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::TransitionTriple_initialize_w_params(
        sample,&allocParams);
}

RTIBool TransitionTriple_initialize_w_params(
        TransitionTriple* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initOctet(&sample->sourceState)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->event)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->targetState)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TransitionTriple_finalize(
    TransitionTriple* sample)
{
    ::rapid::ext::arc::TransitionTriple_finalize_ex(sample,RTI_TRUE);
}
        
void TransitionTriple_finalize_ex(
    TransitionTriple* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::TransitionTriple_finalize_w_params(
        sample,&deallocParams);
}

void TransitionTriple_finalize_w_params(
        TransitionTriple* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void TransitionTriple_finalize_optional_members(
    TransitionTriple* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




}

RTIBool TransitionTriple_copy(
    TransitionTriple* dst,
    const TransitionTriple* src)
{

    if (!RTICdrType_copyOctet(
        &dst->sourceState, &src->sourceState)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->event, &src->event)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->targetState, &src->targetState)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TransitionTriple' sequence class.
 */
#define T TransitionTriple
#define TSeq TransitionTripleSeq
#define T_initialize_w_params ::rapid::ext::arc::TransitionTriple_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::TransitionTriple_finalize_w_params
#define T_copy       ::rapid::ext::arc::TransitionTriple_copy

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

/* ========================================================================= */

DDS_TypeCode* TransitionSequence16K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TransitionSequence16K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode TransitionSequence16K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::TransitionSequence16K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TransitionSequence16K */

    if (is_initialized) {
        return &TransitionSequence16K_g_tc;
    }

    TransitionSequence16K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::TransitionTriple_get_typecode();
    TransitionSequence16K_g_tc._data._typeCode = (RTICdrTypeCode *)&TransitionSequence16K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &TransitionSequence16K_g_tc;
}


RTIBool TransitionSequence16K_initialize(
    TransitionSequence16K* sample)
{
    return ::rapid::ext::arc::TransitionSequence16K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TransitionSequence16K_initialize_ex(
    TransitionSequence16K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::TransitionSequence16K_initialize_w_params(
        sample,&allocParams);
}

RTIBool TransitionSequence16K_initialize_w_params(
        TransitionSequence16K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::TransitionTripleSeq_initialize(sample);
        rapid::ext::arc::TransitionTripleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::TransitionTripleSeq_set_maximum(sample,
                                           (100))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::TransitionTripleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void TransitionSequence16K_finalize(
    TransitionSequence16K* sample)
{
    ::rapid::ext::arc::TransitionSequence16K_finalize_ex(sample,RTI_TRUE);
}
 
void TransitionSequence16K_finalize_ex(
    TransitionSequence16K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::TransitionSequence16K_finalize_w_params(
        sample,&deallocParams);
}
           
void TransitionSequence16K_finalize_w_params(
    TransitionSequence16K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::TransitionTripleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::TransitionTripleSeq_finalize(sample);
            

}

void TransitionSequence16K_finalize_optional_members(
    TransitionSequence16K* sample, RTIBool deletePointers)
{   
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
     
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    
    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    


    {
        DDS_UnsignedLong i, length;
        length = rapid::ext::arc::TransitionTripleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::TransitionTriple_finalize_optional_members(
                rapid::ext::arc::TransitionTripleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool TransitionSequence16K_copy(
    TransitionSequence16K* dst,
    const TransitionSequence16K* src)
{

    if (!rapid::ext::arc::TransitionTripleSeq_copy(dst,
                                          src)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TransitionSequence16K' sequence class.
 */
#define T            TransitionSequence16K
#define TSeq         TransitionSequence16KSeq
#define T_initialize_w_params ::rapid::ext::arc::TransitionSequence16K_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::TransitionSequence16K_finalize_w_params
#define T_copy       ::rapid::ext::arc::TransitionSequence16K_copy


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

/* ========================================================================= */
const char *StateMachineConfigTYPENAME = "rapid::ext::arc::StateMachineConfig";

DDS_TypeCode* StateMachineConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member StateMachineConfig_g_tc_members[5]=
    {
        {
            (char *)"subsystem",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"stateMachine",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"states",/* Member name */
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
        },
        {
            (char *)"events",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 4),/* Representation ID */
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
            (char *)"transitions",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 5),/* Representation ID */
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

    static DDS_TypeCode StateMachineConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::StateMachineConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        StateMachineConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for StateMachineConfig*/

    if (is_initialized) {
        return &StateMachineConfig_g_tc;
    }


    StateMachineConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    StateMachineConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    StateMachineConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::String32Sequence128_get_typecode();
    StateMachineConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::String32Sequence128_get_typecode();
    StateMachineConfig_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::TransitionSequence16K_get_typecode();

    StateMachineConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &StateMachineConfig_g_tc;
}


RTIBool StateMachineConfig_initialize(
    StateMachineConfig* sample) {
  return ::rapid::ext::arc::StateMachineConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool StateMachineConfig_initialize_ex(
    StateMachineConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::StateMachineConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool StateMachineConfig_initialize_w_params(
        StateMachineConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String32_initialize_w_params(&sample->subsystem,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->stateMachine,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32Sequence128_initialize_w_params(&sample->states,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32Sequence128_initialize_w_params(&sample->events,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::TransitionSequence16K_initialize_w_params(&sample->transitions,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void StateMachineConfig_finalize(
    StateMachineConfig* sample)
{
    ::rapid::ext::arc::StateMachineConfig_finalize_ex(sample,RTI_TRUE);
}
        
void StateMachineConfig_finalize_ex(
    StateMachineConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::StateMachineConfig_finalize_w_params(
        sample,&deallocParams);
}

void StateMachineConfig_finalize_w_params(
        StateMachineConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String32_finalize_w_params(&sample->subsystem, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->stateMachine, deallocParams);
            

    rapid::String32Sequence128_finalize_w_params(&sample->states, deallocParams);
            

    rapid::String32Sequence128_finalize_w_params(&sample->events, deallocParams);
            

    rapid::ext::arc::TransitionSequence16K_finalize_w_params(&sample->transitions, deallocParams);
            

}

void StateMachineConfig_finalize_optional_members(
    StateMachineConfig* sample, RTIBool deletePointers)
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
             

    rapid::String32_finalize_optional_members(&sample->subsystem, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->stateMachine, deallocParams->delete_pointers);
            

    rapid::String32Sequence128_finalize_optional_members(&sample->states, deallocParams->delete_pointers);
            

    rapid::String32Sequence128_finalize_optional_members(&sample->events, deallocParams->delete_pointers);
            

    rapid::ext::arc::TransitionSequence16K_finalize_optional_members(&sample->transitions, deallocParams->delete_pointers);
            

}

RTIBool StateMachineConfig_copy(
    StateMachineConfig* dst,
    const StateMachineConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String32_copy(
        &dst->subsystem, &src->subsystem)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->stateMachine, &src->stateMachine)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32Sequence128_copy(
        &dst->states, &src->states)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32Sequence128_copy(
        &dst->events, &src->events)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::TransitionSequence16K_copy(
        &dst->transitions, &src->transitions)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'StateMachineConfig' sequence class.
 */
#define T StateMachineConfig
#define TSeq StateMachineConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::StateMachineConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::StateMachineConfig_finalize_w_params
#define T_copy       ::rapid::ext::arc::StateMachineConfig_copy

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


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */
