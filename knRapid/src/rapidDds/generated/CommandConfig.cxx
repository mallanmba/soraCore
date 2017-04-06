
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommandConfig.idl using "rtiddsgen".
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



#include "CommandConfig.h"


namespace rapid{
/* ========================================================================= */
const char *CommandDefTYPENAME = "rapid::CommandDef";

DDS_TypeCode* CommandDef_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member CommandDef_g_tc_members[4]=
    {
        {
            (char *)"name",/* Member name */
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
            (char *)"abortable",/* Member name */
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
            (char *)"suspendable",/* Member name */
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
            (char *)"parameters",/* Member name */
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
        }
    };

    static DDS_TypeCode CommandDef_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::CommandDef", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        CommandDef_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for CommandDef*/

    if (is_initialized) {
        return &CommandDef_g_tc;
    }


    CommandDef_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    CommandDef_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    CommandDef_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    CommandDef_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeSequence16_get_typecode();

    is_initialized = RTI_TRUE;

    return &CommandDef_g_tc;
}


RTIBool CommandDef_initialize(
    CommandDef* sample) {
  return ::rapid::CommandDef_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool CommandDef_initialize_ex(
    CommandDef* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::CommandDef_initialize_w_params(
        sample,&allocParams);
}

RTIBool CommandDef_initialize_w_params(
        CommandDef* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String64_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initBoolean(&sample->abortable)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->suspendable)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::KeyTypeSequence16_initialize_w_params(&sample->parameters,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void CommandDef_finalize(
    CommandDef* sample)
{
    ::rapid::CommandDef_finalize_ex(sample,RTI_TRUE);
}
        
void CommandDef_finalize_ex(
    CommandDef* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::CommandDef_finalize_w_params(
        sample,&deallocParams);
}

void CommandDef_finalize_w_params(
        CommandDef* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String64_finalize_w_params(&sample->name, deallocParams);
            



    rapid::KeyTypeSequence16_finalize_w_params(&sample->parameters, deallocParams);
            

}

void CommandDef_finalize_optional_members(
    CommandDef* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String64_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            



    rapid::KeyTypeSequence16_finalize_optional_members(&sample->parameters, deallocParams->delete_pointers);
            

}

RTIBool CommandDef_copy(
    CommandDef* dst,
    const CommandDef* src)
{

    if (!rapid::String64_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->abortable, &src->abortable)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->suspendable, &src->suspendable)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeSequence16_copy(
        &dst->parameters, &src->parameters)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CommandDef' sequence class.
 */
#define T CommandDef
#define TSeq CommandDefSeq
#define T_initialize_w_params ::rapid::CommandDef_initialize_w_params
#define T_finalize_w_params   ::rapid::CommandDef_finalize_w_params
#define T_copy       ::rapid::CommandDef_copy

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

DDS_TypeCode* CommandDefSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode CommandDefSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode CommandDefSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::CommandDefSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for CommandDefSequence */

    if (is_initialized) {
        return &CommandDefSequence_g_tc;
    }

    CommandDefSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::CommandDef_get_typecode();
    CommandDefSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&CommandDefSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &CommandDefSequence_g_tc;
}


RTIBool CommandDefSequence_initialize(
    CommandDefSequence* sample)
{
    return ::rapid::CommandDefSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool CommandDefSequence_initialize_ex(
    CommandDefSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::CommandDefSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool CommandDefSequence_initialize_w_params(
        CommandDefSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::CommandDefSeq_initialize(sample);
        rapid::CommandDefSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::CommandDefSeq_set_maximum(sample,
                                           (100))) {
            return RTI_FALSE;
        }
    } else {
        rapid::CommandDefSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void CommandDefSequence_finalize(
    CommandDefSequence* sample)
{
    ::rapid::CommandDefSequence_finalize_ex(sample,RTI_TRUE);
}
 
void CommandDefSequence_finalize_ex(
    CommandDefSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::CommandDefSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void CommandDefSequence_finalize_w_params(
    CommandDefSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::CommandDefSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::CommandDefSeq_finalize(sample);
            

}

void CommandDefSequence_finalize_optional_members(
    CommandDefSequence* sample, RTIBool deletePointers)
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
        length = rapid::CommandDefSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::CommandDef_finalize_optional_members(
                rapid::CommandDefSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool CommandDefSequence_copy(
    CommandDefSequence* dst,
    const CommandDefSequence* src)
{

    if (!rapid::CommandDefSeq_copy(dst,
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
 * Configure and implement 'CommandDefSequence' sequence class.
 */
#define T            CommandDefSequence
#define TSeq         CommandDefSequenceSeq
#define T_initialize_w_params ::rapid::CommandDefSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::CommandDefSequence_finalize_w_params
#define T_copy       ::rapid::CommandDefSequence_copy


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
const char *SubsystemTypeTYPENAME = "rapid::SubsystemType";

DDS_TypeCode* SubsystemType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SubsystemType_g_tc_members[2]=
    {
        {
            (char *)"name",/* Member name */
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
            (char *)"commands",/* Member name */
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
        }
    };

    static DDS_TypeCode SubsystemType_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::SubsystemType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SubsystemType_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SubsystemType*/

    if (is_initialized) {
        return &SubsystemType_g_tc;
    }


    SubsystemType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    SubsystemType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::CommandDefSequence_get_typecode();

    is_initialized = RTI_TRUE;

    return &SubsystemType_g_tc;
}


RTIBool SubsystemType_initialize(
    SubsystemType* sample) {
  return ::rapid::SubsystemType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SubsystemType_initialize_ex(
    SubsystemType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::SubsystemType_initialize_w_params(
        sample,&allocParams);
}

RTIBool SubsystemType_initialize_w_params(
        SubsystemType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::CommandDefSequence_initialize_w_params(&sample->commands,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SubsystemType_finalize(
    SubsystemType* sample)
{
    ::rapid::SubsystemType_finalize_ex(sample,RTI_TRUE);
}
        
void SubsystemType_finalize_ex(
    SubsystemType* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::SubsystemType_finalize_w_params(
        sample,&deallocParams);
}

void SubsystemType_finalize_w_params(
        SubsystemType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            

    rapid::CommandDefSequence_finalize_w_params(&sample->commands, deallocParams);
            

}

void SubsystemType_finalize_optional_members(
    SubsystemType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            

    rapid::CommandDefSequence_finalize_optional_members(&sample->commands, deallocParams->delete_pointers);
            

}

RTIBool SubsystemType_copy(
    SubsystemType* dst,
    const SubsystemType* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::CommandDefSequence_copy(
        &dst->commands, &src->commands)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SubsystemType' sequence class.
 */
#define T SubsystemType
#define TSeq SubsystemTypeSeq
#define T_initialize_w_params ::rapid::SubsystemType_initialize_w_params
#define T_finalize_w_params   ::rapid::SubsystemType_finalize_w_params
#define T_copy       ::rapid::SubsystemType_copy

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
const char *SubsystemTYPENAME = "rapid::Subsystem";

DDS_TypeCode* Subsystem_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Subsystem_g_tc_members[2]=
    {
        {
            (char *)"name",/* Member name */
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
            (char *)"subsystemTypeName",/* Member name */
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
        }
    };

    static DDS_TypeCode Subsystem_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::Subsystem", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Subsystem_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Subsystem*/

    if (is_initialized) {
        return &Subsystem_g_tc;
    }


    Subsystem_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Subsystem_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();

    is_initialized = RTI_TRUE;

    return &Subsystem_g_tc;
}


RTIBool Subsystem_initialize(
    Subsystem* sample) {
  return ::rapid::Subsystem_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Subsystem_initialize_ex(
    Subsystem* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Subsystem_initialize_w_params(
        sample,&allocParams);
}

RTIBool Subsystem_initialize_w_params(
        Subsystem* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->subsystemTypeName,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Subsystem_finalize(
    Subsystem* sample)
{
    ::rapid::Subsystem_finalize_ex(sample,RTI_TRUE);
}
        
void Subsystem_finalize_ex(
    Subsystem* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Subsystem_finalize_w_params(
        sample,&deallocParams);
}

void Subsystem_finalize_w_params(
        Subsystem* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->subsystemTypeName, deallocParams);
            

}

void Subsystem_finalize_optional_members(
    Subsystem* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->subsystemTypeName, deallocParams->delete_pointers);
            

}

RTIBool Subsystem_copy(
    Subsystem* dst,
    const Subsystem* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->subsystemTypeName, &src->subsystemTypeName)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Subsystem' sequence class.
 */
#define T Subsystem
#define TSeq SubsystemSeq
#define T_initialize_w_params ::rapid::Subsystem_initialize_w_params
#define T_finalize_w_params   ::rapid::Subsystem_finalize_w_params
#define T_copy       ::rapid::Subsystem_copy

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

DDS_TypeCode* SubsystemTypeSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SubsystemTypeSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode SubsystemTypeSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::SubsystemTypeSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SubsystemTypeSequence */

    if (is_initialized) {
        return &SubsystemTypeSequence_g_tc;
    }

    SubsystemTypeSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::SubsystemType_get_typecode();
    SubsystemTypeSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&SubsystemTypeSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &SubsystemTypeSequence_g_tc;
}


RTIBool SubsystemTypeSequence_initialize(
    SubsystemTypeSequence* sample)
{
    return ::rapid::SubsystemTypeSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SubsystemTypeSequence_initialize_ex(
    SubsystemTypeSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::SubsystemTypeSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool SubsystemTypeSequence_initialize_w_params(
        SubsystemTypeSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::SubsystemTypeSeq_initialize(sample);
        rapid::SubsystemTypeSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::SubsystemTypeSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::SubsystemTypeSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void SubsystemTypeSequence_finalize(
    SubsystemTypeSequence* sample)
{
    ::rapid::SubsystemTypeSequence_finalize_ex(sample,RTI_TRUE);
}
 
void SubsystemTypeSequence_finalize_ex(
    SubsystemTypeSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::SubsystemTypeSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void SubsystemTypeSequence_finalize_w_params(
    SubsystemTypeSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::SubsystemTypeSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::SubsystemTypeSeq_finalize(sample);
            

}

void SubsystemTypeSequence_finalize_optional_members(
    SubsystemTypeSequence* sample, RTIBool deletePointers)
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
        length = rapid::SubsystemTypeSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::SubsystemType_finalize_optional_members(
                rapid::SubsystemTypeSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool SubsystemTypeSequence_copy(
    SubsystemTypeSequence* dst,
    const SubsystemTypeSequence* src)
{

    if (!rapid::SubsystemTypeSeq_copy(dst,
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
 * Configure and implement 'SubsystemTypeSequence' sequence class.
 */
#define T            SubsystemTypeSequence
#define TSeq         SubsystemTypeSequenceSeq
#define T_initialize_w_params ::rapid::SubsystemTypeSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::SubsystemTypeSequence_finalize_w_params
#define T_copy       ::rapid::SubsystemTypeSequence_copy


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

DDS_TypeCode* SubsystemSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SubsystemSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode SubsystemSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::SubsystemSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SubsystemSequence */

    if (is_initialized) {
        return &SubsystemSequence_g_tc;
    }

    SubsystemSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::Subsystem_get_typecode();
    SubsystemSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&SubsystemSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &SubsystemSequence_g_tc;
}


RTIBool SubsystemSequence_initialize(
    SubsystemSequence* sample)
{
    return ::rapid::SubsystemSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SubsystemSequence_initialize_ex(
    SubsystemSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::SubsystemSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool SubsystemSequence_initialize_w_params(
        SubsystemSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::SubsystemSeq_initialize(sample);
        rapid::SubsystemSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::SubsystemSeq_set_maximum(sample,
                                           (128))) {
            return RTI_FALSE;
        }
    } else {
        rapid::SubsystemSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void SubsystemSequence_finalize(
    SubsystemSequence* sample)
{
    ::rapid::SubsystemSequence_finalize_ex(sample,RTI_TRUE);
}
 
void SubsystemSequence_finalize_ex(
    SubsystemSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::SubsystemSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void SubsystemSequence_finalize_w_params(
    SubsystemSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::SubsystemSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::SubsystemSeq_finalize(sample);
            

}

void SubsystemSequence_finalize_optional_members(
    SubsystemSequence* sample, RTIBool deletePointers)
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
        length = rapid::SubsystemSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::Subsystem_finalize_optional_members(
                rapid::SubsystemSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool SubsystemSequence_copy(
    SubsystemSequence* dst,
    const SubsystemSequence* src)
{

    if (!rapid::SubsystemSeq_copy(dst,
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
 * Configure and implement 'SubsystemSequence' sequence class.
 */
#define T            SubsystemSequence
#define TSeq         SubsystemSequenceSeq
#define T_initialize_w_params ::rapid::SubsystemSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::SubsystemSequence_finalize_w_params
#define T_copy       ::rapid::SubsystemSequence_copy


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
const char *CommandConfigTYPENAME = "rapid::CommandConfig";

DDS_TypeCode* CommandConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member CommandConfig_g_tc_members[2]=
    {
        {
            (char *)"availableSubsystemTypes",/* Member name */
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
            (char *)"availableSubsystems",/* Member name */
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
        }
    };

    static DDS_TypeCode CommandConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::CommandConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        CommandConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for CommandConfig*/

    if (is_initialized) {
        return &CommandConfig_g_tc;
    }


    CommandConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::SubsystemTypeSequence_get_typecode();
    CommandConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::SubsystemSequence_get_typecode();

    CommandConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &CommandConfig_g_tc;
}


RTIBool CommandConfig_initialize(
    CommandConfig* sample) {
  return ::rapid::CommandConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool CommandConfig_initialize_ex(
    CommandConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::CommandConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool CommandConfig_initialize_w_params(
        CommandConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::SubsystemTypeSequence_initialize_w_params(&sample->availableSubsystemTypes,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SubsystemSequence_initialize_w_params(&sample->availableSubsystems,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void CommandConfig_finalize(
    CommandConfig* sample)
{
    ::rapid::CommandConfig_finalize_ex(sample,RTI_TRUE);
}
        
void CommandConfig_finalize_ex(
    CommandConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::CommandConfig_finalize_w_params(
        sample,&deallocParams);
}

void CommandConfig_finalize_w_params(
        CommandConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::SubsystemTypeSequence_finalize_w_params(&sample->availableSubsystemTypes, deallocParams);
            

    rapid::SubsystemSequence_finalize_w_params(&sample->availableSubsystems, deallocParams);
            

}

void CommandConfig_finalize_optional_members(
    CommandConfig* sample, RTIBool deletePointers)
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
             

    rapid::SubsystemTypeSequence_finalize_optional_members(&sample->availableSubsystemTypes, deallocParams->delete_pointers);
            

    rapid::SubsystemSequence_finalize_optional_members(&sample->availableSubsystems, deallocParams->delete_pointers);
            

}

RTIBool CommandConfig_copy(
    CommandConfig* dst,
    const CommandConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::SubsystemTypeSequence_copy(
        &dst->availableSubsystemTypes, &src->availableSubsystemTypes)) {
        return RTI_FALSE;
    }
            

    if (!rapid::SubsystemSequence_copy(
        &dst->availableSubsystems, &src->availableSubsystems)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CommandConfig' sequence class.
 */
#define T CommandConfig
#define TSeq CommandConfigSeq
#define T_initialize_w_params ::rapid::CommandConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::CommandConfig_finalize_w_params
#define T_copy       ::rapid::CommandConfig_copy

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
