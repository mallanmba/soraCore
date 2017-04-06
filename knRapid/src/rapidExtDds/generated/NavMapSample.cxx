
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NavMapSample.idl using "rtiddsgen".
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



#include "NavMapSample.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *OctetMapLayerTYPENAME = "rapid::ext::OctetMapLayer";

DDS_TypeCode* OctetMapLayer_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OctetMapLayer_g_tc_members[4]=
    {
        {
            (char *)"offset",/* Member name */
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
            (char *)"scale",/* Member name */
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
            (char *)"density",/* Member name */
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
            (char *)"data",/* Member name */
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

    static DDS_TypeCode OctetMapLayer_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::OctetMapLayer", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        OctetMapLayer_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetMapLayer*/

    if (is_initialized) {
        return &OctetMapLayer_g_tc;
    }


    OctetMapLayer_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    OctetMapLayer_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    OctetMapLayer_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    OctetMapLayer_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::OctetSequence64K_get_typecode();

    is_initialized = RTI_TRUE;

    return &OctetMapLayer_g_tc;
}


RTIBool OctetMapLayer_initialize(
    OctetMapLayer* sample) {
  return ::rapid::ext::OctetMapLayer_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OctetMapLayer_initialize_ex(
    OctetMapLayer* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::OctetMapLayer_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetMapLayer_initialize_w_params(
        OctetMapLayer* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initDouble(&sample->offset)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->scale)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->density)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::OctetSequence64K_initialize_w_params(&sample->data,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OctetMapLayer_finalize(
    OctetMapLayer* sample)
{
    ::rapid::ext::OctetMapLayer_finalize_ex(sample,RTI_TRUE);
}
        
void OctetMapLayer_finalize_ex(
    OctetMapLayer* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::OctetMapLayer_finalize_w_params(
        sample,&deallocParams);
}

void OctetMapLayer_finalize_w_params(
        OctetMapLayer* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





    rapid::OctetSequence64K_finalize_w_params(&sample->data, deallocParams);
            

}

void OctetMapLayer_finalize_optional_members(
    OctetMapLayer* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




    rapid::OctetSequence64K_finalize_optional_members(&sample->data, deallocParams->delete_pointers);
            

}

RTIBool OctetMapLayer_copy(
    OctetMapLayer* dst,
    const OctetMapLayer* src)
{

    if (!RTICdrType_copyDouble(
        &dst->offset, &src->offset)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->scale, &src->scale)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->density, &src->density)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OctetSequence64K_copy(
        &dst->data, &src->data)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OctetMapLayer' sequence class.
 */
#define T OctetMapLayer
#define TSeq OctetMapLayerSeq
#define T_initialize_w_params ::rapid::ext::OctetMapLayer_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::OctetMapLayer_finalize_w_params
#define T_copy       ::rapid::ext::OctetMapLayer_copy

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
const char *ShortMapLayerTYPENAME = "rapid::ext::ShortMapLayer";

DDS_TypeCode* ShortMapLayer_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ShortMapLayer_g_tc_members[4]=
    {
        {
            (char *)"offset",/* Member name */
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
            (char *)"scale",/* Member name */
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
            (char *)"density",/* Member name */
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
            (char *)"data",/* Member name */
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

    static DDS_TypeCode ShortMapLayer_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::ShortMapLayer", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        ShortMapLayer_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortMapLayer*/

    if (is_initialized) {
        return &ShortMapLayer_g_tc;
    }


    ShortMapLayer_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    ShortMapLayer_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    ShortMapLayer_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortMapLayer_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence64K_get_typecode();

    is_initialized = RTI_TRUE;

    return &ShortMapLayer_g_tc;
}


RTIBool ShortMapLayer_initialize(
    ShortMapLayer* sample) {
  return ::rapid::ext::ShortMapLayer_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ShortMapLayer_initialize_ex(
    ShortMapLayer* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ShortMapLayer_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortMapLayer_initialize_w_params(
        ShortMapLayer* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initDouble(&sample->offset)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->scale)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->density)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ShortSequence64K_initialize_w_params(&sample->data,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ShortMapLayer_finalize(
    ShortMapLayer* sample)
{
    ::rapid::ext::ShortMapLayer_finalize_ex(sample,RTI_TRUE);
}
        
void ShortMapLayer_finalize_ex(
    ShortMapLayer* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ShortMapLayer_finalize_w_params(
        sample,&deallocParams);
}

void ShortMapLayer_finalize_w_params(
        ShortMapLayer* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





    rapid::ShortSequence64K_finalize_w_params(&sample->data, deallocParams);
            

}

void ShortMapLayer_finalize_optional_members(
    ShortMapLayer* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




    rapid::ShortSequence64K_finalize_optional_members(&sample->data, deallocParams->delete_pointers);
            

}

RTIBool ShortMapLayer_copy(
    ShortMapLayer* dst,
    const ShortMapLayer* src)
{

    if (!RTICdrType_copyDouble(
        &dst->offset, &src->offset)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->scale, &src->scale)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->density, &src->density)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64K_copy(
        &dst->data, &src->data)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ShortMapLayer' sequence class.
 */
#define T ShortMapLayer
#define TSeq ShortMapLayerSeq
#define T_initialize_w_params ::rapid::ext::ShortMapLayer_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ShortMapLayer_finalize_w_params
#define T_copy       ::rapid::ext::ShortMapLayer_copy

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

DDS_TypeCode* ShortMapLayerSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortMapLayerSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((rapid::ext::NAVMAP_NUM_SHORT_LAYERS),NULL);

    static DDS_TypeCode ShortMapLayerSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::ShortMapLayerSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortMapLayerSequence */

    if (is_initialized) {
        return &ShortMapLayerSequence_g_tc;
    }

    ShortMapLayerSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::ShortMapLayer_get_typecode();
    ShortMapLayerSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortMapLayerSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortMapLayerSequence_g_tc;
}


RTIBool ShortMapLayerSequence_initialize(
    ShortMapLayerSequence* sample)
{
    return ::rapid::ext::ShortMapLayerSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortMapLayerSequence_initialize_ex(
    ShortMapLayerSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ShortMapLayerSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortMapLayerSequence_initialize_w_params(
        ShortMapLayerSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::ShortMapLayerSeq_initialize(sample);
        rapid::ext::ShortMapLayerSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::ShortMapLayerSeq_set_maximum(sample,
                                           ((rapid::ext::NAVMAP_NUM_SHORT_LAYERS)))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::ShortMapLayerSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ShortMapLayerSequence_finalize(
    ShortMapLayerSequence* sample)
{
    ::rapid::ext::ShortMapLayerSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ShortMapLayerSequence_finalize_ex(
    ShortMapLayerSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ShortMapLayerSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortMapLayerSequence_finalize_w_params(
    ShortMapLayerSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::ShortMapLayerSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::ShortMapLayerSeq_finalize(sample);
            

}

void ShortMapLayerSequence_finalize_optional_members(
    ShortMapLayerSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::ShortMapLayerSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::ShortMapLayer_finalize_optional_members(
                rapid::ext::ShortMapLayerSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ShortMapLayerSequence_copy(
    ShortMapLayerSequence* dst,
    const ShortMapLayerSequence* src)
{

    if (!rapid::ext::ShortMapLayerSeq_copy(dst,
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
 * Configure and implement 'ShortMapLayerSequence' sequence class.
 */
#define T            ShortMapLayerSequence
#define TSeq         ShortMapLayerSequenceSeq
#define T_initialize_w_params ::rapid::ext::ShortMapLayerSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ShortMapLayerSequence_finalize_w_params
#define T_copy       ::rapid::ext::ShortMapLayerSequence_copy


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

DDS_TypeCode* OctetMapLayerSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetMapLayerSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((rapid::ext::NAVMAP_NUM_OCTET_LAYERS),NULL);

    static DDS_TypeCode OctetMapLayerSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::OctetMapLayerSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetMapLayerSequence */

    if (is_initialized) {
        return &OctetMapLayerSequence_g_tc;
    }

    OctetMapLayerSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::OctetMapLayer_get_typecode();
    OctetMapLayerSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetMapLayerSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetMapLayerSequence_g_tc;
}


RTIBool OctetMapLayerSequence_initialize(
    OctetMapLayerSequence* sample)
{
    return ::rapid::ext::OctetMapLayerSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetMapLayerSequence_initialize_ex(
    OctetMapLayerSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::OctetMapLayerSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetMapLayerSequence_initialize_w_params(
        OctetMapLayerSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::OctetMapLayerSeq_initialize(sample);
        rapid::ext::OctetMapLayerSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::OctetMapLayerSeq_set_maximum(sample,
                                           ((rapid::ext::NAVMAP_NUM_OCTET_LAYERS)))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::OctetMapLayerSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void OctetMapLayerSequence_finalize(
    OctetMapLayerSequence* sample)
{
    ::rapid::ext::OctetMapLayerSequence_finalize_ex(sample,RTI_TRUE);
}
 
void OctetMapLayerSequence_finalize_ex(
    OctetMapLayerSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::OctetMapLayerSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetMapLayerSequence_finalize_w_params(
    OctetMapLayerSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::OctetMapLayerSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::OctetMapLayerSeq_finalize(sample);
            

}

void OctetMapLayerSequence_finalize_optional_members(
    OctetMapLayerSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::OctetMapLayerSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::OctetMapLayer_finalize_optional_members(
                rapid::ext::OctetMapLayerSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool OctetMapLayerSequence_copy(
    OctetMapLayerSequence* dst,
    const OctetMapLayerSequence* src)
{

    if (!rapid::ext::OctetMapLayerSeq_copy(dst,
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
 * Configure and implement 'OctetMapLayerSequence' sequence class.
 */
#define T            OctetMapLayerSequence
#define TSeq         OctetMapLayerSequenceSeq
#define T_initialize_w_params ::rapid::ext::OctetMapLayerSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::OctetMapLayerSequence_finalize_w_params
#define T_copy       ::rapid::ext::OctetMapLayerSequence_copy


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
const char *NavMapSampleTYPENAME = "rapid::ext::NavMapSample";

DDS_TypeCode* NavMapSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NavMapSample_g_tc_tileId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);

    static DDS_TypeCode_Member NavMapSample_g_tc_members[4]=
    {
        {
            (char *)"tileId",/* Member name */
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
            (char *)"location",/* Member name */
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
            (char *)"shortLayers",/* Member name */
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
            (char *)"octetLayers",/* Member name */
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

    static DDS_TypeCode NavMapSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::NavMapSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        NavMapSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for NavMapSample*/

    if (is_initialized) {
        return &NavMapSample_g_tc;
    }

    NavMapSample_g_tc_tileId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    NavMapSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&NavMapSample_g_tc_tileId_array;
    NavMapSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    NavMapSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::ShortMapLayerSequence_get_typecode();
    NavMapSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::OctetMapLayerSequence_get_typecode();

    NavMapSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &NavMapSample_g_tc;
}


RTIBool NavMapSample_initialize(
    NavMapSample* sample) {
  return ::rapid::ext::NavMapSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NavMapSample_initialize_ex(
    NavMapSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::NavMapSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool NavMapSample_initialize_w_params(
        NavMapSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }    
    if (!RTICdrType_initArray(
        sample->tileId, (2), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_initialize_w_params(&sample->location,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ShortMapLayerSequence_initialize_w_params(&sample->shortLayers,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::OctetMapLayerSequence_initialize_w_params(&sample->octetLayers,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NavMapSample_finalize(
    NavMapSample* sample)
{
    ::rapid::ext::NavMapSample_finalize_ex(sample,RTI_TRUE);
}
        
void NavMapSample_finalize_ex(
    NavMapSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::NavMapSample_finalize_w_params(
        sample,&deallocParams);
}

void NavMapSample_finalize_w_params(
        NavMapSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);


    rapid::Transform3D_finalize_w_params(&sample->location, deallocParams);
            

    rapid::ext::ShortMapLayerSequence_finalize_w_params(&sample->shortLayers, deallocParams);
            

    rapid::ext::OctetMapLayerSequence_finalize_w_params(&sample->octetLayers, deallocParams);
            

}

void NavMapSample_finalize_optional_members(
    NavMapSample* sample, RTIBool deletePointers)
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
             


    rapid::Transform3D_finalize_optional_members(&sample->location, deallocParams->delete_pointers);
            

    rapid::ext::ShortMapLayerSequence_finalize_optional_members(&sample->shortLayers, deallocParams->delete_pointers);
            

    rapid::ext::OctetMapLayerSequence_finalize_optional_members(&sample->octetLayers, deallocParams->delete_pointers);
            

}

RTIBool NavMapSample_copy(
    NavMapSample* dst,
    const NavMapSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyArray(
        dst->tileId, src->tileId, (2), RTI_CDR_LONG_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_copy(
        &dst->location, &src->location)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ShortMapLayerSequence_copy(
        &dst->shortLayers, &src->shortLayers)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::OctetMapLayerSequence_copy(
        &dst->octetLayers, &src->octetLayers)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NavMapSample' sequence class.
 */
#define T NavMapSample
#define TSeq NavMapSampleSeq
#define T_initialize_w_params ::rapid::ext::NavMapSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::NavMapSample_finalize_w_params
#define T_copy       ::rapid::ext::NavMapSample_copy

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
