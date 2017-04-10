
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessManagerState.idl using "rtiddsgen".
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



#include "ProcessManagerState.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *ProcessStatusTYPENAME = "rapid::ext::ProcessStatus";

DDS_TypeCode* ProcessStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ProcessStatus_g_tc_members[9] =
    {
        {
            (char *)"PROCESS_STATE_UNAVAIL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_UNAVAIL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_STARTING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_STARTING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_RESTARTING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_RESTARTING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_RUNNING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_RUNNING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_STOPPING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_STOPPING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_STOPPED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_STOPPED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_STOPPED_UNEXPECTEDLY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_STOPPED_UNEXPECTEDLY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_COMPLETED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_COMPLETED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STATE_KILLED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STATE_KILLED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ProcessStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::ProcessStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        9, /* Number of enumerators */
        ProcessStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ProcessStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ProcessStatus_g_tc;
}
 

RTIBool ProcessStatus_initialize(
    ProcessStatus* sample)
{
    *sample = PROCESS_STATE_UNAVAIL;
    return RTI_TRUE;
}
        
RTIBool ProcessStatus_initialize_ex(
    ProcessStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = PROCESS_STATE_UNAVAIL;
    return RTI_TRUE;
}

RTIBool ProcessStatus_initialize_w_params(
        ProcessStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = PROCESS_STATE_UNAVAIL;
    return RTI_TRUE;
}

void ProcessStatus_finalize(
    ProcessStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ProcessStatus_finalize_ex(
    ProcessStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ProcessStatus_finalize_w_params(
        ProcessStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ProcessStatus_copy(
    ProcessStatus* dst,
    const ProcessStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ProcessStatus_getValues(ProcessStatusSeq * values) 
    
{
    int i = 0;
    ProcessStatus * buffer;


    if (!values->maximum(9)) {
        return RTI_FALSE;
    }

    if (!values->length(9)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = PROCESS_STATE_UNAVAIL;
    i++;
    
    buffer[i] = PROCESS_STATE_STARTING;
    i++;
    
    buffer[i] = PROCESS_STATE_RESTARTING;
    i++;
    
    buffer[i] = PROCESS_STATE_RUNNING;
    i++;
    
    buffer[i] = PROCESS_STATE_STOPPING;
    i++;
    
    buffer[i] = PROCESS_STATE_STOPPED;
    i++;
    
    buffer[i] = PROCESS_STATE_STOPPED_UNEXPECTEDLY;
    i++;
    
    buffer[i] = PROCESS_STATE_COMPLETED;
    i++;
    
    buffer[i] = PROCESS_STATE_KILLED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ProcessStatus' sequence class.
 */
#define T ProcessStatus
#define TSeq ProcessStatusSeq
#define T_initialize_w_params ProcessStatus_initialize_w_params
#define T_finalize_w_params   ProcessStatus_finalize_w_params
#define T_copy       ProcessStatus_copy

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

DDS_TypeCode* ProcessStatusSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ProcessStatusSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode ProcessStatusSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::ProcessStatusSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ProcessStatusSequence */

    if (is_initialized) {
        return &ProcessStatusSequence_g_tc;
    }

    ProcessStatusSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::ProcessStatus_get_typecode();
    ProcessStatusSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ProcessStatusSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ProcessStatusSequence_g_tc;
}


RTIBool ProcessStatusSequence_initialize(
    ProcessStatusSequence* sample)
{
    return ::rapid::ext::ProcessStatusSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ProcessStatusSequence_initialize_ex(
    ProcessStatusSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ProcessStatusSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ProcessStatusSequence_initialize_w_params(
        ProcessStatusSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::ProcessStatusSeq_initialize(sample);
        rapid::ext::ProcessStatusSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::ProcessStatusSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::ProcessStatusSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ProcessStatusSequence_finalize(
    ProcessStatusSequence* sample)
{
    ::rapid::ext::ProcessStatusSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ProcessStatusSequence_finalize_ex(
    ProcessStatusSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ProcessStatusSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ProcessStatusSequence_finalize_w_params(
    ProcessStatusSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::ProcessStatusSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::ProcessStatusSeq_finalize(sample);
            

}

void ProcessStatusSequence_finalize_optional_members(
    ProcessStatusSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::ProcessStatusSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::ProcessStatus_finalize_w_params(
                rapid::ext::ProcessStatusSeq_get_reference(
                    sample, i), deallocParams);
        }
    }         
            

}

RTIBool ProcessStatusSequence_copy(
    ProcessStatusSequence* dst,
    const ProcessStatusSequence* src)
{

    if (!rapid::ext::ProcessStatusSeq_copy(dst,
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
 * Configure and implement 'ProcessStatusSequence' sequence class.
 */
#define T            ProcessStatusSequence
#define TSeq         ProcessStatusSequenceSeq
#define T_initialize_w_params ::rapid::ext::ProcessStatusSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ProcessStatusSequence_finalize_w_params
#define T_copy       ::rapid::ext::ProcessStatusSequence_copy


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
const char *ProcessManagerStateTYPENAME = "rapid::ext::ProcessManagerState";

DDS_TypeCode* ProcessManagerState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ProcessManagerState_g_tc_members[1]=
    {
        {
            (char *)"processStatus",/* Member name */
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
        }
    };

    static DDS_TypeCode ProcessManagerState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::ProcessManagerState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        ProcessManagerState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for ProcessManagerState*/

    if (is_initialized) {
        return &ProcessManagerState_g_tc;
    }


    ProcessManagerState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::ProcessStatusSequence_get_typecode();

    ProcessManagerState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &ProcessManagerState_g_tc;
}


RTIBool ProcessManagerState_initialize(
    ProcessManagerState* sample) {
  return ::rapid::ext::ProcessManagerState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ProcessManagerState_initialize_ex(
    ProcessManagerState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ProcessManagerState_initialize_w_params(
        sample,&allocParams);
}

RTIBool ProcessManagerState_initialize_w_params(
        ProcessManagerState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
/** status sequence corresponds with ProcessManagerConfig.processes sequence */

    if (!rapid::ext::ProcessStatusSequence_initialize_w_params(&sample->processStatus,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ProcessManagerState_finalize(
    ProcessManagerState* sample)
{
    ::rapid::ext::ProcessManagerState_finalize_ex(sample,RTI_TRUE);
}
        
void ProcessManagerState_finalize_ex(
    ProcessManagerState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ProcessManagerState_finalize_w_params(
        sample,&deallocParams);
}

void ProcessManagerState_finalize_w_params(
        ProcessManagerState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

/** status sequence corresponds with ProcessManagerConfig.processes sequence */

    rapid::ext::ProcessStatusSequence_finalize_w_params(&sample->processStatus, deallocParams);
            

}

void ProcessManagerState_finalize_optional_members(
    ProcessManagerState* sample, RTIBool deletePointers)
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
             

/** status sequence corresponds with ProcessManagerConfig.processes sequence */

    rapid::ext::ProcessStatusSequence_finalize_optional_members(&sample->processStatus, deallocParams->delete_pointers);
            

}

RTIBool ProcessManagerState_copy(
    ProcessManagerState* dst,
    const ProcessManagerState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

/** status sequence corresponds with ProcessManagerConfig.processes sequence */

    if (!rapid::ext::ProcessStatusSequence_copy(
        &dst->processStatus, &src->processStatus)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ProcessManagerState' sequence class.
 */
#define T ProcessManagerState
#define TSeq ProcessManagerStateSeq
#define T_initialize_w_params ::rapid::ext::ProcessManagerState_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ProcessManagerState_finalize_w_params
#define T_copy       ::rapid::ext::ProcessManagerState_copy

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


} /* namespace ext */

} /* namespace rapid */
