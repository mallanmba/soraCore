
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoSample.idl using "rtiddsgen".
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



#include "SystemInfoSample.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *BatteryInfoSampleTYPENAME = "rapid::ext::BatteryInfoSample";

DDS_TypeCode* BatteryInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BatteryInfoSample_g_tc_members[3]=
    {
        {
            (char *)"acStatus",/* Member name */
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
            (char *)"batteryStatus",/* Member name */
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
            (char *)"percentage",/* Member name */
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

    static DDS_TypeCode BatteryInfoSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::BatteryInfoSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BatteryInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BatteryInfoSample*/

    if (is_initialized) {
        return &BatteryInfoSample_g_tc;
    }


    BatteryInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    BatteryInfoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    BatteryInfoSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &BatteryInfoSample_g_tc;
}


RTIBool BatteryInfoSample_initialize(
    BatteryInfoSample* sample) {
  return ::rapid::ext::BatteryInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool BatteryInfoSample_initialize_ex(
    BatteryInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::BatteryInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatteryInfoSample_initialize_w_params(
        BatteryInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->acStatus)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->batteryStatus)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->percentage)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void BatteryInfoSample_finalize(
    BatteryInfoSample* sample)
{
    ::rapid::ext::BatteryInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void BatteryInfoSample_finalize_ex(
    BatteryInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::BatteryInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void BatteryInfoSample_finalize_w_params(
        BatteryInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void BatteryInfoSample_finalize_optional_members(
    BatteryInfoSample* sample, RTIBool deletePointers)
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

RTIBool BatteryInfoSample_copy(
    BatteryInfoSample* dst,
    const BatteryInfoSample* src)
{

    if (!RTICdrType_copyLong(
        &dst->acStatus, &src->acStatus)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->batteryStatus, &src->batteryStatus)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->percentage, &src->percentage)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BatteryInfoSample' sequence class.
 */
#define T BatteryInfoSample
#define TSeq BatteryInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::BatteryInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::BatteryInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::BatteryInfoSample_copy

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

DDS_TypeCode* BatteryInfoSampleSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode BatteryInfoSampleSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode BatteryInfoSampleSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::BatteryInfoSampleSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BatteryInfoSampleSequence */

    if (is_initialized) {
        return &BatteryInfoSampleSequence_g_tc;
    }

    BatteryInfoSampleSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::BatteryInfoSample_get_typecode();
    BatteryInfoSampleSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&BatteryInfoSampleSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &BatteryInfoSampleSequence_g_tc;
}


RTIBool BatteryInfoSampleSequence_initialize(
    BatteryInfoSampleSequence* sample)
{
    return ::rapid::ext::BatteryInfoSampleSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool BatteryInfoSampleSequence_initialize_ex(
    BatteryInfoSampleSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::BatteryInfoSampleSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatteryInfoSampleSequence_initialize_w_params(
        BatteryInfoSampleSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::BatteryInfoSampleSeq_initialize(sample);
        rapid::ext::BatteryInfoSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::BatteryInfoSampleSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::BatteryInfoSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void BatteryInfoSampleSequence_finalize(
    BatteryInfoSampleSequence* sample)
{
    ::rapid::ext::BatteryInfoSampleSequence_finalize_ex(sample,RTI_TRUE);
}
 
void BatteryInfoSampleSequence_finalize_ex(
    BatteryInfoSampleSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::BatteryInfoSampleSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void BatteryInfoSampleSequence_finalize_w_params(
    BatteryInfoSampleSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::BatteryInfoSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::BatteryInfoSampleSeq_finalize(sample);
            

}

void BatteryInfoSampleSequence_finalize_optional_members(
    BatteryInfoSampleSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::BatteryInfoSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::BatteryInfoSample_finalize_optional_members(
                rapid::ext::BatteryInfoSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool BatteryInfoSampleSequence_copy(
    BatteryInfoSampleSequence* dst,
    const BatteryInfoSampleSequence* src)
{

    if (!rapid::ext::BatteryInfoSampleSeq_copy(dst,
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
 * Configure and implement 'BatteryInfoSampleSequence' sequence class.
 */
#define T            BatteryInfoSampleSequence
#define TSeq         BatteryInfoSampleSequenceSeq
#define T_initialize_w_params ::rapid::ext::BatteryInfoSampleSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::BatteryInfoSampleSequence_finalize_w_params
#define T_copy       ::rapid::ext::BatteryInfoSampleSequence_copy


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
const char *CpuInfoSampleTYPENAME = "rapid::ext::CpuInfoSample";

DDS_TypeCode* CpuInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member CpuInfoSample_g_tc_members[5]=
    {
        {
            (char *)"busy",/* Member name */
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
            (char *)"idle",/* Member name */
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
            (char *)"nice",/* Member name */
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
            (char *)"system",/* Member name */
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
            (char *)"user",/* Member name */
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

    static DDS_TypeCode CpuInfoSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::CpuInfoSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        CpuInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for CpuInfoSample*/

    if (is_initialized) {
        return &CpuInfoSample_g_tc;
    }


    CpuInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    CpuInfoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    CpuInfoSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    CpuInfoSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    CpuInfoSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &CpuInfoSample_g_tc;
}


RTIBool CpuInfoSample_initialize(
    CpuInfoSample* sample) {
  return ::rapid::ext::CpuInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool CpuInfoSample_initialize_ex(
    CpuInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::CpuInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool CpuInfoSample_initialize_w_params(
        CpuInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->busy)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->idle)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->nice)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->system)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->user)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void CpuInfoSample_finalize(
    CpuInfoSample* sample)
{
    ::rapid::ext::CpuInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void CpuInfoSample_finalize_ex(
    CpuInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::CpuInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void CpuInfoSample_finalize_w_params(
        CpuInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */







}

void CpuInfoSample_finalize_optional_members(
    CpuInfoSample* sample, RTIBool deletePointers)
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

RTIBool CpuInfoSample_copy(
    CpuInfoSample* dst,
    const CpuInfoSample* src)
{

    if (!RTICdrType_copyFloat(
        &dst->busy, &src->busy)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->idle, &src->idle)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->nice, &src->nice)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->system, &src->system)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->user, &src->user)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CpuInfoSample' sequence class.
 */
#define T CpuInfoSample
#define TSeq CpuInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::CpuInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::CpuInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::CpuInfoSample_copy

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

DDS_TypeCode* CpuInfoSampleSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode CpuInfoSampleSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode CpuInfoSampleSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::CpuInfoSampleSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for CpuInfoSampleSequence */

    if (is_initialized) {
        return &CpuInfoSampleSequence_g_tc;
    }

    CpuInfoSampleSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::CpuInfoSample_get_typecode();
    CpuInfoSampleSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&CpuInfoSampleSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &CpuInfoSampleSequence_g_tc;
}


RTIBool CpuInfoSampleSequence_initialize(
    CpuInfoSampleSequence* sample)
{
    return ::rapid::ext::CpuInfoSampleSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool CpuInfoSampleSequence_initialize_ex(
    CpuInfoSampleSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::CpuInfoSampleSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool CpuInfoSampleSequence_initialize_w_params(
        CpuInfoSampleSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::CpuInfoSampleSeq_initialize(sample);
        rapid::ext::CpuInfoSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::CpuInfoSampleSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::CpuInfoSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void CpuInfoSampleSequence_finalize(
    CpuInfoSampleSequence* sample)
{
    ::rapid::ext::CpuInfoSampleSequence_finalize_ex(sample,RTI_TRUE);
}
 
void CpuInfoSampleSequence_finalize_ex(
    CpuInfoSampleSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::CpuInfoSampleSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void CpuInfoSampleSequence_finalize_w_params(
    CpuInfoSampleSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::CpuInfoSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::CpuInfoSampleSeq_finalize(sample);
            

}

void CpuInfoSampleSequence_finalize_optional_members(
    CpuInfoSampleSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::CpuInfoSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::CpuInfoSample_finalize_optional_members(
                rapid::ext::CpuInfoSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool CpuInfoSampleSequence_copy(
    CpuInfoSampleSequence* dst,
    const CpuInfoSampleSequence* src)
{

    if (!rapid::ext::CpuInfoSampleSeq_copy(dst,
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
 * Configure and implement 'CpuInfoSampleSequence' sequence class.
 */
#define T            CpuInfoSampleSequence
#define TSeq         CpuInfoSampleSequenceSeq
#define T_initialize_w_params ::rapid::ext::CpuInfoSampleSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::CpuInfoSampleSequence_finalize_w_params
#define T_copy       ::rapid::ext::CpuInfoSampleSequence_copy


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
const char *FilesystemInfoSampleTYPENAME = "rapid::ext::FilesystemInfoSample";

DDS_TypeCode* FilesystemInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FilesystemInfoSample_g_tc_members[2]=
    {
        {
            (char *)"used",/* Member name */
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
            (char *)"available",/* Member name */
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

    static DDS_TypeCode FilesystemInfoSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::FilesystemInfoSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        FilesystemInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FilesystemInfoSample*/

    if (is_initialized) {
        return &FilesystemInfoSample_g_tc;
    }


    FilesystemInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    FilesystemInfoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &FilesystemInfoSample_g_tc;
}


RTIBool FilesystemInfoSample_initialize(
    FilesystemInfoSample* sample) {
  return ::rapid::ext::FilesystemInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FilesystemInfoSample_initialize_ex(
    FilesystemInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::FilesystemInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool FilesystemInfoSample_initialize_w_params(
        FilesystemInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLongLong(&sample->used)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->available)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void FilesystemInfoSample_finalize(
    FilesystemInfoSample* sample)
{
    ::rapid::ext::FilesystemInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void FilesystemInfoSample_finalize_ex(
    FilesystemInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::FilesystemInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void FilesystemInfoSample_finalize_w_params(
        FilesystemInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void FilesystemInfoSample_finalize_optional_members(
    FilesystemInfoSample* sample, RTIBool deletePointers)
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

RTIBool FilesystemInfoSample_copy(
    FilesystemInfoSample* dst,
    const FilesystemInfoSample* src)
{

    if (!RTICdrType_copyLongLong(
        &dst->used, &src->used)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->available, &src->available)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FilesystemInfoSample' sequence class.
 */
#define T FilesystemInfoSample
#define TSeq FilesystemInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::FilesystemInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::FilesystemInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::FilesystemInfoSample_copy

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

DDS_TypeCode* FilesystemInfoSampleSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FilesystemInfoSampleSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode FilesystemInfoSampleSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::FilesystemInfoSampleSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FilesystemInfoSampleSequence */

    if (is_initialized) {
        return &FilesystemInfoSampleSequence_g_tc;
    }

    FilesystemInfoSampleSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::FilesystemInfoSample_get_typecode();
    FilesystemInfoSampleSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&FilesystemInfoSampleSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FilesystemInfoSampleSequence_g_tc;
}


RTIBool FilesystemInfoSampleSequence_initialize(
    FilesystemInfoSampleSequence* sample)
{
    return ::rapid::ext::FilesystemInfoSampleSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FilesystemInfoSampleSequence_initialize_ex(
    FilesystemInfoSampleSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::FilesystemInfoSampleSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool FilesystemInfoSampleSequence_initialize_w_params(
        FilesystemInfoSampleSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::FilesystemInfoSampleSeq_initialize(sample);
        rapid::ext::FilesystemInfoSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::FilesystemInfoSampleSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::FilesystemInfoSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void FilesystemInfoSampleSequence_finalize(
    FilesystemInfoSampleSequence* sample)
{
    ::rapid::ext::FilesystemInfoSampleSequence_finalize_ex(sample,RTI_TRUE);
}
 
void FilesystemInfoSampleSequence_finalize_ex(
    FilesystemInfoSampleSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::FilesystemInfoSampleSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void FilesystemInfoSampleSequence_finalize_w_params(
    FilesystemInfoSampleSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::FilesystemInfoSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::FilesystemInfoSampleSeq_finalize(sample);
            

}

void FilesystemInfoSampleSequence_finalize_optional_members(
    FilesystemInfoSampleSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::FilesystemInfoSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::FilesystemInfoSample_finalize_optional_members(
                rapid::ext::FilesystemInfoSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool FilesystemInfoSampleSequence_copy(
    FilesystemInfoSampleSequence* dst,
    const FilesystemInfoSampleSequence* src)
{

    if (!rapid::ext::FilesystemInfoSampleSeq_copy(dst,
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
 * Configure and implement 'FilesystemInfoSampleSequence' sequence class.
 */
#define T            FilesystemInfoSampleSequence
#define TSeq         FilesystemInfoSampleSequenceSeq
#define T_initialize_w_params ::rapid::ext::FilesystemInfoSampleSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::FilesystemInfoSampleSequence_finalize_w_params
#define T_copy       ::rapid::ext::FilesystemInfoSampleSequence_copy


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
const char *MemoryInfoSampleTYPENAME = "rapid::ext::MemoryInfoSample";

DDS_TypeCode* MemoryInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MemoryInfoSample_g_tc_members[4]=
    {
        {
            (char *)"buffers",/* Member name */
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
            (char *)"cached",/* Member name */
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
            (char *)"free",/* Member name */
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
            (char *)"swap",/* Member name */
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

    static DDS_TypeCode MemoryInfoSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::MemoryInfoSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        MemoryInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MemoryInfoSample*/

    if (is_initialized) {
        return &MemoryInfoSample_g_tc;
    }


    MemoryInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    MemoryInfoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    MemoryInfoSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    MemoryInfoSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &MemoryInfoSample_g_tc;
}


RTIBool MemoryInfoSample_initialize(
    MemoryInfoSample* sample) {
  return ::rapid::ext::MemoryInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MemoryInfoSample_initialize_ex(
    MemoryInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::MemoryInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool MemoryInfoSample_initialize_w_params(
        MemoryInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->buffers)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->cached)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->free)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->swap)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void MemoryInfoSample_finalize(
    MemoryInfoSample* sample)
{
    ::rapid::ext::MemoryInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void MemoryInfoSample_finalize_ex(
    MemoryInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::MemoryInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void MemoryInfoSample_finalize_w_params(
        MemoryInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void MemoryInfoSample_finalize_optional_members(
    MemoryInfoSample* sample, RTIBool deletePointers)
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

RTIBool MemoryInfoSample_copy(
    MemoryInfoSample* dst,
    const MemoryInfoSample* src)
{

    if (!RTICdrType_copyLong(
        &dst->buffers, &src->buffers)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->cached, &src->cached)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->free, &src->free)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->swap, &src->swap)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MemoryInfoSample' sequence class.
 */
#define T MemoryInfoSample
#define TSeq MemoryInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::MemoryInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::MemoryInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::MemoryInfoSample_copy

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
const char *ThermalInfoSampleTYPENAME = "rapid::ext::ThermalInfoSample";

DDS_TypeCode* ThermalInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ThermalInfoSample_g_tc_members[1]=
    {
        {
            (char *)"temperature",/* Member name */
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
        }
    };

    static DDS_TypeCode ThermalInfoSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::ThermalInfoSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        ThermalInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ThermalInfoSample*/

    if (is_initialized) {
        return &ThermalInfoSample_g_tc;
    }


    ThermalInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &ThermalInfoSample_g_tc;
}


RTIBool ThermalInfoSample_initialize(
    ThermalInfoSample* sample) {
  return ::rapid::ext::ThermalInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ThermalInfoSample_initialize_ex(
    ThermalInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ThermalInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool ThermalInfoSample_initialize_w_params(
        ThermalInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->temperature)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void ThermalInfoSample_finalize(
    ThermalInfoSample* sample)
{
    ::rapid::ext::ThermalInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void ThermalInfoSample_finalize_ex(
    ThermalInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ThermalInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void ThermalInfoSample_finalize_w_params(
        ThermalInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void ThermalInfoSample_finalize_optional_members(
    ThermalInfoSample* sample, RTIBool deletePointers)
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

RTIBool ThermalInfoSample_copy(
    ThermalInfoSample* dst,
    const ThermalInfoSample* src)
{

    if (!RTICdrType_copyFloat(
        &dst->temperature, &src->temperature)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ThermalInfoSample' sequence class.
 */
#define T ThermalInfoSample
#define TSeq ThermalInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::ThermalInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ThermalInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::ThermalInfoSample_copy

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

DDS_TypeCode* ThermalInfoSampleSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ThermalInfoSampleSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode ThermalInfoSampleSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::ThermalInfoSampleSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ThermalInfoSampleSequence */

    if (is_initialized) {
        return &ThermalInfoSampleSequence_g_tc;
    }

    ThermalInfoSampleSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::ThermalInfoSample_get_typecode();
    ThermalInfoSampleSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ThermalInfoSampleSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ThermalInfoSampleSequence_g_tc;
}


RTIBool ThermalInfoSampleSequence_initialize(
    ThermalInfoSampleSequence* sample)
{
    return ::rapid::ext::ThermalInfoSampleSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ThermalInfoSampleSequence_initialize_ex(
    ThermalInfoSampleSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ThermalInfoSampleSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ThermalInfoSampleSequence_initialize_w_params(
        ThermalInfoSampleSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::ThermalInfoSampleSeq_initialize(sample);
        rapid::ext::ThermalInfoSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::ThermalInfoSampleSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::ThermalInfoSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ThermalInfoSampleSequence_finalize(
    ThermalInfoSampleSequence* sample)
{
    ::rapid::ext::ThermalInfoSampleSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ThermalInfoSampleSequence_finalize_ex(
    ThermalInfoSampleSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ThermalInfoSampleSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ThermalInfoSampleSequence_finalize_w_params(
    ThermalInfoSampleSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::ThermalInfoSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::ThermalInfoSampleSeq_finalize(sample);
            

}

void ThermalInfoSampleSequence_finalize_optional_members(
    ThermalInfoSampleSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::ThermalInfoSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::ThermalInfoSample_finalize_optional_members(
                rapid::ext::ThermalInfoSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ThermalInfoSampleSequence_copy(
    ThermalInfoSampleSequence* dst,
    const ThermalInfoSampleSequence* src)
{

    if (!rapid::ext::ThermalInfoSampleSeq_copy(dst,
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
 * Configure and implement 'ThermalInfoSampleSequence' sequence class.
 */
#define T            ThermalInfoSampleSequence
#define TSeq         ThermalInfoSampleSequenceSeq
#define T_initialize_w_params ::rapid::ext::ThermalInfoSampleSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ThermalInfoSampleSequence_finalize_w_params
#define T_copy       ::rapid::ext::ThermalInfoSampleSequence_copy


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
const char *NetTrafficInfoSampleTYPENAME = "rapid::ext::NetTrafficInfoSample";

DDS_TypeCode* NetTrafficInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NetTrafficInfoSample_g_tc_members[4]=
    {
        {
            (char *)"rx",/* Member name */
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
            (char *)"tx",/* Member name */
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
            (char *)"rxErrors",/* Member name */
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
            (char *)"txErrors",/* Member name */
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

    static DDS_TypeCode NetTrafficInfoSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::NetTrafficInfoSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        NetTrafficInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NetTrafficInfoSample*/

    if (is_initialized) {
        return &NetTrafficInfoSample_g_tc;
    }


    NetTrafficInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &NetTrafficInfoSample_g_tc;
}


RTIBool NetTrafficInfoSample_initialize(
    NetTrafficInfoSample* sample) {
  return ::rapid::ext::NetTrafficInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NetTrafficInfoSample_initialize_ex(
    NetTrafficInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::NetTrafficInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool NetTrafficInfoSample_initialize_w_params(
        NetTrafficInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->rx)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->tx)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->rxErrors)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->txErrors)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void NetTrafficInfoSample_finalize(
    NetTrafficInfoSample* sample)
{
    ::rapid::ext::NetTrafficInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void NetTrafficInfoSample_finalize_ex(
    NetTrafficInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::NetTrafficInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void NetTrafficInfoSample_finalize_w_params(
        NetTrafficInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void NetTrafficInfoSample_finalize_optional_members(
    NetTrafficInfoSample* sample, RTIBool deletePointers)
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

RTIBool NetTrafficInfoSample_copy(
    NetTrafficInfoSample* dst,
    const NetTrafficInfoSample* src)
{

    if (!RTICdrType_copyLong(
        &dst->rx, &src->rx)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->tx, &src->tx)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->rxErrors, &src->rxErrors)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->txErrors, &src->txErrors)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NetTrafficInfoSample' sequence class.
 */
#define T NetTrafficInfoSample
#define TSeq NetTrafficInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::NetTrafficInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::NetTrafficInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::NetTrafficInfoSample_copy

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

DDS_TypeCode* NetTrafficInfoSampleSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NetTrafficInfoSampleSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode NetTrafficInfoSampleSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::NetTrafficInfoSampleSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NetTrafficInfoSampleSequence */

    if (is_initialized) {
        return &NetTrafficInfoSampleSequence_g_tc;
    }

    NetTrafficInfoSampleSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::NetTrafficInfoSample_get_typecode();
    NetTrafficInfoSampleSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&NetTrafficInfoSampleSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NetTrafficInfoSampleSequence_g_tc;
}


RTIBool NetTrafficInfoSampleSequence_initialize(
    NetTrafficInfoSampleSequence* sample)
{
    return ::rapid::ext::NetTrafficInfoSampleSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NetTrafficInfoSampleSequence_initialize_ex(
    NetTrafficInfoSampleSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::NetTrafficInfoSampleSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool NetTrafficInfoSampleSequence_initialize_w_params(
        NetTrafficInfoSampleSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::NetTrafficInfoSampleSeq_initialize(sample);
        rapid::ext::NetTrafficInfoSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::NetTrafficInfoSampleSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::NetTrafficInfoSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NetTrafficInfoSampleSequence_finalize(
    NetTrafficInfoSampleSequence* sample)
{
    ::rapid::ext::NetTrafficInfoSampleSequence_finalize_ex(sample,RTI_TRUE);
}
 
void NetTrafficInfoSampleSequence_finalize_ex(
    NetTrafficInfoSampleSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::NetTrafficInfoSampleSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void NetTrafficInfoSampleSequence_finalize_w_params(
    NetTrafficInfoSampleSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::NetTrafficInfoSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::NetTrafficInfoSampleSeq_finalize(sample);
            

}

void NetTrafficInfoSampleSequence_finalize_optional_members(
    NetTrafficInfoSampleSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::NetTrafficInfoSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::NetTrafficInfoSample_finalize_optional_members(
                rapid::ext::NetTrafficInfoSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NetTrafficInfoSampleSequence_copy(
    NetTrafficInfoSampleSequence* dst,
    const NetTrafficInfoSampleSequence* src)
{

    if (!rapid::ext::NetTrafficInfoSampleSeq_copy(dst,
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
 * Configure and implement 'NetTrafficInfoSampleSequence' sequence class.
 */
#define T            NetTrafficInfoSampleSequence
#define TSeq         NetTrafficInfoSampleSequenceSeq
#define T_initialize_w_params ::rapid::ext::NetTrafficInfoSampleSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::NetTrafficInfoSampleSequence_finalize_w_params
#define T_copy       ::rapid::ext::NetTrafficInfoSampleSequence_copy


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
const char *WifiInfoSampleTYPENAME = "rapid::ext::WifiInfoSample";

DDS_TypeCode* WifiInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member WifiInfoSample_g_tc_members[5]=
    {
        {
            (char *)"linkQuality",/* Member name */
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
            (char *)"signalLevel",/* Member name */
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
            (char *)"noiseLevel",/* Member name */
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
            (char *)"frequency",/* Member name */
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
            (char *)"bitrate",/* Member name */
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

    static DDS_TypeCode WifiInfoSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::WifiInfoSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        WifiInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for WifiInfoSample*/

    if (is_initialized) {
        return &WifiInfoSample_g_tc;
    }


    WifiInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    WifiInfoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    WifiInfoSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    WifiInfoSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WifiInfoSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &WifiInfoSample_g_tc;
}


RTIBool WifiInfoSample_initialize(
    WifiInfoSample* sample) {
  return ::rapid::ext::WifiInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool WifiInfoSample_initialize_ex(
    WifiInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::WifiInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool WifiInfoSample_initialize_w_params(
        WifiInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->linkQuality)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->signalLevel)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->noiseLevel)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->frequency)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->bitrate)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void WifiInfoSample_finalize(
    WifiInfoSample* sample)
{
    ::rapid::ext::WifiInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void WifiInfoSample_finalize_ex(
    WifiInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::WifiInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void WifiInfoSample_finalize_w_params(
        WifiInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */







}

void WifiInfoSample_finalize_optional_members(
    WifiInfoSample* sample, RTIBool deletePointers)
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

RTIBool WifiInfoSample_copy(
    WifiInfoSample* dst,
    const WifiInfoSample* src)
{

    if (!RTICdrType_copyLong(
        &dst->linkQuality, &src->linkQuality)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->signalLevel, &src->signalLevel)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->noiseLevel, &src->noiseLevel)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->frequency, &src->frequency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->bitrate, &src->bitrate)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'WifiInfoSample' sequence class.
 */
#define T WifiInfoSample
#define TSeq WifiInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::WifiInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::WifiInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::WifiInfoSample_copy

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

DDS_TypeCode* WifiInfoSampleSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode WifiInfoSampleSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(8,NULL);

    static DDS_TypeCode WifiInfoSampleSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::WifiInfoSampleSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for WifiInfoSampleSequence */

    if (is_initialized) {
        return &WifiInfoSampleSequence_g_tc;
    }

    WifiInfoSampleSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::WifiInfoSample_get_typecode();
    WifiInfoSampleSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&WifiInfoSampleSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &WifiInfoSampleSequence_g_tc;
}


RTIBool WifiInfoSampleSequence_initialize(
    WifiInfoSampleSequence* sample)
{
    return ::rapid::ext::WifiInfoSampleSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool WifiInfoSampleSequence_initialize_ex(
    WifiInfoSampleSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::WifiInfoSampleSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool WifiInfoSampleSequence_initialize_w_params(
        WifiInfoSampleSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::WifiInfoSampleSeq_initialize(sample);
        rapid::ext::WifiInfoSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::WifiInfoSampleSeq_set_maximum(sample,
                                           (8))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::WifiInfoSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void WifiInfoSampleSequence_finalize(
    WifiInfoSampleSequence* sample)
{
    ::rapid::ext::WifiInfoSampleSequence_finalize_ex(sample,RTI_TRUE);
}
 
void WifiInfoSampleSequence_finalize_ex(
    WifiInfoSampleSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::WifiInfoSampleSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void WifiInfoSampleSequence_finalize_w_params(
    WifiInfoSampleSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::WifiInfoSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::WifiInfoSampleSeq_finalize(sample);
            

}

void WifiInfoSampleSequence_finalize_optional_members(
    WifiInfoSampleSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::WifiInfoSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::WifiInfoSample_finalize_optional_members(
                rapid::ext::WifiInfoSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool WifiInfoSampleSequence_copy(
    WifiInfoSampleSequence* dst,
    const WifiInfoSampleSequence* src)
{

    if (!rapid::ext::WifiInfoSampleSeq_copy(dst,
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
 * Configure and implement 'WifiInfoSampleSequence' sequence class.
 */
#define T            WifiInfoSampleSequence
#define TSeq         WifiInfoSampleSequenceSeq
#define T_initialize_w_params ::rapid::ext::WifiInfoSampleSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::WifiInfoSampleSequence_finalize_w_params
#define T_copy       ::rapid::ext::WifiInfoSampleSequence_copy


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
const char *SystemInfoSampleTYPENAME = "rapid::ext::SystemInfoSample";

DDS_TypeCode* SystemInfoSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SystemInfoSample_g_tc_members[7]=
    {
        {
            (char *)"batteries",/* Member name */
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
            (char *)"memory",/* Member name */
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
            (char *)"cpus",/* Member name */
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
            (char *)"filesystems",/* Member name */
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
            (char *)"temperatures",/* Member name */
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
            (char *)"netInterfaces",/* Member name */
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
            (char *)"wifiInterfaces",/* Member name */
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
        }
    };

    static DDS_TypeCode SystemInfoSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::SystemInfoSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        SystemInfoSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for SystemInfoSample*/

    if (is_initialized) {
        return &SystemInfoSample_g_tc;
    }


    SystemInfoSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::BatteryInfoSampleSequence_get_typecode();
    SystemInfoSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::MemoryInfoSample_get_typecode();
    SystemInfoSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::CpuInfoSampleSequence_get_typecode();
    SystemInfoSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::FilesystemInfoSampleSequence_get_typecode();
    SystemInfoSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::ThermalInfoSampleSequence_get_typecode();
    SystemInfoSample_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::NetTrafficInfoSampleSequence_get_typecode();
    SystemInfoSample_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::WifiInfoSampleSequence_get_typecode();

    SystemInfoSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &SystemInfoSample_g_tc;
}


RTIBool SystemInfoSample_initialize(
    SystemInfoSample* sample) {
  return ::rapid::ext::SystemInfoSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SystemInfoSample_initialize_ex(
    SystemInfoSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::SystemInfoSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool SystemInfoSample_initialize_w_params(
        SystemInfoSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::BatteryInfoSampleSequence_initialize_w_params(&sample->batteries,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::MemoryInfoSample_initialize_w_params(&sample->memory,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::CpuInfoSampleSequence_initialize_w_params(&sample->cpus,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::FilesystemInfoSampleSequence_initialize_w_params(&sample->filesystems,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ThermalInfoSampleSequence_initialize_w_params(&sample->temperatures,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::NetTrafficInfoSampleSequence_initialize_w_params(&sample->netInterfaces,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::WifiInfoSampleSequence_initialize_w_params(&sample->wifiInterfaces,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SystemInfoSample_finalize(
    SystemInfoSample* sample)
{
    ::rapid::ext::SystemInfoSample_finalize_ex(sample,RTI_TRUE);
}
        
void SystemInfoSample_finalize_ex(
    SystemInfoSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::SystemInfoSample_finalize_w_params(
        sample,&deallocParams);
}

void SystemInfoSample_finalize_w_params(
        SystemInfoSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::BatteryInfoSampleSequence_finalize_w_params(&sample->batteries, deallocParams);
            

    rapid::ext::MemoryInfoSample_finalize_w_params(&sample->memory, deallocParams);
            

    rapid::ext::CpuInfoSampleSequence_finalize_w_params(&sample->cpus, deallocParams);
            

    rapid::ext::FilesystemInfoSampleSequence_finalize_w_params(&sample->filesystems, deallocParams);
            

    rapid::ext::ThermalInfoSampleSequence_finalize_w_params(&sample->temperatures, deallocParams);
            

    rapid::ext::NetTrafficInfoSampleSequence_finalize_w_params(&sample->netInterfaces, deallocParams);
            

    rapid::ext::WifiInfoSampleSequence_finalize_w_params(&sample->wifiInterfaces, deallocParams);
            

}

void SystemInfoSample_finalize_optional_members(
    SystemInfoSample* sample, RTIBool deletePointers)
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
             

    rapid::ext::BatteryInfoSampleSequence_finalize_optional_members(&sample->batteries, deallocParams->delete_pointers);
            

    rapid::ext::MemoryInfoSample_finalize_optional_members(&sample->memory, deallocParams->delete_pointers);
            

    rapid::ext::CpuInfoSampleSequence_finalize_optional_members(&sample->cpus, deallocParams->delete_pointers);
            

    rapid::ext::FilesystemInfoSampleSequence_finalize_optional_members(&sample->filesystems, deallocParams->delete_pointers);
            

    rapid::ext::ThermalInfoSampleSequence_finalize_optional_members(&sample->temperatures, deallocParams->delete_pointers);
            

    rapid::ext::NetTrafficInfoSampleSequence_finalize_optional_members(&sample->netInterfaces, deallocParams->delete_pointers);
            

    rapid::ext::WifiInfoSampleSequence_finalize_optional_members(&sample->wifiInterfaces, deallocParams->delete_pointers);
            

}

RTIBool SystemInfoSample_copy(
    SystemInfoSample* dst,
    const SystemInfoSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::BatteryInfoSampleSequence_copy(
        &dst->batteries, &src->batteries)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::MemoryInfoSample_copy(
        &dst->memory, &src->memory)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::CpuInfoSampleSequence_copy(
        &dst->cpus, &src->cpus)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::FilesystemInfoSampleSequence_copy(
        &dst->filesystems, &src->filesystems)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ThermalInfoSampleSequence_copy(
        &dst->temperatures, &src->temperatures)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::NetTrafficInfoSampleSequence_copy(
        &dst->netInterfaces, &src->netInterfaces)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::WifiInfoSampleSequence_copy(
        &dst->wifiInterfaces, &src->wifiInterfaces)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SystemInfoSample' sequence class.
 */
#define T SystemInfoSample
#define TSeq SystemInfoSampleSeq
#define T_initialize_w_params ::rapid::ext::SystemInfoSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::SystemInfoSample_finalize_w_params
#define T_copy       ::rapid::ext::SystemInfoSample_copy

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
