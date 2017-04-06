
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FrameStoreConfig.idl using "rtiddsgen".
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



#include "FrameStoreConfig.h"


namespace rapid{
/* ========================================================================= */
const char *FrameDefTYPENAME = "rapid::FrameDef";

DDS_TypeCode* FrameDef_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FrameDef_g_tc_members[4]=
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
            (char *)"parent",/* Member name */
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
            (char *)"transform",/* Member name */
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
            (char *)"extras",/* Member name */
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

    static DDS_TypeCode FrameDef_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FrameDef", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        FrameDef_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FrameDef*/

    if (is_initialized) {
        return &FrameDef_g_tc;
    }


    FrameDef_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    FrameDef_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String256_get_typecode();
    FrameDef_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    FrameDef_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence8_get_typecode();

    is_initialized = RTI_TRUE;

    return &FrameDef_g_tc;
}


RTIBool FrameDef_initialize(
    FrameDef* sample) {
  return ::rapid::FrameDef_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FrameDef_initialize_ex(
    FrameDef* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FrameDef_initialize_w_params(
        sample,&allocParams);
}

RTIBool FrameDef_initialize_w_params(
        FrameDef* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_initialize_w_params(&sample->parent,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_initialize_w_params(&sample->transform,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence8_initialize_w_params(&sample->extras,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void FrameDef_finalize(
    FrameDef* sample)
{
    ::rapid::FrameDef_finalize_ex(sample,RTI_TRUE);
}
        
void FrameDef_finalize_ex(
    FrameDef* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FrameDef_finalize_w_params(
        sample,&deallocParams);
}

void FrameDef_finalize_w_params(
        FrameDef* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            

    rapid::String256_finalize_w_params(&sample->parent, deallocParams);
            

    rapid::Transform3D_finalize_w_params(&sample->transform, deallocParams);
            

    rapid::KeyTypeValueSequence8_finalize_w_params(&sample->extras, deallocParams);
            

}

void FrameDef_finalize_optional_members(
    FrameDef* sample, RTIBool deletePointers)
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
            

    rapid::String256_finalize_optional_members(&sample->parent, deallocParams->delete_pointers);
            

    rapid::Transform3D_finalize_optional_members(&sample->transform, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence8_finalize_optional_members(&sample->extras, deallocParams->delete_pointers);
            

}

RTIBool FrameDef_copy(
    FrameDef* dst,
    const FrameDef* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_copy(
        &dst->parent, &src->parent)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_copy(
        &dst->transform, &src->transform)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence8_copy(
        &dst->extras, &src->extras)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FrameDef' sequence class.
 */
#define T FrameDef
#define TSeq FrameDefSeq
#define T_initialize_w_params ::rapid::FrameDef_initialize_w_params
#define T_finalize_w_params   ::rapid::FrameDef_finalize_w_params
#define T_copy       ::rapid::FrameDef_copy

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

DDS_TypeCode* FrameDefSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FrameDefSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(256,NULL);

    static DDS_TypeCode FrameDefSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::FrameDefSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FrameDefSequence */

    if (is_initialized) {
        return &FrameDefSequence_g_tc;
    }

    FrameDefSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::FrameDef_get_typecode();
    FrameDefSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&FrameDefSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FrameDefSequence_g_tc;
}


RTIBool FrameDefSequence_initialize(
    FrameDefSequence* sample)
{
    return ::rapid::FrameDefSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FrameDefSequence_initialize_ex(
    FrameDefSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FrameDefSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool FrameDefSequence_initialize_w_params(
        FrameDefSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::FrameDefSeq_initialize(sample);
        rapid::FrameDefSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::FrameDefSeq_set_maximum(sample,
                                           (256))) {
            return RTI_FALSE;
        }
    } else {
        rapid::FrameDefSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void FrameDefSequence_finalize(
    FrameDefSequence* sample)
{
    ::rapid::FrameDefSequence_finalize_ex(sample,RTI_TRUE);
}
 
void FrameDefSequence_finalize_ex(
    FrameDefSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FrameDefSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void FrameDefSequence_finalize_w_params(
    FrameDefSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::FrameDefSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::FrameDefSeq_finalize(sample);
            

}

void FrameDefSequence_finalize_optional_members(
    FrameDefSequence* sample, RTIBool deletePointers)
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
        length = rapid::FrameDefSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::FrameDef_finalize_optional_members(
                rapid::FrameDefSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool FrameDefSequence_copy(
    FrameDefSequence* dst,
    const FrameDefSequence* src)
{

    if (!rapid::FrameDefSeq_copy(dst,
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
 * Configure and implement 'FrameDefSequence' sequence class.
 */
#define T            FrameDefSequence
#define TSeq         FrameDefSequenceSeq
#define T_initialize_w_params ::rapid::FrameDefSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::FrameDefSequence_finalize_w_params
#define T_copy       ::rapid::FrameDefSequence_copy


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
const char *FrameStoreConfigTYPENAME = "rapid::FrameStoreConfig";

DDS_TypeCode* FrameStoreConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FrameStoreConfig_g_tc_members[1]=
    {
        {
            (char *)"frames",/* Member name */
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
        }
    };

    static DDS_TypeCode FrameStoreConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FrameStoreConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        FrameStoreConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for FrameStoreConfig*/

    if (is_initialized) {
        return &FrameStoreConfig_g_tc;
    }


    FrameStoreConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::FrameDefSequence_get_typecode();

    FrameStoreConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &FrameStoreConfig_g_tc;
}


RTIBool FrameStoreConfig_initialize(
    FrameStoreConfig* sample) {
  return ::rapid::FrameStoreConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FrameStoreConfig_initialize_ex(
    FrameStoreConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FrameStoreConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool FrameStoreConfig_initialize_w_params(
        FrameStoreConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::FrameDefSequence_initialize_w_params(&sample->frames,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void FrameStoreConfig_finalize(
    FrameStoreConfig* sample)
{
    ::rapid::FrameStoreConfig_finalize_ex(sample,RTI_TRUE);
}
        
void FrameStoreConfig_finalize_ex(
    FrameStoreConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FrameStoreConfig_finalize_w_params(
        sample,&deallocParams);
}

void FrameStoreConfig_finalize_w_params(
        FrameStoreConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::FrameDefSequence_finalize_w_params(&sample->frames, deallocParams);
            

}

void FrameStoreConfig_finalize_optional_members(
    FrameStoreConfig* sample, RTIBool deletePointers)
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
             

    rapid::FrameDefSequence_finalize_optional_members(&sample->frames, deallocParams->delete_pointers);
            

}

RTIBool FrameStoreConfig_copy(
    FrameStoreConfig* dst,
    const FrameStoreConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::FrameDefSequence_copy(
        &dst->frames, &src->frames)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FrameStoreConfig' sequence class.
 */
#define T FrameStoreConfig
#define TSeq FrameStoreConfigSeq
#define T_initialize_w_params ::rapid::FrameStoreConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::FrameStoreConfig_finalize_w_params
#define T_copy       ::rapid::FrameStoreConfig_copy

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
