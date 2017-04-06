
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RangeScanSample.idl using "rtiddsgen".
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



#include "RangeScanSample.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *RangeScanSampleTYPENAME = "rapid::ext::RangeScanSample";

DDS_TypeCode* RangeScanSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member RangeScanSample_g_tc_members[4]=
    {
        {
            (char *)"scanAzimuth",/* Member name */
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
            (char *)"scanElevation",/* Member name */
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
            (char *)"rangeData",/* Member name */
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
            (char *)"intensityData",/* Member name */
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

    static DDS_TypeCode RangeScanSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::RangeScanSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        RangeScanSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for RangeScanSample*/

    if (is_initialized) {
        return &RangeScanSample_g_tc;
    }


    RangeScanSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence64_get_typecode();
    RangeScanSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence64_get_typecode();
    RangeScanSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence2K_get_typecode();
    RangeScanSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::OctetSequence2K_get_typecode();

    RangeScanSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &RangeScanSample_g_tc;
}


RTIBool RangeScanSample_initialize(
    RangeScanSample* sample) {
  return ::rapid::ext::RangeScanSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RangeScanSample_initialize_ex(
    RangeScanSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::RangeScanSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool RangeScanSample_initialize_w_params(
        RangeScanSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ShortSequence64_initialize_w_params(&sample->scanAzimuth,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64_initialize_w_params(&sample->scanElevation,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence2K_initialize_w_params(&sample->rangeData,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OctetSequence2K_initialize_w_params(&sample->intensityData,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void RangeScanSample_finalize(
    RangeScanSample* sample)
{
    ::rapid::ext::RangeScanSample_finalize_ex(sample,RTI_TRUE);
}
        
void RangeScanSample_finalize_ex(
    RangeScanSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::RangeScanSample_finalize_w_params(
        sample,&deallocParams);
}

void RangeScanSample_finalize_w_params(
        RangeScanSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ShortSequence64_finalize_w_params(&sample->scanAzimuth, deallocParams);
            

    rapid::ShortSequence64_finalize_w_params(&sample->scanElevation, deallocParams);
            

    rapid::ShortSequence2K_finalize_w_params(&sample->rangeData, deallocParams);
            

    rapid::OctetSequence2K_finalize_w_params(&sample->intensityData, deallocParams);
            

}

void RangeScanSample_finalize_optional_members(
    RangeScanSample* sample, RTIBool deletePointers)
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
             

    rapid::ShortSequence64_finalize_optional_members(&sample->scanAzimuth, deallocParams->delete_pointers);
            

    rapid::ShortSequence64_finalize_optional_members(&sample->scanElevation, deallocParams->delete_pointers);
            

    rapid::ShortSequence2K_finalize_optional_members(&sample->rangeData, deallocParams->delete_pointers);
            

    rapid::OctetSequence2K_finalize_optional_members(&sample->intensityData, deallocParams->delete_pointers);
            

}

RTIBool RangeScanSample_copy(
    RangeScanSample* dst,
    const RangeScanSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ShortSequence64_copy(
        &dst->scanAzimuth, &src->scanAzimuth)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64_copy(
        &dst->scanElevation, &src->scanElevation)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence2K_copy(
        &dst->rangeData, &src->rangeData)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OctetSequence2K_copy(
        &dst->intensityData, &src->intensityData)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RangeScanSample' sequence class.
 */
#define T RangeScanSample
#define TSeq RangeScanSampleSeq
#define T_initialize_w_params ::rapid::ext::RangeScanSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::RangeScanSample_finalize_w_params
#define T_copy       ::rapid::ext::RangeScanSample_copy

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
