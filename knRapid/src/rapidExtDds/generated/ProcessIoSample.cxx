
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessIoSample.idl using "rtiddsgen".
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



#include "ProcessIoSample.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *ProcessIoStreamTYPENAME = "rapid::ext::ProcessIoStream";

DDS_TypeCode* ProcessIoStream_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ProcessIoStream_g_tc_members[3] =
    {
        {
            (char *)"PROCESS_STDIN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STDIN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STDOUT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STDOUT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PROCESS_STDERR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PROCESS_STDERR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ProcessIoStream_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::ProcessIoStream", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        ProcessIoStream_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ProcessIoStream_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ProcessIoStream_g_tc;
}
 

RTIBool ProcessIoStream_initialize(
    ProcessIoStream* sample)
{
    *sample = PROCESS_STDIN;
    return RTI_TRUE;
}
        
RTIBool ProcessIoStream_initialize_ex(
    ProcessIoStream* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = PROCESS_STDIN;
    return RTI_TRUE;
}

RTIBool ProcessIoStream_initialize_w_params(
        ProcessIoStream* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = PROCESS_STDIN;
    return RTI_TRUE;
}

void ProcessIoStream_finalize(
    ProcessIoStream* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ProcessIoStream_finalize_ex(
    ProcessIoStream* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ProcessIoStream_finalize_w_params(
        ProcessIoStream* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ProcessIoStream_copy(
    ProcessIoStream* dst,
    const ProcessIoStream* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ProcessIoStream_getValues(ProcessIoStreamSeq * values) 
    
{
    int i = 0;
    ProcessIoStream * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = PROCESS_STDIN;
    i++;
    
    buffer[i] = PROCESS_STDOUT;
    i++;
    
    buffer[i] = PROCESS_STDERR;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ProcessIoStream' sequence class.
 */
#define T ProcessIoStream
#define TSeq ProcessIoStreamSeq
#define T_initialize_w_params ProcessIoStream_initialize_w_params
#define T_finalize_w_params   ProcessIoStream_finalize_w_params
#define T_copy       ProcessIoStream_copy

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
const char *ProcessIoSampleTYPENAME = "rapid::ext::ProcessIoSample";

DDS_TypeCode* ProcessIoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ProcessIoSample_g_tc_members[4]=
    {
        {
            (char *)"processIdx",/* Member name */
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
            (char *)"stream",/* Member name */
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
            (char *)"lineNumber",/* Member name */
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
            (char *)"line",/* Member name */
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

    static DDS_TypeCode ProcessIoSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::ProcessIoSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        ProcessIoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for ProcessIoSample*/

    if (is_initialized) {
        return &ProcessIoSample_g_tc;
    }


    ProcessIoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    ProcessIoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::ProcessIoStream_get_typecode();
    ProcessIoSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    ProcessIoSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::String1K_get_typecode();

    ProcessIoSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &ProcessIoSample_g_tc;
}


RTIBool ProcessIoSample_initialize(
    ProcessIoSample* sample) {
  return ::rapid::ext::ProcessIoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ProcessIoSample_initialize_ex(
    ProcessIoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ProcessIoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool ProcessIoSample_initialize_w_params(
        ProcessIoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initLong(&sample->processIdx)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ext::ProcessIoStream_initialize_w_params(&sample->stream,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->lineNumber)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String1K_initialize_w_params(&sample->line,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ProcessIoSample_finalize(
    ProcessIoSample* sample)
{
    ::rapid::ext::ProcessIoSample_finalize_ex(sample,RTI_TRUE);
}
        
void ProcessIoSample_finalize_ex(
    ProcessIoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ProcessIoSample_finalize_w_params(
        sample,&deallocParams);
}

void ProcessIoSample_finalize_w_params(
        ProcessIoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);


    rapid::ext::ProcessIoStream_finalize_w_params(&sample->stream, deallocParams);
            


    rapid::String1K_finalize_w_params(&sample->line, deallocParams);
            

}

void ProcessIoSample_finalize_optional_members(
    ProcessIoSample* sample, RTIBool deletePointers)
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
             


    rapid::ext::ProcessIoStream_finalize_w_params(&sample->stream, deallocParams);
            


    rapid::String1K_finalize_optional_members(&sample->line, deallocParams->delete_pointers);
            

}

RTIBool ProcessIoSample_copy(
    ProcessIoSample* dst,
    const ProcessIoSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong(
        &dst->processIdx, &src->processIdx)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ProcessIoStream_copy(
        &dst->stream, &src->stream)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->lineNumber, &src->lineNumber)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String1K_copy(
        &dst->line, &src->line)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ProcessIoSample' sequence class.
 */
#define T ProcessIoSample
#define TSeq ProcessIoSampleSeq
#define T_initialize_w_params ::rapid::ext::ProcessIoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ProcessIoSample_finalize_w_params
#define T_copy       ::rapid::ext::ProcessIoSample_copy

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
