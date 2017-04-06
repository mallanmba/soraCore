
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueEntryState.idl using "rtiddsgen".
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



#include "FileQueueEntryState.h"


namespace rapid{
/* ========================================================================= */
const char *FileTransferStatusTYPENAME = "rapid::FileTransferStatus";

DDS_TypeCode* FileTransferStatus_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member FileTransferStatus_g_tc_members[8] =
    {
        {
            (char *)"RAPID_FILE_PREFETCH_PENDING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_PREFETCH_PENDING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FILE_PREFETCHING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_PREFETCHING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FILE_PENDING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_PENDING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FILE_ACTIVE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_ACTIVE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FILE_PAUSED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_PAUSED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FILE_DONE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_DONE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FILE_CANCELED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_CANCELED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FILE_ERROR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FILE_ERROR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode FileTransferStatus_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::FileTransferStatus", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of enumerators */
        FileTransferStatus_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &FileTransferStatus_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &FileTransferStatus_g_tc;
}
 

RTIBool FileTransferStatus_initialize(
    FileTransferStatus* sample)
{
    *sample = RAPID_FILE_PREFETCH_PENDING;
    return RTI_TRUE;
}
        
RTIBool FileTransferStatus_initialize_ex(
    FileTransferStatus* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = RAPID_FILE_PREFETCH_PENDING;
    return RTI_TRUE;
}

RTIBool FileTransferStatus_initialize_w_params(
        FileTransferStatus* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = RAPID_FILE_PREFETCH_PENDING;
    return RTI_TRUE;
}

void FileTransferStatus_finalize(
    FileTransferStatus* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void FileTransferStatus_finalize_ex(
    FileTransferStatus* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void FileTransferStatus_finalize_w_params(
        FileTransferStatus* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool FileTransferStatus_copy(
    FileTransferStatus* dst,
    const FileTransferStatus* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool FileTransferStatus_getValues(FileTransferStatusSeq * values) 
    
{
    int i = 0;
    FileTransferStatus * buffer;


    if (!values->maximum(8)) {
        return RTI_FALSE;
    }

    if (!values->length(8)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = RAPID_FILE_PREFETCH_PENDING;
    i++;
    
    buffer[i] = RAPID_FILE_PREFETCHING;
    i++;
    
    buffer[i] = RAPID_FILE_PENDING;
    i++;
    
    buffer[i] = RAPID_FILE_ACTIVE;
    i++;
    
    buffer[i] = RAPID_FILE_PAUSED;
    i++;
    
    buffer[i] = RAPID_FILE_DONE;
    i++;
    
    buffer[i] = RAPID_FILE_CANCELED;
    i++;
    
    buffer[i] = RAPID_FILE_ERROR;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FileTransferStatus' sequence class.
 */
#define T FileTransferStatus
#define TSeq FileTransferStatusSeq
#define T_initialize_w_params FileTransferStatus_initialize_w_params
#define T_finalize_w_params   FileTransferStatus_finalize_w_params
#define T_copy       FileTransferStatus_copy

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
const char *FileQueueEntryStateTYPENAME = "rapid::FileQueueEntryState";

DDS_TypeCode* FileQueueEntryState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FileQueueEntryState_g_tc_members[7]=
    {
        {
            (char *)"fileUuid",/* Member name */
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
            (char *)"chunksSent",/* Member name */
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
            (char *)"numChunks",/* Member name */
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
            (char *)"submissionTime",/* Member name */
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
        },
        {
            (char *)"priority",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 6),/* Representation ID */
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
            (char *)"channelId",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 7),/* Representation ID */
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

    static DDS_TypeCode FileQueueEntryState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FileQueueEntryState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        FileQueueEntryState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for FileQueueEntryState*/

    if (is_initialized) {
        return &FileQueueEntryState_g_tc;
    }


    FileQueueEntryState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    FileQueueEntryState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::FileTransferStatus_get_typecode();
    FileQueueEntryState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    FileQueueEntryState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    FileQueueEntryState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    FileQueueEntryState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FileQueueEntryState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    FileQueueEntryState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &FileQueueEntryState_g_tc;
}


RTIBool FileQueueEntryState_initialize(
    FileQueueEntryState* sample) {
  return ::rapid::FileQueueEntryState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FileQueueEntryState_initialize_ex(
    FileQueueEntryState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FileQueueEntryState_initialize_w_params(
        sample,&allocParams);
}

RTIBool FileQueueEntryState_initialize_w_params(
        FileQueueEntryState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_initialize_w_params(&sample->fileUuid,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FileTransferStatus_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->chunksSent)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->numChunks)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->submissionTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->priority)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->channelId)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void FileQueueEntryState_finalize(
    FileQueueEntryState* sample)
{
    ::rapid::FileQueueEntryState_finalize_ex(sample,RTI_TRUE);
}
        
void FileQueueEntryState_finalize_ex(
    FileQueueEntryState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FileQueueEntryState_finalize_w_params(
        sample,&deallocParams);
}

void FileQueueEntryState_finalize_w_params(
        FileQueueEntryState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String64_finalize_w_params(&sample->fileUuid, deallocParams);
            

    rapid::FileTransferStatus_finalize_w_params(&sample->status, deallocParams);
            






}

void FileQueueEntryState_finalize_optional_members(
    FileQueueEntryState* sample, RTIBool deletePointers)
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
             

    rapid::String64_finalize_optional_members(&sample->fileUuid, deallocParams->delete_pointers);
            

    rapid::FileTransferStatus_finalize_w_params(&sample->status, deallocParams);
            






}

RTIBool FileQueueEntryState_copy(
    FileQueueEntryState* dst,
    const FileQueueEntryState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String64_copy(
        &dst->fileUuid, &src->fileUuid)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FileTransferStatus_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->chunksSent, &src->chunksSent)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->numChunks, &src->numChunks)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->submissionTime, &src->submissionTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->priority, &src->priority)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->channelId, &src->channelId)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FileQueueEntryState' sequence class.
 */
#define T FileQueueEntryState
#define TSeq FileQueueEntryStateSeq
#define T_initialize_w_params ::rapid::FileQueueEntryState_initialize_w_params
#define T_finalize_w_params   ::rapid::FileQueueEntryState_finalize_w_params
#define T_copy       ::rapid::FileQueueEntryState_copy

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
