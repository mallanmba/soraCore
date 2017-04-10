
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoConfig.idl using "rtiddsgen".
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



#include "SystemInfoConfig.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *BatteryInfoConfigTYPENAME = "rapid::ext::BatteryInfoConfig";

DDS_TypeCode* BatteryInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BatteryInfoConfig_g_tc_members[3]=
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
            (char *)"percentageLow",/* Member name */
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
            (char *)"percentageCritical",/* Member name */
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

    static DDS_TypeCode BatteryInfoConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::BatteryInfoConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BatteryInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BatteryInfoConfig*/

    if (is_initialized) {
        return &BatteryInfoConfig_g_tc;
    }


    BatteryInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    BatteryInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    BatteryInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &BatteryInfoConfig_g_tc;
}


RTIBool BatteryInfoConfig_initialize(
    BatteryInfoConfig* sample) {
  return ::rapid::ext::BatteryInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool BatteryInfoConfig_initialize_ex(
    BatteryInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::BatteryInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatteryInfoConfig_initialize_w_params(
        BatteryInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initOctet(&sample->percentageLow)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->percentageCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void BatteryInfoConfig_finalize(
    BatteryInfoConfig* sample)
{
    ::rapid::ext::BatteryInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void BatteryInfoConfig_finalize_ex(
    BatteryInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::BatteryInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void BatteryInfoConfig_finalize_w_params(
        BatteryInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            



}

void BatteryInfoConfig_finalize_optional_members(
    BatteryInfoConfig* sample, RTIBool deletePointers)
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

RTIBool BatteryInfoConfig_copy(
    BatteryInfoConfig* dst,
    const BatteryInfoConfig* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->percentageLow, &src->percentageLow)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->percentageCritical, &src->percentageCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BatteryInfoConfig' sequence class.
 */
#define T BatteryInfoConfig
#define TSeq BatteryInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::BatteryInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::BatteryInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::BatteryInfoConfig_copy

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

DDS_TypeCode* BatteryInfoConfigSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode BatteryInfoConfigSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode BatteryInfoConfigSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::BatteryInfoConfigSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BatteryInfoConfigSequence */

    if (is_initialized) {
        return &BatteryInfoConfigSequence_g_tc;
    }

    BatteryInfoConfigSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::BatteryInfoConfig_get_typecode();
    BatteryInfoConfigSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&BatteryInfoConfigSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &BatteryInfoConfigSequence_g_tc;
}


RTIBool BatteryInfoConfigSequence_initialize(
    BatteryInfoConfigSequence* sample)
{
    return ::rapid::ext::BatteryInfoConfigSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool BatteryInfoConfigSequence_initialize_ex(
    BatteryInfoConfigSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::BatteryInfoConfigSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatteryInfoConfigSequence_initialize_w_params(
        BatteryInfoConfigSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::BatteryInfoConfigSeq_initialize(sample);
        rapid::ext::BatteryInfoConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::BatteryInfoConfigSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::BatteryInfoConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void BatteryInfoConfigSequence_finalize(
    BatteryInfoConfigSequence* sample)
{
    ::rapid::ext::BatteryInfoConfigSequence_finalize_ex(sample,RTI_TRUE);
}
 
void BatteryInfoConfigSequence_finalize_ex(
    BatteryInfoConfigSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::BatteryInfoConfigSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void BatteryInfoConfigSequence_finalize_w_params(
    BatteryInfoConfigSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::BatteryInfoConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::BatteryInfoConfigSeq_finalize(sample);
            

}

void BatteryInfoConfigSequence_finalize_optional_members(
    BatteryInfoConfigSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::BatteryInfoConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::BatteryInfoConfig_finalize_optional_members(
                rapid::ext::BatteryInfoConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool BatteryInfoConfigSequence_copy(
    BatteryInfoConfigSequence* dst,
    const BatteryInfoConfigSequence* src)
{

    if (!rapid::ext::BatteryInfoConfigSeq_copy(dst,
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
 * Configure and implement 'BatteryInfoConfigSequence' sequence class.
 */
#define T            BatteryInfoConfigSequence
#define TSeq         BatteryInfoConfigSequenceSeq
#define T_initialize_w_params ::rapid::ext::BatteryInfoConfigSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::BatteryInfoConfigSequence_finalize_w_params
#define T_copy       ::rapid::ext::BatteryInfoConfigSequence_copy


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
const char *MemoryInfoConfigTYPENAME = "rapid::ext::MemoryInfoConfig";

DDS_TypeCode* MemoryInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MemoryInfoConfig_g_tc_members[3]=
    {
        {
            (char *)"total",/* Member name */
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
            (char *)"memoryLow",/* Member name */
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
            (char *)"memoryCritical",/* Member name */
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

    static DDS_TypeCode MemoryInfoConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::MemoryInfoConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        MemoryInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MemoryInfoConfig*/

    if (is_initialized) {
        return &MemoryInfoConfig_g_tc;
    }


    MemoryInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    MemoryInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    MemoryInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &MemoryInfoConfig_g_tc;
}


RTIBool MemoryInfoConfig_initialize(
    MemoryInfoConfig* sample) {
  return ::rapid::ext::MemoryInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MemoryInfoConfig_initialize_ex(
    MemoryInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::MemoryInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool MemoryInfoConfig_initialize_w_params(
        MemoryInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->total)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->memoryLow)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->memoryCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void MemoryInfoConfig_finalize(
    MemoryInfoConfig* sample)
{
    ::rapid::ext::MemoryInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void MemoryInfoConfig_finalize_ex(
    MemoryInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::MemoryInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void MemoryInfoConfig_finalize_w_params(
        MemoryInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void MemoryInfoConfig_finalize_optional_members(
    MemoryInfoConfig* sample, RTIBool deletePointers)
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

RTIBool MemoryInfoConfig_copy(
    MemoryInfoConfig* dst,
    const MemoryInfoConfig* src)
{

    if (!RTICdrType_copyLong(
        &dst->total, &src->total)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->memoryLow, &src->memoryLow)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->memoryCritical, &src->memoryCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MemoryInfoConfig' sequence class.
 */
#define T MemoryInfoConfig
#define TSeq MemoryInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::MemoryInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::MemoryInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::MemoryInfoConfig_copy

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
const char *CpuInfoConfigTYPENAME = "rapid::ext::CpuInfoConfig";

DDS_TypeCode* CpuInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member CpuInfoConfig_g_tc_members[3]=
    {
        {
            (char *)"numCpus",/* Member name */
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
            (char *)"busyHigh",/* Member name */
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
            (char *)"busyCritical",/* Member name */
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

    static DDS_TypeCode CpuInfoConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::CpuInfoConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        CpuInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for CpuInfoConfig*/

    if (is_initialized) {
        return &CpuInfoConfig_g_tc;
    }


    CpuInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    CpuInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    CpuInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &CpuInfoConfig_g_tc;
}


RTIBool CpuInfoConfig_initialize(
    CpuInfoConfig* sample) {
  return ::rapid::ext::CpuInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool CpuInfoConfig_initialize_ex(
    CpuInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::CpuInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool CpuInfoConfig_initialize_w_params(
        CpuInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->numCpus)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->busyHigh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->busyCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void CpuInfoConfig_finalize(
    CpuInfoConfig* sample)
{
    ::rapid::ext::CpuInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void CpuInfoConfig_finalize_ex(
    CpuInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::CpuInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void CpuInfoConfig_finalize_w_params(
        CpuInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void CpuInfoConfig_finalize_optional_members(
    CpuInfoConfig* sample, RTIBool deletePointers)
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

RTIBool CpuInfoConfig_copy(
    CpuInfoConfig* dst,
    const CpuInfoConfig* src)
{

    if (!RTICdrType_copyLong(
        &dst->numCpus, &src->numCpus)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->busyHigh, &src->busyHigh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->busyCritical, &src->busyCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CpuInfoConfig' sequence class.
 */
#define T CpuInfoConfig
#define TSeq CpuInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::CpuInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::CpuInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::CpuInfoConfig_copy

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
const char *FilesystemInfoConfigTYPENAME = "rapid::ext::FilesystemInfoConfig";

DDS_TypeCode* FilesystemInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FilesystemInfoConfig_g_tc_members[4]=
    {
        {
            (char *)"capacity",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"availableLow",/* Member name */
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
            (char *)"availableCritical",/* Member name */
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

    static DDS_TypeCode FilesystemInfoConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::FilesystemInfoConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        FilesystemInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FilesystemInfoConfig*/

    if (is_initialized) {
        return &FilesystemInfoConfig_g_tc;
    }


    FilesystemInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    FilesystemInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    FilesystemInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    FilesystemInfoConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &FilesystemInfoConfig_g_tc;
}


RTIBool FilesystemInfoConfig_initialize(
    FilesystemInfoConfig* sample) {
  return ::rapid::ext::FilesystemInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FilesystemInfoConfig_initialize_ex(
    FilesystemInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::FilesystemInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool FilesystemInfoConfig_initialize_w_params(
        FilesystemInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLongLong(&sample->capacity)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String64_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLongLong(&sample->availableLow)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->availableCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void FilesystemInfoConfig_finalize(
    FilesystemInfoConfig* sample)
{
    ::rapid::ext::FilesystemInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void FilesystemInfoConfig_finalize_ex(
    FilesystemInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::FilesystemInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void FilesystemInfoConfig_finalize_w_params(
        FilesystemInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    rapid::String64_finalize_w_params(&sample->name, deallocParams);
            



}

void FilesystemInfoConfig_finalize_optional_members(
    FilesystemInfoConfig* sample, RTIBool deletePointers)
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
            



}

RTIBool FilesystemInfoConfig_copy(
    FilesystemInfoConfig* dst,
    const FilesystemInfoConfig* src)
{

    if (!RTICdrType_copyLongLong(
        &dst->capacity, &src->capacity)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->availableLow, &src->availableLow)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->availableCritical, &src->availableCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FilesystemInfoConfig' sequence class.
 */
#define T FilesystemInfoConfig
#define TSeq FilesystemInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::FilesystemInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::FilesystemInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::FilesystemInfoConfig_copy

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

DDS_TypeCode* FilesystemInfoConfigSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FilesystemInfoConfigSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode FilesystemInfoConfigSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::FilesystemInfoConfigSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for FilesystemInfoConfigSequence */

    if (is_initialized) {
        return &FilesystemInfoConfigSequence_g_tc;
    }

    FilesystemInfoConfigSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::FilesystemInfoConfig_get_typecode();
    FilesystemInfoConfigSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&FilesystemInfoConfigSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &FilesystemInfoConfigSequence_g_tc;
}


RTIBool FilesystemInfoConfigSequence_initialize(
    FilesystemInfoConfigSequence* sample)
{
    return ::rapid::ext::FilesystemInfoConfigSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FilesystemInfoConfigSequence_initialize_ex(
    FilesystemInfoConfigSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::FilesystemInfoConfigSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool FilesystemInfoConfigSequence_initialize_w_params(
        FilesystemInfoConfigSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::FilesystemInfoConfigSeq_initialize(sample);
        rapid::ext::FilesystemInfoConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::FilesystemInfoConfigSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::FilesystemInfoConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void FilesystemInfoConfigSequence_finalize(
    FilesystemInfoConfigSequence* sample)
{
    ::rapid::ext::FilesystemInfoConfigSequence_finalize_ex(sample,RTI_TRUE);
}
 
void FilesystemInfoConfigSequence_finalize_ex(
    FilesystemInfoConfigSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::FilesystemInfoConfigSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void FilesystemInfoConfigSequence_finalize_w_params(
    FilesystemInfoConfigSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::FilesystemInfoConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::FilesystemInfoConfigSeq_finalize(sample);
            

}

void FilesystemInfoConfigSequence_finalize_optional_members(
    FilesystemInfoConfigSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::FilesystemInfoConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::FilesystemInfoConfig_finalize_optional_members(
                rapid::ext::FilesystemInfoConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool FilesystemInfoConfigSequence_copy(
    FilesystemInfoConfigSequence* dst,
    const FilesystemInfoConfigSequence* src)
{

    if (!rapid::ext::FilesystemInfoConfigSeq_copy(dst,
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
 * Configure and implement 'FilesystemInfoConfigSequence' sequence class.
 */
#define T            FilesystemInfoConfigSequence
#define TSeq         FilesystemInfoConfigSequenceSeq
#define T_initialize_w_params ::rapid::ext::FilesystemInfoConfigSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::FilesystemInfoConfigSequence_finalize_w_params
#define T_copy       ::rapid::ext::FilesystemInfoConfigSequence_copy


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
const char *ThermalInfoConfigTYPENAME = "rapid::ext::ThermalInfoConfig";

DDS_TypeCode* ThermalInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ThermalInfoConfig_g_tc_members[5]=
    {
        {
            (char *)"location",/* Member name */
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
            (char *)"temperatureLow",/* Member name */
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
            (char *)"temperatureHigh",/* Member name */
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
            (char *)"temperatureLowCritical",/* Member name */
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
            (char *)"temperatureHighCritical",/* Member name */
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

    static DDS_TypeCode ThermalInfoConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::ThermalInfoConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        ThermalInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ThermalInfoConfig*/

    if (is_initialized) {
        return &ThermalInfoConfig_g_tc;
    }


    ThermalInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ThermalInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    ThermalInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    ThermalInfoConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    ThermalInfoConfig_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &ThermalInfoConfig_g_tc;
}


RTIBool ThermalInfoConfig_initialize(
    ThermalInfoConfig* sample) {
  return ::rapid::ext::ThermalInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ThermalInfoConfig_initialize_ex(
    ThermalInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ThermalInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool ThermalInfoConfig_initialize_w_params(
        ThermalInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->location,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->temperatureLow)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->temperatureHigh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->temperatureLowCritical)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->temperatureHighCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void ThermalInfoConfig_finalize(
    ThermalInfoConfig* sample)
{
    ::rapid::ext::ThermalInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void ThermalInfoConfig_finalize_ex(
    ThermalInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ThermalInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void ThermalInfoConfig_finalize_w_params(
        ThermalInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->location, deallocParams);
            





}

void ThermalInfoConfig_finalize_optional_members(
    ThermalInfoConfig* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->location, deallocParams->delete_pointers);
            





}

RTIBool ThermalInfoConfig_copy(
    ThermalInfoConfig* dst,
    const ThermalInfoConfig* src)
{

    if (!rapid::String32_copy(
        &dst->location, &src->location)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->temperatureLow, &src->temperatureLow)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->temperatureHigh, &src->temperatureHigh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->temperatureLowCritical, &src->temperatureLowCritical)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->temperatureHighCritical, &src->temperatureHighCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ThermalInfoConfig' sequence class.
 */
#define T ThermalInfoConfig
#define TSeq ThermalInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::ThermalInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ThermalInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::ThermalInfoConfig_copy

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

DDS_TypeCode* ThermalInfoConfigSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ThermalInfoConfigSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode ThermalInfoConfigSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::ThermalInfoConfigSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ThermalInfoConfigSequence */

    if (is_initialized) {
        return &ThermalInfoConfigSequence_g_tc;
    }

    ThermalInfoConfigSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::ThermalInfoConfig_get_typecode();
    ThermalInfoConfigSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ThermalInfoConfigSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ThermalInfoConfigSequence_g_tc;
}


RTIBool ThermalInfoConfigSequence_initialize(
    ThermalInfoConfigSequence* sample)
{
    return ::rapid::ext::ThermalInfoConfigSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ThermalInfoConfigSequence_initialize_ex(
    ThermalInfoConfigSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ThermalInfoConfigSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ThermalInfoConfigSequence_initialize_w_params(
        ThermalInfoConfigSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::ThermalInfoConfigSeq_initialize(sample);
        rapid::ext::ThermalInfoConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::ThermalInfoConfigSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::ThermalInfoConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ThermalInfoConfigSequence_finalize(
    ThermalInfoConfigSequence* sample)
{
    ::rapid::ext::ThermalInfoConfigSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ThermalInfoConfigSequence_finalize_ex(
    ThermalInfoConfigSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ThermalInfoConfigSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ThermalInfoConfigSequence_finalize_w_params(
    ThermalInfoConfigSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::ThermalInfoConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::ThermalInfoConfigSeq_finalize(sample);
            

}

void ThermalInfoConfigSequence_finalize_optional_members(
    ThermalInfoConfigSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::ThermalInfoConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::ThermalInfoConfig_finalize_optional_members(
                rapid::ext::ThermalInfoConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ThermalInfoConfigSequence_copy(
    ThermalInfoConfigSequence* dst,
    const ThermalInfoConfigSequence* src)
{

    if (!rapid::ext::ThermalInfoConfigSeq_copy(dst,
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
 * Configure and implement 'ThermalInfoConfigSequence' sequence class.
 */
#define T            ThermalInfoConfigSequence
#define TSeq         ThermalInfoConfigSequenceSeq
#define T_initialize_w_params ::rapid::ext::ThermalInfoConfigSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ThermalInfoConfigSequence_finalize_w_params
#define T_copy       ::rapid::ext::ThermalInfoConfigSequence_copy


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
const char *NetTrafficInfoConfigTYPENAME = "rapid::ext::NetTrafficInfoConfig";

DDS_TypeCode* NetTrafficInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NetTrafficInfoConfig_g_tc_members[7]=
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
            (char *)"rxBandwidth",/* Member name */
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
            (char *)"txBandwidth",/* Member name */
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
            (char *)"rxHigh",/* Member name */
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
            (char *)"rxCritical",/* Member name */
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
            (char *)"txHigh",/* Member name */
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
            (char *)"txCritical",/* Member name */
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
        }
    };

    static DDS_TypeCode NetTrafficInfoConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::NetTrafficInfoConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        NetTrafficInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NetTrafficInfoConfig*/

    if (is_initialized) {
        return &NetTrafficInfoConfig_g_tc;
    }


    NetTrafficInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    NetTrafficInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoConfig_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoConfig_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NetTrafficInfoConfig_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &NetTrafficInfoConfig_g_tc;
}


RTIBool NetTrafficInfoConfig_initialize(
    NetTrafficInfoConfig* sample) {
  return ::rapid::ext::NetTrafficInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NetTrafficInfoConfig_initialize_ex(
    NetTrafficInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::NetTrafficInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool NetTrafficInfoConfig_initialize_w_params(
        NetTrafficInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->rxBandwidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->txBandwidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->rxHigh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->rxCritical)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->txHigh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->txCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void NetTrafficInfoConfig_finalize(
    NetTrafficInfoConfig* sample)
{
    ::rapid::ext::NetTrafficInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void NetTrafficInfoConfig_finalize_ex(
    NetTrafficInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::NetTrafficInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void NetTrafficInfoConfig_finalize_w_params(
        NetTrafficInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            







}

void NetTrafficInfoConfig_finalize_optional_members(
    NetTrafficInfoConfig* sample, RTIBool deletePointers)
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

RTIBool NetTrafficInfoConfig_copy(
    NetTrafficInfoConfig* dst,
    const NetTrafficInfoConfig* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->rxBandwidth, &src->rxBandwidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->txBandwidth, &src->txBandwidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->rxHigh, &src->rxHigh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->rxCritical, &src->rxCritical)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->txHigh, &src->txHigh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->txCritical, &src->txCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NetTrafficInfoConfig' sequence class.
 */
#define T NetTrafficInfoConfig
#define TSeq NetTrafficInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::NetTrafficInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::NetTrafficInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::NetTrafficInfoConfig_copy

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

DDS_TypeCode* NetTrafficInfoConfigSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NetTrafficInfoConfigSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode NetTrafficInfoConfigSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::NetTrafficInfoConfigSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for NetTrafficInfoConfigSequence */

    if (is_initialized) {
        return &NetTrafficInfoConfigSequence_g_tc;
    }

    NetTrafficInfoConfigSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::NetTrafficInfoConfig_get_typecode();
    NetTrafficInfoConfigSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&NetTrafficInfoConfigSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &NetTrafficInfoConfigSequence_g_tc;
}


RTIBool NetTrafficInfoConfigSequence_initialize(
    NetTrafficInfoConfigSequence* sample)
{
    return ::rapid::ext::NetTrafficInfoConfigSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool NetTrafficInfoConfigSequence_initialize_ex(
    NetTrafficInfoConfigSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::NetTrafficInfoConfigSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool NetTrafficInfoConfigSequence_initialize_w_params(
        NetTrafficInfoConfigSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::NetTrafficInfoConfigSeq_initialize(sample);
        rapid::ext::NetTrafficInfoConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::NetTrafficInfoConfigSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::NetTrafficInfoConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void NetTrafficInfoConfigSequence_finalize(
    NetTrafficInfoConfigSequence* sample)
{
    ::rapid::ext::NetTrafficInfoConfigSequence_finalize_ex(sample,RTI_TRUE);
}
 
void NetTrafficInfoConfigSequence_finalize_ex(
    NetTrafficInfoConfigSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::NetTrafficInfoConfigSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void NetTrafficInfoConfigSequence_finalize_w_params(
    NetTrafficInfoConfigSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::NetTrafficInfoConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::NetTrafficInfoConfigSeq_finalize(sample);
            

}

void NetTrafficInfoConfigSequence_finalize_optional_members(
    NetTrafficInfoConfigSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::NetTrafficInfoConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::NetTrafficInfoConfig_finalize_optional_members(
                rapid::ext::NetTrafficInfoConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool NetTrafficInfoConfigSequence_copy(
    NetTrafficInfoConfigSequence* dst,
    const NetTrafficInfoConfigSequence* src)
{

    if (!rapid::ext::NetTrafficInfoConfigSeq_copy(dst,
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
 * Configure and implement 'NetTrafficInfoConfigSequence' sequence class.
 */
#define T            NetTrafficInfoConfigSequence
#define TSeq         NetTrafficInfoConfigSequenceSeq
#define T_initialize_w_params ::rapid::ext::NetTrafficInfoConfigSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::NetTrafficInfoConfigSequence_finalize_w_params
#define T_copy       ::rapid::ext::NetTrafficInfoConfigSequence_copy


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
const char *WifiInfoConfigTYPENAME = "rapid::ext::WifiInfoConfig";

DDS_TypeCode* WifiInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member WifiInfoConfig_g_tc_members[3]=
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
            (char *)"qualityLow",/* Member name */
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
            (char *)"qualityCritical",/* Member name */
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

    static DDS_TypeCode WifiInfoConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::WifiInfoConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        WifiInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for WifiInfoConfig*/

    if (is_initialized) {
        return &WifiInfoConfig_g_tc;
    }


    WifiInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    WifiInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    WifiInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &WifiInfoConfig_g_tc;
}


RTIBool WifiInfoConfig_initialize(
    WifiInfoConfig* sample) {
  return ::rapid::ext::WifiInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool WifiInfoConfig_initialize_ex(
    WifiInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::WifiInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool WifiInfoConfig_initialize_w_params(
        WifiInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->qualityLow)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->qualityCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void WifiInfoConfig_finalize(
    WifiInfoConfig* sample)
{
    ::rapid::ext::WifiInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void WifiInfoConfig_finalize_ex(
    WifiInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::WifiInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void WifiInfoConfig_finalize_w_params(
        WifiInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            



}

void WifiInfoConfig_finalize_optional_members(
    WifiInfoConfig* sample, RTIBool deletePointers)
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

RTIBool WifiInfoConfig_copy(
    WifiInfoConfig* dst,
    const WifiInfoConfig* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->qualityLow, &src->qualityLow)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->qualityCritical, &src->qualityCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'WifiInfoConfig' sequence class.
 */
#define T WifiInfoConfig
#define TSeq WifiInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::WifiInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::WifiInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::WifiInfoConfig_copy

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

DDS_TypeCode* WifiInfoConfigSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode WifiInfoConfigSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(8,NULL);

    static DDS_TypeCode WifiInfoConfigSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::WifiInfoConfigSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for WifiInfoConfigSequence */

    if (is_initialized) {
        return &WifiInfoConfigSequence_g_tc;
    }

    WifiInfoConfigSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::WifiInfoConfig_get_typecode();
    WifiInfoConfigSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&WifiInfoConfigSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &WifiInfoConfigSequence_g_tc;
}


RTIBool WifiInfoConfigSequence_initialize(
    WifiInfoConfigSequence* sample)
{
    return ::rapid::ext::WifiInfoConfigSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool WifiInfoConfigSequence_initialize_ex(
    WifiInfoConfigSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::WifiInfoConfigSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool WifiInfoConfigSequence_initialize_w_params(
        WifiInfoConfigSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::WifiInfoConfigSeq_initialize(sample);
        rapid::ext::WifiInfoConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::WifiInfoConfigSeq_set_maximum(sample,
                                           (8))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::WifiInfoConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void WifiInfoConfigSequence_finalize(
    WifiInfoConfigSequence* sample)
{
    ::rapid::ext::WifiInfoConfigSequence_finalize_ex(sample,RTI_TRUE);
}
 
void WifiInfoConfigSequence_finalize_ex(
    WifiInfoConfigSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::WifiInfoConfigSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void WifiInfoConfigSequence_finalize_w_params(
    WifiInfoConfigSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::WifiInfoConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::WifiInfoConfigSeq_finalize(sample);
            

}

void WifiInfoConfigSequence_finalize_optional_members(
    WifiInfoConfigSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::WifiInfoConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::WifiInfoConfig_finalize_optional_members(
                rapid::ext::WifiInfoConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool WifiInfoConfigSequence_copy(
    WifiInfoConfigSequence* dst,
    const WifiInfoConfigSequence* src)
{

    if (!rapid::ext::WifiInfoConfigSeq_copy(dst,
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
 * Configure and implement 'WifiInfoConfigSequence' sequence class.
 */
#define T            WifiInfoConfigSequence
#define TSeq         WifiInfoConfigSequenceSeq
#define T_initialize_w_params ::rapid::ext::WifiInfoConfigSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::WifiInfoConfigSequence_finalize_w_params
#define T_copy       ::rapid::ext::WifiInfoConfigSequence_copy


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
const char *SystemInfoConfigTYPENAME = "rapid::ext::SystemInfoConfig";

DDS_TypeCode* SystemInfoConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SystemInfoConfig_g_tc_members[7]=
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

    static DDS_TypeCode SystemInfoConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::SystemInfoConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        SystemInfoConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for SystemInfoConfig*/

    if (is_initialized) {
        return &SystemInfoConfig_g_tc;
    }


    SystemInfoConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::BatteryInfoConfigSequence_get_typecode();
    SystemInfoConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::MemoryInfoConfig_get_typecode();
    SystemInfoConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::CpuInfoConfig_get_typecode();
    SystemInfoConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::FilesystemInfoConfigSequence_get_typecode();
    SystemInfoConfig_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::ThermalInfoConfigSequence_get_typecode();
    SystemInfoConfig_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::NetTrafficInfoConfigSequence_get_typecode();
    SystemInfoConfig_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::WifiInfoConfigSequence_get_typecode();

    SystemInfoConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &SystemInfoConfig_g_tc;
}


RTIBool SystemInfoConfig_initialize(
    SystemInfoConfig* sample) {
  return ::rapid::ext::SystemInfoConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SystemInfoConfig_initialize_ex(
    SystemInfoConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::SystemInfoConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool SystemInfoConfig_initialize_w_params(
        SystemInfoConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::BatteryInfoConfigSequence_initialize_w_params(&sample->batteries,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::MemoryInfoConfig_initialize_w_params(&sample->memory,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::CpuInfoConfig_initialize_w_params(&sample->cpus,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::FilesystemInfoConfigSequence_initialize_w_params(&sample->filesystems,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ThermalInfoConfigSequence_initialize_w_params(&sample->temperatures,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::NetTrafficInfoConfigSequence_initialize_w_params(&sample->netInterfaces,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::WifiInfoConfigSequence_initialize_w_params(&sample->wifiInterfaces,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SystemInfoConfig_finalize(
    SystemInfoConfig* sample)
{
    ::rapid::ext::SystemInfoConfig_finalize_ex(sample,RTI_TRUE);
}
        
void SystemInfoConfig_finalize_ex(
    SystemInfoConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::SystemInfoConfig_finalize_w_params(
        sample,&deallocParams);
}

void SystemInfoConfig_finalize_w_params(
        SystemInfoConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::BatteryInfoConfigSequence_finalize_w_params(&sample->batteries, deallocParams);
            

    rapid::ext::MemoryInfoConfig_finalize_w_params(&sample->memory, deallocParams);
            

    rapid::ext::CpuInfoConfig_finalize_w_params(&sample->cpus, deallocParams);
            

    rapid::ext::FilesystemInfoConfigSequence_finalize_w_params(&sample->filesystems, deallocParams);
            

    rapid::ext::ThermalInfoConfigSequence_finalize_w_params(&sample->temperatures, deallocParams);
            

    rapid::ext::NetTrafficInfoConfigSequence_finalize_w_params(&sample->netInterfaces, deallocParams);
            

    rapid::ext::WifiInfoConfigSequence_finalize_w_params(&sample->wifiInterfaces, deallocParams);
            

}

void SystemInfoConfig_finalize_optional_members(
    SystemInfoConfig* sample, RTIBool deletePointers)
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
             

    rapid::ext::BatteryInfoConfigSequence_finalize_optional_members(&sample->batteries, deallocParams->delete_pointers);
            

    rapid::ext::MemoryInfoConfig_finalize_optional_members(&sample->memory, deallocParams->delete_pointers);
            

    rapid::ext::CpuInfoConfig_finalize_optional_members(&sample->cpus, deallocParams->delete_pointers);
            

    rapid::ext::FilesystemInfoConfigSequence_finalize_optional_members(&sample->filesystems, deallocParams->delete_pointers);
            

    rapid::ext::ThermalInfoConfigSequence_finalize_optional_members(&sample->temperatures, deallocParams->delete_pointers);
            

    rapid::ext::NetTrafficInfoConfigSequence_finalize_optional_members(&sample->netInterfaces, deallocParams->delete_pointers);
            

    rapid::ext::WifiInfoConfigSequence_finalize_optional_members(&sample->wifiInterfaces, deallocParams->delete_pointers);
            

}

RTIBool SystemInfoConfig_copy(
    SystemInfoConfig* dst,
    const SystemInfoConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::BatteryInfoConfigSequence_copy(
        &dst->batteries, &src->batteries)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::MemoryInfoConfig_copy(
        &dst->memory, &src->memory)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::CpuInfoConfig_copy(
        &dst->cpus, &src->cpus)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::FilesystemInfoConfigSequence_copy(
        &dst->filesystems, &src->filesystems)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ThermalInfoConfigSequence_copy(
        &dst->temperatures, &src->temperatures)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::NetTrafficInfoConfigSequence_copy(
        &dst->netInterfaces, &src->netInterfaces)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::WifiInfoConfigSequence_copy(
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
 * Configure and implement 'SystemInfoConfig' sequence class.
 */
#define T SystemInfoConfig
#define TSeq SystemInfoConfigSeq
#define T_initialize_w_params ::rapid::ext::SystemInfoConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::SystemInfoConfig_finalize_w_params
#define T_copy       ::rapid::ext::SystemInfoConfig_copy

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
