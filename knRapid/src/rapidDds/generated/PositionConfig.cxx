
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PositionConfig.idl using "rtiddsgen".
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



#include "PositionConfig.h"


namespace rapid{
/* ========================================================================= */
const char *PositionConfigTYPENAME = "rapid::PositionConfig";

DDS_TypeCode* PositionConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member PositionConfig_g_tc_members[4]=
    {
        {
            (char *)"frameName",/* Member name */
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
            (char *)"poseEncoding",/* Member name */
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
            (char *)"velocityEncoding",/* Member name */
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
            (char *)"valueKeys",/* Member name */
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

    static DDS_TypeCode PositionConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::PositionConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        PositionConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for PositionConfig*/

    if (is_initialized) {
        return &PositionConfig_g_tc;
    }


    PositionConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    PositionConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::RotationEncoding_get_typecode();
    PositionConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::RotationEncoding_get_typecode();
    PositionConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence64_get_typecode();

    PositionConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &PositionConfig_g_tc;
}


RTIBool PositionConfig_initialize(
    PositionConfig* sample) {
  return ::rapid::PositionConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool PositionConfig_initialize_ex(
    PositionConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::PositionConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool PositionConfig_initialize_w_params(
        PositionConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String128_initialize_w_params(&sample->frameName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::RotationEncoding_initialize_w_params(&sample->poseEncoding,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::RotationEncoding_initialize_w_params(&sample->velocityEncoding,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence64_initialize_w_params(&sample->valueKeys,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void PositionConfig_finalize(
    PositionConfig* sample)
{
    ::rapid::PositionConfig_finalize_ex(sample,RTI_TRUE);
}
        
void PositionConfig_finalize_ex(
    PositionConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::PositionConfig_finalize_w_params(
        sample,&deallocParams);
}

void PositionConfig_finalize_w_params(
        PositionConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String128_finalize_w_params(&sample->frameName, deallocParams);
            

    rapid::RotationEncoding_finalize_w_params(&sample->poseEncoding, deallocParams);
            

    rapid::RotationEncoding_finalize_w_params(&sample->velocityEncoding, deallocParams);
            

    rapid::KeyTypeValueSequence64_finalize_w_params(&sample->valueKeys, deallocParams);
            

}

void PositionConfig_finalize_optional_members(
    PositionConfig* sample, RTIBool deletePointers)
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
             

    rapid::String128_finalize_optional_members(&sample->frameName, deallocParams->delete_pointers);
            

    rapid::RotationEncoding_finalize_w_params(&sample->poseEncoding, deallocParams);
            

    rapid::RotationEncoding_finalize_w_params(&sample->velocityEncoding, deallocParams);
            

    rapid::KeyTypeValueSequence64_finalize_optional_members(&sample->valueKeys, deallocParams->delete_pointers);
            

}

RTIBool PositionConfig_copy(
    PositionConfig* dst,
    const PositionConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String128_copy(
        &dst->frameName, &src->frameName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::RotationEncoding_copy(
        &dst->poseEncoding, &src->poseEncoding)) {
        return RTI_FALSE;
    }
            

    if (!rapid::RotationEncoding_copy(
        &dst->velocityEncoding, &src->velocityEncoding)) {
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
 * Configure and implement 'PositionConfig' sequence class.
 */
#define T PositionConfig
#define TSeq PositionConfigSeq
#define T_initialize_w_params ::rapid::PositionConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::PositionConfig_finalize_w_params
#define T_copy       ::rapid::PositionConfig_copy

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
