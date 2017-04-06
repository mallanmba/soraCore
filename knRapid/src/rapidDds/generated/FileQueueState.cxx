
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueState.idl using "rtiddsgen".
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



#include "FileQueueState.h"


namespace rapid{
/* ========================================================================= */
const char *ChannelStatusTYPENAME = "rapid::ChannelStatus";

DDS_TypeCode* ChannelStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ChannelStatus_g_tc_members[2] =
    {
        {
            (char *)"FILE_QUEUE_CHANNEL_ACTIVE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FILE_QUEUE_CHANNEL_ACTIVE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"FILE_QUEUE_CHANNEL_PAUSED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FILE_QUEUE_CHANNEL_PAUSED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ChannelStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ChannelStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        ChannelStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ChannelStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ChannelStatus_g_tc;
}
 

RTIBool ChannelStatus_initialize(
    ChannelStatus* sample)
{
    *sample = FILE_QUEUE_CHANNEL_ACTIVE;
    return RTI_TRUE;
}
        
RTIBool ChannelStatus_initialize_ex(
    ChannelStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = FILE_QUEUE_CHANNEL_ACTIVE;
    return RTI_TRUE;
}

RTIBool ChannelStatus_initialize_w_params(
        ChannelStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = FILE_QUEUE_CHANNEL_ACTIVE;
    return RTI_TRUE;
}

void ChannelStatus_finalize(
    ChannelStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ChannelStatus_finalize_ex(
    ChannelStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ChannelStatus_finalize_w_params(
        ChannelStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ChannelStatus_copy(
    ChannelStatus* dst,
    const ChannelStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ChannelStatus_getValues(ChannelStatusSeq * values) 
    
{
    int i = 0;
    ChannelStatus * buffer;


    if (!values->maximum(2)) {
        return RTI_FALSE;
    }

    if (!values->length(2)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = FILE_QUEUE_CHANNEL_ACTIVE;
    i++;
    
    buffer[i] = FILE_QUEUE_CHANNEL_PAUSED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ChannelStatus' sequence class.
 */
#define T ChannelStatus
#define TSeq ChannelStatusSeq
#define T_initialize_w_params ChannelStatus_initialize_w_params
#define T_finalize_w_params   ChannelStatus_finalize_w_params
#define T_copy       ChannelStatus_copy

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
const char *ChannelStateTYPENAME = "rapid::ChannelState";

DDS_TypeCode* ChannelState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ChannelState_g_tc_members[3]=
    {
        {
            (char *)"status",/* Member name */
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
            (char *)"queuedDataVolume",/* Member name */
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
            (char *)"queuedFiles",/* Member name */
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

    static DDS_TypeCode ChannelState_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ChannelState", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        ChannelState_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ChannelState*/

    if (is_initialized) {
        return &ChannelState_g_tc;
    }


    ChannelState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ChannelStatus_get_typecode();
    ChannelState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    ChannelState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &ChannelState_g_tc;
}


RTIBool ChannelState_initialize(
    ChannelState* sample) {
  return ::rapid::ChannelState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ChannelState_initialize_ex(
    ChannelState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ChannelState_initialize_w_params(
        sample,&allocParams);
}

RTIBool ChannelState_initialize_w_params(
        ChannelState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::ChannelStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLongLong(&sample->queuedDataVolume)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->queuedFiles)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void ChannelState_finalize(
    ChannelState* sample)
{
    ::rapid::ChannelState_finalize_ex(sample,RTI_TRUE);
}
        
void ChannelState_finalize_ex(
    ChannelState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ChannelState_finalize_w_params(
        sample,&deallocParams);
}

void ChannelState_finalize_w_params(
        ChannelState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::ChannelStatus_finalize_w_params(&sample->status, deallocParams);
            



}

void ChannelState_finalize_optional_members(
    ChannelState* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::ChannelStatus_finalize_w_params(&sample->status, deallocParams);
            



}

RTIBool ChannelState_copy(
    ChannelState* dst,
    const ChannelState* src)
{

    if (!rapid::ChannelStatus_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->queuedDataVolume, &src->queuedDataVolume)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->queuedFiles, &src->queuedFiles)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ChannelState' sequence class.
 */
#define T ChannelState
#define TSeq ChannelStateSeq
#define T_initialize_w_params ::rapid::ChannelState_initialize_w_params
#define T_finalize_w_params   ::rapid::ChannelState_finalize_w_params
#define T_copy       ::rapid::ChannelState_copy

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

DDS_TypeCode* ChannelStateSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ChannelStateSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode ChannelStateSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ChannelStateSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ChannelStateSequence */

    if (is_initialized) {
        return &ChannelStateSequence_g_tc;
    }

    ChannelStateSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ChannelState_get_typecode();
    ChannelStateSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ChannelStateSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ChannelStateSequence_g_tc;
}


RTIBool ChannelStateSequence_initialize(
    ChannelStateSequence* sample)
{
    return ::rapid::ChannelStateSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ChannelStateSequence_initialize_ex(
    ChannelStateSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ChannelStateSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ChannelStateSequence_initialize_w_params(
        ChannelStateSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ChannelStateSeq_initialize(sample);
        rapid::ChannelStateSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ChannelStateSeq_set_maximum(sample,
                                           (100))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ChannelStateSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ChannelStateSequence_finalize(
    ChannelStateSequence* sample)
{
    ::rapid::ChannelStateSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ChannelStateSequence_finalize_ex(
    ChannelStateSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ChannelStateSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ChannelStateSequence_finalize_w_params(
    ChannelStateSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ChannelStateSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ChannelStateSeq_finalize(sample);
            

}

void ChannelStateSequence_finalize_optional_members(
    ChannelStateSequence* sample, RTIBool deletePointers)
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
        length = rapid::ChannelStateSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ChannelState_finalize_optional_members(
                rapid::ChannelStateSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ChannelStateSequence_copy(
    ChannelStateSequence* dst,
    const ChannelStateSequence* src)
{

    if (!rapid::ChannelStateSeq_copy(dst,
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
 * Configure and implement 'ChannelStateSequence' sequence class.
 */
#define T            ChannelStateSequence
#define TSeq         ChannelStateSequenceSeq
#define T_initialize_w_params ::rapid::ChannelStateSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ChannelStateSequence_finalize_w_params
#define T_copy       ::rapid::ChannelStateSequence_copy


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
const char *FileQueueStateTYPENAME = "rapid::FileQueueState";

DDS_TypeCode* FileQueueState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FileQueueState_g_tc_members[4]=
    {
        {
            (char *)"connected",/* Member name */
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
            (char *)"bandwidth",/* Member name */
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
            (char *)"prefetchBandwidth",/* Member name */
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
            (char *)"channels",/* Member name */
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

    static DDS_TypeCode FileQueueState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FileQueueState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        FileQueueState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for FileQueueState*/

    if (is_initialized) {
        return &FileQueueState_g_tc;
    }


    FileQueueState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    FileQueueState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    FileQueueState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    FileQueueState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ChannelStateSequence_get_typecode();

    FileQueueState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &FileQueueState_g_tc;
}


RTIBool FileQueueState_initialize(
    FileQueueState* sample) {
  return ::rapid::FileQueueState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FileQueueState_initialize_ex(
    FileQueueState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FileQueueState_initialize_w_params(
        sample,&allocParams);
}

RTIBool FileQueueState_initialize_w_params(
        FileQueueState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initBoolean(&sample->connected)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->bandwidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->prefetchBandwidth)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ChannelStateSequence_initialize_w_params(&sample->channels,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void FileQueueState_finalize(
    FileQueueState* sample)
{
    ::rapid::FileQueueState_finalize_ex(sample,RTI_TRUE);
}
        
void FileQueueState_finalize_ex(
    FileQueueState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FileQueueState_finalize_w_params(
        sample,&deallocParams);
}

void FileQueueState_finalize_w_params(
        FileQueueState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);




    rapid::ChannelStateSequence_finalize_w_params(&sample->channels, deallocParams);
            

}

void FileQueueState_finalize_optional_members(
    FileQueueState* sample, RTIBool deletePointers)
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
             




    rapid::ChannelStateSequence_finalize_optional_members(&sample->channels, deallocParams->delete_pointers);
            

}

RTIBool FileQueueState_copy(
    FileQueueState* dst,
    const FileQueueState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyBoolean(
        &dst->connected, &src->connected)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->bandwidth, &src->bandwidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->prefetchBandwidth, &src->prefetchBandwidth)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ChannelStateSequence_copy(
        &dst->channels, &src->channels)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FileQueueState' sequence class.
 */
#define T FileQueueState
#define TSeq FileQueueStateSeq
#define T_initialize_w_params ::rapid::FileQueueState_initialize_w_params
#define T_finalize_w_params   ::rapid::FileQueueState_finalize_w_params
#define T_copy       ::rapid::FileQueueState_copy

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
