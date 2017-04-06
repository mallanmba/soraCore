
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Header.idl using "rtiddsgen".
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



#include "Header.h"


namespace rapid{
/* ========================================================================= */
const char *HeaderTYPENAME = "rapid::Header";

DDS_TypeCode* Header_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Header_g_tc_members[5]=
    {
        {
            (char *)"srcName",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"assetName",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"timeStamp",/* Member name */
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
            (char *)"statusCode",/* Member name */
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
            (char *)"serial",/* Member name */
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

    static DDS_TypeCode Header_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::Header", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        Header_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Header*/

    if (is_initialized) {
        return &Header_g_tc;
    }


    Header_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Header_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Header_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Header_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Header_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Header_g_tc;
}


RTIBool Header_initialize(
    Header* sample) {
  return ::rapid::Header_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Header_initialize_ex(
    Header* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::Header_initialize_w_params(
        sample,&allocParams);
}

RTIBool Header_initialize_w_params(
        Header* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->srcName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->assetName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLongLong(&sample->timeStamp)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->statusCode)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->serial)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Header_finalize(
    Header* sample)
{
    ::rapid::Header_finalize_ex(sample,RTI_TRUE);
}
        
void Header_finalize_ex(
    Header* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::Header_finalize_w_params(
        sample,&deallocParams);
}

void Header_finalize_w_params(
        Header* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->srcName, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->assetName, deallocParams);
            




}

void Header_finalize_optional_members(
    Header* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->srcName, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->assetName, deallocParams->delete_pointers);
            




}

RTIBool Header_copy(
    Header* dst,
    const Header* src)
{

    if (!rapid::String32_copy(
        &dst->srcName, &src->srcName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->assetName, &src->assetName)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->timeStamp, &src->timeStamp)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->statusCode, &src->statusCode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->serial, &src->serial)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Header' sequence class.
 */
#define T Header
#define TSeq HeaderSeq
#define T_initialize_w_params ::rapid::Header_initialize_w_params
#define T_finalize_w_params   ::rapid::Header_finalize_w_params
#define T_copy       ::rapid::Header_copy

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
