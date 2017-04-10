
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BaseTypes.idl using "rtiddsgen".
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



#include "BaseTypes.h"


namespace rapid{
/* ========================================================================= */

DDS_TypeCode* OctetSequence1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence1K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1024,NULL);

    static DDS_TypeCode OctetSequence1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::OctetSequence1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence1K */

    if (is_initialized) {
        return &OctetSequence1K_g_tc;
    }

    OctetSequence1K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence1K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence1K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence1K_g_tc;
}


RTIBool OctetSequence1K_initialize(
    OctetSequence1K* sample)
{
    return ::rapid::OctetSequence1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence1K_initialize_ex(
    OctetSequence1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OctetSequence1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence1K_initialize_w_params(
        OctetSequence1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (1024))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence1K_finalize(
    OctetSequence1K* sample)
{
    ::rapid::OctetSequence1K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence1K_finalize_ex(
    OctetSequence1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OctetSequence1K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence1K_finalize_w_params(
    OctetSequence1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence1K_finalize_optional_members(
    OctetSequence1K* sample, RTIBool deletePointers)
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

RTIBool OctetSequence1K_copy(
    OctetSequence1K* dst,
    const OctetSequence1K* src)
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
 * Configure and implement 'OctetSequence1K' sequence class.
 */
#define T            OctetSequence1K
#define TSeq         OctetSequence1KSeq
#define T_initialize_w_params ::rapid::OctetSequence1K_initialize_w_params
#define T_finalize_w_params   ::rapid::OctetSequence1K_finalize_w_params
#define T_copy       ::rapid::OctetSequence1K_copy


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

DDS_TypeCode* OctetSequence2K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence2K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(2048,NULL);

    static DDS_TypeCode OctetSequence2K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::OctetSequence2K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence2K */

    if (is_initialized) {
        return &OctetSequence2K_g_tc;
    }

    OctetSequence2K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence2K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence2K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence2K_g_tc;
}


RTIBool OctetSequence2K_initialize(
    OctetSequence2K* sample)
{
    return ::rapid::OctetSequence2K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence2K_initialize_ex(
    OctetSequence2K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OctetSequence2K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence2K_initialize_w_params(
        OctetSequence2K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (2048))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence2K_finalize(
    OctetSequence2K* sample)
{
    ::rapid::OctetSequence2K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence2K_finalize_ex(
    OctetSequence2K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OctetSequence2K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence2K_finalize_w_params(
    OctetSequence2K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence2K_finalize_optional_members(
    OctetSequence2K* sample, RTIBool deletePointers)
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

RTIBool OctetSequence2K_copy(
    OctetSequence2K* dst,
    const OctetSequence2K* src)
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
 * Configure and implement 'OctetSequence2K' sequence class.
 */
#define T            OctetSequence2K
#define TSeq         OctetSequence2KSeq
#define T_initialize_w_params ::rapid::OctetSequence2K_initialize_w_params
#define T_finalize_w_params   ::rapid::OctetSequence2K_finalize_w_params
#define T_copy       ::rapid::OctetSequence2K_copy


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

DDS_TypeCode* OctetSequence4K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence4K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(4096,NULL);

    static DDS_TypeCode OctetSequence4K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::OctetSequence4K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence4K */

    if (is_initialized) {
        return &OctetSequence4K_g_tc;
    }

    OctetSequence4K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence4K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence4K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence4K_g_tc;
}


RTIBool OctetSequence4K_initialize(
    OctetSequence4K* sample)
{
    return ::rapid::OctetSequence4K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence4K_initialize_ex(
    OctetSequence4K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OctetSequence4K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence4K_initialize_w_params(
        OctetSequence4K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (4096))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence4K_finalize(
    OctetSequence4K* sample)
{
    ::rapid::OctetSequence4K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence4K_finalize_ex(
    OctetSequence4K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OctetSequence4K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence4K_finalize_w_params(
    OctetSequence4K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence4K_finalize_optional_members(
    OctetSequence4K* sample, RTIBool deletePointers)
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

RTIBool OctetSequence4K_copy(
    OctetSequence4K* dst,
    const OctetSequence4K* src)
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
 * Configure and implement 'OctetSequence4K' sequence class.
 */
#define T            OctetSequence4K
#define TSeq         OctetSequence4KSeq
#define T_initialize_w_params ::rapid::OctetSequence4K_initialize_w_params
#define T_finalize_w_params   ::rapid::OctetSequence4K_finalize_w_params
#define T_copy       ::rapid::OctetSequence4K_copy


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

DDS_TypeCode* OctetSequence16K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence16K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16384,NULL);

    static DDS_TypeCode OctetSequence16K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::OctetSequence16K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence16K */

    if (is_initialized) {
        return &OctetSequence16K_g_tc;
    }

    OctetSequence16K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence16K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence16K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence16K_g_tc;
}


RTIBool OctetSequence16K_initialize(
    OctetSequence16K* sample)
{
    return ::rapid::OctetSequence16K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence16K_initialize_ex(
    OctetSequence16K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OctetSequence16K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence16K_initialize_w_params(
        OctetSequence16K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (16384))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence16K_finalize(
    OctetSequence16K* sample)
{
    ::rapid::OctetSequence16K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence16K_finalize_ex(
    OctetSequence16K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OctetSequence16K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence16K_finalize_w_params(
    OctetSequence16K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence16K_finalize_optional_members(
    OctetSequence16K* sample, RTIBool deletePointers)
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

RTIBool OctetSequence16K_copy(
    OctetSequence16K* dst,
    const OctetSequence16K* src)
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
 * Configure and implement 'OctetSequence16K' sequence class.
 */
#define T            OctetSequence16K
#define TSeq         OctetSequence16KSeq
#define T_initialize_w_params ::rapid::OctetSequence16K_initialize_w_params
#define T_finalize_w_params   ::rapid::OctetSequence16K_finalize_w_params
#define T_copy       ::rapid::OctetSequence16K_copy


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

DDS_TypeCode* OctetSequence32K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence32K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32768,NULL);

    static DDS_TypeCode OctetSequence32K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::OctetSequence32K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence32K */

    if (is_initialized) {
        return &OctetSequence32K_g_tc;
    }

    OctetSequence32K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence32K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence32K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence32K_g_tc;
}


RTIBool OctetSequence32K_initialize(
    OctetSequence32K* sample)
{
    return ::rapid::OctetSequence32K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence32K_initialize_ex(
    OctetSequence32K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OctetSequence32K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence32K_initialize_w_params(
        OctetSequence32K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (32768))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence32K_finalize(
    OctetSequence32K* sample)
{
    ::rapid::OctetSequence32K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence32K_finalize_ex(
    OctetSequence32K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OctetSequence32K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence32K_finalize_w_params(
    OctetSequence32K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence32K_finalize_optional_members(
    OctetSequence32K* sample, RTIBool deletePointers)
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

RTIBool OctetSequence32K_copy(
    OctetSequence32K* dst,
    const OctetSequence32K* src)
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
 * Configure and implement 'OctetSequence32K' sequence class.
 */
#define T            OctetSequence32K
#define TSeq         OctetSequence32KSeq
#define T_initialize_w_params ::rapid::OctetSequence32K_initialize_w_params
#define T_finalize_w_params   ::rapid::OctetSequence32K_finalize_w_params
#define T_copy       ::rapid::OctetSequence32K_copy


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

DDS_TypeCode* OctetSequence64K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence64K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(65536,NULL);

    static DDS_TypeCode OctetSequence64K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::OctetSequence64K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence64K */

    if (is_initialized) {
        return &OctetSequence64K_g_tc;
    }

    OctetSequence64K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence64K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence64K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence64K_g_tc;
}


RTIBool OctetSequence64K_initialize(
    OctetSequence64K* sample)
{
    return ::rapid::OctetSequence64K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence64K_initialize_ex(
    OctetSequence64K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OctetSequence64K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence64K_initialize_w_params(
        OctetSequence64K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (65536))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence64K_finalize(
    OctetSequence64K* sample)
{
    ::rapid::OctetSequence64K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence64K_finalize_ex(
    OctetSequence64K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OctetSequence64K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence64K_finalize_w_params(
    OctetSequence64K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence64K_finalize_optional_members(
    OctetSequence64K* sample, RTIBool deletePointers)
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

RTIBool OctetSequence64K_copy(
    OctetSequence64K* dst,
    const OctetSequence64K* src)
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
 * Configure and implement 'OctetSequence64K' sequence class.
 */
#define T            OctetSequence64K
#define TSeq         OctetSequence64KSeq
#define T_initialize_w_params ::rapid::OctetSequence64K_initialize_w_params
#define T_finalize_w_params   ::rapid::OctetSequence64K_finalize_w_params
#define T_copy       ::rapid::OctetSequence64K_copy


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

DDS_TypeCode* OctetSequence128K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetSequence128K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(131072,NULL);

    static DDS_TypeCode OctetSequence128K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::OctetSequence128K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetSequence128K */

    if (is_initialized) {
        return &OctetSequence128K_g_tc;
    }

    OctetSequence128K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    OctetSequence128K_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetSequence128K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetSequence128K_g_tc;
}


RTIBool OctetSequence128K_initialize(
    OctetSequence128K* sample)
{
    return ::rapid::OctetSequence128K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetSequence128K_initialize_ex(
    OctetSequence128K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OctetSequence128K_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetSequence128K_initialize_w_params(
        OctetSequence128K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (131072))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void OctetSequence128K_finalize(
    OctetSequence128K* sample)
{
    ::rapid::OctetSequence128K_finalize_ex(sample,RTI_TRUE);
}
 
void OctetSequence128K_finalize_ex(
    OctetSequence128K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OctetSequence128K_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetSequence128K_finalize_w_params(
    OctetSequence128K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void OctetSequence128K_finalize_optional_members(
    OctetSequence128K* sample, RTIBool deletePointers)
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

RTIBool OctetSequence128K_copy(
    OctetSequence128K* dst,
    const OctetSequence128K* src)
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
 * Configure and implement 'OctetSequence128K' sequence class.
 */
#define T            OctetSequence128K
#define TSeq         OctetSequence128KSeq
#define T_initialize_w_params ::rapid::OctetSequence128K_initialize_w_params
#define T_finalize_w_params   ::rapid::OctetSequence128K_finalize_w_params
#define T_copy       ::rapid::OctetSequence128K_copy


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

DDS_TypeCode* ShortSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode ShortSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence32 */

    if (is_initialized) {
        return &ShortSequence32_g_tc;
    }

    ShortSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence32_g_tc;
}


RTIBool ShortSequence32_initialize(
    ShortSequence32* sample)
{
    return ::rapid::ShortSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence32_initialize_ex(
    ShortSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence32_initialize_w_params(
        ShortSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (32))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence32_finalize(
    ShortSequence32* sample)
{
    ::rapid::ShortSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence32_finalize_ex(
    ShortSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence32_finalize_w_params(
    ShortSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence32_finalize_optional_members(
    ShortSequence32* sample, RTIBool deletePointers)
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

RTIBool ShortSequence32_copy(
    ShortSequence32* dst,
    const ShortSequence32* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence32' sequence class.
 */
#define T            ShortSequence32
#define TSeq         ShortSequence32Seq
#define T_initialize_w_params ::rapid::ShortSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence32_finalize_w_params
#define T_copy       ::rapid::ShortSequence32_copy


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

DDS_TypeCode* ShortSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode ShortSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence64 */

    if (is_initialized) {
        return &ShortSequence64_g_tc;
    }

    ShortSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence64_g_tc;
}


RTIBool ShortSequence64_initialize(
    ShortSequence64* sample)
{
    return ::rapid::ShortSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence64_initialize_ex(
    ShortSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence64_initialize_w_params(
        ShortSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (64))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence64_finalize(
    ShortSequence64* sample)
{
    ::rapid::ShortSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence64_finalize_ex(
    ShortSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence64_finalize_w_params(
    ShortSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence64_finalize_optional_members(
    ShortSequence64* sample, RTIBool deletePointers)
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

RTIBool ShortSequence64_copy(
    ShortSequence64* dst,
    const ShortSequence64* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence64' sequence class.
 */
#define T            ShortSequence64
#define TSeq         ShortSequence64Seq
#define T_initialize_w_params ::rapid::ShortSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence64_finalize_w_params
#define T_copy       ::rapid::ShortSequence64_copy


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

DDS_TypeCode* ShortSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode ShortSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence128 */

    if (is_initialized) {
        return &ShortSequence128_g_tc;
    }

    ShortSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence128_g_tc;
}


RTIBool ShortSequence128_initialize(
    ShortSequence128* sample)
{
    return ::rapid::ShortSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence128_initialize_ex(
    ShortSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence128_initialize_w_params(
        ShortSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (128))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence128_finalize(
    ShortSequence128* sample)
{
    ::rapid::ShortSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence128_finalize_ex(
    ShortSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence128_finalize_w_params(
    ShortSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence128_finalize_optional_members(
    ShortSequence128* sample, RTIBool deletePointers)
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

RTIBool ShortSequence128_copy(
    ShortSequence128* dst,
    const ShortSequence128* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence128' sequence class.
 */
#define T            ShortSequence128
#define TSeq         ShortSequence128Seq
#define T_initialize_w_params ::rapid::ShortSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence128_finalize_w_params
#define T_copy       ::rapid::ShortSequence128_copy


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

DDS_TypeCode* ShortSequence1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence1K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1024,NULL);

    static DDS_TypeCode ShortSequence1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence1K */

    if (is_initialized) {
        return &ShortSequence1K_g_tc;
    }

    ShortSequence1K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence1K_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence1K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence1K_g_tc;
}


RTIBool ShortSequence1K_initialize(
    ShortSequence1K* sample)
{
    return ::rapid::ShortSequence1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence1K_initialize_ex(
    ShortSequence1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence1K_initialize_w_params(
        ShortSequence1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (1024))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence1K_finalize(
    ShortSequence1K* sample)
{
    ::rapid::ShortSequence1K_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence1K_finalize_ex(
    ShortSequence1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence1K_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence1K_finalize_w_params(
    ShortSequence1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence1K_finalize_optional_members(
    ShortSequence1K* sample, RTIBool deletePointers)
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

RTIBool ShortSequence1K_copy(
    ShortSequence1K* dst,
    const ShortSequence1K* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence1K' sequence class.
 */
#define T            ShortSequence1K
#define TSeq         ShortSequence1KSeq
#define T_initialize_w_params ::rapid::ShortSequence1K_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence1K_finalize_w_params
#define T_copy       ::rapid::ShortSequence1K_copy


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

DDS_TypeCode* ShortSequence2K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence2K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(2048,NULL);

    static DDS_TypeCode ShortSequence2K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence2K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence2K */

    if (is_initialized) {
        return &ShortSequence2K_g_tc;
    }

    ShortSequence2K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence2K_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence2K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence2K_g_tc;
}


RTIBool ShortSequence2K_initialize(
    ShortSequence2K* sample)
{
    return ::rapid::ShortSequence2K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence2K_initialize_ex(
    ShortSequence2K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence2K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence2K_initialize_w_params(
        ShortSequence2K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (2048))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence2K_finalize(
    ShortSequence2K* sample)
{
    ::rapid::ShortSequence2K_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence2K_finalize_ex(
    ShortSequence2K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence2K_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence2K_finalize_w_params(
    ShortSequence2K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence2K_finalize_optional_members(
    ShortSequence2K* sample, RTIBool deletePointers)
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

RTIBool ShortSequence2K_copy(
    ShortSequence2K* dst,
    const ShortSequence2K* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence2K' sequence class.
 */
#define T            ShortSequence2K
#define TSeq         ShortSequence2KSeq
#define T_initialize_w_params ::rapid::ShortSequence2K_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence2K_finalize_w_params
#define T_copy       ::rapid::ShortSequence2K_copy


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

DDS_TypeCode* ShortSequence4K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence4K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(4096,NULL);

    static DDS_TypeCode ShortSequence4K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence4K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence4K */

    if (is_initialized) {
        return &ShortSequence4K_g_tc;
    }

    ShortSequence4K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence4K_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence4K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence4K_g_tc;
}


RTIBool ShortSequence4K_initialize(
    ShortSequence4K* sample)
{
    return ::rapid::ShortSequence4K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence4K_initialize_ex(
    ShortSequence4K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence4K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence4K_initialize_w_params(
        ShortSequence4K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (4096))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence4K_finalize(
    ShortSequence4K* sample)
{
    ::rapid::ShortSequence4K_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence4K_finalize_ex(
    ShortSequence4K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence4K_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence4K_finalize_w_params(
    ShortSequence4K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence4K_finalize_optional_members(
    ShortSequence4K* sample, RTIBool deletePointers)
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

RTIBool ShortSequence4K_copy(
    ShortSequence4K* dst,
    const ShortSequence4K* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence4K' sequence class.
 */
#define T            ShortSequence4K
#define TSeq         ShortSequence4KSeq
#define T_initialize_w_params ::rapid::ShortSequence4K_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence4K_finalize_w_params
#define T_copy       ::rapid::ShortSequence4K_copy


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

DDS_TypeCode* ShortSequence32K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence32K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32768,NULL);

    static DDS_TypeCode ShortSequence32K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence32K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence32K */

    if (is_initialized) {
        return &ShortSequence32K_g_tc;
    }

    ShortSequence32K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence32K_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence32K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence32K_g_tc;
}


RTIBool ShortSequence32K_initialize(
    ShortSequence32K* sample)
{
    return ::rapid::ShortSequence32K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence32K_initialize_ex(
    ShortSequence32K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence32K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence32K_initialize_w_params(
        ShortSequence32K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (32768))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence32K_finalize(
    ShortSequence32K* sample)
{
    ::rapid::ShortSequence32K_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence32K_finalize_ex(
    ShortSequence32K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence32K_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence32K_finalize_w_params(
    ShortSequence32K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence32K_finalize_optional_members(
    ShortSequence32K* sample, RTIBool deletePointers)
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

RTIBool ShortSequence32K_copy(
    ShortSequence32K* dst,
    const ShortSequence32K* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence32K' sequence class.
 */
#define T            ShortSequence32K
#define TSeq         ShortSequence32KSeq
#define T_initialize_w_params ::rapid::ShortSequence32K_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence32K_finalize_w_params
#define T_copy       ::rapid::ShortSequence32K_copy


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

DDS_TypeCode* ShortSequence64K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence64K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(65536,NULL);

    static DDS_TypeCode ShortSequence64K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence64K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence64K */

    if (is_initialized) {
        return &ShortSequence64K_g_tc;
    }

    ShortSequence64K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence64K_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence64K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence64K_g_tc;
}


RTIBool ShortSequence64K_initialize(
    ShortSequence64K* sample)
{
    return ::rapid::ShortSequence64K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence64K_initialize_ex(
    ShortSequence64K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence64K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence64K_initialize_w_params(
        ShortSequence64K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (65536))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence64K_finalize(
    ShortSequence64K* sample)
{
    ::rapid::ShortSequence64K_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence64K_finalize_ex(
    ShortSequence64K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence64K_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence64K_finalize_w_params(
    ShortSequence64K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence64K_finalize_optional_members(
    ShortSequence64K* sample, RTIBool deletePointers)
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

RTIBool ShortSequence64K_copy(
    ShortSequence64K* dst,
    const ShortSequence64K* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence64K' sequence class.
 */
#define T            ShortSequence64K
#define TSeq         ShortSequence64KSeq
#define T_initialize_w_params ::rapid::ShortSequence64K_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence64K_finalize_w_params
#define T_copy       ::rapid::ShortSequence64K_copy


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

DDS_TypeCode* ShortSequence96K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence96K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(98304,NULL);

    static DDS_TypeCode ShortSequence96K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence96K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence96K */

    if (is_initialized) {
        return &ShortSequence96K_g_tc;
    }

    ShortSequence96K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence96K_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence96K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence96K_g_tc;
}


RTIBool ShortSequence96K_initialize(
    ShortSequence96K* sample)
{
    return ::rapid::ShortSequence96K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence96K_initialize_ex(
    ShortSequence96K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence96K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence96K_initialize_w_params(
        ShortSequence96K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (98304))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence96K_finalize(
    ShortSequence96K* sample)
{
    ::rapid::ShortSequence96K_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence96K_finalize_ex(
    ShortSequence96K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence96K_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence96K_finalize_w_params(
    ShortSequence96K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence96K_finalize_optional_members(
    ShortSequence96K* sample, RTIBool deletePointers)
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

RTIBool ShortSequence96K_copy(
    ShortSequence96K* dst,
    const ShortSequence96K* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence96K' sequence class.
 */
#define T            ShortSequence96K
#define TSeq         ShortSequence96KSeq
#define T_initialize_w_params ::rapid::ShortSequence96K_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence96K_finalize_w_params
#define T_copy       ::rapid::ShortSequence96K_copy


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

DDS_TypeCode* ShortSequence128K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortSequence128K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(131072,NULL);

    static DDS_TypeCode ShortSequence128K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ShortSequence128K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortSequence128K */

    if (is_initialized) {
        return &ShortSequence128K_g_tc;
    }

    ShortSequence128K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    ShortSequence128K_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortSequence128K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortSequence128K_g_tc;
}


RTIBool ShortSequence128K_initialize(
    ShortSequence128K* sample)
{
    return ::rapid::ShortSequence128K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortSequence128K_initialize_ex(
    ShortSequence128K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ShortSequence128K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortSequence128K_initialize_w_params(
        ShortSequence128K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_ShortSeq_initialize(sample);
        if (!DDS_ShortSeq_set_maximum(sample,
                (131072))) {
            return RTI_FALSE;
        }
    } else {
        DDS_ShortSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ShortSequence128K_finalize(
    ShortSequence128K* sample)
{
    ::rapid::ShortSequence128K_finalize_ex(sample,RTI_TRUE);
}
 
void ShortSequence128K_finalize_ex(
    ShortSequence128K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ShortSequence128K_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortSequence128K_finalize_w_params(
    ShortSequence128K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_ShortSeq_finalize(sample);
            

}

void ShortSequence128K_finalize_optional_members(
    ShortSequence128K* sample, RTIBool deletePointers)
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

RTIBool ShortSequence128K_copy(
    ShortSequence128K* dst,
    const ShortSequence128K* src)
{

    if (!DDS_ShortSeq_copy(dst,
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
 * Configure and implement 'ShortSequence128K' sequence class.
 */
#define T            ShortSequence128K
#define TSeq         ShortSequence128KSeq
#define T_initialize_w_params ::rapid::ShortSequence128K_initialize_w_params
#define T_finalize_w_params   ::rapid::ShortSequence128K_finalize_w_params
#define T_copy       ::rapid::ShortSequence128K_copy


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

DDS_TypeCode* LongSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode LongSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongSequence32 */

    if (is_initialized) {
        return &LongSequence32_g_tc;
    }

    LongSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    LongSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&LongSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongSequence32_g_tc;
}


RTIBool LongSequence32_initialize(
    LongSequence32* sample)
{
    return ::rapid::LongSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongSequence32_initialize_ex(
    LongSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongSequence32_initialize_w_params(
        LongSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (32))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongSequence32_finalize(
    LongSequence32* sample)
{
    ::rapid::LongSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void LongSequence32_finalize_ex(
    LongSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void LongSequence32_finalize_w_params(
    LongSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongSeq_finalize(sample);
            

}

void LongSequence32_finalize_optional_members(
    LongSequence32* sample, RTIBool deletePointers)
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

RTIBool LongSequence32_copy(
    LongSequence32* dst,
    const LongSequence32* src)
{

    if (!DDS_LongSeq_copy(dst,
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
 * Configure and implement 'LongSequence32' sequence class.
 */
#define T            LongSequence32
#define TSeq         LongSequence32Seq
#define T_initialize_w_params ::rapid::LongSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::LongSequence32_finalize_w_params
#define T_copy       ::rapid::LongSequence32_copy


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

DDS_TypeCode* LongSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode LongSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongSequence64 */

    if (is_initialized) {
        return &LongSequence64_g_tc;
    }

    LongSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    LongSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&LongSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongSequence64_g_tc;
}


RTIBool LongSequence64_initialize(
    LongSequence64* sample)
{
    return ::rapid::LongSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongSequence64_initialize_ex(
    LongSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongSequence64_initialize_w_params(
        LongSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (64))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongSequence64_finalize(
    LongSequence64* sample)
{
    ::rapid::LongSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void LongSequence64_finalize_ex(
    LongSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void LongSequence64_finalize_w_params(
    LongSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongSeq_finalize(sample);
            

}

void LongSequence64_finalize_optional_members(
    LongSequence64* sample, RTIBool deletePointers)
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

RTIBool LongSequence64_copy(
    LongSequence64* dst,
    const LongSequence64* src)
{

    if (!DDS_LongSeq_copy(dst,
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
 * Configure and implement 'LongSequence64' sequence class.
 */
#define T            LongSequence64
#define TSeq         LongSequence64Seq
#define T_initialize_w_params ::rapid::LongSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::LongSequence64_finalize_w_params
#define T_copy       ::rapid::LongSequence64_copy


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

DDS_TypeCode* LongSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode LongSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongSequence128 */

    if (is_initialized) {
        return &LongSequence128_g_tc;
    }

    LongSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    LongSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&LongSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongSequence128_g_tc;
}


RTIBool LongSequence128_initialize(
    LongSequence128* sample)
{
    return ::rapid::LongSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongSequence128_initialize_ex(
    LongSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongSequence128_initialize_w_params(
        LongSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (128))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongSequence128_finalize(
    LongSequence128* sample)
{
    ::rapid::LongSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void LongSequence128_finalize_ex(
    LongSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void LongSequence128_finalize_w_params(
    LongSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongSeq_finalize(sample);
            

}

void LongSequence128_finalize_optional_members(
    LongSequence128* sample, RTIBool deletePointers)
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

RTIBool LongSequence128_copy(
    LongSequence128* dst,
    const LongSequence128* src)
{

    if (!DDS_LongSeq_copy(dst,
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
 * Configure and implement 'LongSequence128' sequence class.
 */
#define T            LongSequence128
#define TSeq         LongSequence128Seq
#define T_initialize_w_params ::rapid::LongSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::LongSequence128_finalize_w_params
#define T_copy       ::rapid::LongSequence128_copy


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

DDS_TypeCode* LongSequence256_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongSequence256_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(256,NULL);

    static DDS_TypeCode LongSequence256_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongSequence256", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongSequence256 */

    if (is_initialized) {
        return &LongSequence256_g_tc;
    }

    LongSequence256_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    LongSequence256_g_tc._data._typeCode = (RTICdrTypeCode *)&LongSequence256_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongSequence256_g_tc;
}


RTIBool LongSequence256_initialize(
    LongSequence256* sample)
{
    return ::rapid::LongSequence256_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongSequence256_initialize_ex(
    LongSequence256* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongSequence256_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongSequence256_initialize_w_params(
        LongSequence256* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (256))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongSequence256_finalize(
    LongSequence256* sample)
{
    ::rapid::LongSequence256_finalize_ex(sample,RTI_TRUE);
}
 
void LongSequence256_finalize_ex(
    LongSequence256* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongSequence256_finalize_w_params(
        sample,&deallocParams);
}
           
void LongSequence256_finalize_w_params(
    LongSequence256* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongSeq_finalize(sample);
            

}

void LongSequence256_finalize_optional_members(
    LongSequence256* sample, RTIBool deletePointers)
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

RTIBool LongSequence256_copy(
    LongSequence256* dst,
    const LongSequence256* src)
{

    if (!DDS_LongSeq_copy(dst,
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
 * Configure and implement 'LongSequence256' sequence class.
 */
#define T            LongSequence256
#define TSeq         LongSequence256Seq
#define T_initialize_w_params ::rapid::LongSequence256_initialize_w_params
#define T_finalize_w_params   ::rapid::LongSequence256_finalize_w_params
#define T_copy       ::rapid::LongSequence256_copy


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

DDS_TypeCode* LongSequence512_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongSequence512_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(512,NULL);

    static DDS_TypeCode LongSequence512_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongSequence512", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongSequence512 */

    if (is_initialized) {
        return &LongSequence512_g_tc;
    }

    LongSequence512_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    LongSequence512_g_tc._data._typeCode = (RTICdrTypeCode *)&LongSequence512_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongSequence512_g_tc;
}


RTIBool LongSequence512_initialize(
    LongSequence512* sample)
{
    return ::rapid::LongSequence512_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongSequence512_initialize_ex(
    LongSequence512* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongSequence512_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongSequence512_initialize_w_params(
        LongSequence512* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (512))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongSequence512_finalize(
    LongSequence512* sample)
{
    ::rapid::LongSequence512_finalize_ex(sample,RTI_TRUE);
}
 
void LongSequence512_finalize_ex(
    LongSequence512* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongSequence512_finalize_w_params(
        sample,&deallocParams);
}
           
void LongSequence512_finalize_w_params(
    LongSequence512* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongSeq_finalize(sample);
            

}

void LongSequence512_finalize_optional_members(
    LongSequence512* sample, RTIBool deletePointers)
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

RTIBool LongSequence512_copy(
    LongSequence512* dst,
    const LongSequence512* src)
{

    if (!DDS_LongSeq_copy(dst,
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
 * Configure and implement 'LongSequence512' sequence class.
 */
#define T            LongSequence512
#define TSeq         LongSequence512Seq
#define T_initialize_w_params ::rapid::LongSequence512_initialize_w_params
#define T_finalize_w_params   ::rapid::LongSequence512_finalize_w_params
#define T_copy       ::rapid::LongSequence512_copy


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

DDS_TypeCode* LongSequence1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongSequence1K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1024,NULL);

    static DDS_TypeCode LongSequence1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongSequence1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongSequence1K */

    if (is_initialized) {
        return &LongSequence1K_g_tc;
    }

    LongSequence1K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    LongSequence1K_g_tc._data._typeCode = (RTICdrTypeCode *)&LongSequence1K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongSequence1K_g_tc;
}


RTIBool LongSequence1K_initialize(
    LongSequence1K* sample)
{
    return ::rapid::LongSequence1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongSequence1K_initialize_ex(
    LongSequence1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongSequence1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongSequence1K_initialize_w_params(
        LongSequence1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (1024))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongSequence1K_finalize(
    LongSequence1K* sample)
{
    ::rapid::LongSequence1K_finalize_ex(sample,RTI_TRUE);
}
 
void LongSequence1K_finalize_ex(
    LongSequence1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongSequence1K_finalize_w_params(
        sample,&deallocParams);
}
           
void LongSequence1K_finalize_w_params(
    LongSequence1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongSeq_finalize(sample);
            

}

void LongSequence1K_finalize_optional_members(
    LongSequence1K* sample, RTIBool deletePointers)
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

RTIBool LongSequence1K_copy(
    LongSequence1K* dst,
    const LongSequence1K* src)
{

    if (!DDS_LongSeq_copy(dst,
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
 * Configure and implement 'LongSequence1K' sequence class.
 */
#define T            LongSequence1K
#define TSeq         LongSequence1KSeq
#define T_initialize_w_params ::rapid::LongSequence1K_initialize_w_params
#define T_finalize_w_params   ::rapid::LongSequence1K_finalize_w_params
#define T_copy       ::rapid::LongSequence1K_copy


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

DDS_TypeCode* LongSequence2K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongSequence2K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(2048,NULL);

    static DDS_TypeCode LongSequence2K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongSequence2K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongSequence2K */

    if (is_initialized) {
        return &LongSequence2K_g_tc;
    }

    LongSequence2K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    LongSequence2K_g_tc._data._typeCode = (RTICdrTypeCode *)&LongSequence2K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongSequence2K_g_tc;
}


RTIBool LongSequence2K_initialize(
    LongSequence2K* sample)
{
    return ::rapid::LongSequence2K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongSequence2K_initialize_ex(
    LongSequence2K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongSequence2K_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongSequence2K_initialize_w_params(
        LongSequence2K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (2048))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongSequence2K_finalize(
    LongSequence2K* sample)
{
    ::rapid::LongSequence2K_finalize_ex(sample,RTI_TRUE);
}
 
void LongSequence2K_finalize_ex(
    LongSequence2K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongSequence2K_finalize_w_params(
        sample,&deallocParams);
}
           
void LongSequence2K_finalize_w_params(
    LongSequence2K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongSeq_finalize(sample);
            

}

void LongSequence2K_finalize_optional_members(
    LongSequence2K* sample, RTIBool deletePointers)
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

RTIBool LongSequence2K_copy(
    LongSequence2K* dst,
    const LongSequence2K* src)
{

    if (!DDS_LongSeq_copy(dst,
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
 * Configure and implement 'LongSequence2K' sequence class.
 */
#define T            LongSequence2K
#define TSeq         LongSequence2KSeq
#define T_initialize_w_params ::rapid::LongSequence2K_initialize_w_params
#define T_finalize_w_params   ::rapid::LongSequence2K_finalize_w_params
#define T_copy       ::rapid::LongSequence2K_copy


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

DDS_TypeCode* LongLongSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongLongSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode LongLongSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongLongSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongLongSequence32 */

    if (is_initialized) {
        return &LongLongSequence32_g_tc;
    }

    LongLongSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    LongLongSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&LongLongSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongLongSequence32_g_tc;
}


RTIBool LongLongSequence32_initialize(
    LongLongSequence32* sample)
{
    return ::rapid::LongLongSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongLongSequence32_initialize_ex(
    LongLongSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongLongSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongLongSequence32_initialize_w_params(
        LongLongSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongLongSeq_initialize(sample);
        if (!DDS_LongLongSeq_set_maximum(sample,
                (32))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongLongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongLongSequence32_finalize(
    LongLongSequence32* sample)
{
    ::rapid::LongLongSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void LongLongSequence32_finalize_ex(
    LongLongSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongLongSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void LongLongSequence32_finalize_w_params(
    LongLongSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongLongSeq_finalize(sample);
            

}

void LongLongSequence32_finalize_optional_members(
    LongLongSequence32* sample, RTIBool deletePointers)
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

RTIBool LongLongSequence32_copy(
    LongLongSequence32* dst,
    const LongLongSequence32* src)
{

    if (!DDS_LongLongSeq_copy(dst,
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
 * Configure and implement 'LongLongSequence32' sequence class.
 */
#define T            LongLongSequence32
#define TSeq         LongLongSequence32Seq
#define T_initialize_w_params ::rapid::LongLongSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::LongLongSequence32_finalize_w_params
#define T_copy       ::rapid::LongLongSequence32_copy


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

DDS_TypeCode* LongLongSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongLongSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode LongLongSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongLongSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongLongSequence64 */

    if (is_initialized) {
        return &LongLongSequence64_g_tc;
    }

    LongLongSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    LongLongSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&LongLongSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongLongSequence64_g_tc;
}


RTIBool LongLongSequence64_initialize(
    LongLongSequence64* sample)
{
    return ::rapid::LongLongSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongLongSequence64_initialize_ex(
    LongLongSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongLongSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongLongSequence64_initialize_w_params(
        LongLongSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongLongSeq_initialize(sample);
        if (!DDS_LongLongSeq_set_maximum(sample,
                (64))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongLongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongLongSequence64_finalize(
    LongLongSequence64* sample)
{
    ::rapid::LongLongSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void LongLongSequence64_finalize_ex(
    LongLongSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongLongSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void LongLongSequence64_finalize_w_params(
    LongLongSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongLongSeq_finalize(sample);
            

}

void LongLongSequence64_finalize_optional_members(
    LongLongSequence64* sample, RTIBool deletePointers)
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

RTIBool LongLongSequence64_copy(
    LongLongSequence64* dst,
    const LongLongSequence64* src)
{

    if (!DDS_LongLongSeq_copy(dst,
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
 * Configure and implement 'LongLongSequence64' sequence class.
 */
#define T            LongLongSequence64
#define TSeq         LongLongSequence64Seq
#define T_initialize_w_params ::rapid::LongLongSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::LongLongSequence64_finalize_w_params
#define T_copy       ::rapid::LongLongSequence64_copy


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

DDS_TypeCode* LongLongSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode LongLongSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode LongLongSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::LongLongSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for LongLongSequence128 */

    if (is_initialized) {
        return &LongLongSequence128_g_tc;
    }

    LongLongSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    LongLongSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&LongLongSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &LongLongSequence128_g_tc;
}


RTIBool LongLongSequence128_initialize(
    LongLongSequence128* sample)
{
    return ::rapid::LongLongSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool LongLongSequence128_initialize_ex(
    LongLongSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::LongLongSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool LongLongSequence128_initialize_w_params(
        LongLongSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_LongLongSeq_initialize(sample);
        if (!DDS_LongLongSeq_set_maximum(sample,
                (128))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongLongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void LongLongSequence128_finalize(
    LongLongSequence128* sample)
{
    ::rapid::LongLongSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void LongLongSequence128_finalize_ex(
    LongLongSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::LongLongSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void LongLongSequence128_finalize_w_params(
    LongLongSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_LongLongSeq_finalize(sample);
            

}

void LongLongSequence128_finalize_optional_members(
    LongLongSequence128* sample, RTIBool deletePointers)
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

RTIBool LongLongSequence128_copy(
    LongLongSequence128* dst,
    const LongLongSequence128* src)
{

    if (!DDS_LongLongSeq_copy(dst,
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
 * Configure and implement 'LongLongSequence128' sequence class.
 */
#define T            LongLongSequence128
#define TSeq         LongLongSequence128Seq
#define T_initialize_w_params ::rapid::LongLongSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::LongLongSequence128_finalize_w_params
#define T_copy       ::rapid::LongLongSequence128_copy


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

DDS_TypeCode* FloatSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FloatSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode FloatSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::FloatSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatSequence32 */

    if (is_initialized) {
        return &FloatSequence32_g_tc;
    }

    FloatSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&FloatSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FloatSequence32_g_tc;
}


RTIBool FloatSequence32_initialize(
    FloatSequence32* sample)
{
    return ::rapid::FloatSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FloatSequence32_initialize_ex(
    FloatSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatSequence32_initialize_w_params(
        FloatSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_FloatSeq_initialize(sample);
        if (!DDS_FloatSeq_set_maximum(sample,
                (32))) {
            return RTI_FALSE;
        }
    } else {
        DDS_FloatSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void FloatSequence32_finalize(
    FloatSequence32* sample)
{
    ::rapid::FloatSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void FloatSequence32_finalize_ex(
    FloatSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void FloatSequence32_finalize_w_params(
    FloatSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_FloatSeq_finalize(sample);
            

}

void FloatSequence32_finalize_optional_members(
    FloatSequence32* sample, RTIBool deletePointers)
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

RTIBool FloatSequence32_copy(
    FloatSequence32* dst,
    const FloatSequence32* src)
{

    if (!DDS_FloatSeq_copy(dst,
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
 * Configure and implement 'FloatSequence32' sequence class.
 */
#define T            FloatSequence32
#define TSeq         FloatSequence32Seq
#define T_initialize_w_params ::rapid::FloatSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatSequence32_finalize_w_params
#define T_copy       ::rapid::FloatSequence32_copy


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

DDS_TypeCode* FloatSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FloatSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode FloatSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::FloatSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatSequence64 */

    if (is_initialized) {
        return &FloatSequence64_g_tc;
    }

    FloatSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&FloatSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FloatSequence64_g_tc;
}


RTIBool FloatSequence64_initialize(
    FloatSequence64* sample)
{
    return ::rapid::FloatSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FloatSequence64_initialize_ex(
    FloatSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatSequence64_initialize_w_params(
        FloatSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_FloatSeq_initialize(sample);
        if (!DDS_FloatSeq_set_maximum(sample,
                (64))) {
            return RTI_FALSE;
        }
    } else {
        DDS_FloatSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void FloatSequence64_finalize(
    FloatSequence64* sample)
{
    ::rapid::FloatSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void FloatSequence64_finalize_ex(
    FloatSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void FloatSequence64_finalize_w_params(
    FloatSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_FloatSeq_finalize(sample);
            

}

void FloatSequence64_finalize_optional_members(
    FloatSequence64* sample, RTIBool deletePointers)
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

RTIBool FloatSequence64_copy(
    FloatSequence64* dst,
    const FloatSequence64* src)
{

    if (!DDS_FloatSeq_copy(dst,
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
 * Configure and implement 'FloatSequence64' sequence class.
 */
#define T            FloatSequence64
#define TSeq         FloatSequence64Seq
#define T_initialize_w_params ::rapid::FloatSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatSequence64_finalize_w_params
#define T_copy       ::rapid::FloatSequence64_copy


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

DDS_TypeCode* FloatSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FloatSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode FloatSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::FloatSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatSequence128 */

    if (is_initialized) {
        return &FloatSequence128_g_tc;
    }

    FloatSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&FloatSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FloatSequence128_g_tc;
}


RTIBool FloatSequence128_initialize(
    FloatSequence128* sample)
{
    return ::rapid::FloatSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FloatSequence128_initialize_ex(
    FloatSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatSequence128_initialize_w_params(
        FloatSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_FloatSeq_initialize(sample);
        if (!DDS_FloatSeq_set_maximum(sample,
                (128))) {
            return RTI_FALSE;
        }
    } else {
        DDS_FloatSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void FloatSequence128_finalize(
    FloatSequence128* sample)
{
    ::rapid::FloatSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void FloatSequence128_finalize_ex(
    FloatSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void FloatSequence128_finalize_w_params(
    FloatSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_FloatSeq_finalize(sample);
            

}

void FloatSequence128_finalize_optional_members(
    FloatSequence128* sample, RTIBool deletePointers)
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

RTIBool FloatSequence128_copy(
    FloatSequence128* dst,
    const FloatSequence128* src)
{

    if (!DDS_FloatSeq_copy(dst,
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
 * Configure and implement 'FloatSequence128' sequence class.
 */
#define T            FloatSequence128
#define TSeq         FloatSequence128Seq
#define T_initialize_w_params ::rapid::FloatSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatSequence128_finalize_w_params
#define T_copy       ::rapid::FloatSequence128_copy


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

DDS_TypeCode* FloatSequence256_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FloatSequence256_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(256,NULL);

    static DDS_TypeCode FloatSequence256_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::FloatSequence256", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatSequence256 */

    if (is_initialized) {
        return &FloatSequence256_g_tc;
    }

    FloatSequence256_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatSequence256_g_tc._data._typeCode = (RTICdrTypeCode *)&FloatSequence256_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FloatSequence256_g_tc;
}


RTIBool FloatSequence256_initialize(
    FloatSequence256* sample)
{
    return ::rapid::FloatSequence256_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FloatSequence256_initialize_ex(
    FloatSequence256* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatSequence256_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatSequence256_initialize_w_params(
        FloatSequence256* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_FloatSeq_initialize(sample);
        if (!DDS_FloatSeq_set_maximum(sample,
                (256))) {
            return RTI_FALSE;
        }
    } else {
        DDS_FloatSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void FloatSequence256_finalize(
    FloatSequence256* sample)
{
    ::rapid::FloatSequence256_finalize_ex(sample,RTI_TRUE);
}
 
void FloatSequence256_finalize_ex(
    FloatSequence256* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatSequence256_finalize_w_params(
        sample,&deallocParams);
}
           
void FloatSequence256_finalize_w_params(
    FloatSequence256* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_FloatSeq_finalize(sample);
            

}

void FloatSequence256_finalize_optional_members(
    FloatSequence256* sample, RTIBool deletePointers)
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

RTIBool FloatSequence256_copy(
    FloatSequence256* dst,
    const FloatSequence256* src)
{

    if (!DDS_FloatSeq_copy(dst,
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
 * Configure and implement 'FloatSequence256' sequence class.
 */
#define T            FloatSequence256
#define TSeq         FloatSequence256Seq
#define T_initialize_w_params ::rapid::FloatSequence256_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatSequence256_finalize_w_params
#define T_copy       ::rapid::FloatSequence256_copy


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

DDS_TypeCode* FloatSequence512_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FloatSequence512_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(512,NULL);

    static DDS_TypeCode FloatSequence512_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::FloatSequence512", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatSequence512 */

    if (is_initialized) {
        return &FloatSequence512_g_tc;
    }

    FloatSequence512_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatSequence512_g_tc._data._typeCode = (RTICdrTypeCode *)&FloatSequence512_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FloatSequence512_g_tc;
}


RTIBool FloatSequence512_initialize(
    FloatSequence512* sample)
{
    return ::rapid::FloatSequence512_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FloatSequence512_initialize_ex(
    FloatSequence512* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatSequence512_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatSequence512_initialize_w_params(
        FloatSequence512* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_FloatSeq_initialize(sample);
        if (!DDS_FloatSeq_set_maximum(sample,
                (512))) {
            return RTI_FALSE;
        }
    } else {
        DDS_FloatSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void FloatSequence512_finalize(
    FloatSequence512* sample)
{
    ::rapid::FloatSequence512_finalize_ex(sample,RTI_TRUE);
}
 
void FloatSequence512_finalize_ex(
    FloatSequence512* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatSequence512_finalize_w_params(
        sample,&deallocParams);
}
           
void FloatSequence512_finalize_w_params(
    FloatSequence512* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_FloatSeq_finalize(sample);
            

}

void FloatSequence512_finalize_optional_members(
    FloatSequence512* sample, RTIBool deletePointers)
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

RTIBool FloatSequence512_copy(
    FloatSequence512* dst,
    const FloatSequence512* src)
{

    if (!DDS_FloatSeq_copy(dst,
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
 * Configure and implement 'FloatSequence512' sequence class.
 */
#define T            FloatSequence512
#define TSeq         FloatSequence512Seq
#define T_initialize_w_params ::rapid::FloatSequence512_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatSequence512_finalize_w_params
#define T_copy       ::rapid::FloatSequence512_copy


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

DDS_TypeCode* FloatSequence1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FloatSequence1K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1024,NULL);

    static DDS_TypeCode FloatSequence1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::FloatSequence1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatSequence1K */

    if (is_initialized) {
        return &FloatSequence1K_g_tc;
    }

    FloatSequence1K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatSequence1K_g_tc._data._typeCode = (RTICdrTypeCode *)&FloatSequence1K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FloatSequence1K_g_tc;
}


RTIBool FloatSequence1K_initialize(
    FloatSequence1K* sample)
{
    return ::rapid::FloatSequence1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FloatSequence1K_initialize_ex(
    FloatSequence1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatSequence1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatSequence1K_initialize_w_params(
        FloatSequence1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_FloatSeq_initialize(sample);
        if (!DDS_FloatSeq_set_maximum(sample,
                (1024))) {
            return RTI_FALSE;
        }
    } else {
        DDS_FloatSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void FloatSequence1K_finalize(
    FloatSequence1K* sample)
{
    ::rapid::FloatSequence1K_finalize_ex(sample,RTI_TRUE);
}
 
void FloatSequence1K_finalize_ex(
    FloatSequence1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatSequence1K_finalize_w_params(
        sample,&deallocParams);
}
           
void FloatSequence1K_finalize_w_params(
    FloatSequence1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_FloatSeq_finalize(sample);
            

}

void FloatSequence1K_finalize_optional_members(
    FloatSequence1K* sample, RTIBool deletePointers)
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

RTIBool FloatSequence1K_copy(
    FloatSequence1K* dst,
    const FloatSequence1K* src)
{

    if (!DDS_FloatSeq_copy(dst,
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
 * Configure and implement 'FloatSequence1K' sequence class.
 */
#define T            FloatSequence1K
#define TSeq         FloatSequence1KSeq
#define T_initialize_w_params ::rapid::FloatSequence1K_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatSequence1K_finalize_w_params
#define T_copy       ::rapid::FloatSequence1K_copy


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

DDS_TypeCode* DoubleSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DoubleSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode DoubleSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::DoubleSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DoubleSequence32 */

    if (is_initialized) {
        return &DoubleSequence32_g_tc;
    }

    DoubleSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    DoubleSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&DoubleSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DoubleSequence32_g_tc;
}


RTIBool DoubleSequence32_initialize(
    DoubleSequence32* sample)
{
    return ::rapid::DoubleSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DoubleSequence32_initialize_ex(
    DoubleSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::DoubleSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool DoubleSequence32_initialize_w_params(
        DoubleSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_DoubleSeq_initialize(sample);
        if (!DDS_DoubleSeq_set_maximum(sample,
                (32))) {
            return RTI_FALSE;
        }
    } else {
        DDS_DoubleSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void DoubleSequence32_finalize(
    DoubleSequence32* sample)
{
    ::rapid::DoubleSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void DoubleSequence32_finalize_ex(
    DoubleSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::DoubleSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void DoubleSequence32_finalize_w_params(
    DoubleSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_DoubleSeq_finalize(sample);
            

}

void DoubleSequence32_finalize_optional_members(
    DoubleSequence32* sample, RTIBool deletePointers)
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

RTIBool DoubleSequence32_copy(
    DoubleSequence32* dst,
    const DoubleSequence32* src)
{

    if (!DDS_DoubleSeq_copy(dst,
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
 * Configure and implement 'DoubleSequence32' sequence class.
 */
#define T            DoubleSequence32
#define TSeq         DoubleSequence32Seq
#define T_initialize_w_params ::rapid::DoubleSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::DoubleSequence32_finalize_w_params
#define T_copy       ::rapid::DoubleSequence32_copy


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

DDS_TypeCode* DoubleSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DoubleSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode DoubleSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::DoubleSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DoubleSequence64 */

    if (is_initialized) {
        return &DoubleSequence64_g_tc;
    }

    DoubleSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    DoubleSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&DoubleSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DoubleSequence64_g_tc;
}


RTIBool DoubleSequence64_initialize(
    DoubleSequence64* sample)
{
    return ::rapid::DoubleSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DoubleSequence64_initialize_ex(
    DoubleSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::DoubleSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool DoubleSequence64_initialize_w_params(
        DoubleSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_DoubleSeq_initialize(sample);
        if (!DDS_DoubleSeq_set_maximum(sample,
                (64))) {
            return RTI_FALSE;
        }
    } else {
        DDS_DoubleSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void DoubleSequence64_finalize(
    DoubleSequence64* sample)
{
    ::rapid::DoubleSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void DoubleSequence64_finalize_ex(
    DoubleSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::DoubleSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void DoubleSequence64_finalize_w_params(
    DoubleSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_DoubleSeq_finalize(sample);
            

}

void DoubleSequence64_finalize_optional_members(
    DoubleSequence64* sample, RTIBool deletePointers)
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

RTIBool DoubleSequence64_copy(
    DoubleSequence64* dst,
    const DoubleSequence64* src)
{

    if (!DDS_DoubleSeq_copy(dst,
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
 * Configure and implement 'DoubleSequence64' sequence class.
 */
#define T            DoubleSequence64
#define TSeq         DoubleSequence64Seq
#define T_initialize_w_params ::rapid::DoubleSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::DoubleSequence64_finalize_w_params
#define T_copy       ::rapid::DoubleSequence64_copy


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

DDS_TypeCode* DoubleSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DoubleSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode DoubleSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::DoubleSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DoubleSequence128 */

    if (is_initialized) {
        return &DoubleSequence128_g_tc;
    }

    DoubleSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    DoubleSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&DoubleSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DoubleSequence128_g_tc;
}


RTIBool DoubleSequence128_initialize(
    DoubleSequence128* sample)
{
    return ::rapid::DoubleSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DoubleSequence128_initialize_ex(
    DoubleSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::DoubleSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool DoubleSequence128_initialize_w_params(
        DoubleSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_DoubleSeq_initialize(sample);
        if (!DDS_DoubleSeq_set_maximum(sample,
                (128))) {
            return RTI_FALSE;
        }
    } else {
        DDS_DoubleSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void DoubleSequence128_finalize(
    DoubleSequence128* sample)
{
    ::rapid::DoubleSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void DoubleSequence128_finalize_ex(
    DoubleSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::DoubleSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void DoubleSequence128_finalize_w_params(
    DoubleSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_DoubleSeq_finalize(sample);
            

}

void DoubleSequence128_finalize_optional_members(
    DoubleSequence128* sample, RTIBool deletePointers)
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

RTIBool DoubleSequence128_copy(
    DoubleSequence128* dst,
    const DoubleSequence128* src)
{

    if (!DDS_DoubleSeq_copy(dst,
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
 * Configure and implement 'DoubleSequence128' sequence class.
 */
#define T            DoubleSequence128
#define TSeq         DoubleSequence128Seq
#define T_initialize_w_params ::rapid::DoubleSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::DoubleSequence128_finalize_w_params
#define T_copy       ::rapid::DoubleSequence128_copy


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

DDS_TypeCode* DoubleSequence256_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DoubleSequence256_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(256,NULL);

    static DDS_TypeCode DoubleSequence256_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::DoubleSequence256", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DoubleSequence256 */

    if (is_initialized) {
        return &DoubleSequence256_g_tc;
    }

    DoubleSequence256_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    DoubleSequence256_g_tc._data._typeCode = (RTICdrTypeCode *)&DoubleSequence256_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DoubleSequence256_g_tc;
}


RTIBool DoubleSequence256_initialize(
    DoubleSequence256* sample)
{
    return ::rapid::DoubleSequence256_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DoubleSequence256_initialize_ex(
    DoubleSequence256* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::DoubleSequence256_initialize_w_params(
        sample,&allocParams);
}

RTIBool DoubleSequence256_initialize_w_params(
        DoubleSequence256* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_DoubleSeq_initialize(sample);
        if (!DDS_DoubleSeq_set_maximum(sample,
                (256))) {
            return RTI_FALSE;
        }
    } else {
        DDS_DoubleSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void DoubleSequence256_finalize(
    DoubleSequence256* sample)
{
    ::rapid::DoubleSequence256_finalize_ex(sample,RTI_TRUE);
}
 
void DoubleSequence256_finalize_ex(
    DoubleSequence256* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::DoubleSequence256_finalize_w_params(
        sample,&deallocParams);
}
           
void DoubleSequence256_finalize_w_params(
    DoubleSequence256* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_DoubleSeq_finalize(sample);
            

}

void DoubleSequence256_finalize_optional_members(
    DoubleSequence256* sample, RTIBool deletePointers)
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

RTIBool DoubleSequence256_copy(
    DoubleSequence256* dst,
    const DoubleSequence256* src)
{

    if (!DDS_DoubleSeq_copy(dst,
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
 * Configure and implement 'DoubleSequence256' sequence class.
 */
#define T            DoubleSequence256
#define TSeq         DoubleSequence256Seq
#define T_initialize_w_params ::rapid::DoubleSequence256_initialize_w_params
#define T_finalize_w_params   ::rapid::DoubleSequence256_finalize_w_params
#define T_copy       ::rapid::DoubleSequence256_copy


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

DDS_TypeCode* DoubleSequence512_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DoubleSequence512_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(512,NULL);

    static DDS_TypeCode DoubleSequence512_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::DoubleSequence512", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DoubleSequence512 */

    if (is_initialized) {
        return &DoubleSequence512_g_tc;
    }

    DoubleSequence512_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    DoubleSequence512_g_tc._data._typeCode = (RTICdrTypeCode *)&DoubleSequence512_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DoubleSequence512_g_tc;
}


RTIBool DoubleSequence512_initialize(
    DoubleSequence512* sample)
{
    return ::rapid::DoubleSequence512_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DoubleSequence512_initialize_ex(
    DoubleSequence512* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::DoubleSequence512_initialize_w_params(
        sample,&allocParams);
}

RTIBool DoubleSequence512_initialize_w_params(
        DoubleSequence512* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_DoubleSeq_initialize(sample);
        if (!DDS_DoubleSeq_set_maximum(sample,
                (512))) {
            return RTI_FALSE;
        }
    } else {
        DDS_DoubleSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void DoubleSequence512_finalize(
    DoubleSequence512* sample)
{
    ::rapid::DoubleSequence512_finalize_ex(sample,RTI_TRUE);
}
 
void DoubleSequence512_finalize_ex(
    DoubleSequence512* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::DoubleSequence512_finalize_w_params(
        sample,&deallocParams);
}
           
void DoubleSequence512_finalize_w_params(
    DoubleSequence512* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_DoubleSeq_finalize(sample);
            

}

void DoubleSequence512_finalize_optional_members(
    DoubleSequence512* sample, RTIBool deletePointers)
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

RTIBool DoubleSequence512_copy(
    DoubleSequence512* dst,
    const DoubleSequence512* src)
{

    if (!DDS_DoubleSeq_copy(dst,
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
 * Configure and implement 'DoubleSequence512' sequence class.
 */
#define T            DoubleSequence512
#define TSeq         DoubleSequence512Seq
#define T_initialize_w_params ::rapid::DoubleSequence512_initialize_w_params
#define T_finalize_w_params   ::rapid::DoubleSequence512_finalize_w_params
#define T_copy       ::rapid::DoubleSequence512_copy


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

DDS_TypeCode* DoubleSequence1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DoubleSequence1K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1024,NULL);

    static DDS_TypeCode DoubleSequence1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::DoubleSequence1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DoubleSequence1K */

    if (is_initialized) {
        return &DoubleSequence1K_g_tc;
    }

    DoubleSequence1K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    DoubleSequence1K_g_tc._data._typeCode = (RTICdrTypeCode *)&DoubleSequence1K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DoubleSequence1K_g_tc;
}


RTIBool DoubleSequence1K_initialize(
    DoubleSequence1K* sample)
{
    return ::rapid::DoubleSequence1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DoubleSequence1K_initialize_ex(
    DoubleSequence1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::DoubleSequence1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool DoubleSequence1K_initialize_w_params(
        DoubleSequence1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_DoubleSeq_initialize(sample);
        if (!DDS_DoubleSeq_set_maximum(sample,
                (1024))) {
            return RTI_FALSE;
        }
    } else {
        DDS_DoubleSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void DoubleSequence1K_finalize(
    DoubleSequence1K* sample)
{
    ::rapid::DoubleSequence1K_finalize_ex(sample,RTI_TRUE);
}
 
void DoubleSequence1K_finalize_ex(
    DoubleSequence1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::DoubleSequence1K_finalize_w_params(
        sample,&deallocParams);
}
           
void DoubleSequence1K_finalize_w_params(
    DoubleSequence1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_DoubleSeq_finalize(sample);
            

}

void DoubleSequence1K_finalize_optional_members(
    DoubleSequence1K* sample, RTIBool deletePointers)
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

RTIBool DoubleSequence1K_copy(
    DoubleSequence1K* dst,
    const DoubleSequence1K* src)
{

    if (!DDS_DoubleSeq_copy(dst,
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
 * Configure and implement 'DoubleSequence1K' sequence class.
 */
#define T            DoubleSequence1K
#define TSeq         DoubleSequence1KSeq
#define T_initialize_w_params ::rapid::DoubleSequence1K_initialize_w_params
#define T_finalize_w_params   ::rapid::DoubleSequence1K_finalize_w_params
#define T_copy       ::rapid::DoubleSequence1K_copy


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

DDS_TypeCode* String16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String16_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(16);

    static DDS_TypeCode String16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String16 */

    if (is_initialized) {
        return &String16_g_tc;
    }

    String16_g_tc._data._typeCode = (RTICdrTypeCode *)&String16_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String16_g_tc;
}


RTIBool String16_initialize(
    String16* sample)
{
    return ::rapid::String16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String16_initialize_ex(
    String16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String16_initialize_w_params(
        sample,&allocParams);
}

RTIBool String16_initialize_w_params(
        String16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((16));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) { 
            (*sample)[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void String16_finalize(
    String16* sample)
{
    ::rapid::String16_finalize_ex(sample,RTI_TRUE);
}
 
void String16_finalize_ex(
    String16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String16_finalize_w_params(
        sample,&deallocParams);
}
           
void String16_finalize_w_params(
    String16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    if ((*sample) != NULL) {    
        DDS_String_free((*sample));
        (*sample) = NULL;
    }
            

}

void String16_finalize_optional_members(
    String16* sample, RTIBool deletePointers)
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

RTIBool String16_copy(
    String16* dst,
    const String16* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (16) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'String16' sequence class.
 */
#define T            String16
#define TSeq         String16Seq
#define T_initialize_w_params ::rapid::String16_initialize_w_params
#define T_finalize_w_params   ::rapid::String16_finalize_w_params
#define T_copy       ::rapid::String16_copy


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

DDS_TypeCode* String32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String32_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(32);

    static DDS_TypeCode String32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String32 */

    if (is_initialized) {
        return &String32_g_tc;
    }

    String32_g_tc._data._typeCode = (RTICdrTypeCode *)&String32_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String32_g_tc;
}


RTIBool String32_initialize(
    String32* sample)
{
    return ::rapid::String32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String32_initialize_ex(
    String32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String32_initialize_w_params(
        sample,&allocParams);
}

RTIBool String32_initialize_w_params(
        String32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((32));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) { 
            (*sample)[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void String32_finalize(
    String32* sample)
{
    ::rapid::String32_finalize_ex(sample,RTI_TRUE);
}
 
void String32_finalize_ex(
    String32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String32_finalize_w_params(
        sample,&deallocParams);
}
           
void String32_finalize_w_params(
    String32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    if ((*sample) != NULL) {    
        DDS_String_free((*sample));
        (*sample) = NULL;
    }
            

}

void String32_finalize_optional_members(
    String32* sample, RTIBool deletePointers)
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

RTIBool String32_copy(
    String32* dst,
    const String32* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (32) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'String32' sequence class.
 */
#define T            String32
#define TSeq         String32Seq
#define T_initialize_w_params ::rapid::String32_initialize_w_params
#define T_finalize_w_params   ::rapid::String32_finalize_w_params
#define T_copy       ::rapid::String32_copy


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

DDS_TypeCode* String64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String64_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(64);

    static DDS_TypeCode String64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String64 */

    if (is_initialized) {
        return &String64_g_tc;
    }

    String64_g_tc._data._typeCode = (RTICdrTypeCode *)&String64_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String64_g_tc;
}


RTIBool String64_initialize(
    String64* sample)
{
    return ::rapid::String64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String64_initialize_ex(
    String64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String64_initialize_w_params(
        sample,&allocParams);
}

RTIBool String64_initialize_w_params(
        String64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((64));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) { 
            (*sample)[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void String64_finalize(
    String64* sample)
{
    ::rapid::String64_finalize_ex(sample,RTI_TRUE);
}
 
void String64_finalize_ex(
    String64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String64_finalize_w_params(
        sample,&deallocParams);
}
           
void String64_finalize_w_params(
    String64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    if ((*sample) != NULL) {    
        DDS_String_free((*sample));
        (*sample) = NULL;
    }
            

}

void String64_finalize_optional_members(
    String64* sample, RTIBool deletePointers)
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

RTIBool String64_copy(
    String64* dst,
    const String64* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (64) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'String64' sequence class.
 */
#define T            String64
#define TSeq         String64Seq
#define T_initialize_w_params ::rapid::String64_initialize_w_params
#define T_finalize_w_params   ::rapid::String64_finalize_w_params
#define T_copy       ::rapid::String64_copy


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

DDS_TypeCode* String128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String128_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(128);

    static DDS_TypeCode String128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String128 */

    if (is_initialized) {
        return &String128_g_tc;
    }

    String128_g_tc._data._typeCode = (RTICdrTypeCode *)&String128_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String128_g_tc;
}


RTIBool String128_initialize(
    String128* sample)
{
    return ::rapid::String128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String128_initialize_ex(
    String128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String128_initialize_w_params(
        sample,&allocParams);
}

RTIBool String128_initialize_w_params(
        String128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((128));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) { 
            (*sample)[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void String128_finalize(
    String128* sample)
{
    ::rapid::String128_finalize_ex(sample,RTI_TRUE);
}
 
void String128_finalize_ex(
    String128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String128_finalize_w_params(
        sample,&deallocParams);
}
           
void String128_finalize_w_params(
    String128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    if ((*sample) != NULL) {    
        DDS_String_free((*sample));
        (*sample) = NULL;
    }
            

}

void String128_finalize_optional_members(
    String128* sample, RTIBool deletePointers)
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

RTIBool String128_copy(
    String128* dst,
    const String128* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (128) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'String128' sequence class.
 */
#define T            String128
#define TSeq         String128Seq
#define T_initialize_w_params ::rapid::String128_initialize_w_params
#define T_finalize_w_params   ::rapid::String128_finalize_w_params
#define T_copy       ::rapid::String128_copy


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

DDS_TypeCode* String256_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String256_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(256);

    static DDS_TypeCode String256_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String256", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String256 */

    if (is_initialized) {
        return &String256_g_tc;
    }

    String256_g_tc._data._typeCode = (RTICdrTypeCode *)&String256_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String256_g_tc;
}


RTIBool String256_initialize(
    String256* sample)
{
    return ::rapid::String256_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String256_initialize_ex(
    String256* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String256_initialize_w_params(
        sample,&allocParams);
}

RTIBool String256_initialize_w_params(
        String256* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((256));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) { 
            (*sample)[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void String256_finalize(
    String256* sample)
{
    ::rapid::String256_finalize_ex(sample,RTI_TRUE);
}
 
void String256_finalize_ex(
    String256* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String256_finalize_w_params(
        sample,&deallocParams);
}
           
void String256_finalize_w_params(
    String256* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    if ((*sample) != NULL) {    
        DDS_String_free((*sample));
        (*sample) = NULL;
    }
            

}

void String256_finalize_optional_members(
    String256* sample, RTIBool deletePointers)
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

RTIBool String256_copy(
    String256* dst,
    const String256* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (256) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'String256' sequence class.
 */
#define T            String256
#define TSeq         String256Seq
#define T_initialize_w_params ::rapid::String256_initialize_w_params
#define T_finalize_w_params   ::rapid::String256_finalize_w_params
#define T_copy       ::rapid::String256_copy


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

DDS_TypeCode* String1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String1K_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(1024);

    static DDS_TypeCode String1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String1K */

    if (is_initialized) {
        return &String1K_g_tc;
    }

    String1K_g_tc._data._typeCode = (RTICdrTypeCode *)&String1K_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String1K_g_tc;
}


RTIBool String1K_initialize(
    String1K* sample)
{
    return ::rapid::String1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String1K_initialize_ex(
    String1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool String1K_initialize_w_params(
        String1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((1024));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) { 
            (*sample)[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void String1K_finalize(
    String1K* sample)
{
    ::rapid::String1K_finalize_ex(sample,RTI_TRUE);
}
 
void String1K_finalize_ex(
    String1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String1K_finalize_w_params(
        sample,&deallocParams);
}
           
void String1K_finalize_w_params(
    String1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    if ((*sample) != NULL) {    
        DDS_String_free((*sample));
        (*sample) = NULL;
    }
            

}

void String1K_finalize_optional_members(
    String1K* sample, RTIBool deletePointers)
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

RTIBool String1K_copy(
    String1K* dst,
    const String1K* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (1024) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'String1K' sequence class.
 */
#define T            String1K
#define TSeq         String1KSeq
#define T_initialize_w_params ::rapid::String1K_initialize_w_params
#define T_finalize_w_params   ::rapid::String1K_finalize_w_params
#define T_copy       ::rapid::String1K_copy


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

DDS_TypeCode* String2K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String2K_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(2048);

    static DDS_TypeCode String2K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String2K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String2K */

    if (is_initialized) {
        return &String2K_g_tc;
    }

    String2K_g_tc._data._typeCode = (RTICdrTypeCode *)&String2K_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String2K_g_tc;
}


RTIBool String2K_initialize(
    String2K* sample)
{
    return ::rapid::String2K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String2K_initialize_ex(
    String2K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String2K_initialize_w_params(
        sample,&allocParams);
}

RTIBool String2K_initialize_w_params(
        String2K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        (*sample) = DDS_String_alloc((2048));
        if ((*sample) == NULL) {
            return RTI_FALSE;
        }
    } else {
        if ((*sample) != NULL) { 
            (*sample)[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void String2K_finalize(
    String2K* sample)
{
    ::rapid::String2K_finalize_ex(sample,RTI_TRUE);
}
 
void String2K_finalize_ex(
    String2K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String2K_finalize_w_params(
        sample,&deallocParams);
}
           
void String2K_finalize_w_params(
    String2K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    if ((*sample) != NULL) {    
        DDS_String_free((*sample));
        (*sample) = NULL;
    }
            

}

void String2K_finalize_optional_members(
    String2K* sample, RTIBool deletePointers)
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

RTIBool String2K_copy(
    String2K* dst,
    const String2K* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (2048) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'String2K' sequence class.
 */
#define T            String2K
#define TSeq         String2KSeq
#define T_initialize_w_params ::rapid::String2K_initialize_w_params
#define T_finalize_w_params   ::rapid::String2K_finalize_w_params
#define T_copy       ::rapid::String2K_copy


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

DDS_TypeCode* String16Sequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String16Sequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode String16Sequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String16Sequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String16Sequence16 */

    if (is_initialized) {
        return &String16Sequence16_g_tc;
    }

    String16Sequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    String16Sequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&String16Sequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String16Sequence16_g_tc;
}


RTIBool String16Sequence16_initialize(
    String16Sequence16* sample)
{
    return ::rapid::String16Sequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String16Sequence16_initialize_ex(
    String16Sequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String16Sequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool String16Sequence16_initialize_w_params(
        String16Sequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String16Seq_initialize(sample);
        rapid::String16Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String16Seq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String16Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String16Sequence16_finalize(
    String16Sequence16* sample)
{
    ::rapid::String16Sequence16_finalize_ex(sample,RTI_TRUE);
}
 
void String16Sequence16_finalize_ex(
    String16Sequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String16Sequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void String16Sequence16_finalize_w_params(
    String16Sequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String16Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String16Seq_finalize(sample);
            

}

void String16Sequence16_finalize_optional_members(
    String16Sequence16* sample, RTIBool deletePointers)
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
        length = rapid::String16Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String16_finalize_optional_members(
                rapid::String16Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String16Sequence16_copy(
    String16Sequence16* dst,
    const String16Sequence16* src)
{

    if (!rapid::String16Seq_copy(dst,
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
 * Configure and implement 'String16Sequence16' sequence class.
 */
#define T            String16Sequence16
#define TSeq         String16Sequence16Seq
#define T_initialize_w_params ::rapid::String16Sequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::String16Sequence16_finalize_w_params
#define T_copy       ::rapid::String16Sequence16_copy


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

DDS_TypeCode* String32Sequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String32Sequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode String32Sequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String32Sequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String32Sequence16 */

    if (is_initialized) {
        return &String32Sequence16_g_tc;
    }

    String32Sequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    String32Sequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&String32Sequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String32Sequence16_g_tc;
}


RTIBool String32Sequence16_initialize(
    String32Sequence16* sample)
{
    return ::rapid::String32Sequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String32Sequence16_initialize_ex(
    String32Sequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String32Sequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool String32Sequence16_initialize_w_params(
        String32Sequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String32Seq_initialize(sample);
        rapid::String32Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String32Seq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String32Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String32Sequence16_finalize(
    String32Sequence16* sample)
{
    ::rapid::String32Sequence16_finalize_ex(sample,RTI_TRUE);
}
 
void String32Sequence16_finalize_ex(
    String32Sequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String32Sequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void String32Sequence16_finalize_w_params(
    String32Sequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String32Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String32Seq_finalize(sample);
            

}

void String32Sequence16_finalize_optional_members(
    String32Sequence16* sample, RTIBool deletePointers)
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
        length = rapid::String32Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String32_finalize_optional_members(
                rapid::String32Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String32Sequence16_copy(
    String32Sequence16* dst,
    const String32Sequence16* src)
{

    if (!rapid::String32Seq_copy(dst,
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
 * Configure and implement 'String32Sequence16' sequence class.
 */
#define T            String32Sequence16
#define TSeq         String32Sequence16Seq
#define T_initialize_w_params ::rapid::String32Sequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::String32Sequence16_finalize_w_params
#define T_copy       ::rapid::String32Sequence16_copy


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

DDS_TypeCode* String128Sequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String128Sequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode String128Sequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String128Sequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String128Sequence16 */

    if (is_initialized) {
        return &String128Sequence16_g_tc;
    }

    String128Sequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    String128Sequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&String128Sequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String128Sequence16_g_tc;
}


RTIBool String128Sequence16_initialize(
    String128Sequence16* sample)
{
    return ::rapid::String128Sequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String128Sequence16_initialize_ex(
    String128Sequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String128Sequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool String128Sequence16_initialize_w_params(
        String128Sequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String128Seq_initialize(sample);
        rapid::String128Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String128Seq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String128Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String128Sequence16_finalize(
    String128Sequence16* sample)
{
    ::rapid::String128Sequence16_finalize_ex(sample,RTI_TRUE);
}
 
void String128Sequence16_finalize_ex(
    String128Sequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String128Sequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void String128Sequence16_finalize_w_params(
    String128Sequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String128Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String128Seq_finalize(sample);
            

}

void String128Sequence16_finalize_optional_members(
    String128Sequence16* sample, RTIBool deletePointers)
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
        length = rapid::String128Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String128_finalize_optional_members(
                rapid::String128Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String128Sequence16_copy(
    String128Sequence16* dst,
    const String128Sequence16* src)
{

    if (!rapid::String128Seq_copy(dst,
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
 * Configure and implement 'String128Sequence16' sequence class.
 */
#define T            String128Sequence16
#define TSeq         String128Sequence16Seq
#define T_initialize_w_params ::rapid::String128Sequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::String128Sequence16_finalize_w_params
#define T_copy       ::rapid::String128Sequence16_copy


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

DDS_TypeCode* String16Sequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String16Sequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode String16Sequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String16Sequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String16Sequence32 */

    if (is_initialized) {
        return &String16Sequence32_g_tc;
    }

    String16Sequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    String16Sequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&String16Sequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String16Sequence32_g_tc;
}


RTIBool String16Sequence32_initialize(
    String16Sequence32* sample)
{
    return ::rapid::String16Sequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String16Sequence32_initialize_ex(
    String16Sequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String16Sequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool String16Sequence32_initialize_w_params(
        String16Sequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String16Seq_initialize(sample);
        rapid::String16Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String16Seq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String16Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String16Sequence32_finalize(
    String16Sequence32* sample)
{
    ::rapid::String16Sequence32_finalize_ex(sample,RTI_TRUE);
}
 
void String16Sequence32_finalize_ex(
    String16Sequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String16Sequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void String16Sequence32_finalize_w_params(
    String16Sequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String16Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String16Seq_finalize(sample);
            

}

void String16Sequence32_finalize_optional_members(
    String16Sequence32* sample, RTIBool deletePointers)
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
        length = rapid::String16Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String16_finalize_optional_members(
                rapid::String16Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String16Sequence32_copy(
    String16Sequence32* dst,
    const String16Sequence32* src)
{

    if (!rapid::String16Seq_copy(dst,
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
 * Configure and implement 'String16Sequence32' sequence class.
 */
#define T            String16Sequence32
#define TSeq         String16Sequence32Seq
#define T_initialize_w_params ::rapid::String16Sequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::String16Sequence32_finalize_w_params
#define T_copy       ::rapid::String16Sequence32_copy


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

DDS_TypeCode* String32Sequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String32Sequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode String32Sequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String32Sequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String32Sequence32 */

    if (is_initialized) {
        return &String32Sequence32_g_tc;
    }

    String32Sequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    String32Sequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&String32Sequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String32Sequence32_g_tc;
}


RTIBool String32Sequence32_initialize(
    String32Sequence32* sample)
{
    return ::rapid::String32Sequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String32Sequence32_initialize_ex(
    String32Sequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String32Sequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool String32Sequence32_initialize_w_params(
        String32Sequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String32Seq_initialize(sample);
        rapid::String32Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String32Seq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String32Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String32Sequence32_finalize(
    String32Sequence32* sample)
{
    ::rapid::String32Sequence32_finalize_ex(sample,RTI_TRUE);
}
 
void String32Sequence32_finalize_ex(
    String32Sequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String32Sequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void String32Sequence32_finalize_w_params(
    String32Sequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String32Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String32Seq_finalize(sample);
            

}

void String32Sequence32_finalize_optional_members(
    String32Sequence32* sample, RTIBool deletePointers)
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
        length = rapid::String32Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String32_finalize_optional_members(
                rapid::String32Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String32Sequence32_copy(
    String32Sequence32* dst,
    const String32Sequence32* src)
{

    if (!rapid::String32Seq_copy(dst,
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
 * Configure and implement 'String32Sequence32' sequence class.
 */
#define T            String32Sequence32
#define TSeq         String32Sequence32Seq
#define T_initialize_w_params ::rapid::String32Sequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::String32Sequence32_finalize_w_params
#define T_copy       ::rapid::String32Sequence32_copy


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

DDS_TypeCode* String128Sequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String128Sequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode String128Sequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String128Sequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String128Sequence32 */

    if (is_initialized) {
        return &String128Sequence32_g_tc;
    }

    String128Sequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    String128Sequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&String128Sequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String128Sequence32_g_tc;
}


RTIBool String128Sequence32_initialize(
    String128Sequence32* sample)
{
    return ::rapid::String128Sequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String128Sequence32_initialize_ex(
    String128Sequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String128Sequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool String128Sequence32_initialize_w_params(
        String128Sequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String128Seq_initialize(sample);
        rapid::String128Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String128Seq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String128Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String128Sequence32_finalize(
    String128Sequence32* sample)
{
    ::rapid::String128Sequence32_finalize_ex(sample,RTI_TRUE);
}
 
void String128Sequence32_finalize_ex(
    String128Sequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String128Sequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void String128Sequence32_finalize_w_params(
    String128Sequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String128Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String128Seq_finalize(sample);
            

}

void String128Sequence32_finalize_optional_members(
    String128Sequence32* sample, RTIBool deletePointers)
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
        length = rapid::String128Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String128_finalize_optional_members(
                rapid::String128Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String128Sequence32_copy(
    String128Sequence32* dst,
    const String128Sequence32* src)
{

    if (!rapid::String128Seq_copy(dst,
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
 * Configure and implement 'String128Sequence32' sequence class.
 */
#define T            String128Sequence32
#define TSeq         String128Sequence32Seq
#define T_initialize_w_params ::rapid::String128Sequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::String128Sequence32_finalize_w_params
#define T_copy       ::rapid::String128Sequence32_copy


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

DDS_TypeCode* String128Sequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String128Sequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode String128Sequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String128Sequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String128Sequence64 */

    if (is_initialized) {
        return &String128Sequence64_g_tc;
    }

    String128Sequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    String128Sequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&String128Sequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String128Sequence64_g_tc;
}


RTIBool String128Sequence64_initialize(
    String128Sequence64* sample)
{
    return ::rapid::String128Sequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String128Sequence64_initialize_ex(
    String128Sequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String128Sequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool String128Sequence64_initialize_w_params(
        String128Sequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String128Seq_initialize(sample);
        rapid::String128Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String128Seq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String128Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String128Sequence64_finalize(
    String128Sequence64* sample)
{
    ::rapid::String128Sequence64_finalize_ex(sample,RTI_TRUE);
}
 
void String128Sequence64_finalize_ex(
    String128Sequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String128Sequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void String128Sequence64_finalize_w_params(
    String128Sequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String128Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String128Seq_finalize(sample);
            

}

void String128Sequence64_finalize_optional_members(
    String128Sequence64* sample, RTIBool deletePointers)
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
        length = rapid::String128Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String128_finalize_optional_members(
                rapid::String128Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String128Sequence64_copy(
    String128Sequence64* dst,
    const String128Sequence64* src)
{

    if (!rapid::String128Seq_copy(dst,
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
 * Configure and implement 'String128Sequence64' sequence class.
 */
#define T            String128Sequence64
#define TSeq         String128Sequence64Seq
#define T_initialize_w_params ::rapid::String128Sequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::String128Sequence64_finalize_w_params
#define T_copy       ::rapid::String128Sequence64_copy


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

DDS_TypeCode* String256Sequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String256Sequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode String256Sequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String256Sequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String256Sequence64 */

    if (is_initialized) {
        return &String256Sequence64_g_tc;
    }

    String256Sequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String256_get_typecode();
    String256Sequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&String256Sequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String256Sequence64_g_tc;
}


RTIBool String256Sequence64_initialize(
    String256Sequence64* sample)
{
    return ::rapid::String256Sequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String256Sequence64_initialize_ex(
    String256Sequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String256Sequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool String256Sequence64_initialize_w_params(
        String256Sequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String256Seq_initialize(sample);
        rapid::String256Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String256Seq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String256Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String256Sequence64_finalize(
    String256Sequence64* sample)
{
    ::rapid::String256Sequence64_finalize_ex(sample,RTI_TRUE);
}
 
void String256Sequence64_finalize_ex(
    String256Sequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String256Sequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void String256Sequence64_finalize_w_params(
    String256Sequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String256Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String256Seq_finalize(sample);
            

}

void String256Sequence64_finalize_optional_members(
    String256Sequence64* sample, RTIBool deletePointers)
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
        length = rapid::String256Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String256_finalize_optional_members(
                rapid::String256Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String256Sequence64_copy(
    String256Sequence64* dst,
    const String256Sequence64* src)
{

    if (!rapid::String256Seq_copy(dst,
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
 * Configure and implement 'String256Sequence64' sequence class.
 */
#define T            String256Sequence64
#define TSeq         String256Sequence64Seq
#define T_initialize_w_params ::rapid::String256Sequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::String256Sequence64_finalize_w_params
#define T_copy       ::rapid::String256Sequence64_copy


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

DDS_TypeCode* String32Sequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode String32Sequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode String32Sequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::String32Sequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for String32Sequence128 */

    if (is_initialized) {
        return &String32Sequence128_g_tc;
    }

    String32Sequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    String32Sequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&String32Sequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &String32Sequence128_g_tc;
}


RTIBool String32Sequence128_initialize(
    String32Sequence128* sample)
{
    return ::rapid::String32Sequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool String32Sequence128_initialize_ex(
    String32Sequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::String32Sequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool String32Sequence128_initialize_w_params(
        String32Sequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String32Seq_initialize(sample);
        rapid::String32Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String32Seq_set_maximum(sample,
                                           (128))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String32Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void String32Sequence128_finalize(
    String32Sequence128* sample)
{
    ::rapid::String32Sequence128_finalize_ex(sample,RTI_TRUE);
}
 
void String32Sequence128_finalize_ex(
    String32Sequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::String32Sequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void String32Sequence128_finalize_w_params(
    String32Sequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String32Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String32Seq_finalize(sample);
            

}

void String32Sequence128_finalize_optional_members(
    String32Sequence128* sample, RTIBool deletePointers)
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
        length = rapid::String32Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String32_finalize_optional_members(
                rapid::String32Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool String32Sequence128_copy(
    String32Sequence128* dst,
    const String32Sequence128* src)
{

    if (!rapid::String32Seq_copy(dst,
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
 * Configure and implement 'String32Sequence128' sequence class.
 */
#define T            String32Sequence128
#define TSeq         String32Sequence128Seq
#define T_initialize_w_params ::rapid::String32Sequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::String32Sequence128_finalize_w_params
#define T_copy       ::rapid::String32Sequence128_copy


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

DDS_TypeCode* Vec2d_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Vec2d_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);

    static DDS_TypeCode Vec2d_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::Vec2d", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Vec2d */

    if (is_initialized) {
        return &Vec2d_g_tc;
    }

    Vec2d_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    Vec2d_g_tc._data._typeCode = (RTICdrTypeCode *)&Vec2d_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Vec2d_g_tc;
}


RTIBool Vec2d_initialize(
    Vec2d* sample)
{
    return ::rapid::Vec2d_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Vec2d_initialize_ex(
    Vec2d* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Vec2d_initialize_w_params(
        sample,&allocParams);
}

RTIBool Vec2d_initialize_w_params(
        Vec2d* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (2), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Vec2d_finalize(
    Vec2d* sample)
{
    ::rapid::Vec2d_finalize_ex(sample,RTI_TRUE);
}
 
void Vec2d_finalize_ex(
    Vec2d* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Vec2d_finalize_w_params(
        sample,&deallocParams);
}
           
void Vec2d_finalize_w_params(
    Vec2d* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    


}

void Vec2d_finalize_optional_members(
    Vec2d* sample, RTIBool deletePointers)
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

RTIBool Vec2d_copy(
    Vec2d* dst,
    const Vec2d* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (2), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Vec2d' sequence class.
 */
#define T            Vec2d
#define TSeq         Vec2dSeq
#define T_initialize_w_params ::rapid::Vec2d_initialize_w_params
#define T_finalize_w_params   ::rapid::Vec2d_finalize_w_params
#define T_copy       ::rapid::Vec2d_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* Vec3d_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Vec3d_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode Vec3d_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::Vec3d", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Vec3d */

    if (is_initialized) {
        return &Vec3d_g_tc;
    }

    Vec3d_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    Vec3d_g_tc._data._typeCode = (RTICdrTypeCode *)&Vec3d_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Vec3d_g_tc;
}


RTIBool Vec3d_initialize(
    Vec3d* sample)
{
    return ::rapid::Vec3d_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Vec3d_initialize_ex(
    Vec3d* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Vec3d_initialize_w_params(
        sample,&allocParams);
}

RTIBool Vec3d_initialize_w_params(
        Vec3d* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (3), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Vec3d_finalize(
    Vec3d* sample)
{
    ::rapid::Vec3d_finalize_ex(sample,RTI_TRUE);
}
 
void Vec3d_finalize_ex(
    Vec3d* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Vec3d_finalize_w_params(
        sample,&deallocParams);
}
           
void Vec3d_finalize_w_params(
    Vec3d* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    


}

void Vec3d_finalize_optional_members(
    Vec3d* sample, RTIBool deletePointers)
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

RTIBool Vec3d_copy(
    Vec3d* dst,
    const Vec3d* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (3), RTI_CDR_DOUBLE_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Vec3d' sequence class.
 */
#define T            Vec3d
#define TSeq         Vec3dSeq
#define T_initialize_w_params ::rapid::Vec3d_initialize_w_params
#define T_finalize_w_params   ::rapid::Vec3d_finalize_w_params
#define T_copy       ::rapid::Vec3d_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* Vec2f_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Vec2f_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);

    static DDS_TypeCode Vec2f_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::Vec2f", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Vec2f */

    if (is_initialized) {
        return &Vec2f_g_tc;
    }

    Vec2f_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Vec2f_g_tc._data._typeCode = (RTICdrTypeCode *)&Vec2f_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Vec2f_g_tc;
}


RTIBool Vec2f_initialize(
    Vec2f* sample)
{
    return ::rapid::Vec2f_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Vec2f_initialize_ex(
    Vec2f* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Vec2f_initialize_w_params(
        sample,&allocParams);
}

RTIBool Vec2f_initialize_w_params(
        Vec2f* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (2), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Vec2f_finalize(
    Vec2f* sample)
{
    ::rapid::Vec2f_finalize_ex(sample,RTI_TRUE);
}
 
void Vec2f_finalize_ex(
    Vec2f* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Vec2f_finalize_w_params(
        sample,&deallocParams);
}
           
void Vec2f_finalize_w_params(
    Vec2f* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    


}

void Vec2f_finalize_optional_members(
    Vec2f* sample, RTIBool deletePointers)
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

RTIBool Vec2f_copy(
    Vec2f* dst,
    const Vec2f* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (2), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Vec2f' sequence class.
 */
#define T            Vec2f
#define TSeq         Vec2fSeq
#define T_initialize_w_params ::rapid::Vec2f_initialize_w_params
#define T_finalize_w_params   ::rapid::Vec2f_finalize_w_params
#define T_copy       ::rapid::Vec2f_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* Vec3f_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Vec3f_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode Vec3f_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::Vec3f", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Vec3f */

    if (is_initialized) {
        return &Vec3f_g_tc;
    }

    Vec3f_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Vec3f_g_tc._data._typeCode = (RTICdrTypeCode *)&Vec3f_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Vec3f_g_tc;
}


RTIBool Vec3f_initialize(
    Vec3f* sample)
{
    return ::rapid::Vec3f_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Vec3f_initialize_ex(
    Vec3f* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Vec3f_initialize_w_params(
        sample,&allocParams);
}

RTIBool Vec3f_initialize_w_params(
        Vec3f* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (3), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Vec3f_finalize(
    Vec3f* sample)
{
    ::rapid::Vec3f_finalize_ex(sample,RTI_TRUE);
}
 
void Vec3f_finalize_ex(
    Vec3f* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Vec3f_finalize_w_params(
        sample,&deallocParams);
}
           
void Vec3f_finalize_w_params(
    Vec3f* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    


}

void Vec3f_finalize_optional_members(
    Vec3f* sample, RTIBool deletePointers)
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

RTIBool Vec3f_copy(
    Vec3f* dst,
    const Vec3f* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (3), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Vec3f' sequence class.
 */
#define T            Vec3f
#define TSeq         Vec3fSeq
#define T_initialize_w_params ::rapid::Vec3f_initialize_w_params
#define T_finalize_w_params   ::rapid::Vec3f_finalize_w_params
#define T_copy       ::rapid::Vec3f_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* Mat33f_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Mat33f_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,9,NULL,NULL);

    static DDS_TypeCode Mat33f_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::Mat33f", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Mat33f */

    if (is_initialized) {
        return &Mat33f_g_tc;
    }

    Mat33f_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Mat33f_g_tc._data._typeCode = (RTICdrTypeCode *)&Mat33f_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Mat33f_g_tc;
}


RTIBool Mat33f_initialize(
    Mat33f* sample)
{
    return ::rapid::Mat33f_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Mat33f_initialize_ex(
    Mat33f* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Mat33f_initialize_w_params(
        sample,&allocParams);
}

RTIBool Mat33f_initialize_w_params(
        Mat33f* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (9), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Mat33f_finalize(
    Mat33f* sample)
{
    ::rapid::Mat33f_finalize_ex(sample,RTI_TRUE);
}
 
void Mat33f_finalize_ex(
    Mat33f* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Mat33f_finalize_w_params(
        sample,&deallocParams);
}
           
void Mat33f_finalize_w_params(
    Mat33f* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    


}

void Mat33f_finalize_optional_members(
    Mat33f* sample, RTIBool deletePointers)
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

RTIBool Mat33f_copy(
    Mat33f* dst,
    const Mat33f* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (9), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Mat33f' sequence class.
 */
#define T            Mat33f
#define TSeq         Mat33fSeq
#define T_initialize_w_params ::rapid::Mat33f_initialize_w_params
#define T_finalize_w_params   ::rapid::Mat33f_finalize_w_params
#define T_copy       ::rapid::Mat33f_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* Color4f_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Color4f_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode Color4f_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::Color4f", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Color4f */

    if (is_initialized) {
        return &Color4f_g_tc;
    }

    Color4f_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Color4f_g_tc._data._typeCode = (RTICdrTypeCode *)&Color4f_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Color4f_g_tc;
}


RTIBool Color4f_initialize(
    Color4f* sample)
{
    return ::rapid::Color4f_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Color4f_initialize_ex(
    Color4f* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Color4f_initialize_w_params(
        sample,&allocParams);
}

RTIBool Color4f_initialize_w_params(
        Color4f* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (4), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Color4f_finalize(
    Color4f* sample)
{
    ::rapid::Color4f_finalize_ex(sample,RTI_TRUE);
}
 
void Color4f_finalize_ex(
    Color4f* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Color4f_finalize_w_params(
        sample,&deallocParams);
}
           
void Color4f_finalize_w_params(
    Color4f* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    


}

void Color4f_finalize_optional_members(
    Color4f* sample, RTIBool deletePointers)
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

RTIBool Color4f_copy(
    Color4f* dst,
    const Color4f* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (4), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Color4f' sequence class.
 */
#define T            Color4f
#define TSeq         Color4fSeq
#define T_initialize_w_params ::rapid::Color4f_initialize_w_params
#define T_finalize_w_params   ::rapid::Color4f_finalize_w_params
#define T_copy       ::rapid::Color4f_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* Color3f_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Color3f_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode Color3f_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::Color3f", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Color3f */

    if (is_initialized) {
        return &Color3f_g_tc;
    }

    Color3f_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Color3f_g_tc._data._typeCode = (RTICdrTypeCode *)&Color3f_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Color3f_g_tc;
}


RTIBool Color3f_initialize(
    Color3f* sample)
{
    return ::rapid::Color3f_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Color3f_initialize_ex(
    Color3f* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Color3f_initialize_w_params(
        sample,&allocParams);
}

RTIBool Color3f_initialize_w_params(
        Color3f* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (3), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Color3f_finalize(
    Color3f* sample)
{
    ::rapid::Color3f_finalize_ex(sample,RTI_TRUE);
}
 
void Color3f_finalize_ex(
    Color3f* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Color3f_finalize_w_params(
        sample,&deallocParams);
}
           
void Color3f_finalize_w_params(
    Color3f* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    


}

void Color3f_finalize_optional_members(
    Color3f* sample, RTIBool deletePointers)
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

RTIBool Color3f_copy(
    Color3f* dst,
    const Color3f* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (3), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Color3f' sequence class.
 */
#define T            Color3f
#define TSeq         Color3fSeq
#define T_initialize_w_params ::rapid::Color3f_initialize_w_params
#define T_finalize_w_params   ::rapid::Color3f_finalize_w_params
#define T_copy       ::rapid::Color3f_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *RotationEncodingTYPENAME = "rapid::RotationEncoding";

DDS_TypeCode* RotationEncoding_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RotationEncoding_g_tc_members[7] =
    {
        {
            (char *)"RAPID_ROT_NONE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_ROT_NONE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_ROT_M33",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_ROT_M33, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_ROT_QUAT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_ROT_QUAT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_ROT_XYZ",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_ROT_XYZ, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_ROT_ZYX",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_ROT_ZYX, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_ROT_ZYZ",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_ROT_ZYZ, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_ROT_VEL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_ROT_VEL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RotationEncoding_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::RotationEncoding", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of enumerators */
        RotationEncoding_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &RotationEncoding_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &RotationEncoding_g_tc;
}
 

RTIBool RotationEncoding_initialize(
    RotationEncoding* sample)
{
    *sample = RAPID_ROT_NONE;
    return RTI_TRUE;
}
        
RTIBool RotationEncoding_initialize_ex(
    RotationEncoding* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = RAPID_ROT_NONE;
    return RTI_TRUE;
}

RTIBool RotationEncoding_initialize_w_params(
        RotationEncoding* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = RAPID_ROT_NONE;
    return RTI_TRUE;
}

void RotationEncoding_finalize(
    RotationEncoding* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void RotationEncoding_finalize_ex(
    RotationEncoding* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void RotationEncoding_finalize_w_params(
        RotationEncoding* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool RotationEncoding_copy(
    RotationEncoding* dst,
    const RotationEncoding* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool RotationEncoding_getValues(RotationEncodingSeq * values) 
    
{
    int i = 0;
    RotationEncoding * buffer;


    if (!values->maximum(7)) {
        return RTI_FALSE;
    }

    if (!values->length(7)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = RAPID_ROT_NONE;
    i++;
    
    buffer[i] = RAPID_ROT_M33;
    i++;
    
    buffer[i] = RAPID_ROT_QUAT;
    i++;
    
    buffer[i] = RAPID_ROT_XYZ;
    i++;
    
    buffer[i] = RAPID_ROT_ZYX;
    i++;
    
    buffer[i] = RAPID_ROT_ZYZ;
    i++;
    
    buffer[i] = RAPID_ROT_VEL;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RotationEncoding' sequence class.
 */
#define T RotationEncoding
#define TSeq RotationEncodingSeq
#define T_initialize_w_params RotationEncoding_initialize_w_params
#define T_finalize_w_params   RotationEncoding_finalize_w_params
#define T_copy       RotationEncoding_copy

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
const char *DataTypeTYPENAME = "rapid::DataType";

DDS_TypeCode* DataType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member DataType_g_tc_members[8] =
    {
        {
            (char *)"RAPID_BOOL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_BOOL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_DOUBLE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_DOUBLE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_FLOAT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_FLOAT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_INT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_INT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_LONGLONG",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_LONGLONG, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_STRING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_STRING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_VEC3d",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_VEC3d, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RAPID_MAT33f",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RAPID_MAT33f, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode DataType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::DataType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of enumerators */
        DataType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &DataType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &DataType_g_tc;
}
 

RTIBool DataType_initialize(
    DataType* sample)
{
    *sample = RAPID_BOOL;
    return RTI_TRUE;
}
        
RTIBool DataType_initialize_ex(
    DataType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = RAPID_BOOL;
    return RTI_TRUE;
}

RTIBool DataType_initialize_w_params(
        DataType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = RAPID_BOOL;
    return RTI_TRUE;
}

void DataType_finalize(
    DataType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void DataType_finalize_ex(
    DataType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void DataType_finalize_w_params(
        DataType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool DataType_copy(
    DataType* dst,
    const DataType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool DataType_getValues(DataTypeSeq * values) 
    
{
    int i = 0;
    DataType * buffer;


    if (!values->maximum(8)) {
        return RTI_FALSE;
    }

    if (!values->length(8)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = RAPID_BOOL;
    i++;
    
    buffer[i] = RAPID_DOUBLE;
    i++;
    
    buffer[i] = RAPID_FLOAT;
    i++;
    
    buffer[i] = RAPID_INT;
    i++;
    
    buffer[i] = RAPID_LONGLONG;
    i++;
    
    buffer[i] = RAPID_STRING;
    i++;
    
    buffer[i] = RAPID_VEC3d;
    i++;
    
    buffer[i] = RAPID_MAT33f;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DataType' sequence class.
 */
#define T DataType
#define TSeq DataTypeSeq
#define T_initialize_w_params DataType_initialize_w_params
#define T_finalize_w_params   DataType_finalize_w_params
#define T_copy       DataType_copy

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
const char *ParameterUnionTYPENAME = "rapid::ParameterUnion";

DDS_TypeCode* ParameterUnion_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ParameterUnion_g_tc_members[8]=
    {
        {
            (char *)"b",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_BOOL), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"d",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_DOUBLE), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"f",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_FLOAT), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"i",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_INT), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ll",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_LONGLONG), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"s",/* Member name */
            {
                6,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_STRING), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"vec3d",/* Member name */
            {
                7,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_VEC3d), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"mat33f",/* Member name */
            {
                8,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (rapid::RAPID_MAT33f), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ParameterUnion_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"rapid::ParameterUnion", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of members */
        ParameterUnion_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ParameterUnion*/

    if (is_initialized) {
        return &ParameterUnion_g_tc;
    }


    ParameterUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    ParameterUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    ParameterUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    ParameterUnion_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    ParameterUnion_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    ParameterUnion_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    ParameterUnion_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    ParameterUnion_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)rapid::Mat33f_get_typecode();

    ParameterUnion_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::DataType_get_typecode(); /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &ParameterUnion_g_tc;
}


RTIBool ParameterUnion_isCaseHandled(rapid::DataType value) 
{

    if (value == (rapid::RAPID_BOOL)) return RTI_TRUE;

    if (value == (rapid::RAPID_DOUBLE)) return RTI_TRUE;

    if (value == (rapid::RAPID_FLOAT)) return RTI_TRUE;

    if (value == (rapid::RAPID_INT)) return RTI_TRUE;

    if (value == (rapid::RAPID_LONGLONG)) return RTI_TRUE;

    if (value == (rapid::RAPID_STRING)) return RTI_TRUE;

    if (value == (rapid::RAPID_VEC3d)) return RTI_TRUE;

    if (value == (rapid::RAPID_MAT33f)) return RTI_TRUE;

    return RTI_FALSE;
}

rapid::DataType ParameterUnion_getDefaultDiscriminator()
{
    int i;
    rapid::DataType tmp = (rapid::RAPID_BOOL);
    for (i =0; i < 8; ++i) {
    
        if (tmp > (rapid::RAPID_BOOL)) tmp = (rapid::RAPID_BOOL);
    
        if (tmp > (rapid::RAPID_DOUBLE)) tmp = (rapid::RAPID_DOUBLE);
    
        if (tmp > (rapid::RAPID_FLOAT)) tmp = (rapid::RAPID_FLOAT);
    
        if (tmp > (rapid::RAPID_INT)) tmp = (rapid::RAPID_INT);
    
        if (tmp > (rapid::RAPID_LONGLONG)) tmp = (rapid::RAPID_LONGLONG);
    
        if (tmp > (rapid::RAPID_STRING)) tmp = (rapid::RAPID_STRING);
    
        if (tmp > (rapid::RAPID_VEC3d)) tmp = (rapid::RAPID_VEC3d);
    
        if (tmp > (rapid::RAPID_MAT33f)) tmp = (rapid::RAPID_MAT33f);
    
    }
    return tmp;

}
        

RTIBool ParameterUnion_initialize(
    ParameterUnion* sample) {
  return ::rapid::ParameterUnion_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ParameterUnion_initialize_ex(
    ParameterUnion* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ParameterUnion_initialize_w_params(
        sample,&allocParams);
}

RTIBool ParameterUnion_initialize_w_params(
        ParameterUnion* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = ParameterUnion_getDefaultDiscriminator();

    if (!RTICdrType_initBoolean(&sample->_u.b)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->_u.d)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->_u.f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->_u.i)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->_u.ll)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String128_initialize_w_params(&sample->_u.s,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_initialize_w_params(&sample->_u.vec3d,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Mat33f_initialize_w_params(&sample->_u.mat33f,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ParameterUnion_finalize(
    ParameterUnion* sample)
{
    ::rapid::ParameterUnion_finalize_ex(sample,RTI_TRUE);
}
        
void ParameterUnion_finalize_ex(
    ParameterUnion* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ParameterUnion_finalize_w_params(
        sample,&deallocParams);
}

void ParameterUnion_finalize_w_params(
        ParameterUnion* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */







    rapid::String128_finalize_w_params(&sample->_u.s, deallocParams);
            

    rapid::Vec3d_finalize_w_params(&sample->_u.vec3d, deallocParams);
            

    rapid::Mat33f_finalize_w_params(&sample->_u.mat33f, deallocParams);
            

}

void ParameterUnion_finalize_optional_members(
    ParameterUnion* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    switch(sample->_d) {
          case (rapid::RAPID_BOOL):
        {                                    
        

        } break;
      case (rapid::RAPID_DOUBLE):
        {                                    
        

        } break;
      case (rapid::RAPID_FLOAT):
        {                                    
        

        } break;
      case (rapid::RAPID_INT):
        {                                    
        

        } break;
      case (rapid::RAPID_LONGLONG):
        {                                    
        

        } break;
      case (rapid::RAPID_STRING):
        {                                    
        
    rapid::String128_finalize_optional_members(&sample->_u.s, deallocParams->delete_pointers);
            

        } break;
      case (rapid::RAPID_VEC3d):
        {                                    
        
    rapid::Vec3d_finalize_optional_members(&sample->_u.vec3d, deallocParams->delete_pointers);
            

        } break;
      case (rapid::RAPID_MAT33f):
        {                                    
        
    rapid::Mat33f_finalize_optional_members(&sample->_u.mat33f, deallocParams->delete_pointers);
            

        } break;
              
    }
      
}

RTIBool ParameterUnion_copy(
    ParameterUnion* dst,
    const ParameterUnion* src)
{

    if (!rapid::DataType_copy(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case (rapid::RAPID_BOOL):
        {                                    
        
    if (!RTICdrType_copyBoolean(
        &dst->_u.b, &src->_u.b)) {
        return RTI_FALSE;
    }
            

        } break;
      case (rapid::RAPID_DOUBLE):
        {                                    
        
    if (!RTICdrType_copyDouble(
        &dst->_u.d, &src->_u.d)) {
        return RTI_FALSE;
    }
            

        } break;
      case (rapid::RAPID_FLOAT):
        {                                    
        
    if (!RTICdrType_copyFloat(
        &dst->_u.f, &src->_u.f)) {
        return RTI_FALSE;
    }
            

        } break;
      case (rapid::RAPID_INT):
        {                                    
        
    if (!RTICdrType_copyLong(
        &dst->_u.i, &src->_u.i)) {
        return RTI_FALSE;
    }
            

        } break;
      case (rapid::RAPID_LONGLONG):
        {                                    
        
    if (!RTICdrType_copyLongLong(
        &dst->_u.ll, &src->_u.ll)) {
        return RTI_FALSE;
    }
            

        } break;
      case (rapid::RAPID_STRING):
        {                                    
        
    if (!rapid::String128_copy(
        &dst->_u.s, &src->_u.s)) {
        return RTI_FALSE;
    }
            

        } break;
      case (rapid::RAPID_VEC3d):
        {                                    
        
    if (!rapid::Vec3d_copy(
        &dst->_u.vec3d, &src->_u.vec3d)) {
        return RTI_FALSE;
    }
            

        } break;
      case (rapid::RAPID_MAT33f):
        {                                    
        
    if (!rapid::Mat33f_copy(
        &dst->_u.mat33f, &src->_u.mat33f)) {
        return RTI_FALSE;
    }
            

        } break;
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ParameterUnion' sequence class.
 */
#define T ParameterUnion
#define TSeq ParameterUnionSeq
#define T_initialize_w_params ::rapid::ParameterUnion_initialize_w_params
#define T_finalize_w_params   ::rapid::ParameterUnion_finalize_w_params
#define T_copy       ::rapid::ParameterUnion_copy

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

DDS_TypeCode* ParameterSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ParameterSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode ParameterSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ParameterSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ParameterSequence16 */

    if (is_initialized) {
        return &ParameterSequence16_g_tc;
    }

    ParameterSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    ParameterSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&ParameterSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ParameterSequence16_g_tc;
}


RTIBool ParameterSequence16_initialize(
    ParameterSequence16* sample)
{
    return ::rapid::ParameterSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ParameterSequence16_initialize_ex(
    ParameterSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ParameterSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool ParameterSequence16_initialize_w_params(
        ParameterSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ParameterSequence16_finalize(
    ParameterSequence16* sample)
{
    ::rapid::ParameterSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void ParameterSequence16_finalize_ex(
    ParameterSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ParameterSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void ParameterSequence16_finalize_w_params(
    ParameterSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void ParameterSequence16_finalize_optional_members(
    ParameterSequence16* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ParameterSequence16_copy(
    ParameterSequence16* dst,
    const ParameterSequence16* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'ParameterSequence16' sequence class.
 */
#define T            ParameterSequence16
#define TSeq         ParameterSequence16Seq
#define T_initialize_w_params ::rapid::ParameterSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::ParameterSequence16_finalize_w_params
#define T_copy       ::rapid::ParameterSequence16_copy


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

DDS_TypeCode* ParameterSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ParameterSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode ParameterSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ParameterSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ParameterSequence64 */

    if (is_initialized) {
        return &ParameterSequence64_g_tc;
    }

    ParameterSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    ParameterSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&ParameterSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ParameterSequence64_g_tc;
}


RTIBool ParameterSequence64_initialize(
    ParameterSequence64* sample)
{
    return ::rapid::ParameterSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ParameterSequence64_initialize_ex(
    ParameterSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ParameterSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool ParameterSequence64_initialize_w_params(
        ParameterSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ParameterSequence64_finalize(
    ParameterSequence64* sample)
{
    ::rapid::ParameterSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void ParameterSequence64_finalize_ex(
    ParameterSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ParameterSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void ParameterSequence64_finalize_w_params(
    ParameterSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void ParameterSequence64_finalize_optional_members(
    ParameterSequence64* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ParameterSequence64_copy(
    ParameterSequence64* dst,
    const ParameterSequence64* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'ParameterSequence64' sequence class.
 */
#define T            ParameterSequence64
#define TSeq         ParameterSequence64Seq
#define T_initialize_w_params ::rapid::ParameterSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::ParameterSequence64_finalize_w_params
#define T_copy       ::rapid::ParameterSequence64_copy


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
const char *KeyTypePairTYPENAME = "rapid::KeyTypePair";

DDS_TypeCode* KeyTypePair_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member KeyTypePair_g_tc_members[2]=
    {
        {
            (char *)"key",/* Member name */
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
            (char *)"type",/* Member name */
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

    static DDS_TypeCode KeyTypePair_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::KeyTypePair", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        KeyTypePair_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypePair*/

    if (is_initialized) {
        return &KeyTypePair_g_tc;
    }


    KeyTypePair_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    KeyTypePair_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::DataType_get_typecode();

    is_initialized = RTI_TRUE;

    return &KeyTypePair_g_tc;
}


RTIBool KeyTypePair_initialize(
    KeyTypePair* sample) {
  return ::rapid::KeyTypePair_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool KeyTypePair_initialize_ex(
    KeyTypePair* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypePair_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypePair_initialize_w_params(
        KeyTypePair* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->key,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::DataType_initialize_w_params(&sample->type,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void KeyTypePair_finalize(
    KeyTypePair* sample)
{
    ::rapid::KeyTypePair_finalize_ex(sample,RTI_TRUE);
}
        
void KeyTypePair_finalize_ex(
    KeyTypePair* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypePair_finalize_w_params(
        sample,&deallocParams);
}

void KeyTypePair_finalize_w_params(
        KeyTypePair* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->key, deallocParams);
            

    rapid::DataType_finalize_w_params(&sample->type, deallocParams);
            

}

void KeyTypePair_finalize_optional_members(
    KeyTypePair* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->key, deallocParams->delete_pointers);
            

    rapid::DataType_finalize_w_params(&sample->type, deallocParams);
            

}

RTIBool KeyTypePair_copy(
    KeyTypePair* dst,
    const KeyTypePair* src)
{

    if (!rapid::String32_copy(
        &dst->key, &src->key)) {
        return RTI_FALSE;
    }
            

    if (!rapid::DataType_copy(
        &dst->type, &src->type)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'KeyTypePair' sequence class.
 */
#define T KeyTypePair
#define TSeq KeyTypePairSeq
#define T_initialize_w_params ::rapid::KeyTypePair_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypePair_finalize_w_params
#define T_copy       ::rapid::KeyTypePair_copy

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

DDS_TypeCode* KeyTypeSequence4_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeSequence4_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(4,NULL);

    static DDS_TypeCode KeyTypeSequence4_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeSequence4", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeSequence4 */

    if (is_initialized) {
        return &KeyTypeSequence4_g_tc;
    }

    KeyTypeSequence4_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypePair_get_typecode();
    KeyTypeSequence4_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeSequence4_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeSequence4_g_tc;
}


RTIBool KeyTypeSequence4_initialize(
    KeyTypeSequence4* sample)
{
    return ::rapid::KeyTypeSequence4_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeSequence4_initialize_ex(
    KeyTypeSequence4* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeSequence4_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeSequence4_initialize_w_params(
        KeyTypeSequence4* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypePairSeq_initialize(sample);
        rapid::KeyTypePairSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypePairSeq_set_maximum(sample,
                                           (4))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypePairSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeSequence4_finalize(
    KeyTypeSequence4* sample)
{
    ::rapid::KeyTypeSequence4_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeSequence4_finalize_ex(
    KeyTypeSequence4* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeSequence4_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeSequence4_finalize_w_params(
    KeyTypeSequence4* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypePairSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypePairSeq_finalize(sample);
            

}

void KeyTypeSequence4_finalize_optional_members(
    KeyTypeSequence4* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypePairSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypePair_finalize_optional_members(
                rapid::KeyTypePairSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeSequence4_copy(
    KeyTypeSequence4* dst,
    const KeyTypeSequence4* src)
{

    if (!rapid::KeyTypePairSeq_copy(dst,
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
 * Configure and implement 'KeyTypeSequence4' sequence class.
 */
#define T            KeyTypeSequence4
#define TSeq         KeyTypeSequence4Seq
#define T_initialize_w_params ::rapid::KeyTypeSequence4_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeSequence4_finalize_w_params
#define T_copy       ::rapid::KeyTypeSequence4_copy


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

DDS_TypeCode* KeyTypeSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode KeyTypeSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeSequence16 */

    if (is_initialized) {
        return &KeyTypeSequence16_g_tc;
    }

    KeyTypeSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypePair_get_typecode();
    KeyTypeSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeSequence16_g_tc;
}


RTIBool KeyTypeSequence16_initialize(
    KeyTypeSequence16* sample)
{
    return ::rapid::KeyTypeSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeSequence16_initialize_ex(
    KeyTypeSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeSequence16_initialize_w_params(
        KeyTypeSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypePairSeq_initialize(sample);
        rapid::KeyTypePairSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypePairSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypePairSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeSequence16_finalize(
    KeyTypeSequence16* sample)
{
    ::rapid::KeyTypeSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeSequence16_finalize_ex(
    KeyTypeSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeSequence16_finalize_w_params(
    KeyTypeSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypePairSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypePairSeq_finalize(sample);
            

}

void KeyTypeSequence16_finalize_optional_members(
    KeyTypeSequence16* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypePairSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypePair_finalize_optional_members(
                rapid::KeyTypePairSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeSequence16_copy(
    KeyTypeSequence16* dst,
    const KeyTypeSequence16* src)
{

    if (!rapid::KeyTypePairSeq_copy(dst,
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
 * Configure and implement 'KeyTypeSequence16' sequence class.
 */
#define T            KeyTypeSequence16
#define TSeq         KeyTypeSequence16Seq
#define T_initialize_w_params ::rapid::KeyTypeSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeSequence16_finalize_w_params
#define T_copy       ::rapid::KeyTypeSequence16_copy


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

DDS_TypeCode* KeyTypeSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode KeyTypeSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeSequence64 */

    if (is_initialized) {
        return &KeyTypeSequence64_g_tc;
    }

    KeyTypeSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypePair_get_typecode();
    KeyTypeSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeSequence64_g_tc;
}


RTIBool KeyTypeSequence64_initialize(
    KeyTypeSequence64* sample)
{
    return ::rapid::KeyTypeSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeSequence64_initialize_ex(
    KeyTypeSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeSequence64_initialize_w_params(
        KeyTypeSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypePairSeq_initialize(sample);
        rapid::KeyTypePairSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypePairSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypePairSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeSequence64_finalize(
    KeyTypeSequence64* sample)
{
    ::rapid::KeyTypeSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeSequence64_finalize_ex(
    KeyTypeSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeSequence64_finalize_w_params(
    KeyTypeSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypePairSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypePairSeq_finalize(sample);
            

}

void KeyTypeSequence64_finalize_optional_members(
    KeyTypeSequence64* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypePairSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypePair_finalize_optional_members(
                rapid::KeyTypePairSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeSequence64_copy(
    KeyTypeSequence64* dst,
    const KeyTypeSequence64* src)
{

    if (!rapid::KeyTypePairSeq_copy(dst,
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
 * Configure and implement 'KeyTypeSequence64' sequence class.
 */
#define T            KeyTypeSequence64
#define TSeq         KeyTypeSequence64Seq
#define T_initialize_w_params ::rapid::KeyTypeSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeSequence64_finalize_w_params
#define T_copy       ::rapid::KeyTypeSequence64_copy


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
const char *KeyTypeValueTripleTYPENAME = "rapid::KeyTypeValueTriple";

DDS_TypeCode* KeyTypeValueTriple_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member KeyTypeValueTriple_g_tc_members[3]=
    {
        {
            (char *)"key",/* Member name */
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
            (char *)"padding",/* Member name */
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
            (char *)"value",/* Member name */
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

    static DDS_TypeCode KeyTypeValueTriple_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::KeyTypeValueTriple", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        KeyTypeValueTriple_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeValueTriple*/

    if (is_initialized) {
        return &KeyTypeValueTriple_g_tc;
    }


    KeyTypeValueTriple_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    KeyTypeValueTriple_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    KeyTypeValueTriple_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();

    is_initialized = RTI_TRUE;

    return &KeyTypeValueTriple_g_tc;
}


RTIBool KeyTypeValueTriple_initialize(
    KeyTypeValueTriple* sample) {
  return ::rapid::KeyTypeValueTriple_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool KeyTypeValueTriple_initialize_ex(
    KeyTypeValueTriple* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeValueTriple_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeValueTriple_initialize_w_params(
        KeyTypeValueTriple* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->key,allocParams)) {
        return RTI_FALSE;
    }
            

/** Place-holder to keep binary layout of the struct backward compatible. Data type should be set in ParameterUnion */

    if (!RTICdrType_initLong(&sample->padding)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ParameterUnion_initialize_w_params(&sample->value,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void KeyTypeValueTriple_finalize(
    KeyTypeValueTriple* sample)
{
    ::rapid::KeyTypeValueTriple_finalize_ex(sample,RTI_TRUE);
}
        
void KeyTypeValueTriple_finalize_ex(
    KeyTypeValueTriple* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeValueTriple_finalize_w_params(
        sample,&deallocParams);
}

void KeyTypeValueTriple_finalize_w_params(
        KeyTypeValueTriple* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->key, deallocParams);
            

/** Place-holder to keep binary layout of the struct backward compatible. Data type should be set in ParameterUnion */


    rapid::ParameterUnion_finalize_w_params(&sample->value, deallocParams);
            

}

void KeyTypeValueTriple_finalize_optional_members(
    KeyTypeValueTriple* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->key, deallocParams->delete_pointers);
            

/** Place-holder to keep binary layout of the struct backward compatible. Data type should be set in ParameterUnion */


    rapid::ParameterUnion_finalize_optional_members(&sample->value, deallocParams->delete_pointers);
            

}

RTIBool KeyTypeValueTriple_copy(
    KeyTypeValueTriple* dst,
    const KeyTypeValueTriple* src)
{

    if (!rapid::String32_copy(
        &dst->key, &src->key)) {
        return RTI_FALSE;
    }
            

/** Place-holder to keep binary layout of the struct backward compatible. Data type should be set in ParameterUnion */

    if (!RTICdrType_copyLong(
        &dst->padding, &src->padding)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ParameterUnion_copy(
        &dst->value, &src->value)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'KeyTypeValueTriple' sequence class.
 */
#define T KeyTypeValueTriple
#define TSeq KeyTypeValueTripleSeq
#define T_initialize_w_params ::rapid::KeyTypeValueTriple_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeValueTriple_finalize_w_params
#define T_copy       ::rapid::KeyTypeValueTriple_copy

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

DDS_TypeCode* KeyTypeValueSequence8_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeValueSequence8_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(8,NULL);

    static DDS_TypeCode KeyTypeValueSequence8_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeValueSequence8", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeValueSequence8 */

    if (is_initialized) {
        return &KeyTypeValueSequence8_g_tc;
    }

    KeyTypeValueSequence8_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueTriple_get_typecode();
    KeyTypeValueSequence8_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeValueSequence8_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeValueSequence8_g_tc;
}


RTIBool KeyTypeValueSequence8_initialize(
    KeyTypeValueSequence8* sample)
{
    return ::rapid::KeyTypeValueSequence8_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeValueSequence8_initialize_ex(
    KeyTypeValueSequence8* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeValueSequence8_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeValueSequence8_initialize_w_params(
        KeyTypeValueSequence8* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypeValueTripleSeq_initialize(sample);
        rapid::KeyTypeValueTripleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypeValueTripleSeq_set_maximum(sample,
                                           (8))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypeValueTripleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeValueSequence8_finalize(
    KeyTypeValueSequence8* sample)
{
    ::rapid::KeyTypeValueSequence8_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeValueSequence8_finalize_ex(
    KeyTypeValueSequence8* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeValueSequence8_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeValueSequence8_finalize_w_params(
    KeyTypeValueSequence8* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypeValueTripleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypeValueTripleSeq_finalize(sample);
            

}

void KeyTypeValueSequence8_finalize_optional_members(
    KeyTypeValueSequence8* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypeValueTripleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypeValueTriple_finalize_optional_members(
                rapid::KeyTypeValueTripleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeValueSequence8_copy(
    KeyTypeValueSequence8* dst,
    const KeyTypeValueSequence8* src)
{

    if (!rapid::KeyTypeValueTripleSeq_copy(dst,
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
 * Configure and implement 'KeyTypeValueSequence8' sequence class.
 */
#define T            KeyTypeValueSequence8
#define TSeq         KeyTypeValueSequence8Seq
#define T_initialize_w_params ::rapid::KeyTypeValueSequence8_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeValueSequence8_finalize_w_params
#define T_copy       ::rapid::KeyTypeValueSequence8_copy


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

DDS_TypeCode* KeyTypeValueSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeValueSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode KeyTypeValueSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeValueSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeValueSequence16 */

    if (is_initialized) {
        return &KeyTypeValueSequence16_g_tc;
    }

    KeyTypeValueSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueTriple_get_typecode();
    KeyTypeValueSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeValueSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeValueSequence16_g_tc;
}


RTIBool KeyTypeValueSequence16_initialize(
    KeyTypeValueSequence16* sample)
{
    return ::rapid::KeyTypeValueSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeValueSequence16_initialize_ex(
    KeyTypeValueSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeValueSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeValueSequence16_initialize_w_params(
        KeyTypeValueSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypeValueTripleSeq_initialize(sample);
        rapid::KeyTypeValueTripleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypeValueTripleSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypeValueTripleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeValueSequence16_finalize(
    KeyTypeValueSequence16* sample)
{
    ::rapid::KeyTypeValueSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeValueSequence16_finalize_ex(
    KeyTypeValueSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeValueSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeValueSequence16_finalize_w_params(
    KeyTypeValueSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypeValueTripleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypeValueTripleSeq_finalize(sample);
            

}

void KeyTypeValueSequence16_finalize_optional_members(
    KeyTypeValueSequence16* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypeValueTripleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypeValueTriple_finalize_optional_members(
                rapid::KeyTypeValueTripleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeValueSequence16_copy(
    KeyTypeValueSequence16* dst,
    const KeyTypeValueSequence16* src)
{

    if (!rapid::KeyTypeValueTripleSeq_copy(dst,
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
 * Configure and implement 'KeyTypeValueSequence16' sequence class.
 */
#define T            KeyTypeValueSequence16
#define TSeq         KeyTypeValueSequence16Seq
#define T_initialize_w_params ::rapid::KeyTypeValueSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeValueSequence16_finalize_w_params
#define T_copy       ::rapid::KeyTypeValueSequence16_copy


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

DDS_TypeCode* KeyTypeValueSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeValueSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode KeyTypeValueSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeValueSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeValueSequence32 */

    if (is_initialized) {
        return &KeyTypeValueSequence32_g_tc;
    }

    KeyTypeValueSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueTriple_get_typecode();
    KeyTypeValueSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeValueSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeValueSequence32_g_tc;
}


RTIBool KeyTypeValueSequence32_initialize(
    KeyTypeValueSequence32* sample)
{
    return ::rapid::KeyTypeValueSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeValueSequence32_initialize_ex(
    KeyTypeValueSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeValueSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeValueSequence32_initialize_w_params(
        KeyTypeValueSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypeValueTripleSeq_initialize(sample);
        rapid::KeyTypeValueTripleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypeValueTripleSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypeValueTripleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeValueSequence32_finalize(
    KeyTypeValueSequence32* sample)
{
    ::rapid::KeyTypeValueSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeValueSequence32_finalize_ex(
    KeyTypeValueSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeValueSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeValueSequence32_finalize_w_params(
    KeyTypeValueSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypeValueTripleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypeValueTripleSeq_finalize(sample);
            

}

void KeyTypeValueSequence32_finalize_optional_members(
    KeyTypeValueSequence32* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypeValueTripleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypeValueTriple_finalize_optional_members(
                rapid::KeyTypeValueTripleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeValueSequence32_copy(
    KeyTypeValueSequence32* dst,
    const KeyTypeValueSequence32* src)
{

    if (!rapid::KeyTypeValueTripleSeq_copy(dst,
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
 * Configure and implement 'KeyTypeValueSequence32' sequence class.
 */
#define T            KeyTypeValueSequence32
#define TSeq         KeyTypeValueSequence32Seq
#define T_initialize_w_params ::rapid::KeyTypeValueSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeValueSequence32_finalize_w_params
#define T_copy       ::rapid::KeyTypeValueSequence32_copy


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

DDS_TypeCode* KeyTypeValueSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeValueSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode KeyTypeValueSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeValueSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeValueSequence64 */

    if (is_initialized) {
        return &KeyTypeValueSequence64_g_tc;
    }

    KeyTypeValueSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueTriple_get_typecode();
    KeyTypeValueSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeValueSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeValueSequence64_g_tc;
}


RTIBool KeyTypeValueSequence64_initialize(
    KeyTypeValueSequence64* sample)
{
    return ::rapid::KeyTypeValueSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeValueSequence64_initialize_ex(
    KeyTypeValueSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeValueSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeValueSequence64_initialize_w_params(
        KeyTypeValueSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypeValueTripleSeq_initialize(sample);
        rapid::KeyTypeValueTripleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypeValueTripleSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypeValueTripleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeValueSequence64_finalize(
    KeyTypeValueSequence64* sample)
{
    ::rapid::KeyTypeValueSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeValueSequence64_finalize_ex(
    KeyTypeValueSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeValueSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeValueSequence64_finalize_w_params(
    KeyTypeValueSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypeValueTripleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypeValueTripleSeq_finalize(sample);
            

}

void KeyTypeValueSequence64_finalize_optional_members(
    KeyTypeValueSequence64* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypeValueTripleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypeValueTriple_finalize_optional_members(
                rapid::KeyTypeValueTripleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeValueSequence64_copy(
    KeyTypeValueSequence64* dst,
    const KeyTypeValueSequence64* src)
{

    if (!rapid::KeyTypeValueTripleSeq_copy(dst,
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
 * Configure and implement 'KeyTypeValueSequence64' sequence class.
 */
#define T            KeyTypeValueSequence64
#define TSeq         KeyTypeValueSequence64Seq
#define T_initialize_w_params ::rapid::KeyTypeValueSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeValueSequence64_finalize_w_params
#define T_copy       ::rapid::KeyTypeValueSequence64_copy


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

DDS_TypeCode* KeyTypeValueSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode KeyTypeValueSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode KeyTypeValueSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::KeyTypeValueSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for KeyTypeValueSequence128 */

    if (is_initialized) {
        return &KeyTypeValueSequence128_g_tc;
    }

    KeyTypeValueSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueTriple_get_typecode();
    KeyTypeValueSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&KeyTypeValueSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &KeyTypeValueSequence128_g_tc;
}


RTIBool KeyTypeValueSequence128_initialize(
    KeyTypeValueSequence128* sample)
{
    return ::rapid::KeyTypeValueSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool KeyTypeValueSequence128_initialize_ex(
    KeyTypeValueSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::KeyTypeValueSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool KeyTypeValueSequence128_initialize_w_params(
        KeyTypeValueSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::KeyTypeValueTripleSeq_initialize(sample);
        rapid::KeyTypeValueTripleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::KeyTypeValueTripleSeq_set_maximum(sample,
                                           (128))) {
            return RTI_FALSE;
        }
    } else {
        rapid::KeyTypeValueTripleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void KeyTypeValueSequence128_finalize(
    KeyTypeValueSequence128* sample)
{
    ::rapid::KeyTypeValueSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void KeyTypeValueSequence128_finalize_ex(
    KeyTypeValueSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::KeyTypeValueSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void KeyTypeValueSequence128_finalize_w_params(
    KeyTypeValueSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::KeyTypeValueTripleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::KeyTypeValueTripleSeq_finalize(sample);
            

}

void KeyTypeValueSequence128_finalize_optional_members(
    KeyTypeValueSequence128* sample, RTIBool deletePointers)
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
        length = rapid::KeyTypeValueTripleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::KeyTypeValueTriple_finalize_optional_members(
                rapid::KeyTypeValueTripleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool KeyTypeValueSequence128_copy(
    KeyTypeValueSequence128* dst,
    const KeyTypeValueSequence128* src)
{

    if (!rapid::KeyTypeValueTripleSeq_copy(dst,
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
 * Configure and implement 'KeyTypeValueSequence128' sequence class.
 */
#define T            KeyTypeValueSequence128
#define TSeq         KeyTypeValueSequence128Seq
#define T_initialize_w_params ::rapid::KeyTypeValueSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::KeyTypeValueSequence128_finalize_w_params
#define T_copy       ::rapid::KeyTypeValueSequence128_copy


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

DDS_TypeCode* ValueSequence8_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ValueSequence8_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(8,NULL);

    static DDS_TypeCode ValueSequence8_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ValueSequence8", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ValueSequence8 */

    if (is_initialized) {
        return &ValueSequence8_g_tc;
    }

    ValueSequence8_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    ValueSequence8_g_tc._data._typeCode = (RTICdrTypeCode *)&ValueSequence8_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ValueSequence8_g_tc;
}


RTIBool ValueSequence8_initialize(
    ValueSequence8* sample)
{
    return ::rapid::ValueSequence8_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ValueSequence8_initialize_ex(
    ValueSequence8* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ValueSequence8_initialize_w_params(
        sample,&allocParams);
}

RTIBool ValueSequence8_initialize_w_params(
        ValueSequence8* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (8))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ValueSequence8_finalize(
    ValueSequence8* sample)
{
    ::rapid::ValueSequence8_finalize_ex(sample,RTI_TRUE);
}
 
void ValueSequence8_finalize_ex(
    ValueSequence8* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ValueSequence8_finalize_w_params(
        sample,&deallocParams);
}
           
void ValueSequence8_finalize_w_params(
    ValueSequence8* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void ValueSequence8_finalize_optional_members(
    ValueSequence8* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ValueSequence8_copy(
    ValueSequence8* dst,
    const ValueSequence8* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'ValueSequence8' sequence class.
 */
#define T            ValueSequence8
#define TSeq         ValueSequence8Seq
#define T_initialize_w_params ::rapid::ValueSequence8_initialize_w_params
#define T_finalize_w_params   ::rapid::ValueSequence8_finalize_w_params
#define T_copy       ::rapid::ValueSequence8_copy


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

DDS_TypeCode* ValueSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ValueSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode ValueSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ValueSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ValueSequence16 */

    if (is_initialized) {
        return &ValueSequence16_g_tc;
    }

    ValueSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    ValueSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&ValueSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ValueSequence16_g_tc;
}


RTIBool ValueSequence16_initialize(
    ValueSequence16* sample)
{
    return ::rapid::ValueSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ValueSequence16_initialize_ex(
    ValueSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ValueSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool ValueSequence16_initialize_w_params(
        ValueSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ValueSequence16_finalize(
    ValueSequence16* sample)
{
    ::rapid::ValueSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void ValueSequence16_finalize_ex(
    ValueSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ValueSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void ValueSequence16_finalize_w_params(
    ValueSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void ValueSequence16_finalize_optional_members(
    ValueSequence16* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ValueSequence16_copy(
    ValueSequence16* dst,
    const ValueSequence16* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'ValueSequence16' sequence class.
 */
#define T            ValueSequence16
#define TSeq         ValueSequence16Seq
#define T_initialize_w_params ::rapid::ValueSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::ValueSequence16_finalize_w_params
#define T_copy       ::rapid::ValueSequence16_copy


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

DDS_TypeCode* ValueSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ValueSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode ValueSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ValueSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ValueSequence32 */

    if (is_initialized) {
        return &ValueSequence32_g_tc;
    }

    ValueSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    ValueSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&ValueSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ValueSequence32_g_tc;
}


RTIBool ValueSequence32_initialize(
    ValueSequence32* sample)
{
    return ::rapid::ValueSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ValueSequence32_initialize_ex(
    ValueSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ValueSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool ValueSequence32_initialize_w_params(
        ValueSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ValueSequence32_finalize(
    ValueSequence32* sample)
{
    ::rapid::ValueSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void ValueSequence32_finalize_ex(
    ValueSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ValueSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void ValueSequence32_finalize_w_params(
    ValueSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void ValueSequence32_finalize_optional_members(
    ValueSequence32* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ValueSequence32_copy(
    ValueSequence32* dst,
    const ValueSequence32* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'ValueSequence32' sequence class.
 */
#define T            ValueSequence32
#define TSeq         ValueSequence32Seq
#define T_initialize_w_params ::rapid::ValueSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::ValueSequence32_finalize_w_params
#define T_copy       ::rapid::ValueSequence32_copy


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

DDS_TypeCode* ValueSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ValueSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode ValueSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ValueSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ValueSequence64 */

    if (is_initialized) {
        return &ValueSequence64_g_tc;
    }

    ValueSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    ValueSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&ValueSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ValueSequence64_g_tc;
}


RTIBool ValueSequence64_initialize(
    ValueSequence64* sample)
{
    return ::rapid::ValueSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ValueSequence64_initialize_ex(
    ValueSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ValueSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool ValueSequence64_initialize_w_params(
        ValueSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ValueSequence64_finalize(
    ValueSequence64* sample)
{
    ::rapid::ValueSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void ValueSequence64_finalize_ex(
    ValueSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ValueSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void ValueSequence64_finalize_w_params(
    ValueSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void ValueSequence64_finalize_optional_members(
    ValueSequence64* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ValueSequence64_copy(
    ValueSequence64* dst,
    const ValueSequence64* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'ValueSequence64' sequence class.
 */
#define T            ValueSequence64
#define TSeq         ValueSequence64Seq
#define T_initialize_w_params ::rapid::ValueSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::ValueSequence64_finalize_w_params
#define T_copy       ::rapid::ValueSequence64_copy


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

DDS_TypeCode* ValueSequence128_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ValueSequence128_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode ValueSequence128_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ValueSequence128", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ValueSequence128 */

    if (is_initialized) {
        return &ValueSequence128_g_tc;
    }

    ValueSequence128_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    ValueSequence128_g_tc._data._typeCode = (RTICdrTypeCode *)&ValueSequence128_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ValueSequence128_g_tc;
}


RTIBool ValueSequence128_initialize(
    ValueSequence128* sample)
{
    return ::rapid::ValueSequence128_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ValueSequence128_initialize_ex(
    ValueSequence128* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ValueSequence128_initialize_w_params(
        sample,&allocParams);
}

RTIBool ValueSequence128_initialize_w_params(
        ValueSequence128* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (128))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ValueSequence128_finalize(
    ValueSequence128* sample)
{
    ::rapid::ValueSequence128_finalize_ex(sample,RTI_TRUE);
}
 
void ValueSequence128_finalize_ex(
    ValueSequence128* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ValueSequence128_finalize_w_params(
        sample,&deallocParams);
}
           
void ValueSequence128_finalize_w_params(
    ValueSequence128* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void ValueSequence128_finalize_optional_members(
    ValueSequence128* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ValueSequence128_copy(
    ValueSequence128* dst,
    const ValueSequence128* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'ValueSequence128' sequence class.
 */
#define T            ValueSequence128
#define TSeq         ValueSequence128Seq
#define T_initialize_w_params ::rapid::ValueSequence128_initialize_w_params
#define T_finalize_w_params   ::rapid::ValueSequence128_finalize_w_params
#define T_copy       ::rapid::ValueSequence128_copy


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
const char *Transform3DTYPENAME = "rapid::Transform3D";

DDS_TypeCode* Transform3D_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Transform3D_g_tc_members[2]=
    {
        {
            (char *)"xyz",/* Member name */
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
            (char *)"rot",/* Member name */
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

    static DDS_TypeCode Transform3D_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::Transform3D", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Transform3D_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Transform3D*/

    if (is_initialized) {
        return &Transform3D_g_tc;
    }


    Transform3D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    Transform3D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::Mat33f_get_typecode();

    is_initialized = RTI_TRUE;

    return &Transform3D_g_tc;
}


RTIBool Transform3D_initialize(
    Transform3D* sample) {
  return ::rapid::Transform3D_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Transform3D_initialize_ex(
    Transform3D* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Transform3D_initialize_w_params(
        sample,&allocParams);
}

RTIBool Transform3D_initialize_w_params(
        Transform3D* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::Vec3d_initialize_w_params(&sample->xyz,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Mat33f_initialize_w_params(&sample->rot,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Transform3D_finalize(
    Transform3D* sample)
{
    ::rapid::Transform3D_finalize_ex(sample,RTI_TRUE);
}
        
void Transform3D_finalize_ex(
    Transform3D* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Transform3D_finalize_w_params(
        sample,&deallocParams);
}

void Transform3D_finalize_w_params(
        Transform3D* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::Vec3d_finalize_w_params(&sample->xyz, deallocParams);
            

    rapid::Mat33f_finalize_w_params(&sample->rot, deallocParams);
            

}

void Transform3D_finalize_optional_members(
    Transform3D* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::Vec3d_finalize_optional_members(&sample->xyz, deallocParams->delete_pointers);
            

    rapid::Mat33f_finalize_optional_members(&sample->rot, deallocParams->delete_pointers);
            

}

RTIBool Transform3D_copy(
    Transform3D* dst,
    const Transform3D* src)
{

    if (!rapid::Vec3d_copy(
        &dst->xyz, &src->xyz)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Mat33f_copy(
        &dst->rot, &src->rot)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Transform3D' sequence class.
 */
#define T Transform3D
#define TSeq Transform3DSeq
#define T_initialize_w_params ::rapid::Transform3D_initialize_w_params
#define T_finalize_w_params   ::rapid::Transform3D_finalize_w_params
#define T_copy       ::rapid::Transform3D_copy

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
const char *NamedFloatSequenceTYPENAME = "rapid::NamedFloatSequence";

DDS_TypeCode* NamedFloatSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NamedFloatSequence_g_tc_members[2]=
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
            (char *)"values",/* Member name */
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

    static DDS_TypeCode NamedFloatSequence_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::NamedFloatSequence", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        NamedFloatSequence_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedFloatSequence*/

    if (is_initialized) {
        return &NamedFloatSequence_g_tc;
    }


    NamedFloatSequence_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    NamedFloatSequence_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence64_get_typecode();

    is_initialized = RTI_TRUE;

    return &NamedFloatSequence_g_tc;
}


RTIBool NamedFloatSequence_initialize(
    NamedFloatSequence* sample) {
  return ::rapid::NamedFloatSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NamedFloatSequence_initialize_ex(
    NamedFloatSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NamedFloatSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedFloatSequence_initialize_w_params(
        NamedFloatSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String16_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_initialize_w_params(&sample->values,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NamedFloatSequence_finalize(
    NamedFloatSequence* sample)
{
    ::rapid::NamedFloatSequence_finalize_ex(sample,RTI_TRUE);
}
        
void NamedFloatSequence_finalize_ex(
    NamedFloatSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NamedFloatSequence_finalize_w_params(
        sample,&deallocParams);
}

void NamedFloatSequence_finalize_w_params(
        NamedFloatSequence* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String16_finalize_w_params(&sample->name, deallocParams);
            

    rapid::FloatSequence64_finalize_w_params(&sample->values, deallocParams);
            

}

void NamedFloatSequence_finalize_optional_members(
    NamedFloatSequence* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String16_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            

    rapid::FloatSequence64_finalize_optional_members(&sample->values, deallocParams->delete_pointers);
            

}

RTIBool NamedFloatSequence_copy(
    NamedFloatSequence* dst,
    const NamedFloatSequence* src)
{

    if (!rapid::String16_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_copy(
        &dst->values, &src->values)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NamedFloatSequence' sequence class.
 */
#define T NamedFloatSequence
#define TSeq NamedFloatSequenceSeq
#define T_initialize_w_params ::rapid::NamedFloatSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::NamedFloatSequence_finalize_w_params
#define T_copy       ::rapid::NamedFloatSequence_copy

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

DDS_TypeCode* NFSeqSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NFSeqSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode NFSeqSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::NFSeqSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NFSeqSequence16 */

    if (is_initialized) {
        return &NFSeqSequence16_g_tc;
    }

    NFSeqSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::NamedFloatSequence_get_typecode();
    NFSeqSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&NFSeqSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NFSeqSequence16_g_tc;
}


RTIBool NFSeqSequence16_initialize(
    NFSeqSequence16* sample)
{
    return ::rapid::NFSeqSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NFSeqSequence16_initialize_ex(
    NFSeqSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NFSeqSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool NFSeqSequence16_initialize_w_params(
        NFSeqSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::NamedFloatSequenceSeq_initialize(sample);
        rapid::NamedFloatSequenceSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::NamedFloatSequenceSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::NamedFloatSequenceSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NFSeqSequence16_finalize(
    NFSeqSequence16* sample)
{
    ::rapid::NFSeqSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void NFSeqSequence16_finalize_ex(
    NFSeqSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NFSeqSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void NFSeqSequence16_finalize_w_params(
    NFSeqSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::NamedFloatSequenceSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::NamedFloatSequenceSeq_finalize(sample);
            

}

void NFSeqSequence16_finalize_optional_members(
    NFSeqSequence16* sample, RTIBool deletePointers)
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
        length = rapid::NamedFloatSequenceSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::NamedFloatSequence_finalize_optional_members(
                rapid::NamedFloatSequenceSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NFSeqSequence16_copy(
    NFSeqSequence16* dst,
    const NFSeqSequence16* src)
{

    if (!rapid::NamedFloatSequenceSeq_copy(dst,
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
 * Configure and implement 'NFSeqSequence16' sequence class.
 */
#define T            NFSeqSequence16
#define TSeq         NFSeqSequence16Seq
#define T_initialize_w_params ::rapid::NFSeqSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::NFSeqSequence16_finalize_w_params
#define T_copy       ::rapid::NFSeqSequence16_copy


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

DDS_TypeCode* NFSeqSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NFSeqSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode NFSeqSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::NFSeqSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NFSeqSequence32 */

    if (is_initialized) {
        return &NFSeqSequence32_g_tc;
    }

    NFSeqSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::NamedFloatSequence_get_typecode();
    NFSeqSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&NFSeqSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NFSeqSequence32_g_tc;
}


RTIBool NFSeqSequence32_initialize(
    NFSeqSequence32* sample)
{
    return ::rapid::NFSeqSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NFSeqSequence32_initialize_ex(
    NFSeqSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NFSeqSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool NFSeqSequence32_initialize_w_params(
        NFSeqSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::NamedFloatSequenceSeq_initialize(sample);
        rapid::NamedFloatSequenceSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::NamedFloatSequenceSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::NamedFloatSequenceSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NFSeqSequence32_finalize(
    NFSeqSequence32* sample)
{
    ::rapid::NFSeqSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void NFSeqSequence32_finalize_ex(
    NFSeqSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NFSeqSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void NFSeqSequence32_finalize_w_params(
    NFSeqSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::NamedFloatSequenceSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::NamedFloatSequenceSeq_finalize(sample);
            

}

void NFSeqSequence32_finalize_optional_members(
    NFSeqSequence32* sample, RTIBool deletePointers)
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
        length = rapid::NamedFloatSequenceSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::NamedFloatSequence_finalize_optional_members(
                rapid::NamedFloatSequenceSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NFSeqSequence32_copy(
    NFSeqSequence32* dst,
    const NFSeqSequence32* src)
{

    if (!rapid::NamedFloatSequenceSeq_copy(dst,
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
 * Configure and implement 'NFSeqSequence32' sequence class.
 */
#define T            NFSeqSequence32
#define TSeq         NFSeqSequence32Seq
#define T_initialize_w_params ::rapid::NFSeqSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::NFSeqSequence32_finalize_w_params
#define T_copy       ::rapid::NFSeqSequence32_copy


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
const char *FloatRangeTYPENAME = "rapid::FloatRange";

DDS_TypeCode* FloatRange_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FloatRange_g_tc_members[2]=
    {
        {
            (char *)"min",/* Member name */
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
            (char *)"max",/* Member name */
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

    static DDS_TypeCode FloatRange_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FloatRange", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        FloatRange_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatRange*/

    if (is_initialized) {
        return &FloatRange_g_tc;
    }


    FloatRange_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatRange_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &FloatRange_g_tc;
}


RTIBool FloatRange_initialize(
    FloatRange* sample) {
  return ::rapid::FloatRange_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FloatRange_initialize_ex(
    FloatRange* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatRange_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatRange_initialize_w_params(
        FloatRange* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->min)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->max)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void FloatRange_finalize(
    FloatRange* sample)
{
    ::rapid::FloatRange_finalize_ex(sample,RTI_TRUE);
}
        
void FloatRange_finalize_ex(
    FloatRange* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatRange_finalize_w_params(
        sample,&deallocParams);
}

void FloatRange_finalize_w_params(
        FloatRange* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void FloatRange_finalize_optional_members(
    FloatRange* sample, RTIBool deletePointers)
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

RTIBool FloatRange_copy(
    FloatRange* dst,
    const FloatRange* src)
{

    if (!RTICdrType_copyFloat(
        &dst->min, &src->min)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->max, &src->max)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FloatRange' sequence class.
 */
#define T FloatRange
#define TSeq FloatRangeSeq
#define T_initialize_w_params ::rapid::FloatRange_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatRange_finalize_w_params
#define T_copy       ::rapid::FloatRange_copy

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
const char *FloatRangeValueTYPENAME = "rapid::FloatRangeValue";

DDS_TypeCode* FloatRangeValue_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FloatRangeValue_g_tc_members[3]=
    {
        {
            (char *)"min",/* Member name */
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
            (char *)"max",/* Member name */
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
            (char *)"value",/* Member name */
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

    static DDS_TypeCode FloatRangeValue_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FloatRangeValue", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        FloatRangeValue_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FloatRangeValue*/

    if (is_initialized) {
        return &FloatRangeValue_g_tc;
    }


    FloatRangeValue_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatRangeValue_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    FloatRangeValue_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &FloatRangeValue_g_tc;
}


RTIBool FloatRangeValue_initialize(
    FloatRangeValue* sample) {
  return ::rapid::FloatRangeValue_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FloatRangeValue_initialize_ex(
    FloatRangeValue* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FloatRangeValue_initialize_w_params(
        sample,&allocParams);
}

RTIBool FloatRangeValue_initialize_w_params(
        FloatRangeValue* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->min)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->max)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->value)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void FloatRangeValue_finalize(
    FloatRangeValue* sample)
{
    ::rapid::FloatRangeValue_finalize_ex(sample,RTI_TRUE);
}
        
void FloatRangeValue_finalize_ex(
    FloatRangeValue* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FloatRangeValue_finalize_w_params(
        sample,&deallocParams);
}

void FloatRangeValue_finalize_w_params(
        FloatRangeValue* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void FloatRangeValue_finalize_optional_members(
    FloatRangeValue* sample, RTIBool deletePointers)
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

RTIBool FloatRangeValue_copy(
    FloatRangeValue* dst,
    const FloatRangeValue* src)
{

    if (!RTICdrType_copyFloat(
        &dst->min, &src->min)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->max, &src->max)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->value, &src->value)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FloatRangeValue' sequence class.
 */
#define T FloatRangeValue
#define TSeq FloatRangeValueSeq
#define T_initialize_w_params ::rapid::FloatRangeValue_initialize_w_params
#define T_finalize_w_params   ::rapid::FloatRangeValue_finalize_w_params
#define T_copy       ::rapid::FloatRangeValue_copy

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
const char *OptionSetValueTYPENAME = "rapid::OptionSetValue";

DDS_TypeCode* OptionSetValue_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OptionSetValue_g_tc_members[2]=
    {
        {
            (char *)"index",/* Member name */
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
            (char *)"options",/* Member name */
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

    static DDS_TypeCode OptionSetValue_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::OptionSetValue", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OptionSetValue_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OptionSetValue*/

    if (is_initialized) {
        return &OptionSetValue_g_tc;
    }


    OptionSetValue_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    OptionSetValue_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String32Sequence16_get_typecode();

    is_initialized = RTI_TRUE;

    return &OptionSetValue_g_tc;
}


RTIBool OptionSetValue_initialize(
    OptionSetValue* sample) {
  return ::rapid::OptionSetValue_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OptionSetValue_initialize_ex(
    OptionSetValue* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::OptionSetValue_initialize_w_params(
        sample,&allocParams);
}

RTIBool OptionSetValue_initialize_w_params(
        OptionSetValue* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->index)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String32Sequence16_initialize_w_params(&sample->options,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OptionSetValue_finalize(
    OptionSetValue* sample)
{
    ::rapid::OptionSetValue_finalize_ex(sample,RTI_TRUE);
}
        
void OptionSetValue_finalize_ex(
    OptionSetValue* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::OptionSetValue_finalize_w_params(
        sample,&deallocParams);
}

void OptionSetValue_finalize_w_params(
        OptionSetValue* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    rapid::String32Sequence16_finalize_w_params(&sample->options, deallocParams);
            

}

void OptionSetValue_finalize_optional_members(
    OptionSetValue* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    rapid::String32Sequence16_finalize_optional_members(&sample->options, deallocParams->delete_pointers);
            

}

RTIBool OptionSetValue_copy(
    OptionSetValue* dst,
    const OptionSetValue* src)
{

    if (!RTICdrType_copyLong(
        &dst->index, &src->index)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32Sequence16_copy(
        &dst->options, &src->options)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OptionSetValue' sequence class.
 */
#define T OptionSetValue
#define TSeq OptionSetValueSeq
#define T_initialize_w_params ::rapid::OptionSetValue_initialize_w_params
#define T_finalize_w_params   ::rapid::OptionSetValue_finalize_w_params
#define T_copy       ::rapid::OptionSetValue_copy

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
const char *NamedFloatRangeValueTYPENAME = "rapid::NamedFloatRangeValue";

DDS_TypeCode* NamedFloatRangeValue_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NamedFloatRangeValue_g_tc_members[2]=
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
            (char *)"range",/* Member name */
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

    static DDS_TypeCode NamedFloatRangeValue_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::NamedFloatRangeValue", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        NamedFloatRangeValue_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedFloatRangeValue*/

    if (is_initialized) {
        return &NamedFloatRangeValue_g_tc;
    }


    NamedFloatRangeValue_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    NamedFloatRangeValue_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatRangeValue_get_typecode();

    is_initialized = RTI_TRUE;

    return &NamedFloatRangeValue_g_tc;
}


RTIBool NamedFloatRangeValue_initialize(
    NamedFloatRangeValue* sample) {
  return ::rapid::NamedFloatRangeValue_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NamedFloatRangeValue_initialize_ex(
    NamedFloatRangeValue* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NamedFloatRangeValue_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedFloatRangeValue_initialize_w_params(
        NamedFloatRangeValue* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String16_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatRangeValue_initialize_w_params(&sample->range,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NamedFloatRangeValue_finalize(
    NamedFloatRangeValue* sample)
{
    ::rapid::NamedFloatRangeValue_finalize_ex(sample,RTI_TRUE);
}
        
void NamedFloatRangeValue_finalize_ex(
    NamedFloatRangeValue* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NamedFloatRangeValue_finalize_w_params(
        sample,&deallocParams);
}

void NamedFloatRangeValue_finalize_w_params(
        NamedFloatRangeValue* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String16_finalize_w_params(&sample->name, deallocParams);
            

    rapid::FloatRangeValue_finalize_w_params(&sample->range, deallocParams);
            

}

void NamedFloatRangeValue_finalize_optional_members(
    NamedFloatRangeValue* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String16_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            

    rapid::FloatRangeValue_finalize_optional_members(&sample->range, deallocParams->delete_pointers);
            

}

RTIBool NamedFloatRangeValue_copy(
    NamedFloatRangeValue* dst,
    const NamedFloatRangeValue* src)
{

    if (!rapid::String16_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatRangeValue_copy(
        &dst->range, &src->range)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NamedFloatRangeValue' sequence class.
 */
#define T NamedFloatRangeValue
#define TSeq NamedFloatRangeValueSeq
#define T_initialize_w_params ::rapid::NamedFloatRangeValue_initialize_w_params
#define T_finalize_w_params   ::rapid::NamedFloatRangeValue_finalize_w_params
#define T_copy       ::rapid::NamedFloatRangeValue_copy

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

DDS_TypeCode* NamedFloatRangeValueSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NamedFloatRangeValueSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode NamedFloatRangeValueSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::NamedFloatRangeValueSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedFloatRangeValueSequence16 */

    if (is_initialized) {
        return &NamedFloatRangeValueSequence16_g_tc;
    }

    NamedFloatRangeValueSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::NamedFloatRangeValue_get_typecode();
    NamedFloatRangeValueSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&NamedFloatRangeValueSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NamedFloatRangeValueSequence16_g_tc;
}


RTIBool NamedFloatRangeValueSequence16_initialize(
    NamedFloatRangeValueSequence16* sample)
{
    return ::rapid::NamedFloatRangeValueSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NamedFloatRangeValueSequence16_initialize_ex(
    NamedFloatRangeValueSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NamedFloatRangeValueSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedFloatRangeValueSequence16_initialize_w_params(
        NamedFloatRangeValueSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::NamedFloatRangeValueSeq_initialize(sample);
        rapid::NamedFloatRangeValueSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::NamedFloatRangeValueSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::NamedFloatRangeValueSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NamedFloatRangeValueSequence16_finalize(
    NamedFloatRangeValueSequence16* sample)
{
    ::rapid::NamedFloatRangeValueSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void NamedFloatRangeValueSequence16_finalize_ex(
    NamedFloatRangeValueSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NamedFloatRangeValueSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void NamedFloatRangeValueSequence16_finalize_w_params(
    NamedFloatRangeValueSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::NamedFloatRangeValueSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::NamedFloatRangeValueSeq_finalize(sample);
            

}

void NamedFloatRangeValueSequence16_finalize_optional_members(
    NamedFloatRangeValueSequence16* sample, RTIBool deletePointers)
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
        length = rapid::NamedFloatRangeValueSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::NamedFloatRangeValue_finalize_optional_members(
                rapid::NamedFloatRangeValueSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NamedFloatRangeValueSequence16_copy(
    NamedFloatRangeValueSequence16* dst,
    const NamedFloatRangeValueSequence16* src)
{

    if (!rapid::NamedFloatRangeValueSeq_copy(dst,
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
 * Configure and implement 'NamedFloatRangeValueSequence16' sequence class.
 */
#define T            NamedFloatRangeValueSequence16
#define TSeq         NamedFloatRangeValueSequence16Seq
#define T_initialize_w_params ::rapid::NamedFloatRangeValueSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::NamedFloatRangeValueSequence16_finalize_w_params
#define T_copy       ::rapid::NamedFloatRangeValueSequence16_copy


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

DDS_TypeCode* NamedFloatRangeValueSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NamedFloatRangeValueSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode NamedFloatRangeValueSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::NamedFloatRangeValueSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedFloatRangeValueSequence32 */

    if (is_initialized) {
        return &NamedFloatRangeValueSequence32_g_tc;
    }

    NamedFloatRangeValueSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::NamedFloatRangeValue_get_typecode();
    NamedFloatRangeValueSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&NamedFloatRangeValueSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NamedFloatRangeValueSequence32_g_tc;
}


RTIBool NamedFloatRangeValueSequence32_initialize(
    NamedFloatRangeValueSequence32* sample)
{
    return ::rapid::NamedFloatRangeValueSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NamedFloatRangeValueSequence32_initialize_ex(
    NamedFloatRangeValueSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NamedFloatRangeValueSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedFloatRangeValueSequence32_initialize_w_params(
        NamedFloatRangeValueSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::NamedFloatRangeValueSeq_initialize(sample);
        rapid::NamedFloatRangeValueSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::NamedFloatRangeValueSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::NamedFloatRangeValueSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NamedFloatRangeValueSequence32_finalize(
    NamedFloatRangeValueSequence32* sample)
{
    ::rapid::NamedFloatRangeValueSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void NamedFloatRangeValueSequence32_finalize_ex(
    NamedFloatRangeValueSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NamedFloatRangeValueSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void NamedFloatRangeValueSequence32_finalize_w_params(
    NamedFloatRangeValueSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::NamedFloatRangeValueSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::NamedFloatRangeValueSeq_finalize(sample);
            

}

void NamedFloatRangeValueSequence32_finalize_optional_members(
    NamedFloatRangeValueSequence32* sample, RTIBool deletePointers)
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
        length = rapid::NamedFloatRangeValueSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::NamedFloatRangeValue_finalize_optional_members(
                rapid::NamedFloatRangeValueSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NamedFloatRangeValueSequence32_copy(
    NamedFloatRangeValueSequence32* dst,
    const NamedFloatRangeValueSequence32* src)
{

    if (!rapid::NamedFloatRangeValueSeq_copy(dst,
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
 * Configure and implement 'NamedFloatRangeValueSequence32' sequence class.
 */
#define T            NamedFloatRangeValueSequence32
#define TSeq         NamedFloatRangeValueSequence32Seq
#define T_initialize_w_params ::rapid::NamedFloatRangeValueSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::NamedFloatRangeValueSequence32_finalize_w_params
#define T_copy       ::rapid::NamedFloatRangeValueSequence32_copy


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
const char *NamedOptionSetValueTYPENAME = "rapid::NamedOptionSetValue";

DDS_TypeCode* NamedOptionSetValue_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NamedOptionSetValue_g_tc_members[2]=
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
            (char *)"option",/* Member name */
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

    static DDS_TypeCode NamedOptionSetValue_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::NamedOptionSetValue", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        NamedOptionSetValue_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedOptionSetValue*/

    if (is_initialized) {
        return &NamedOptionSetValue_g_tc;
    }


    NamedOptionSetValue_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    NamedOptionSetValue_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::OptionSetValue_get_typecode();

    is_initialized = RTI_TRUE;

    return &NamedOptionSetValue_g_tc;
}


RTIBool NamedOptionSetValue_initialize(
    NamedOptionSetValue* sample) {
  return ::rapid::NamedOptionSetValue_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NamedOptionSetValue_initialize_ex(
    NamedOptionSetValue* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NamedOptionSetValue_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedOptionSetValue_initialize_w_params(
        NamedOptionSetValue* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String16_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OptionSetValue_initialize_w_params(&sample->option,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NamedOptionSetValue_finalize(
    NamedOptionSetValue* sample)
{
    ::rapid::NamedOptionSetValue_finalize_ex(sample,RTI_TRUE);
}
        
void NamedOptionSetValue_finalize_ex(
    NamedOptionSetValue* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NamedOptionSetValue_finalize_w_params(
        sample,&deallocParams);
}

void NamedOptionSetValue_finalize_w_params(
        NamedOptionSetValue* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String16_finalize_w_params(&sample->name, deallocParams);
            

    rapid::OptionSetValue_finalize_w_params(&sample->option, deallocParams);
            

}

void NamedOptionSetValue_finalize_optional_members(
    NamedOptionSetValue* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String16_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            

    rapid::OptionSetValue_finalize_optional_members(&sample->option, deallocParams->delete_pointers);
            

}

RTIBool NamedOptionSetValue_copy(
    NamedOptionSetValue* dst,
    const NamedOptionSetValue* src)
{

    if (!rapid::String16_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OptionSetValue_copy(
        &dst->option, &src->option)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NamedOptionSetValue' sequence class.
 */
#define T NamedOptionSetValue
#define TSeq NamedOptionSetValueSeq
#define T_initialize_w_params ::rapid::NamedOptionSetValue_initialize_w_params
#define T_finalize_w_params   ::rapid::NamedOptionSetValue_finalize_w_params
#define T_copy       ::rapid::NamedOptionSetValue_copy

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

DDS_TypeCode* NamedOptionSetValueSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NamedOptionSetValueSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode NamedOptionSetValueSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::NamedOptionSetValueSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedOptionSetValueSequence16 */

    if (is_initialized) {
        return &NamedOptionSetValueSequence16_g_tc;
    }

    NamedOptionSetValueSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::NamedOptionSetValue_get_typecode();
    NamedOptionSetValueSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&NamedOptionSetValueSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NamedOptionSetValueSequence16_g_tc;
}


RTIBool NamedOptionSetValueSequence16_initialize(
    NamedOptionSetValueSequence16* sample)
{
    return ::rapid::NamedOptionSetValueSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NamedOptionSetValueSequence16_initialize_ex(
    NamedOptionSetValueSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NamedOptionSetValueSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedOptionSetValueSequence16_initialize_w_params(
        NamedOptionSetValueSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::NamedOptionSetValueSeq_initialize(sample);
        rapid::NamedOptionSetValueSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::NamedOptionSetValueSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::NamedOptionSetValueSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NamedOptionSetValueSequence16_finalize(
    NamedOptionSetValueSequence16* sample)
{
    ::rapid::NamedOptionSetValueSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void NamedOptionSetValueSequence16_finalize_ex(
    NamedOptionSetValueSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NamedOptionSetValueSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void NamedOptionSetValueSequence16_finalize_w_params(
    NamedOptionSetValueSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::NamedOptionSetValueSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::NamedOptionSetValueSeq_finalize(sample);
            

}

void NamedOptionSetValueSequence16_finalize_optional_members(
    NamedOptionSetValueSequence16* sample, RTIBool deletePointers)
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
        length = rapid::NamedOptionSetValueSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::NamedOptionSetValue_finalize_optional_members(
                rapid::NamedOptionSetValueSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NamedOptionSetValueSequence16_copy(
    NamedOptionSetValueSequence16* dst,
    const NamedOptionSetValueSequence16* src)
{

    if (!rapid::NamedOptionSetValueSeq_copy(dst,
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
 * Configure and implement 'NamedOptionSetValueSequence16' sequence class.
 */
#define T            NamedOptionSetValueSequence16
#define TSeq         NamedOptionSetValueSequence16Seq
#define T_initialize_w_params ::rapid::NamedOptionSetValueSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::NamedOptionSetValueSequence16_finalize_w_params
#define T_copy       ::rapid::NamedOptionSetValueSequence16_copy


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

DDS_TypeCode* NamedOptionSetValueSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NamedOptionSetValueSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode NamedOptionSetValueSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::NamedOptionSetValueSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NamedOptionSetValueSequence32 */

    if (is_initialized) {
        return &NamedOptionSetValueSequence32_g_tc;
    }

    NamedOptionSetValueSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::NamedOptionSetValue_get_typecode();
    NamedOptionSetValueSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&NamedOptionSetValueSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NamedOptionSetValueSequence32_g_tc;
}


RTIBool NamedOptionSetValueSequence32_initialize(
    NamedOptionSetValueSequence32* sample)
{
    return ::rapid::NamedOptionSetValueSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NamedOptionSetValueSequence32_initialize_ex(
    NamedOptionSetValueSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::NamedOptionSetValueSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool NamedOptionSetValueSequence32_initialize_w_params(
        NamedOptionSetValueSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::NamedOptionSetValueSeq_initialize(sample);
        rapid::NamedOptionSetValueSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::NamedOptionSetValueSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::NamedOptionSetValueSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NamedOptionSetValueSequence32_finalize(
    NamedOptionSetValueSequence32* sample)
{
    ::rapid::NamedOptionSetValueSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void NamedOptionSetValueSequence32_finalize_ex(
    NamedOptionSetValueSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::NamedOptionSetValueSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void NamedOptionSetValueSequence32_finalize_w_params(
    NamedOptionSetValueSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::NamedOptionSetValueSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::NamedOptionSetValueSeq_finalize(sample);
            

}

void NamedOptionSetValueSequence32_finalize_optional_members(
    NamedOptionSetValueSequence32* sample, RTIBool deletePointers)
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
        length = rapid::NamedOptionSetValueSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::NamedOptionSetValue_finalize_optional_members(
                rapid::NamedOptionSetValueSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NamedOptionSetValueSequence32_copy(
    NamedOptionSetValueSequence32* dst,
    const NamedOptionSetValueSequence32* src)
{

    if (!rapid::NamedOptionSetValueSeq_copy(dst,
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
 * Configure and implement 'NamedOptionSetValueSequence32' sequence class.
 */
#define T            NamedOptionSetValueSequence32
#define TSeq         NamedOptionSetValueSequence32Seq
#define T_initialize_w_params ::rapid::NamedOptionSetValueSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::NamedOptionSetValueSequence32_finalize_w_params
#define T_copy       ::rapid::NamedOptionSetValueSequence32_copy


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
