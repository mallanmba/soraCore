
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpConfig.idl using "rtiddsgen".
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



#include "DlpConfig.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *DlpWarnCriticalRangeTYPENAME = "rapid::ext::arc::DlpWarnCriticalRange";

DDS_TypeCode* DlpWarnCriticalRange_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DlpWarnCriticalRange_g_tc_members[4]=
    {
        {
            (char *)"lowCritical",/* Member name */
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
            (char *)"lowWarn",/* Member name */
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
            (char *)"highWarn",/* Member name */
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
            (char *)"highCritical",/* Member name */
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

    static DDS_TypeCode DlpWarnCriticalRange_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::DlpWarnCriticalRange", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        DlpWarnCriticalRange_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DlpWarnCriticalRange*/

    if (is_initialized) {
        return &DlpWarnCriticalRange_g_tc;
    }


    DlpWarnCriticalRange_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    DlpWarnCriticalRange_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    DlpWarnCriticalRange_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    DlpWarnCriticalRange_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &DlpWarnCriticalRange_g_tc;
}


RTIBool DlpWarnCriticalRange_initialize(
    DlpWarnCriticalRange* sample) {
  return ::rapid::ext::arc::DlpWarnCriticalRange_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DlpWarnCriticalRange_initialize_ex(
    DlpWarnCriticalRange* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpWarnCriticalRange_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpWarnCriticalRange_initialize_w_params(
        DlpWarnCriticalRange* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->lowCritical)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->lowWarn)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->highWarn)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->highCritical)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void DlpWarnCriticalRange_finalize(
    DlpWarnCriticalRange* sample)
{
    ::rapid::ext::arc::DlpWarnCriticalRange_finalize_ex(sample,RTI_TRUE);
}
        
void DlpWarnCriticalRange_finalize_ex(
    DlpWarnCriticalRange* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpWarnCriticalRange_finalize_w_params(
        sample,&deallocParams);
}

void DlpWarnCriticalRange_finalize_w_params(
        DlpWarnCriticalRange* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void DlpWarnCriticalRange_finalize_optional_members(
    DlpWarnCriticalRange* sample, RTIBool deletePointers)
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

RTIBool DlpWarnCriticalRange_copy(
    DlpWarnCriticalRange* dst,
    const DlpWarnCriticalRange* src)
{

    if (!RTICdrType_copyFloat(
        &dst->lowCritical, &src->lowCritical)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->lowWarn, &src->lowWarn)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->highWarn, &src->highWarn)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->highCritical, &src->highCritical)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DlpWarnCriticalRange' sequence class.
 */
#define T DlpWarnCriticalRange
#define TSeq DlpWarnCriticalRangeSeq
#define T_initialize_w_params ::rapid::ext::arc::DlpWarnCriticalRange_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpWarnCriticalRange_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpWarnCriticalRange_copy

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
const char *DlpChannelConfigTYPENAME = "rapid::ext::arc::DlpChannelConfig";

DDS_TypeCode* DlpChannelConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DlpChannelConfig_g_tc_members[3]=
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
            (char *)"voltageRange",/* Member name */
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
            (char *)"currentRange",/* Member name */
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

    static DDS_TypeCode DlpChannelConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::DlpChannelConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        DlpChannelConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DlpChannelConfig*/

    if (is_initialized) {
        return &DlpChannelConfig_g_tc;
    }


    DlpChannelConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    DlpChannelConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpWarnCriticalRange_get_typecode();
    DlpChannelConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpWarnCriticalRange_get_typecode();

    is_initialized = RTI_TRUE;

    return &DlpChannelConfig_g_tc;
}


