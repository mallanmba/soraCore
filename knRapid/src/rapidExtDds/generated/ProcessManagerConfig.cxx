
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessManagerConfig.idl using "rtiddsgen".
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



#include "ProcessManagerConfig.h"


namespace rapid{

namespace ext{

/**

 * ProcessConfig

 */
/* ========================================================================= */
const char *ProcessConfigTYPENAME = "rapid::ext::ProcessConfig";

DDS_TypeCode* ProcessConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ProcessConfig_g_tc_members[13]=
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
            (char *)"comment",/* Member name */
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
            (char *)"environment",/* Member name */
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
            (char *)"workingDirectory",/* Member name */
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
            (char *)"binaryName",/* Member name */
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
        },
        {
            (char *)"commandLineParams",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"selfTerminating",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"startOnInit",/* Member name */
            {
                7,/* Representation ID */
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
            (char *)"waitOnInit",/* Member name */
            {
                8,/* Representation ID */
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
            (char *)"startupTimeout",/* Member name */
            {
                9,/* Representation ID */
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
            (char *)"runningMatch",/* Member name */
            {
                10,/* Representation ID */
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
            (char *)"aliveInterface",/* Member name */
            {
                11,/* Representation ID */
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
            (char *)"restartsOnFailure",/* Member name */
            {
                12,/* Representation ID */
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

    static DDS_TypeCode ProcessConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::ProcessConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        13, /* Number of members */
        ProcessConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ProcessConfig*/

    if (is_initialized) {
        return &ProcessConfig_g_tc;
    }


    ProcessConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    ProcessConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    ProcessConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::String256Sequence64_get_typecode();
    ProcessConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::String256_get_typecode();
    ProcessConfig_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ProcessConfig_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::String256_get_typecode();
    ProcessConfig_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    ProcessConfig_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    ProcessConfig_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    ProcessConfig_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    ProcessConfig_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)rapid::String256_get_typecode();
    ProcessConfig_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ProcessConfig_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &ProcessConfig_g_tc;
}


RTIBool ProcessConfig_initialize(
    ProcessConfig* sample) {
  return ::rapid::ext::ProcessConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ProcessConfig_initialize_ex(
    ProcessConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ProcessConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool ProcessConfig_initialize_w_params(
        ProcessConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String64_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->comment,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256Sequence64_initialize_w_params(&sample->environment,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_initialize_w_params(&sample->workingDirectory,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->binaryName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_initialize_w_params(&sample->commandLineParams,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initBoolean(&sample->selfTerminating)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->startOnInit)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->waitOnInit)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->startupTimeout)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String256_initialize_w_params(&sample->runningMatch,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->aliveInterface,allocParams)) {
        return RTI_FALSE;
    }
            

/** Number of times of automatic restart on unexpected shutdown */

    if (!RTICdrType_initLong(&sample->restartsOnFailure)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void ProcessConfig_finalize(
    ProcessConfig* sample)
{
    ::rapid::ext::ProcessConfig_finalize_ex(sample,RTI_TRUE);
}
        
void ProcessConfig_finalize_ex(
    ProcessConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ProcessConfig_finalize_w_params(
        sample,&deallocParams);
}

void ProcessConfig_finalize_w_params(
        ProcessConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String64_finalize_w_params(&sample->name, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->comment, deallocParams);
            

    rapid::String256Sequence64_finalize_w_params(&sample->environment, deallocParams);
            

    rapid::String256_finalize_w_params(&sample->workingDirectory, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->binaryName, deallocParams);
            

    rapid::String256_finalize_w_params(&sample->commandLineParams, deallocParams);
            





    rapid::String256_finalize_w_params(&sample->runningMatch, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->aliveInterface, deallocParams);
            

/** Number of times of automatic restart on unexpected shutdown */


}

void ProcessConfig_finalize_optional_members(
    ProcessConfig* sample, RTIBool deletePointers)
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
            

    rapid::String64_finalize_optional_members(&sample->comment, deallocParams->delete_pointers);
            

    rapid::String256Sequence64_finalize_optional_members(&sample->environment, deallocParams->delete_pointers);
            

    rapid::String256_finalize_optional_members(&sample->workingDirectory, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->binaryName, deallocParams->delete_pointers);
            

    rapid::String256_finalize_optional_members(&sample->commandLineParams, deallocParams->delete_pointers);
            





    rapid::String256_finalize_optional_members(&sample->runningMatch, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->aliveInterface, deallocParams->delete_pointers);
            

/** Number of times of automatic restart on unexpected shutdown */


}

RTIBool ProcessConfig_copy(
    ProcessConfig* dst,
    const ProcessConfig* src)
{

    if (!rapid::String64_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->comment, &src->comment)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256Sequence64_copy(
        &dst->environment, &src->environment)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_copy(
        &dst->workingDirectory, &src->workingDirectory)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->binaryName, &src->binaryName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_copy(
        &dst->commandLineParams, &src->commandLineParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->selfTerminating, &src->selfTerminating)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->startOnInit, &src->startOnInit)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->waitOnInit, &src->waitOnInit)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->startupTimeout, &src->startupTimeout)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_copy(
        &dst->runningMatch, &src->runningMatch)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->aliveInterface, &src->aliveInterface)) {
        return RTI_FALSE;
    }
            

/** Number of times of automatic restart on unexpected shutdown */

    if (!RTICdrType_copyLong(
        &dst->restartsOnFailure, &src->restartsOnFailure)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ProcessConfig' sequence class.
 */
#define T ProcessConfig
#define TSeq ProcessConfigSeq
#define T_initialize_w_params ::rapid::ext::ProcessConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ProcessConfig_finalize_w_params
#define T_copy       ::rapid::ext::ProcessConfig_copy

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

DDS_TypeCode* ProcessConfigSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ProcessConfigSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode ProcessConfigSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::ProcessConfigSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ProcessConfigSequence */

    if (is_initialized) {
        return &ProcessConfigSequence_g_tc;
    }

    ProcessConfigSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::ProcessConfig_get_typecode();
    ProcessConfigSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ProcessConfigSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ProcessConfigSequence_g_tc;
}


RTIBool ProcessConfigSequence_initialize(
    ProcessConfigSequence* sample)
{
    return ::rapid::ext::ProcessConfigSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ProcessConfigSequence_initialize_ex(
    ProcessConfigSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ProcessConfigSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ProcessConfigSequence_initialize_w_params(
        ProcessConfigSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::ProcessConfigSeq_initialize(sample);
        rapid::ext::ProcessConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::ProcessConfigSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::ProcessConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ProcessConfigSequence_finalize(
    ProcessConfigSequence* sample)
{
    ::rapid::ext::ProcessConfigSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ProcessConfigSequence_finalize_ex(
    ProcessConfigSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ProcessConfigSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ProcessConfigSequence_finalize_w_params(
    ProcessConfigSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::ProcessConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::ProcessConfigSeq_finalize(sample);
            

}

void ProcessConfigSequence_finalize_optional_members(
    ProcessConfigSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::ProcessConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::ProcessConfig_finalize_optional_members(
                rapid::ext::ProcessConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ProcessConfigSequence_copy(
    ProcessConfigSequence* dst,
    const ProcessConfigSequence* src)
{

    if (!rapid::ext::ProcessConfigSeq_copy(dst,
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
 * Configure and implement 'ProcessConfigSequence' sequence class.
 */
#define T            ProcessConfigSequence
#define TSeq         ProcessConfigSequenceSeq
#define T_initialize_w_params ::rapid::ext::ProcessConfigSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ProcessConfigSequence_finalize_w_params
#define T_copy       ::rapid::ext::ProcessConfigSequence_copy


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


/**

 * ProcessManagerConfig

 */
/* ========================================================================= */
const char *ProcessManagerConfigTYPENAME = "rapid::ext::ProcessManagerConfig";

DDS_TypeCode* ProcessManagerConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ProcessManagerConfig_g_tc_members[2]=
    {
        {
            (char *)"configName",/* Member name */
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
            (char *)"processes",/* Member name */
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

    static DDS_TypeCode ProcessManagerConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::ProcessManagerConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        ProcessManagerConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for ProcessManagerConfig*/

    if (is_initialized) {
        return &ProcessManagerConfig_g_tc;
    }


    ProcessManagerConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    ProcessManagerConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::ProcessConfigSequence_get_typecode();

    ProcessManagerConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &ProcessManagerConfig_g_tc;
}


RTIBool ProcessManagerConfig_initialize(
    ProcessManagerConfig* sample) {
  return ::rapid::ext::ProcessManagerConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ProcessManagerConfig_initialize_ex(
    ProcessManagerConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ProcessManagerConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool ProcessManagerConfig_initialize_w_params(
        ProcessManagerConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_initialize_w_params(&sample->configName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ProcessConfigSequence_initialize_w_params(&sample->processes,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ProcessManagerConfig_finalize(
    ProcessManagerConfig* sample)
{
    ::rapid::ext::ProcessManagerConfig_finalize_ex(sample,RTI_TRUE);
}
        
void ProcessManagerConfig_finalize_ex(
    ProcessManagerConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ProcessManagerConfig_finalize_w_params(
        sample,&deallocParams);
}

void ProcessManagerConfig_finalize_w_params(
        ProcessManagerConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String64_finalize_w_params(&sample->configName, deallocParams);
            

    rapid::ext::ProcessConfigSequence_finalize_w_params(&sample->processes, deallocParams);
            

}

void ProcessManagerConfig_finalize_optional_members(
    ProcessManagerConfig* sample, RTIBool deletePointers)
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
             

    rapid::String64_finalize_optional_members(&sample->configName, deallocParams->delete_pointers);
            

    rapid::ext::ProcessConfigSequence_finalize_optional_members(&sample->processes, deallocParams->delete_pointers);
            

}

RTIBool ProcessManagerConfig_copy(
    ProcessManagerConfig* dst,
    const ProcessManagerConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String64_copy(
        &dst->configName, &src->configName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ProcessConfigSequence_copy(
        &dst->processes, &src->processes)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ProcessManagerConfig' sequence class.
 */
#define T ProcessManagerConfig
#define TSeq ProcessManagerConfigSeq
#define T_initialize_w_params ::rapid::ext::ProcessManagerConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ProcessManagerConfig_finalize_w_params
#define T_copy       ::rapid::ext::ProcessManagerConfig_copy

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
