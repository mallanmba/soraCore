
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SpectrumConfig.idl using "rtiddsgen".
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



#include "SpectrumConfig.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *NamedIndexRangeTYPENAME = "rapid::ext::arc::NamedIndexRange";

DDS_TypeCode* NamedIndexRange_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NamedIndexRange_g_tc_members[3]=
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
            (char *)"start",/* Member name */
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
            (char *)"end",/* Member name */
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
        }
    };

    static DDS_TypeCode NamedIndexRange_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::NamedIndexRange", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        NamedIndexRange_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedIndexRange*/

    if (is_initialized) {
        return &NamedIndexRange_g_tc;
    }


    NamedIndexRange_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    NamedIndexRange_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    NamedIndexRange_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &NamedIndexRange_g_tc;
}


RTIBool NamedIndexRange_initialize(
    NamedIndexRange* sample) {
  return ::rapid::ext::arc::NamedIndexRange_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NamedIndexRange_initialize_ex(
    NamedIndexRange* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::NamedIndexRange_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedIndexRange_initialize_w_params(
        NamedIndexRange* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initShort(&sample->start)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->end)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void NamedIndexRange_finalize(
    NamedIndexRange* sample)
{
    ::rapid::ext::arc::NamedIndexRange_finalize_ex(sample,RTI_TRUE);
}
        
void NamedIndexRange_finalize_ex(
    NamedIndexRange* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::NamedIndexRange_finalize_w_params(
        sample,&deallocParams);
}

void NamedIndexRange_finalize_w_params(
        NamedIndexRange* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            



}

void NamedIndexRange_finalize_optional_members(
    NamedIndexRange* sample, RTIBool deletePointers)
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
            



}

RTIBool NamedIndexRange_copy(
    NamedIndexRange* dst,
    const NamedIndexRange* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->start, &src->start)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->end, &src->end)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NamedIndexRange' sequence class.
 */
#define T NamedIndexRange
#define TSeq NamedIndexRangeSeq
#define T_initialize_w_params ::rapid::ext::arc::NamedIndexRange_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::NamedIndexRange_finalize_w_params
#define T_copy       ::rapid::ext::arc::NamedIndexRange_copy

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

DDS_TypeCode* NamedIndexRangeSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NamedIndexRangeSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode NamedIndexRangeSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::NamedIndexRangeSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedIndexRangeSequence16 */

    if (is_initialized) {
        return &NamedIndexRangeSequence16_g_tc;
    }

    NamedIndexRangeSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::NamedIndexRange_get_typecode();
    NamedIndexRangeSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&NamedIndexRangeSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NamedIndexRangeSequence16_g_tc;
}


RTIBool NamedIndexRangeSequence16_initialize(
    NamedIndexRangeSequence16* sample)
{
    return ::rapid::ext::arc::NamedIndexRangeSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NamedIndexRangeSequence16_initialize_ex(
    NamedIndexRangeSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::NamedIndexRangeSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedIndexRangeSequence16_initialize_w_params(
        NamedIndexRangeSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::NamedIndexRangeSeq_initialize(sample);
        rapid::ext::arc::NamedIndexRangeSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::NamedIndexRangeSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::NamedIndexRangeSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NamedIndexRangeSequence16_finalize(
    NamedIndexRangeSequence16* sample)
{
    ::rapid::ext::arc::NamedIndexRangeSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void NamedIndexRangeSequence16_finalize_ex(
    NamedIndexRangeSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::NamedIndexRangeSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void NamedIndexRangeSequence16_finalize_w_params(
    NamedIndexRangeSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::NamedIndexRangeSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::NamedIndexRangeSeq_finalize(sample);
            

}

void NamedIndexRangeSequence16_finalize_optional_members(
    NamedIndexRangeSequence16* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::NamedIndexRangeSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::NamedIndexRange_finalize_optional_members(
                rapid::ext::arc::NamedIndexRangeSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NamedIndexRangeSequence16_copy(
    NamedIndexRangeSequence16* dst,
    const NamedIndexRangeSequence16* src)
{

    if (!rapid::ext::arc::NamedIndexRangeSeq_copy(dst,
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
 * Configure and implement 'NamedIndexRangeSequence16' sequence class.
 */
#define T            NamedIndexRangeSequence16
#define TSeq         NamedIndexRangeSequence16Seq
#define T_initialize_w_params ::rapid::ext::arc::NamedIndexRangeSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::NamedIndexRangeSequence16_finalize_w_params
#define T_copy       ::rapid::ext::arc::NamedIndexRangeSequence16_copy


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
const char *SpectrumConfigTYPENAME = "rapid::ext::arc::SpectrumConfig";

DDS_TypeCode* SpectrumConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SpectrumConfig_g_tc_members[3]=
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"indexRanges",/* Member name */
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
            (char *)"valueKeys",/* Member name */
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

    static DDS_TypeCode SpectrumConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::SpectrumConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        SpectrumConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for SpectrumConfig*/

    if (is_initialized) {
        return &SpectrumConfig_g_tc;
    }


    SpectrumConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    SpectrumConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::NamedIndexRangeSequence16_get_typecode();
    SpectrumConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence64_get_typecode();

    SpectrumConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &SpectrumConfig_g_tc;
}


RTIBool SpectrumConfig_initialize(
    SpectrumConfig* sample) {
  return ::rapid::ext::arc::SpectrumConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SpectrumConfig_initialize_ex(
    SpectrumConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::SpectrumConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool SpectrumConfig_initialize_w_params(
        SpectrumConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::NamedIndexRangeSequence16_initialize_w_params(&sample->indexRanges,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence64_initialize_w_params(&sample->valueKeys,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SpectrumConfig_finalize(
    SpectrumConfig* sample)
{
    ::rapid::ext::arc::SpectrumConfig_finalize_ex(sample,RTI_TRUE);
}
        
void SpectrumConfig_finalize_ex(
    SpectrumConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::SpectrumConfig_finalize_w_params(
        sample,&deallocParams);
}

void SpectrumConfig_finalize_w_params(
        SpectrumConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            

    rapid::ext::arc::NamedIndexRangeSequence16_finalize_w_params(&sample->indexRanges, deallocParams);
            

    rapid::KeyTypeValueSequence64_finalize_w_params(&sample->valueKeys, deallocParams);
            

}

void SpectrumConfig_finalize_optional_members(
    SpectrumConfig* sample, RTIBool deletePointers)
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
             

    rapid::String32_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            

    rapid::ext::arc::NamedIndexRangeSequence16_finalize_optional_members(&sample->indexRanges, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence64_finalize_optional_members(&sample->valueKeys, deallocParams->delete_pointers);
            

}

RTIBool SpectrumConfig_copy(
    SpectrumConfig* dst,
    const SpectrumConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::NamedIndexRangeSequence16_copy(
        &dst->indexRanges, &src->indexRanges)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence64_copy(
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
 * Configure and implement 'SpectrumConfig' sequence class.
 */
#define T SpectrumConfig
#define TSeq SpectrumConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::SpectrumConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::SpectrumConfig_finalize_w_params
#define T_copy       ::rapid::ext::arc::SpectrumConfig_copy

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


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */
