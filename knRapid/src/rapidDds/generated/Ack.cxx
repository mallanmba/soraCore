
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Ack.idl using "rtiddsgen".
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



#include "Ack.h"


namespace rapid{
/* ========================================================================= */
const char *AckStatusTYPENAME = "rapid::AckStatus";

DDS_TypeCode* AckStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member AckStatus_g_tc_members[4] =
    {
        {
            (char *)"ACK_QUEUED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_QUEUED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACK_EXECUTING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_EXECUTING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACK_REQUEUED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_REQUEUED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACK_COMPLETED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_COMPLETED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode AckStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::AckStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
        AckStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &AckStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &AckStatus_g_tc;
}
 

RTIBool AckStatus_initialize(
    AckStatus* sample)
{
    *sample = ACK_QUEUED;
    return RTI_TRUE;
}
        
RTIBool AckStatus_initialize_ex(
    AckStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = ACK_QUEUED;
    return RTI_TRUE;
}

RTIBool AckStatus_initialize_w_params(
        AckStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = ACK_QUEUED;
    return RTI_TRUE;
}

void AckStatus_finalize(
    AckStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void AckStatus_finalize_ex(
    AckStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void AckStatus_finalize_w_params(
        AckStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool AckStatus_copy(
    AckStatus* dst,
    const AckStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool AckStatus_getValues(AckStatusSeq * values) 
    
{
    int i = 0;
    AckStatus * buffer;


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = ACK_QUEUED;
    i++;
    
    buffer[i] = ACK_EXECUTING;
    i++;
    
    buffer[i] = ACK_REQUEUED;
    i++;
    
    buffer[i] = ACK_COMPLETED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'AckStatus' sequence class.
 */
#define T AckStatus
#define TSeq AckStatusSeq
#define T_initialize_w_params AckStatus_initialize_w_params
#define T_finalize_w_params   AckStatus_finalize_w_params
#define T_copy       AckStatus_copy

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
const char *AckCompletedStatusTYPENAME = "rapid::AckCompletedStatus";

DDS_TypeCode* AckCompletedStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member AckCompletedStatus_g_tc_members[5] =
    {
        {
            (char *)"ACK_COMPLETED_NOT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_COMPLETED_NOT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACK_COMPLETED_OK",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_COMPLETED_OK, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACK_COMPLETED_BAD_SYNTAX",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_COMPLETED_BAD_SYNTAX, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACK_COMPLETED_EXEC_FAILED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_COMPLETED_EXEC_FAILED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ACK_COMPLETED_CANCELED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ACK_COMPLETED_CANCELED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode AckCompletedStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::AckCompletedStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of enumerators */
        AckCompletedStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &AckCompletedStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &AckCompletedStatus_g_tc;
}
 

RTIBool AckCompletedStatus_initialize(
    AckCompletedStatus* sample)
{
    *sample = ACK_COMPLETED_NOT;
    return RTI_TRUE;
}
        
RTIBool AckCompletedStatus_initialize_ex(
    AckCompletedStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = ACK_COMPLETED_NOT;
    return RTI_TRUE;
}

RTIBool AckCompletedStatus_initialize_w_params(
        AckCompletedStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = ACK_COMPLETED_NOT;
    return RTI_TRUE;
}

void AckCompletedStatus_finalize(
    AckCompletedStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void AckCompletedStatus_finalize_ex(
    AckCompletedStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void AckCompletedStatus_finalize_w_params(
        AckCompletedStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool AckCompletedStatus_copy(
    AckCompletedStatus* dst,
    const AckCompletedStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool AckCompletedStatus_getValues(AckCompletedStatusSeq * values) 
    
{
    int i = 0;
    AckCompletedStatus * buffer;


    if (!values->maximum(5)) {
        return RTI_FALSE;
    }

    if (!values->length(5)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = ACK_COMPLETED_NOT;
    i++;
    
    buffer[i] = ACK_COMPLETED_OK;
    i++;
    
    buffer[i] = ACK_COMPLETED_BAD_SYNTAX;
    i++;
    
    buffer[i] = ACK_COMPLETED_EXEC_FAILED;
    i++;
    
    buffer[i] = ACK_COMPLETED_CANCELED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'AckCompletedStatus' sequence class.
 */
#define T AckCompletedStatus
#define TSeq AckCompletedStatusSeq
#define T_initialize_w_params AckCompletedStatus_initialize_w_params
#define T_finalize_w_params   AckCompletedStatus_finalize_w_params
#define T_copy       AckCompletedStatus_copy

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
const char *AckTYPENAME = "rapid::Ack";

DDS_TypeCode* Ack_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Ack_g_tc_members[4]=
    {
        {
            (char *)"cmdId",/* Member name */
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
            (char *)"status",/* Member name */
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
            (char *)"completedStatus",/* Member name */
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
            (char *)"message",/* Member name */
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

    static DDS_TypeCode Ack_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::Ack", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        Ack_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for Ack*/

    if (is_initialized) {
        return &Ack_g_tc;
    }


    Ack_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    Ack_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::AckStatus_get_typecode();
    Ack_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::AckCompletedStatus_get_typecode();
    Ack_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();

    Ack_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &Ack_g_tc;
}


RTIBool Ack_initialize(
    Ack* sample) {
  return ::rapid::Ack_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Ack_initialize_ex(
    Ack* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Ack_initialize_w_params(
        sample,&allocParams);
}

RTIBool Ack_initialize_w_params(
        Ack* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_initialize_w_params(&sample->cmdId,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::AckStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::AckCompletedStatus_initialize_w_params(&sample->completedStatus,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_initialize_w_params(&sample->message,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Ack_finalize(
    Ack* sample)
{
    ::rapid::Ack_finalize_ex(sample,RTI_TRUE);
}
        
void Ack_finalize_ex(
    Ack* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Ack_finalize_w_params(
        sample,&deallocParams);
}

void Ack_finalize_w_params(
        Ack* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String64_finalize_w_params(&sample->cmdId, deallocParams);
            

    rapid::AckStatus_finalize_w_params(&sample->status, deallocParams);
            

    rapid::AckCompletedStatus_finalize_w_params(&sample->completedStatus, deallocParams);
            

    rapid::String128_finalize_w_params(&sample->message, deallocParams);
            

}

void Ack_finalize_optional_members(
    Ack* sample, RTIBool deletePointers)
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
             

    rapid::String64_finalize_optional_members(&sample->cmdId, deallocParams->delete_pointers);
            

    rapid::AckStatus_finalize_w_params(&sample->status, deallocParams);
            

    rapid::AckCompletedStatus_finalize_w_params(&sample->completedStatus, deallocParams);
            

    rapid::String128_finalize_optional_members(&sample->message, deallocParams->delete_pointers);
            

}

RTIBool Ack_copy(
    Ack* dst,
    const Ack* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String64_copy(
        &dst->cmdId, &src->cmdId)) {
        return RTI_FALSE;
    }
            

    if (!rapid::AckStatus_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!rapid::AckCompletedStatus_copy(
        &dst->completedStatus, &src->completedStatus)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_copy(
        &dst->message, &src->message)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Ack' sequence class.
 */
#define T Ack
#define TSeq AckSeq
#define T_initialize_w_params ::rapid::Ack_initialize_w_params
#define T_finalize_w_params   ::rapid::Ack_finalize_w_params
#define T_copy       ::rapid::Ack_copy

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
