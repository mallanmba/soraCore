
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from JointConfig.idl using "rtiddsgen".
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



#include "JointConfig.h"


namespace rapid{
/* ========================================================================= */
const char *JointDefTYPENAME = "rapid::JointDef";

DDS_TypeCode* JointDef_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member JointDef_g_tc_members[2]=
    {
        {
            (char *)"frameName",/* Member name */
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
            (char *)"dof",/* Member name */
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

    static DDS_TypeCode JointDef_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::JointDef", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        JointDef_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for JointDef*/

    if (is_initialized) {
        return &JointDef_g_tc;
    }


    JointDef_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    JointDef_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();

    is_initialized = RTI_TRUE;

    return &JointDef_g_tc;
}


RTIBool JointDef_initialize(
    JointDef* sample) {
  return ::rapid::JointDef_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool JointDef_initialize_ex(
    JointDef* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::JointDef_initialize_w_params(
        sample,&allocParams);
}

RTIBool JointDef_initialize_w_params(
        JointDef* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String128_initialize_w_params(&sample->frameName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->dof,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void JointDef_finalize(
    JointDef* sample)
{
    ::rapid::JointDef_finalize_ex(sample,RTI_TRUE);
}
        
void JointDef_finalize_ex(
    JointDef* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::JointDef_finalize_w_params(
        sample,&deallocParams);
}

void JointDef_finalize_w_params(
        JointDef* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String128_finalize_w_params(&sample->frameName, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->dof, deallocParams);
            

}

void JointDef_finalize_optional_members(
    JointDef* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String128_finalize_optional_members(&sample->frameName, deallocParams->delete_pointers);
            

    rapid::String64_finalize_optional_members(&sample->dof, deallocParams->delete_pointers);
            

}

RTIBool JointDef_copy(
    JointDef* dst,
    const JointDef* src)
{

    if (!rapid::String128_copy(
        &dst->frameName, &src->frameName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->dof, &src->dof)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'JointDef' sequence class.
 */
#define T JointDef
#define TSeq JointDefSeq
#define T_initialize_w_params ::rapid::JointDef_initialize_w_params
#define T_finalize_w_params   ::rapid::JointDef_finalize_w_params
#define T_copy       ::rapid::JointDef_copy

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

DDS_TypeCode* JointDefSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode JointDefSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode JointDefSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::JointDefSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for JointDefSequence */

    if (is_initialized) {
        return &JointDefSequence_g_tc;
    }

    JointDefSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::JointDef_get_typecode();
    JointDefSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&JointDefSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &JointDefSequence_g_tc;
}


RTIBool JointDefSequence_initialize(
    JointDefSequence* sample)
{
    return ::rapid::JointDefSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool JointDefSequence_initialize_ex(
    JointDefSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::JointDefSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool JointDefSequence_initialize_w_params(
        JointDefSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::JointDefSeq_initialize(sample);
        rapid::JointDefSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::JointDefSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::JointDefSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void JointDefSequence_finalize(
    JointDefSequence* sample)
{
    ::rapid::JointDefSequence_finalize_ex(sample,RTI_TRUE);
}
 
void JointDefSequence_finalize_ex(
    JointDefSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::JointDefSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void JointDefSequence_finalize_w_params(
    JointDefSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::JointDefSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::JointDefSeq_finalize(sample);
            

}

void JointDefSequence_finalize_optional_members(
    JointDefSequence* sample, RTIBool deletePointers)
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
        length = rapid::JointDefSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::JointDef_finalize_optional_members(
                rapid::JointDefSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool JointDefSequence_copy(
    JointDefSequence* dst,
    const JointDefSequence* src)
{

    if (!rapid::JointDefSeq_copy(dst,
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
 * Configure and implement 'JointDefSequence' sequence class.
 */
#define T            JointDefSequence
#define TSeq         JointDefSequenceSeq
#define T_initialize_w_params ::rapid::JointDefSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::JointDefSequence_finalize_w_params
#define T_copy       ::rapid::JointDefSequence_copy


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
const char *JointConfigTYPENAME = "rapid::JointConfig";

DDS_TypeCode* JointConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member JointConfig_g_tc_members[2]=
    {
        {
            (char *)"jointGroupName",/* Member name */
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
            (char *)"jointDefinitions",/* Member name */
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

    static DDS_TypeCode JointConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::JointConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        JointConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for JointConfig*/

    if (is_initialized) {
        return &JointConfig_g_tc;
    }


    JointConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    JointConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::JointDefSequence_get_typecode();

    JointConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &JointConfig_g_tc;
}


RTIBool JointConfig_initialize(
    JointConfig* sample) {
  return ::rapid::JointConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool JointConfig_initialize_ex(
    JointConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::JointConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool JointConfig_initialize_w_params(
        JointConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String32_initialize_w_params(&sample->jointGroupName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::JointDefSequence_initialize_w_params(&sample->jointDefinitions,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void JointConfig_finalize(
    JointConfig* sample)
{
    ::rapid::JointConfig_finalize_ex(sample,RTI_TRUE);
}
        
void JointConfig_finalize_ex(
    JointConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::JointConfig_finalize_w_params(
        sample,&deallocParams);
}

void JointConfig_finalize_w_params(
        JointConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String32_finalize_w_params(&sample->jointGroupName, deallocParams);
            

    rapid::JointDefSequence_finalize_w_params(&sample->jointDefinitions, deallocParams);
            

}

void JointConfig_finalize_optional_members(
    JointConfig* sample, RTIBool deletePointers)
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
             

    rapid::String32_finalize_optional_members(&sample->jointGroupName, deallocParams->delete_pointers);
            

    rapid::JointDefSequence_finalize_optional_members(&sample->jointDefinitions, deallocParams->delete_pointers);
            

}

RTIBool JointConfig_copy(
    JointConfig* dst,
    const JointConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String32_copy(
        &dst->jointGroupName, &src->jointGroupName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::JointDefSequence_copy(
        &dst->jointDefinitions, &src->jointDefinitions)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'JointConfig' sequence class.
 */
#define T JointConfig
#define TSeq JointConfigSeq
#define T_initialize_w_params ::rapid::JointConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::JointConfig_finalize_w_params
#define T_copy       ::rapid::JointConfig_copy

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
