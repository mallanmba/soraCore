
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeConfig.idl using "rtiddsgen".
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



#include "NoticeConfig.h"


namespace rapid{

namespace ext{

namespace traclabs{

/**

 * Notice item description

 */
/* ========================================================================= */
const char *NoticeItemTYPENAME = "rapid::ext::traclabs::NoticeItem";

DDS_TypeCode* NoticeItem_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NoticeItem_g_tc_members[2]=
    {
        {
            (char *)"itemId",/* Member name */
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
            (char *)"itemDescription",/* Member name */
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

    static DDS_TypeCode NoticeItem_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::traclabs::NoticeItem", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        NoticeItem_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NoticeItem*/

    if (is_initialized) {
        return &NoticeItem_g_tc;
    }


    NoticeItem_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    NoticeItem_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();

    is_initialized = RTI_TRUE;

    return &NoticeItem_g_tc;
}


RTIBool NoticeItem_initialize(
    NoticeItem* sample) {
  return ::rapid::ext::traclabs::NoticeItem_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NoticeItem_initialize_ex(
    NoticeItem* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::traclabs::NoticeItem_initialize_w_params(
        sample,&allocParams);
}

RTIBool NoticeItem_initialize_w_params(
        NoticeItem* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String16_initialize_w_params(&sample->itemId,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->itemDescription,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NoticeItem_finalize(
    NoticeItem* sample)
{
    ::rapid::ext::traclabs::NoticeItem_finalize_ex(sample,RTI_TRUE);
}
        
void NoticeItem_finalize_ex(
    NoticeItem* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::traclabs::NoticeItem_finalize_w_params(
        sample,&deallocParams);
}

void NoticeItem_finalize_w_params(
        NoticeItem* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String16_finalize_w_params(&sample->itemId, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->itemDescription, deallocParams);
            

}

void NoticeItem_finalize_optional_members(
    NoticeItem* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String16_finalize_optional_members(&sample->itemId, deallocParams->delete_pointers);
            

    rapid::String64_finalize_optional_members(&sample->itemDescription, deallocParams->delete_pointers);
            

}

RTIBool NoticeItem_copy(
    NoticeItem* dst,
    const NoticeItem* src)
{

    if (!rapid::String16_copy(
        &dst->itemId, &src->itemId)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->itemDescription, &src->itemDescription)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NoticeItem' sequence class.
 */
#define T NoticeItem
#define TSeq NoticeItemSeq
#define T_initialize_w_params ::rapid::ext::traclabs::NoticeItem_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::traclabs::NoticeItem_finalize_w_params
#define T_copy       ::rapid::ext::traclabs::NoticeItem_copy

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

DDS_TypeCode* NoticeItemSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NoticeItemSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode NoticeItemSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::traclabs::NoticeItemSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NoticeItemSequence */

    if (is_initialized) {
        return &NoticeItemSequence_g_tc;
    }

    NoticeItemSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::traclabs::NoticeItem_get_typecode();
    NoticeItemSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&NoticeItemSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NoticeItemSequence_g_tc;
}


RTIBool NoticeItemSequence_initialize(
    NoticeItemSequence* sample)
{
    return ::rapid::ext::traclabs::NoticeItemSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NoticeItemSequence_initialize_ex(
    NoticeItemSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::traclabs::NoticeItemSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool NoticeItemSequence_initialize_w_params(
        NoticeItemSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::traclabs::NoticeItemSeq_initialize(sample);
        rapid::ext::traclabs::NoticeItemSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::traclabs::NoticeItemSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::traclabs::NoticeItemSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NoticeItemSequence_finalize(
    NoticeItemSequence* sample)
{
    ::rapid::ext::traclabs::NoticeItemSequence_finalize_ex(sample,RTI_TRUE);
}
 
void NoticeItemSequence_finalize_ex(
    NoticeItemSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::traclabs::NoticeItemSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void NoticeItemSequence_finalize_w_params(
    NoticeItemSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::traclabs::NoticeItemSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::traclabs::NoticeItemSeq_finalize(sample);
            

}

void NoticeItemSequence_finalize_optional_members(
    NoticeItemSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::traclabs::NoticeItemSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::traclabs::NoticeItem_finalize_optional_members(
                rapid::ext::traclabs::NoticeItemSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NoticeItemSequence_copy(
    NoticeItemSequence* dst,
    const NoticeItemSequence* src)
{

    if (!rapid::ext::traclabs::NoticeItemSeq_copy(dst,
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
 * Configure and implement 'NoticeItemSequence' sequence class.
 */
#define T            NoticeItemSequence
#define TSeq         NoticeItemSequenceSeq
#define T_initialize_w_params ::rapid::ext::traclabs::NoticeItemSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::traclabs::NoticeItemSequence_finalize_w_params
#define T_copy       ::rapid::ext::traclabs::NoticeItemSequence_copy


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

 * NoticeConfig describes the possible notice items

 * and value keys for extension data

 */
/* ========================================================================= */
const char *NoticeConfigTYPENAME = "rapid::ext::traclabs::NoticeConfig";

DDS_TypeCode* NoticeConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NoticeConfig_g_tc_members[2]=
    {
        {
            (char *)"items",/* Member name */
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
            (char *)"valueKeys",/* Member name */
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

    static DDS_TypeCode NoticeConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::traclabs::NoticeConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        NoticeConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for NoticeConfig*/

    if (is_initialized) {
        return &NoticeConfig_g_tc;
    }


    NoticeConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::traclabs::NoticeItemSequence_get_typecode();
    NoticeConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence16_get_typecode();

    NoticeConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &NoticeConfig_g_tc;
}


RTIBool NoticeConfig_initialize(
    NoticeConfig* sample) {
  return ::rapid::ext::traclabs::NoticeConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NoticeConfig_initialize_ex(
    NoticeConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::traclabs::NoticeConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool NoticeConfig_initialize_w_params(
        NoticeConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::traclabs::NoticeItemSequence_initialize_w_params(&sample->items,allocParams)) {
        return RTI_FALSE;
    }
            

/** extension metadata */

    if (!rapid::KeyTypeValueSequence16_initialize_w_params(&sample->valueKeys,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NoticeConfig_finalize(
    NoticeConfig* sample)
{
    ::rapid::ext::traclabs::NoticeConfig_finalize_ex(sample,RTI_TRUE);
}
        
void NoticeConfig_finalize_ex(
    NoticeConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::traclabs::NoticeConfig_finalize_w_params(
        sample,&deallocParams);
}

void NoticeConfig_finalize_w_params(
        NoticeConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::traclabs::NoticeItemSequence_finalize_w_params(&sample->items, deallocParams);
            

/** extension metadata */

    rapid::KeyTypeValueSequence16_finalize_w_params(&sample->valueKeys, deallocParams);
            

}

void NoticeConfig_finalize_optional_members(
    NoticeConfig* sample, RTIBool deletePointers)
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
             

    rapid::ext::traclabs::NoticeItemSequence_finalize_optional_members(&sample->items, deallocParams->delete_pointers);
            

/** extension metadata */

    rapid::KeyTypeValueSequence16_finalize_optional_members(&sample->valueKeys, deallocParams->delete_pointers);
            

}

RTIBool NoticeConfig_copy(
    NoticeConfig* dst,
    const NoticeConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::traclabs::NoticeItemSequence_copy(
        &dst->items, &src->items)) {
        return RTI_FALSE;
    }
            

/** extension metadata */

    if (!rapid::KeyTypeValueSequence16_copy(
        &dst->valueKeys, &src->valueKeys)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NoticeConfig' sequence class.
 */
#define T NoticeConfig
#define TSeq NoticeConfigSeq
#define T_initialize_w_params ::rapid::ext::traclabs::NoticeConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::traclabs::NoticeConfig_finalize_w_params
#define T_copy       ::rapid::ext::traclabs::NoticeConfig_copy

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


} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */
