
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryMeshSample.idl using "rtiddsgen".
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



#include "GeometryMeshSample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *GeometryIndexModeTYPENAME = "rapid::ext::arc::GeometryIndexMode";

DDS_TypeCode* GeometryIndexMode_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member GeometryIndexMode_g_tc_members[8] =
    {
        {
            (char *)"GIM_TRIANGLES",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_TRIANGLES, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GIM_TRISTRIP",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_TRISTRIP, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GIM_TRIFAN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_TRIFAN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GIM_QUADS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_QUADS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GIM_LINES",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_LINES, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GIM_LINE_STRIP",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_LINE_STRIP, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GIM_LINE_LOOP",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_LINE_LOOP, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"GIM_POINTS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            GIM_POINTS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode GeometryIndexMode_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::GeometryIndexMode", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of enumerators */
        GeometryIndexMode_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &GeometryIndexMode_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &GeometryIndexMode_g_tc;
}
 

RTIBool GeometryIndexMode_initialize(
    GeometryIndexMode* sample)
{
    *sample = GIM_TRIANGLES;
    return RTI_TRUE;
}
        
RTIBool GeometryIndexMode_initialize_ex(
    GeometryIndexMode* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = GIM_TRIANGLES;
    return RTI_TRUE;
}

RTIBool GeometryIndexMode_initialize_w_params(
        GeometryIndexMode* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = GIM_TRIANGLES;
    return RTI_TRUE;
}

void GeometryIndexMode_finalize(
    GeometryIndexMode* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void GeometryIndexMode_finalize_ex(
    GeometryIndexMode* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void GeometryIndexMode_finalize_w_params(
        GeometryIndexMode* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool GeometryIndexMode_copy(
    GeometryIndexMode* dst,
    const GeometryIndexMode* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool GeometryIndexMode_getValues(GeometryIndexModeSeq * values) 
    
{
    int i = 0;
    GeometryIndexMode * buffer;


    if (!values->maximum(8)) {
        return RTI_FALSE;
    }

    if (!values->length(8)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = GIM_TRIANGLES;
    i++;
    
    buffer[i] = GIM_TRISTRIP;
    i++;
    
    buffer[i] = GIM_TRIFAN;
    i++;
    
    buffer[i] = GIM_QUADS;
    i++;
    
    buffer[i] = GIM_LINES;
    i++;
    
    buffer[i] = GIM_LINE_STRIP;
    i++;
    
    buffer[i] = GIM_LINE_LOOP;
    i++;
    
    buffer[i] = GIM_POINTS;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GeometryIndexMode' sequence class.
 */
#define T GeometryIndexMode
#define TSeq GeometryIndexModeSeq
#define T_initialize_w_params GeometryIndexMode_initialize_w_params
#define T_finalize_w_params   GeometryIndexMode_finalize_w_params
#define T_copy       GeometryIndexMode_copy

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

DDS_TypeCode* GeometryIndexModeSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode GeometryIndexModeSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode GeometryIndexModeSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::GeometryIndexModeSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GeometryIndexModeSequence32 */

    if (is_initialized) {
        return &GeometryIndexModeSequence32_g_tc;
    }

    GeometryIndexModeSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::GeometryIndexMode_get_typecode();
    GeometryIndexModeSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&GeometryIndexModeSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &GeometryIndexModeSequence32_g_tc;
}


RTIBool GeometryIndexModeSequence32_initialize(
    GeometryIndexModeSequence32* sample)
{
    return ::rapid::ext::arc::GeometryIndexModeSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool GeometryIndexModeSequence32_initialize_ex(
    GeometryIndexModeSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::GeometryIndexModeSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool GeometryIndexModeSequence32_initialize_w_params(
        GeometryIndexModeSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::GeometryIndexModeSeq_initialize(sample);
        rapid::ext::arc::GeometryIndexModeSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::GeometryIndexModeSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::GeometryIndexModeSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void GeometryIndexModeSequence32_finalize(
    GeometryIndexModeSequence32* sample)
{
    ::rapid::ext::arc::GeometryIndexModeSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void GeometryIndexModeSequence32_finalize_ex(
    GeometryIndexModeSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::GeometryIndexModeSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void GeometryIndexModeSequence32_finalize_w_params(
    GeometryIndexModeSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::GeometryIndexModeSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::GeometryIndexModeSeq_finalize(sample);
            

}

void GeometryIndexModeSequence32_finalize_optional_members(
    GeometryIndexModeSequence32* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::GeometryIndexModeSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::GeometryIndexMode_finalize_w_params(
                rapid::ext::arc::GeometryIndexModeSeq_get_reference(
                    sample, i), deallocParams);
        }
    }         
            

}

RTIBool GeometryIndexModeSequence32_copy(
    GeometryIndexModeSequence32* dst,
    const GeometryIndexModeSequence32* src)
{

    if (!rapid::ext::arc::GeometryIndexModeSeq_copy(dst,
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
 * Configure and implement 'GeometryIndexModeSequence32' sequence class.
 */
#define T            GeometryIndexModeSequence32
#define TSeq         GeometryIndexModeSequence32Seq
#define T_initialize_w_params ::rapid::ext::arc::GeometryIndexModeSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::GeometryIndexModeSequence32_finalize_w_params
#define T_copy       ::rapid::ext::arc::GeometryIndexModeSequence32_copy


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

DDS_TypeCode* IndexSequence256K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode IndexSequence256K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(262144,NULL);

    static DDS_TypeCode IndexSequence256K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::IndexSequence256K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for IndexSequence256K */

    if (is_initialized) {
        return &IndexSequence256K_g_tc;
    }

    IndexSequence256K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    IndexSequence256K_g_tc._data._typeCode = (RTICdrTypeCode *)&IndexSequence256K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &IndexSequence256K_g_tc;
}


RTIBool IndexSequence256K_initialize(
    IndexSequence256K* sample)
{
    return ::rapid::ext::arc::IndexSequence256K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool IndexSequence256K_initialize_ex(
    IndexSequence256K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::IndexSequence256K_initialize_w_params(
        sample,&allocParams);
}

RTIBool IndexSequence256K_initialize_w_params(
        IndexSequence256K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_UnsignedShortSeq_initialize(sample);
        if (!DDS_UnsignedShortSeq_set_maximum(sample,
                (262144))) {
            return RTI_FALSE;
        }
    } else {
        DDS_UnsignedShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void IndexSequence256K_finalize(
    IndexSequence256K* sample)
{
    ::rapid::ext::arc::IndexSequence256K_finalize_ex(sample,RTI_TRUE);
}
 
void IndexSequence256K_finalize_ex(
    IndexSequence256K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::IndexSequence256K_finalize_w_params(
        sample,&deallocParams);
}
           
void IndexSequence256K_finalize_w_params(
    IndexSequence256K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_UnsignedShortSeq_finalize(sample);
            

}

void IndexSequence256K_finalize_optional_members(
    IndexSequence256K* sample, RTIBool deletePointers)
{   
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
     
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    
    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    



}

RTIBool IndexSequence256K_copy(
    IndexSequence256K* dst,
    const IndexSequence256K* src)
{

    if (!DDS_UnsignedShortSeq_copy(dst,
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
 * Configure and implement 'IndexSequence256K' sequence class.
 */
#define T            IndexSequence256K
#define TSeq         IndexSequence256KSeq
#define T_initialize_w_params ::rapid::ext::arc::IndexSequence256K_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::IndexSequence256K_finalize_w_params
#define T_copy       ::rapid::ext::arc::IndexSequence256K_copy


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

DDS_TypeCode* OctetSequence170K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence170K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(174760,NULL);

    static DDS_TypeCode OctetSequence170K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::OctetSequence170K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence170K */

    if (is_initialized) {
        return &OctetSequence170K_g_tc;
    }

    OctetSequence170K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence170K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence170K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence170K_g_tc;
}


RTIBool OctetSequence170K_initialize(
    OctetSequence170K* sample)
{
    return ::rapid::ext::arc::OctetSequence170K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence170K_initialize_ex(
    OctetSequence170K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::OctetSequence170K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence170K_initialize_w_params(
        OctetSequence170K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (174760))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence170K_finalize(
    OctetSequence170K* sample)
{
    ::rapid::ext::arc::OctetSequence170K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence170K_finalize_ex(
    OctetSequence170K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::OctetSequence170K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence170K_finalize_w_params(
    OctetSequence170K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence170K_finalize_optional_members(
    OctetSequence170K* sample, RTIBool deletePointers)
{   
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
     
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    
    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    



}

RTIBool OctetSequence170K_copy(
    OctetSequence170K* dst,
    const OctetSequence170K* src)
{

    if (!DDS_OctetSeq_copy(dst,
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
 * Configure and implement 'OctetSequence170K' sequence class.
 */
#define T            OctetSequence170K
#define TSeq         OctetSequence170KSeq
#define T_initialize_w_params ::rapid::ext::arc::OctetSequence170K_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::OctetSequence170K_finalize_w_params
#define T_copy       ::rapid::ext::arc::OctetSequence170K_copy


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
const char *GeometryMeshSampleTYPENAME = "rapid::ext::arc::GeometryMeshSample";

DDS_TypeCode* GeometryMeshSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member GeometryMeshSample_g_tc_members[12]=
    {
        {
            (char *)"geometryId",/* Member name */
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
            (char *)"indexModes",/* Member name */
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
            (char *)"indexLengths",/* Member name */
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
            (char *)"indexData",/* Member name */
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
            (char *)"vertexScale",/* Member name */
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
            (char *)"vertexData",/* Member name */
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
            (char *)"normalScale",/* Member name */
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
        },
        {
            (char *)"normalData",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 8),/* Representation ID */
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
            (char *)"colorScale",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 9),/* Representation ID */
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
            (char *)"colorData",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 10),/* Representation ID */
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
            (char *)"texCoord0Scale",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 11),/* Representation ID */
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
            (char *)"texCoord0Data",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 12),/* Representation ID */
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

    static DDS_TypeCode GeometryMeshSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::GeometryMeshSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        12, /* Number of members */
        GeometryMeshSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for GeometryMeshSample*/

    if (is_initialized) {
        return &GeometryMeshSample_g_tc;
    }


    GeometryMeshSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    GeometryMeshSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::GeometryIndexModeSequence32_get_typecode();
    GeometryMeshSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::LongSequence32_get_typecode();
    GeometryMeshSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::IndexSequence256K_get_typecode();
    GeometryMeshSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    GeometryMeshSample_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence128K_get_typecode();
    GeometryMeshSample_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    GeometryMeshSample_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)rapid::OctetSequence128K_get_typecode();
    GeometryMeshSample_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    GeometryMeshSample_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::OctetSequence170K_get_typecode();
    GeometryMeshSample_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    GeometryMeshSample_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence96K_get_typecode();

    GeometryMeshSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &GeometryMeshSample_g_tc;
}


RTIBool GeometryMeshSample_initialize(
    GeometryMeshSample* sample) {
  return ::rapid::ext::arc::GeometryMeshSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GeometryMeshSample_initialize_ex(
    GeometryMeshSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::GeometryMeshSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool GeometryMeshSample_initialize_w_params(
        GeometryMeshSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initLong(&sample->geometryId)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ext::arc::GeometryIndexModeSequence32_initialize_w_params(&sample->indexModes,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence32_initialize_w_params(&sample->indexLengths,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::IndexSequence256K_initialize_w_params(&sample->indexData,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->vertexScale)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ShortSequence128K_initialize_w_params(&sample->vertexData,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->normalScale)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::OctetSequence128K_initialize_w_params(&sample->normalData,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->colorScale)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ext::arc::OctetSequence170K_initialize_w_params(&sample->colorData,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->texCoord0Scale)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ShortSequence96K_initialize_w_params(&sample->texCoord0Data,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void GeometryMeshSample_finalize(
    GeometryMeshSample* sample)
{
    ::rapid::ext::arc::GeometryMeshSample_finalize_ex(sample,RTI_TRUE);
}
        
void GeometryMeshSample_finalize_ex(
    GeometryMeshSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::GeometryMeshSample_finalize_w_params(
        sample,&deallocParams);
}

void GeometryMeshSample_finalize_w_params(
        GeometryMeshSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);


    rapid::ext::arc::GeometryIndexModeSequence32_finalize_w_params(&sample->indexModes, deallocParams);
            

    rapid::LongSequence32_finalize_w_params(&sample->indexLengths, deallocParams);
            

    rapid::ext::arc::IndexSequence256K_finalize_w_params(&sample->indexData, deallocParams);
            


    rapid::ShortSequence128K_finalize_w_params(&sample->vertexData, deallocParams);
            


    rapid::OctetSequence128K_finalize_w_params(&sample->normalData, deallocParams);
            


    rapid::ext::arc::OctetSequence170K_finalize_w_params(&sample->colorData, deallocParams);
            


    rapid::ShortSequence96K_finalize_w_params(&sample->texCoord0Data, deallocParams);
            

}

void GeometryMeshSample_finalize_optional_members(
    GeometryMeshSample* sample, RTIBool deletePointers)
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
             


    rapid::ext::arc::GeometryIndexModeSequence32_finalize_optional_members(&sample->indexModes, deallocParams->delete_pointers);
            

    rapid::LongSequence32_finalize_optional_members(&sample->indexLengths, deallocParams->delete_pointers);
            

    rapid::ext::arc::IndexSequence256K_finalize_optional_members(&sample->indexData, deallocParams->delete_pointers);
            


    rapid::ShortSequence128K_finalize_optional_members(&sample->vertexData, deallocParams->delete_pointers);
            


    rapid::OctetSequence128K_finalize_optional_members(&sample->normalData, deallocParams->delete_pointers);
            


    rapid::ext::arc::OctetSequence170K_finalize_optional_members(&sample->colorData, deallocParams->delete_pointers);
            


    rapid::ShortSequence96K_finalize_optional_members(&sample->texCoord0Data, deallocParams->delete_pointers);
            

}

RTIBool GeometryMeshSample_copy(
    GeometryMeshSample* dst,
    const GeometryMeshSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong(
        &dst->geometryId, &src->geometryId)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::GeometryIndexModeSequence32_copy(
        &dst->indexModes, &src->indexModes)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence32_copy(
        &dst->indexLengths, &src->indexLengths)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::IndexSequence256K_copy(
        &dst->indexData, &src->indexData)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->vertexScale, &src->vertexScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence128K_copy(
        &dst->vertexData, &src->vertexData)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->normalScale, &src->normalScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OctetSequence128K_copy(
        &dst->normalData, &src->normalData)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->colorScale, &src->colorScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::OctetSequence170K_copy(
        &dst->colorData, &src->colorData)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->texCoord0Scale, &src->texCoord0Scale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence96K_copy(
        &dst->texCoord0Data, &src->texCoord0Data)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GeometryMeshSample' sequence class.
 */
#define T GeometryMeshSample
#define TSeq GeometryMeshSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::GeometryMeshSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::GeometryMeshSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::GeometryMeshSample_copy

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