RTIBool DlpChannelConfig_initialize(
    DlpChannelConfig* sample) {
  return ::rapid::ext::arc::DlpChannelConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DlpChannelConfig_initialize_ex(
    DlpChannelConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpChannelConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpChannelConfig_initialize_w_params(
        DlpChannelConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::DlpWarnCriticalRange_initialize_w_params(&sample->voltageRange,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::DlpWarnCriticalRange_initialize_w_params(&sample->currentRange,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void DlpChannelConfig_finalize(
    DlpChannelConfig* sample)
{
    ::rapid::ext::arc::DlpChannelConfig_finalize_ex(sample,RTI_TRUE);
}
        
void DlpChannelConfig_finalize_ex(
    DlpChannelConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpChannelConfig_finalize_w_params(
        sample,&deallocParams);
}

void DlpChannelConfig_finalize_w_params(
        DlpChannelConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            

    rapid::ext::arc::DlpWarnCriticalRange_finalize_w_params(&sample->voltageRange, deallocParams);
            

    rapid::ext::arc::DlpWarnCriticalRange_finalize_w_params(&sample->currentRange, deallocParams);
            

}

void DlpChannelConfig_finalize_optional_members(
    DlpChannelConfig* sample, RTIBool deletePointers)
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
            

    rapid::ext::arc::DlpWarnCriticalRange_finalize_optional_members(&sample->voltageRange, deallocParams->delete_pointers);
            

    rapid::ext::arc::DlpWarnCriticalRange_finalize_optional_members(&sample->currentRange, deallocParams->delete_pointers);
            

}

RTIBool DlpChannelConfig_copy(
    DlpChannelConfig* dst,
    const DlpChannelConfig* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::DlpWarnCriticalRange_copy(
        &dst->voltageRange, &src->voltageRange)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::DlpWarnCriticalRange_copy(
        &dst->currentRange, &src->currentRange)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DlpChannelConfig' sequence class.
 */
#define T DlpChannelConfig
#define TSeq DlpChannelConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::DlpChannelConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpChannelConfig_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpChannelConfig_copy

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
const char *DlpBoardConfigTYPENAME = "rapid::ext::arc::DlpBoardConfig";

DDS_TypeCode* DlpBoardConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DlpBoardConfig_g_tc_channels_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member DlpBoardConfig_g_tc_members[3]=
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
            (char *)"channels",/* Member name */
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
            (char *)"tempRange",/* Member name */
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

    static DDS_TypeCode DlpBoardConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::DlpBoardConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        DlpBoardConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DlpBoardConfig*/

    if (is_initialized) {
        return &DlpBoardConfig_g_tc;
    }

    DlpBoardConfig_g_tc_channels_array._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpChannelConfig_get_typecode();

    DlpBoardConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    DlpBoardConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DlpBoardConfig_g_tc_channels_array;
    DlpBoardConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpWarnCriticalRange_get_typecode();

    is_initialized = RTI_TRUE;

    return &DlpBoardConfig_g_tc;
}


RTIBool DlpBoardConfig_initialize(
    DlpBoardConfig* sample) {
  return ::rapid::ext::arc::DlpBoardConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DlpBoardConfig_initialize_ex(
    DlpBoardConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpBoardConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpBoardConfig_initialize_w_params(
        DlpBoardConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    
    {
        int i = 0;
        rapid::ext::arc::DlpChannelConfig* elem =
            (rapid::ext::arc::DlpChannelConfig*) &sample->channels[0];

        for (i = 0; i < (int)((3)); ++i, ++elem) {
            if (!rapid::ext::arc::DlpChannelConfig_initialize_w_params(elem,allocParams)) {
                return RTI_FALSE;
            }
        }
    }
            

    if (!rapid::ext::arc::DlpWarnCriticalRange_initialize_w_params(&sample->tempRange,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void DlpBoardConfig_finalize(
    DlpBoardConfig* sample)
{
    ::rapid::ext::arc::DlpBoardConfig_finalize_ex(sample,RTI_TRUE);
}
        
void DlpBoardConfig_finalize_ex(
    DlpBoardConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpBoardConfig_finalize_w_params(
        sample,&deallocParams);
}

void DlpBoardConfig_finalize_w_params(
        DlpBoardConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            

    
    {
        int i = 0;
        rapid::ext::arc::DlpChannelConfig* elem =
            (rapid::ext::arc::DlpChannelConfig*) &sample->channels[0];

        for (i = 0; i < (int)((3)); ++i, ++elem) {
            rapid::ext::arc::DlpChannelConfig_finalize_w_params(elem, deallocParams);
        }
    }
            

    rapid::ext::arc::DlpWarnCriticalRange_finalize_w_params(&sample->tempRange, deallocParams);
            

}

void DlpBoardConfig_finalize_optional_members(
    DlpBoardConfig* sample, RTIBool deletePointers)
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
            

    {
        int i = 0;
        rapid::ext::arc::DlpChannelConfig* elem =
            (rapid::ext::arc::DlpChannelConfig*) &sample->channels[0];

        for (i = 0; i < (int)((3)); ++i, ++elem) {
            rapid::ext::arc::DlpChannelConfig_finalize_optional_members(elem, deallocParams->delete_pointers);
        }
    }
            

    rapid::ext::arc::DlpWarnCriticalRange_finalize_optional_members(&sample->tempRange, deallocParams->delete_pointers);
            

}

RTIBool DlpBoardConfig_copy(
    DlpBoardConfig* dst,
    const DlpBoardConfig* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    
    {
        int i = 0;
        rapid::ext::arc::DlpChannelConfig* elemOut = (rapid::ext::arc::DlpChannelConfig*) &dst->channels[0];
        const rapid::ext::arc::DlpChannelConfig* elemIn = (const rapid::ext::arc::DlpChannelConfig*) &src->channels[0];

        for (i = 0; i < (int)((3));
             ++i, ++elemOut, ++elemIn) {
            if (!rapid::ext::arc::DlpChannelConfig_copy(elemOut,(const rapid::ext::arc::DlpChannelConfig*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }
            

    if (!rapid::ext::arc::DlpWarnCriticalRange_copy(
        &dst->tempRange, &src->tempRange)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DlpBoardConfig' sequence class.
 */
#define T DlpBoardConfig
#define TSeq DlpBoardConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::DlpBoardConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpBoardConfig_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpBoardConfig_copy

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

DDS_TypeCode* DlpBoardConfigSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DlpBoardConfigSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode DlpBoardConfigSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::DlpBoardConfigSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DlpBoardConfigSequence32 */

    if (is_initialized) {
        return &DlpBoardConfigSequence32_g_tc;
    }

    DlpBoardConfigSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpBoardConfig_get_typecode();
    DlpBoardConfigSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&DlpBoardConfigSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DlpBoardConfigSequence32_g_tc;
}


RTIBool DlpBoardConfigSequence32_initialize(
    DlpBoardConfigSequence32* sample)
{
    return ::rapid::ext::arc::DlpBoardConfigSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DlpBoardConfigSequence32_initialize_ex(
    DlpBoardConfigSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpBoardConfigSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpBoardConfigSequence32_initialize_w_params(
        DlpBoardConfigSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::DlpBoardConfigSeq_initialize(sample);
        rapid::ext::arc::DlpBoardConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::DlpBoardConfigSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::DlpBoardConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void DlpBoardConfigSequence32_finalize(
    DlpBoardConfigSequence32* sample)
{
    ::rapid::ext::arc::DlpBoardConfigSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void DlpBoardConfigSequence32_finalize_ex(
    DlpBoardConfigSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpBoardConfigSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void DlpBoardConfigSequence32_finalize_w_params(
    DlpBoardConfigSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::DlpBoardConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::DlpBoardConfigSeq_finalize(sample);
            

}

void DlpBoardConfigSequence32_finalize_optional_members(
    DlpBoardConfigSequence32* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::DlpBoardConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::DlpBoardConfig_finalize_optional_members(
                rapid::ext::arc::DlpBoardConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool DlpBoardConfigSequence32_copy(
    DlpBoardConfigSequence32* dst,
    const DlpBoardConfigSequence32* src)
{

    if (!rapid::ext::arc::DlpBoardConfigSeq_copy(dst,
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
 * Configure and implement 'DlpBoardConfigSequence32' sequence class.
 */
#define T            DlpBoardConfigSequence32
#define TSeq         DlpBoardConfigSequence32Seq
#define T_initialize_w_params ::rapid::ext::arc::DlpBoardConfigSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpBoardConfigSequence32_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpBoardConfigSequence32_copy


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
const char *DlpConfigTYPENAME = "rapid::ext::arc::DlpConfig";

DDS_TypeCode* DlpConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DlpConfig_g_tc_members[1]=
    {
        {
            (char *)"dlpBoards",/* Member name */
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

    static DDS_TypeCode DlpConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::DlpConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        DlpConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for DlpConfig*/

    if (is_initialized) {
        return &DlpConfig_g_tc;
    }


    DlpConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpBoardConfigSequence32_get_typecode();

    DlpConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &DlpConfig_g_tc;
}


RTIBool DlpConfig_initialize(
    DlpConfig* sample) {
  return ::rapid::ext::arc::DlpConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DlpConfig_initialize_ex(
    DlpConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpConfig_initialize_w_params(
        DlpConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::arc::DlpBoardConfigSequence32_initialize_w_params(&sample->dlpBoards,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void DlpConfig_finalize(
    DlpConfig* sample)
{
    ::rapid::ext::arc::DlpConfig_finalize_ex(sample,RTI_TRUE);
}
        
void DlpConfig_finalize_ex(
    DlpConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpConfig_finalize_w_params(
        sample,&deallocParams);
}

void DlpConfig_finalize_w_params(
        DlpConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::arc::DlpBoardConfigSequence32_finalize_w_params(&sample->dlpBoards, deallocParams);
            

}

void DlpConfig_finalize_optional_members(
    DlpConfig* sample, RTIBool deletePointers)
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
             

    rapid::ext::arc::DlpBoardConfigSequence32_finalize_optional_members(&sample->dlpBoards, deallocParams->delete_pointers);
            

}

RTIBool DlpConfig_copy(
    DlpConfig* dst,
    const DlpConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::arc::DlpBoardConfigSequence32_copy(
        &dst->dlpBoards, &src->dlpBoards)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DlpConfig' sequence class.
 */
#define T DlpConfig
#define TSeq DlpConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::DlpConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpConfig_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpConfig_copy

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
