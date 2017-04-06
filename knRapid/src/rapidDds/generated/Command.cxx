
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Command.idl using "rtiddsgen".
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



#include "Command.h"


namespace rapid{
/* ========================================================================= */
const char *QueueActionTYPENAME = "rapid::QueueAction";

DDS_TypeCode* QueueAction_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member QueueAction_g_tc_members[5] =
    {
        {
            (char *)"QUEUE_BYPASS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            QUEUE_BYPASS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"QUEUE_APPEND",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            QUEUE_APPEND, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"QUEUE_DELETE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            QUEUE_DELETE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"QUEUE_INSERT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            QUEUE_INSERT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"QUEUE_REPLACE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            QUEUE_REPLACE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode QueueAction_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::QueueAction", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of enumerators */
        QueueAction_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &QueueAction_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &QueueAction_g_tc;
}
 

RTIBool QueueAction_initialize(
    QueueAction* sample)
{
    *sample = QUEUE_BYPASS;
    return RTI_TRUE;
}
        
RTIBool QueueAction_initialize_ex(
    QueueAction* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = QUEUE_BYPASS;
    return RTI_TRUE;
}

RTIBool QueueAction_initialize_w_params(
        QueueAction* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = QUEUE_BYPASS;
    return RTI_TRUE;
}

void QueueAction_finalize(
    QueueAction* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void QueueAction_finalize_ex(
    QueueAction* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void QueueAction_finalize_w_params(
        QueueAction* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool QueueAction_copy(
    QueueAction* dst,
    const QueueAction* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool QueueAction_getValues(QueueActionSeq * values) 
    
{
    int i = 0;
    QueueAction * buffer;


    if (!values->maximum(5)) {
        return RTI_FALSE;
    }

    if (!values->length(5)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = QUEUE_BYPASS;
    i++;
    
    buffer[i] = QUEUE_APPEND;
    i++;
    
    buffer[i] = QUEUE_DELETE;
    i++;
    
    buffer[i] = QUEUE_INSERT;
    i++;
    
    buffer[i] = QUEUE_REPLACE;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'QueueAction' sequence class.
 */
#define T QueueAction
#define TSeq QueueActionSeq
#define T_initialize_w_params QueueAction_initialize_w_params
#define T_finalize_w_params   QueueAction_finalize_w_params
#define T_copy       QueueAction_copy

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
const char *CommandTYPENAME = "rapid::Command";

DDS_TypeCode* Command_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Command_g_tc_members[7]=
    {
        {
            (char *)"cmdName",/* Member name */
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
            (char *)"cmdId",/* Member name */
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
            (char *)"cmdSrc",/* Member name */
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
            (char *)"subsysName",/* Member name */
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
            (char *)"arguments",/* Member name */
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
            (char *)"cmdAction",/* Member name */
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
            (char *)"targetCmdId",/* Member name */
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

    static DDS_TypeCode Command_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::Command", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        Command_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for Command*/

    if (is_initialized) {
        return &Command_g_tc;
    }


    Command_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    Command_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    Command_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Command_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Command_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ParameterSequence16_get_typecode();
    Command_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::QueueAction_get_typecode();
    Command_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();

    Command_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &Command_g_tc;
}


RTIBool Command_initialize(
    Command* sample) {
  return ::rapid::Command_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Command_initialize_ex(
    Command* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Command_initialize_w_params(
        sample,&allocParams);
}

RTIBool Command_initialize_w_params(
        Command* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_initialize_w_params(&sample->cmdName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->cmdId,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->cmdSrc,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->subsysName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ParameterSequence16_initialize_w_params(&sample->arguments,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::QueueAction_initialize_w_params(&sample->cmdAction,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->targetCmdId,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Command_finalize(
    Command* sample)
{
    ::rapid::Command_finalize_ex(sample,RTI_TRUE);
}
        
void Command_finalize_ex(
    Command* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Command_finalize_w_params(
        sample,&deallocParams);
}

void Command_finalize_w_params(
        Command* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String64_finalize_w_params(&sample->cmdName, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->cmdId, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->cmdSrc, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->subsysName, deallocParams);
            

    rapid::ParameterSequence16_finalize_w_params(&sample->arguments, deallocParams);
            

    rapid::QueueAction_finalize_w_params(&sample->cmdAction, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->targetCmdId, deallocParams);
            

}

void Command_finalize_optional_members(
    Command* sample, RTIBool deletePointers)
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
             

    rapid::String64_finalize_optional_members(&sample->cmdName, deallocParams->delete_pointers);
            

    rapid::String64_finalize_optional_members(&sample->cmdId, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->cmdSrc, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->subsysName, deallocParams->delete_pointers);
            

    rapid::ParameterSequence16_finalize_optional_members(&sample->arguments, deallocParams->delete_pointers);
            

    rapid::QueueAction_finalize_w_params(&sample->cmdAction, deallocParams);
            

    rapid::String64_finalize_optional_members(&sample->targetCmdId, deallocParams->delete_pointers);
            

}

RTIBool Command_copy(
    Command* dst,
    const Command* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String64_copy(
        &dst->cmdName, &src->cmdName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->cmdId, &src->cmdId)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->cmdSrc, &src->cmdSrc)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->subsysName, &src->subsysName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ParameterSequence16_copy(
        &dst->arguments, &src->arguments)) {
        return RTI_FALSE;
    }
            

    if (!rapid::QueueAction_copy(
        &dst->cmdAction, &src->cmdAction)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->targetCmdId, &src->targetCmdId)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Command' sequence class.
 */
#define T Command
#define TSeq CommandSeq
#define T_initialize_w_params ::rapid::Command_initialize_w_params
#define T_finalize_w_params   ::rapid::Command_finalize_w_params
#define T_copy       ::rapid::Command_copy

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
