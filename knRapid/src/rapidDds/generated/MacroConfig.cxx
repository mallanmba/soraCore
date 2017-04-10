
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroConfig.idl using "rtiddsgen".
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



#include "MacroConfig.h"


namespace rapid{
/* ========================================================================= */
const char *MacroCommandTYPENAME = "rapid::MacroCommand";

DDS_TypeCode* MacroCommand_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MacroCommand_g_tc_members[5]=
    {
        {
            (char *)"cmdName",/* Member name */
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
            (char *)"cmdIdSuffix",/* Member name */
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
            (char *)"subsysName",/* Member name */
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
        },
        {
            (char *)"arguments",/* Member name */
            {
                3,/* Representation ID */
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
            (char *)"metaData",/* Member name */
            {
                4,/* Representation ID */
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

    static DDS_TypeCode MacroCommand_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::MacroCommand", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        MacroCommand_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MacroCommand*/

    if (is_initialized) {
        return &MacroCommand_g_tc;
    }


    MacroCommand_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    MacroCommand_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    MacroCommand_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    MacroCommand_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ParameterSequence16_get_typecode();
    MacroCommand_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ParameterSequence16_get_typecode();

    is_initialized = RTI_TRUE;

    return &MacroCommand_g_tc;
}


RTIBool MacroCommand_initialize(
    MacroCommand* sample) {
  return ::rapid::MacroCommand_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MacroCommand_initialize_ex(
    MacroCommand* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::MacroCommand_initialize_w_params(
        sample,&allocParams);
}

RTIBool MacroCommand_initialize_w_params(
        MacroCommand* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String64_initialize_w_params(&sample->cmdName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->cmdIdSuffix,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->subsysName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ParameterSequence16_initialize_w_params(&sample->arguments,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ParameterSequence16_initialize_w_params(&sample->metaData,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void MacroCommand_finalize(
    MacroCommand* sample)
{
    ::rapid::MacroCommand_finalize_ex(sample,RTI_TRUE);
}
        
void MacroCommand_finalize_ex(
    MacroCommand* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::MacroCommand_finalize_w_params(
        sample,&deallocParams);
}

void MacroCommand_finalize_w_params(
        MacroCommand* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String64_finalize_w_params(&sample->cmdName, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->cmdIdSuffix, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->subsysName, deallocParams);
            

    rapid::ParameterSequence16_finalize_w_params(&sample->arguments, deallocParams);
            

    rapid::ParameterSequence16_finalize_w_params(&sample->metaData, deallocParams);
            

}

void MacroCommand_finalize_optional_members(
    MacroCommand* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String64_finalize_optional_members(&sample->cmdName, deallocParams->delete_pointers);
            

    rapid::String64_finalize_optional_members(&sample->cmdIdSuffix, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->subsysName, deallocParams->delete_pointers);
            

    rapid::ParameterSequence16_finalize_optional_members(&sample->arguments, deallocParams->delete_pointers);
            

    rapid::ParameterSequence16_finalize_optional_members(&sample->metaData, deallocParams->delete_pointers);
            

}

RTIBool MacroCommand_copy(
    MacroCommand* dst,
    const MacroCommand* src)
{

    if (!rapid::String64_copy(
        &dst->cmdName, &src->cmdName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->cmdIdSuffix, &src->cmdIdSuffix)) {
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
            

    if (!rapid::ParameterSequence16_copy(
        &dst->metaData, &src->metaData)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MacroCommand' sequence class.
 */
#define T MacroCommand
#define TSeq MacroCommandSeq
#define T_initialize_w_params ::rapid::MacroCommand_initialize_w_params
#define T_finalize_w_params   ::rapid::MacroCommand_finalize_w_params
#define T_copy       ::rapid::MacroCommand_copy

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

DDS_TypeCode* MacroCommandSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode MacroCommandSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode MacroCommandSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::MacroCommandSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MacroCommandSequence128 */

    if (is_initialized) {
        return &MacroCommandSequence128_g_tc;
    }

    MacroCommandSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::MacroCommand_get_typecode();
    MacroCommandSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&MacroCommandSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &MacroCommandSequence128_g_tc;
}


RTIBool MacroCommandSequence128_initialize(
    MacroCommandSequence128* sample)
{
    return ::rapid::MacroCommandSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool MacroCommandSequence128_initialize_ex(
    MacroCommandSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::MacroCommandSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool MacroCommandSequence128_initialize_w_params(
        MacroCommandSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::MacroCommandSeq_initialize(sample);
        rapid::MacroCommandSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::MacroCommandSeq_set_maximum(sample,
                                           (128))) {
            return RTI_FALSE;
        }
    } else {
        rapid::MacroCommandSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void MacroCommandSequence128_finalize(
    MacroCommandSequence128* sample)
{
    ::rapid::MacroCommandSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void MacroCommandSequence128_finalize_ex(
    MacroCommandSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::MacroCommandSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void MacroCommandSequence128_finalize_w_params(
    MacroCommandSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::MacroCommandSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::MacroCommandSeq_finalize(sample);
            

}

void MacroCommandSequence128_finalize_optional_members(
    MacroCommandSequence128* sample, RTIBool deletePointers)
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
        length = rapid::MacroCommandSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::MacroCommand_finalize_optional_members(
                rapid::MacroCommandSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool MacroCommandSequence128_copy(
    MacroCommandSequence128* dst,
    const MacroCommandSequence128* src)
{

    if (!rapid::MacroCommandSeq_copy(dst,
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
 * Configure and implement 'MacroCommandSequence128' sequence class.
 */
#define T            MacroCommandSequence128
#define TSeq         MacroCommandSequence128Seq
#define T_initialize_w_params ::rapid::MacroCommandSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::MacroCommandSequence128_finalize_w_params
#define T_copy       ::rapid::MacroCommandSequence128_copy


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
const char *MacroConfigTYPENAME = "rapid::MacroConfig";

DDS_TypeCode* MacroConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MacroConfig_g_tc_members[4]=
    {
        {
            (char *)"name",/* Member name */
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
            (char *)"commands",/* Member name */
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
            (char *)"metaData",/* Member name */
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
            (char *)"commandMetaDataSpec",/* Member name */
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

    static DDS_TypeCode MacroConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::MacroConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        MacroConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for MacroConfig*/

    if (is_initialized) {
        return &MacroConfig_g_tc;
    }


    MacroConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    MacroConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::MacroCommandSequence128_get_typecode();
    MacroConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence16_get_typecode();
    MacroConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeSequence16_get_typecode();

    MacroConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &MacroConfig_g_tc;
}


RTIBool MacroConfig_initialize(
    MacroConfig* sample) {
  return ::rapid::MacroConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MacroConfig_initialize_ex(
    MacroConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::MacroConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool MacroConfig_initialize_w_params(
        MacroConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::MacroCommandSequence128_initialize_w_params(&sample->commands,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_initialize_w_params(&sample->metaData,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeSequence16_initialize_w_params(&sample->commandMetaDataSpec,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void MacroConfig_finalize(
    MacroConfig* sample)
{
    ::rapid::MacroConfig_finalize_ex(sample,RTI_TRUE);
}
        
void MacroConfig_finalize_ex(
    MacroConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::MacroConfig_finalize_w_params(
        sample,&deallocParams);
}

void MacroConfig_finalize_w_params(
        MacroConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String64_finalize_w_params(&sample->name, deallocParams);
            

    rapid::MacroCommandSequence128_finalize_w_params(&sample->commands, deallocParams);
            

    rapid::KeyTypeValueSequence16_finalize_w_params(&sample->metaData, deallocParams);
            

    rapid::KeyTypeSequence16_finalize_w_params(&sample->commandMetaDataSpec, deallocParams);
            

}

void MacroConfig_finalize_optional_members(
    MacroConfig* sample, RTIBool deletePointers)
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
             

    rapid::String64_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            

    rapid::MacroCommandSequence128_finalize_optional_members(&sample->commands, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence16_finalize_optional_members(&sample->metaData, deallocParams->delete_pointers);
            

    rapid::KeyTypeSequence16_finalize_optional_members(&sample->commandMetaDataSpec, deallocParams->delete_pointers);
            

}

RTIBool MacroConfig_copy(
    MacroConfig* dst,
    const MacroConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String64_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::MacroCommandSequence128_copy(
        &dst->commands, &src->commands)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_copy(
        &dst->metaData, &src->metaData)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeSequence16_copy(
        &dst->commandMetaDataSpec, &src->commandMetaDataSpec)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MacroConfig' sequence class.
 */
#define T MacroConfig
#define TSeq MacroConfigSeq
#define T_initialize_w_params ::rapid::MacroConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::MacroConfig_finalize_w_params
#define T_copy       ::rapid::MacroConfig_copy

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
