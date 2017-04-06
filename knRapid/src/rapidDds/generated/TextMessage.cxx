
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TextMessage.idl using "rtiddsgen".
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



#include "TextMessage.h"


namespace rapid{
/* ========================================================================= */
const char *MessageLevelTYPENAME = "rapid::MessageLevel";

DDS_TypeCode* MessageLevel_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member MessageLevel_g_tc_members[6] =
    {
        {
            (char *)"MSG_DEBUG",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MSG_DEBUG, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MSG_INFO",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MSG_INFO, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MSG_ATTENTION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MSG_ATTENTION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MSG_WARN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MSG_WARN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MSG_ERROR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MSG_ERROR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MSG_CRITICAL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MSG_CRITICAL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode MessageLevel_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::MessageLevel", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of enumerators */
        MessageLevel_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &MessageLevel_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &MessageLevel_g_tc;
}
 

RTIBool MessageLevel_initialize(
    MessageLevel* sample)
{
    *sample = MSG_DEBUG;
    return RTI_TRUE;
}
        
RTIBool MessageLevel_initialize_ex(
    MessageLevel* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = MSG_DEBUG;
    return RTI_TRUE;
}

RTIBool MessageLevel_initialize_w_params(
        MessageLevel* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = MSG_DEBUG;
    return RTI_TRUE;
}

void MessageLevel_finalize(
    MessageLevel* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void MessageLevel_finalize_ex(
    MessageLevel* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void MessageLevel_finalize_w_params(
        MessageLevel* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool MessageLevel_copy(
    MessageLevel* dst,
    const MessageLevel* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool MessageLevel_getValues(MessageLevelSeq * values) 
    
{
    int i = 0;
    MessageLevel * buffer;


    if (!values->maximum(6)) {
        return RTI_FALSE;
    }

    if (!values->length(6)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = MSG_DEBUG;
    i++;
    
    buffer[i] = MSG_INFO;
    i++;
    
    buffer[i] = MSG_ATTENTION;
    i++;
    
    buffer[i] = MSG_WARN;
    i++;
    
    buffer[i] = MSG_ERROR;
    i++;
    
    buffer[i] = MSG_CRITICAL;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MessageLevel' sequence class.
 */
#define T MessageLevel
#define TSeq MessageLevelSeq
#define T_initialize_w_params MessageLevel_initialize_w_params
#define T_finalize_w_params   MessageLevel_finalize_w_params
#define T_copy       MessageLevel_copy

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
const char *TextMessageTYPENAME = "rapid::TextMessage";

DDS_TypeCode* TextMessage_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TextMessage_g_tc_members[3]=
    {
        {
            (char *)"level",/* Member name */
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
            (char *)"category",/* Member name */
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
            (char *)"message",/* Member name */
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

    static DDS_TypeCode TextMessage_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::TextMessage", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TextMessage_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for TextMessage*/

    if (is_initialized) {
        return &TextMessage_g_tc;
    }


    TextMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::MessageLevel_get_typecode();
    TextMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    TextMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::String2K_get_typecode();

    TextMessage_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &TextMessage_g_tc;
}


RTIBool TextMessage_initialize(
    TextMessage* sample) {
  return ::rapid::TextMessage_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TextMessage_initialize_ex(
    TextMessage* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::TextMessage_initialize_w_params(
        sample,&allocParams);
}

RTIBool TextMessage_initialize_w_params(
        TextMessage* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::MessageLevel_initialize_w_params(&sample->level,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->category,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String2K_initialize_w_params(&sample->message,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TextMessage_finalize(
    TextMessage* sample)
{
    ::rapid::TextMessage_finalize_ex(sample,RTI_TRUE);
}
        
void TextMessage_finalize_ex(
    TextMessage* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::TextMessage_finalize_w_params(
        sample,&deallocParams);
}

void TextMessage_finalize_w_params(
        TextMessage* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::MessageLevel_finalize_w_params(&sample->level, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->category, deallocParams);
            

    rapid::String2K_finalize_w_params(&sample->message, deallocParams);
            

}

void TextMessage_finalize_optional_members(
    TextMessage* sample, RTIBool deletePointers)
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
             

    rapid::MessageLevel_finalize_w_params(&sample->level, deallocParams);
            

    rapid::String64_finalize_optional_members(&sample->category, deallocParams->delete_pointers);
            

    rapid::String2K_finalize_optional_members(&sample->message, deallocParams->delete_pointers);
            

}

RTIBool TextMessage_copy(
    TextMessage* dst,
    const TextMessage* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::MessageLevel_copy(
        &dst->level, &src->level)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->category, &src->category)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String2K_copy(
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
 * Configure and implement 'TextMessage' sequence class.
 */
#define T TextMessage
#define TSeq TextMessageSeq
#define T_initialize_w_params ::rapid::TextMessage_initialize_w_params
#define T_finalize_w_params   ::rapid::TextMessage_finalize_w_params
#define T_copy       ::rapid::TextMessage_copy

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
