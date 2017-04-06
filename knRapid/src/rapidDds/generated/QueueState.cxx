
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QueueState.idl using "rtiddsgen".
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



#include "QueueState.h"


namespace rapid{
/* ========================================================================= */
const char *StatusTypeTYPENAME = "rapid::StatusType";

DDS_TypeCode* StatusType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member StatusType_g_tc_members[14] =
    {
        {
            (char *)"Q_STATUS_INIT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_INIT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_OUTBOUND",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_OUTBOUND, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_LOST",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_LOST, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_INLINE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_INLINE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_PREEMPTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_PREEMPTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_INPROCESS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_INPROCESS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_PAUSED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_PAUSED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_CANCELED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_CANCELED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_SUCCEEDED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_SUCCEEDED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_FAILED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_FAILED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_ALIEN_PENDING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_ALIEN_PENDING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_ALIEN_ACTIVE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_ALIEN_ACTIVE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_ALIEN_COMPLETED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_ALIEN_COMPLETED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_STATUS_FORGOTTEN_BY_ROBOT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_STATUS_FORGOTTEN_BY_ROBOT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode StatusType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::StatusType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        14, /* Number of enumerators */
        StatusType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &StatusType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &StatusType_g_tc;
}
 

RTIBool StatusType_initialize(
    StatusType* sample)
{
    *sample = Q_STATUS_INIT;
    return RTI_TRUE;
}
        
RTIBool StatusType_initialize_ex(
    StatusType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = Q_STATUS_INIT;
    return RTI_TRUE;
}

RTIBool StatusType_initialize_w_params(
        StatusType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = Q_STATUS_INIT;
    return RTI_TRUE;
}

void StatusType_finalize(
    StatusType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void StatusType_finalize_ex(
    StatusType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void StatusType_finalize_w_params(
        StatusType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool StatusType_copy(
    StatusType* dst,
    const StatusType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool StatusType_getValues(StatusTypeSeq * values) 
    
{
    int i = 0;
    StatusType * buffer;


    if (!values->maximum(14)) {
        return RTI_FALSE;
    }

    if (!values->length(14)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = Q_STATUS_INIT;
    i++;
    
    buffer[i] = Q_STATUS_OUTBOUND;
    i++;
    
    buffer[i] = Q_STATUS_LOST;
    i++;
    
    buffer[i] = Q_STATUS_INLINE;
    i++;
    
    buffer[i] = Q_STATUS_PREEMPTED;
    i++;
    
    buffer[i] = Q_STATUS_INPROCESS;
    i++;
    
    buffer[i] = Q_STATUS_PAUSED;
    i++;
    
    buffer[i] = Q_STATUS_CANCELED;
    i++;
    
    buffer[i] = Q_STATUS_SUCCEEDED;
    i++;
    
    buffer[i] = Q_STATUS_FAILED;
    i++;
    
    buffer[i] = Q_STATUS_ALIEN_PENDING;
    i++;
    
    buffer[i] = Q_STATUS_ALIEN_ACTIVE;
    i++;
    
    buffer[i] = Q_STATUS_ALIEN_COMPLETED;
    i++;
    
    buffer[i] = Q_STATUS_FORGOTTEN_BY_ROBOT;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'StatusType' sequence class.
 */
#define T StatusType
#define TSeq StatusTypeSeq
#define T_initialize_w_params StatusType_initialize_w_params
#define T_finalize_w_params   StatusType_finalize_w_params
#define T_copy       StatusType_copy

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
const char *ResultTypeTYPENAME = "rapid::ResultType";

DDS_TypeCode* ResultType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ResultType_g_tc_members[3] =
    {
        {
            (char *)"Q_RESULT_INIT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_RESULT_INIT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_RESULT_SUCCEEDED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_RESULT_SUCCEEDED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Q_RESULT_FAILED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            Q_RESULT_FAILED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ResultType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ResultType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        ResultType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ResultType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ResultType_g_tc;
}
 

RTIBool ResultType_initialize(
    ResultType* sample)
{
    *sample = Q_RESULT_INIT;
    return RTI_TRUE;
}
        
RTIBool ResultType_initialize_ex(
    ResultType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = Q_RESULT_INIT;
    return RTI_TRUE;
}

RTIBool ResultType_initialize_w_params(
        ResultType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = Q_RESULT_INIT;
    return RTI_TRUE;
}

void ResultType_finalize(
    ResultType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ResultType_finalize_ex(
    ResultType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ResultType_finalize_w_params(
        ResultType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ResultType_copy(
    ResultType* dst,
    const ResultType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ResultType_getValues(ResultTypeSeq * values) 
    
{
    int i = 0;
    ResultType * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = Q_RESULT_INIT;
    i++;
    
    buffer[i] = Q_RESULT_SUCCEEDED;
    i++;
    
    buffer[i] = Q_RESULT_FAILED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ResultType' sequence class.
 */
#define T ResultType
#define TSeq ResultTypeSeq
#define T_initialize_w_params ResultType_initialize_w_params
#define T_finalize_w_params   ResultType_finalize_w_params
#define T_copy       ResultType_copy

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
const char *CommandRecordTYPENAME = "rapid::CommandRecord";

DDS_TypeCode* CommandRecord_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member CommandRecord_g_tc_members[3]=
    {
        {
            (char *)"cmd",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"trResult",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"trStatus",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode CommandRecord_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::CommandRecord", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        CommandRecord_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for CommandRecord*/

    if (is_initialized) {
        return &CommandRecord_g_tc;
    }


    CommandRecord_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::Command_get_typecode();
    CommandRecord_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ResultType_get_typecode();
    CommandRecord_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::StatusType_get_typecode();

    CommandRecord_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_null; /* Base class */

    is_initialized = RTI_TRUE;

    return &CommandRecord_g_tc;
}


RTIBool CommandRecord_initialize(
    CommandRecord* sample) {
  return ::rapid::CommandRecord_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool CommandRecord_initialize_ex(
    CommandRecord* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::CommandRecord_initialize_w_params(
        sample,&allocParams);
}

RTIBool CommandRecord_initialize_w_params(
        CommandRecord* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::Command_initialize_w_params(&sample->cmd,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ResultType_initialize_w_params(&sample->trResult,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::StatusType_initialize_w_params(&sample->trStatus,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void CommandRecord_finalize(
    CommandRecord* sample)
{
    ::rapid::CommandRecord_finalize_ex(sample,RTI_TRUE);
}
        
void CommandRecord_finalize_ex(
    CommandRecord* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::CommandRecord_finalize_w_params(
        sample,&deallocParams);
}

void CommandRecord_finalize_w_params(
        CommandRecord* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::Command_finalize_w_params(&sample->cmd, deallocParams);
            

    rapid::ResultType_finalize_w_params(&sample->trResult, deallocParams);
            

    rapid::StatusType_finalize_w_params(&sample->trStatus, deallocParams);
            

}

void CommandRecord_finalize_optional_members(
    CommandRecord* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::Command_finalize_optional_members(&sample->cmd, deallocParams->delete_pointers);
            

    rapid::ResultType_finalize_w_params(&sample->trResult, deallocParams);
            

    rapid::StatusType_finalize_w_params(&sample->trStatus, deallocParams);
            

}

RTIBool CommandRecord_copy(
    CommandRecord* dst,
    const CommandRecord* src)
{

    if (!rapid::Command_copy(
        &dst->cmd, &src->cmd)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ResultType_copy(
        &dst->trResult, &src->trResult)) {
        return RTI_FALSE;
    }
            

    if (!rapid::StatusType_copy(
        &dst->trStatus, &src->trStatus)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CommandRecord' sequence class.
 */
#define T CommandRecord
#define TSeq CommandRecordSeq
#define T_initialize_w_params ::rapid::CommandRecord_initialize_w_params
#define T_finalize_w_params   ::rapid::CommandRecord_finalize_w_params
#define T_copy       ::rapid::CommandRecord_copy

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
const char *SingleQueueTYPENAME = "rapid::SingleQueue";

DDS_TypeCode* SingleQueue_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SingleQueue_g_tc_queue_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode_Member SingleQueue_g_tc_members[1]=
    {
        {
            (char *)"queue",/* Member name */
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
        }
    };

    static DDS_TypeCode SingleQueue_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::SingleQueue", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        SingleQueue_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SingleQueue*/

    if (is_initialized) {
        return &SingleQueue_g_tc;
    }

    SingleQueue_g_tc_queue_sequence._data._typeCode = (RTICdrTypeCode *)rapid::CommandRecord_get_typecode();

    SingleQueue_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SingleQueue_g_tc_queue_sequence;

    is_initialized = RTI_TRUE;

    return &SingleQueue_g_tc;
}


RTIBool SingleQueue_initialize(
    SingleQueue* sample) {
  return ::rapid::SingleQueue_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SingleQueue_initialize_ex(
    SingleQueue* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::SingleQueue_initialize_w_params(
        sample,&allocParams);
}

RTIBool SingleQueue_initialize_w_params(
        SingleQueue* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        rapid::CommandRecordSeq_initialize(&sample->queue);
        rapid::CommandRecordSeq_set_element_allocation_params(&sample->queue,allocParams);
        if (!rapid::CommandRecordSeq_set_maximum(&sample->queue,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::CommandRecordSeq_set_length(&sample->queue,0);
    }
            


    return RTI_TRUE;
}

void SingleQueue_finalize(
    SingleQueue* sample)
{
    ::rapid::SingleQueue_finalize_ex(sample,RTI_TRUE);
}
        
void SingleQueue_finalize_ex(
    SingleQueue* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::SingleQueue_finalize_w_params(
        sample,&deallocParams);
}

void SingleQueue_finalize_w_params(
        SingleQueue* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::CommandRecordSeq_set_element_deallocation_params(&sample->queue,deallocParams);
    rapid::CommandRecordSeq_finalize(&sample->queue);
            

}

void SingleQueue_finalize_optional_members(
    SingleQueue* sample, RTIBool deletePointers)
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
        length = rapid::CommandRecordSeq_get_length(
            &sample->queue);

        for (i = 0; i < length; i++) {
            rapid::CommandRecord_finalize_optional_members(
                rapid::CommandRecordSeq_get_reference(
                    &sample->queue, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool SingleQueue_copy(
    SingleQueue* dst,
    const SingleQueue* src)
{

    if (!rapid::CommandRecordSeq_copy(&dst->queue,
                                          &src->queue)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SingleQueue' sequence class.
 */
#define T SingleQueue
#define TSeq SingleQueueSeq
#define T_initialize_w_params ::rapid::SingleQueue_initialize_w_params
#define T_finalize_w_params   ::rapid::SingleQueue_finalize_w_params
#define T_copy       ::rapid::SingleQueue_copy

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
const char *QueueStateTYPENAME = "rapid::QueueState";

DDS_TypeCode* QueueState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member QueueState_g_tc_members[4]=
    {
        {
            (char *)"pending",/* Member name */
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
            (char *)"active",/* Member name */
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
            (char *)"completed",/* Member name */
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
            (char *)"sent",/* Member name */
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
        }
    };

    static DDS_TypeCode QueueState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::QueueState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        QueueState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for QueueState*/

    if (is_initialized) {
        return &QueueState_g_tc;
    }


    QueueState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::SingleQueue_get_typecode();
    QueueState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::SingleQueue_get_typecode();
    QueueState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::SingleQueue_get_typecode();
    QueueState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::SingleQueue_get_typecode();

    QueueState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &QueueState_g_tc;
}


RTIBool QueueState_initialize(
    QueueState* sample) {
  return ::rapid::QueueState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool QueueState_initialize_ex(
    QueueState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::QueueState_initialize_w_params(
        sample,&allocParams);
}

RTIBool QueueState_initialize_w_params(
        QueueState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::SingleQueue_initialize_w_params(&sample->pending,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SingleQueue_initialize_w_params(&sample->active,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SingleQueue_initialize_w_params(&sample->completed,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SingleQueue_initialize_w_params(&sample->sent,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void QueueState_finalize(
    QueueState* sample)
{
    ::rapid::QueueState_finalize_ex(sample,RTI_TRUE);
}
        
void QueueState_finalize_ex(
    QueueState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::QueueState_finalize_w_params(
        sample,&deallocParams);
}

void QueueState_finalize_w_params(
        QueueState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::SingleQueue_finalize_w_params(&sample->pending, deallocParams);
            

    rapid::SingleQueue_finalize_w_params(&sample->active, deallocParams);
            

    rapid::SingleQueue_finalize_w_params(&sample->completed, deallocParams);
            

    rapid::SingleQueue_finalize_w_params(&sample->sent, deallocParams);
            

}

void QueueState_finalize_optional_members(
    QueueState* sample, RTIBool deletePointers)
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
             

    rapid::SingleQueue_finalize_optional_members(&sample->pending, deallocParams->delete_pointers);
            

    rapid::SingleQueue_finalize_optional_members(&sample->active, deallocParams->delete_pointers);
            

    rapid::SingleQueue_finalize_optional_members(&sample->completed, deallocParams->delete_pointers);
            

    rapid::SingleQueue_finalize_optional_members(&sample->sent, deallocParams->delete_pointers);
            

}

RTIBool QueueState_copy(
    QueueState* dst,
    const QueueState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::SingleQueue_copy(
        &dst->pending, &src->pending)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SingleQueue_copy(
        &dst->active, &src->active)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SingleQueue_copy(
        &dst->completed, &src->completed)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SingleQueue_copy(
        &dst->sent, &src->sent)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'QueueState' sequence class.
 */
#define T QueueState
#define TSeq QueueStateSeq
#define T_initialize_w_params ::rapid::QueueState_initialize_w_params
#define T_finalize_w_params   ::rapid::QueueState_finalize_w_params
#define T_copy       ::rapid::QueueState_copy

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
