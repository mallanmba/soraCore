
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MobilitySample.idl using "rtiddsgen".
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



#include "MobilitySample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *MobilitySampleTYPENAME = "rapid::ext::arc::MobilitySample";

DDS_TypeCode* MobilitySample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MobilitySample_g_tc_members[7]=
    {
        {
            (char *)"goalName",/* Member name */
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
            (char *)"commandFrame",/* Member name */
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
            (char *)"xyt",/* Member name */
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
            (char *)"xytTolerance",/* Member name */
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
            (char *)"hintedSpeed",/* Member name */
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
            (char *)"navAlgo",/* Member name */
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
            (char *)"keyedValues",/* Member name */
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

    static DDS_TypeCode MobilitySample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::MobilitySample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        MobilitySample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for MobilitySample*/

    if (is_initialized) {
        return &MobilitySample_g_tc;
    }


    MobilitySample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    MobilitySample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    MobilitySample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    MobilitySample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    MobilitySample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    MobilitySample_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    MobilitySample_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence8_get_typecode();

    MobilitySample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &MobilitySample_g_tc;
}


RTIBool MobilitySample_initialize(
    MobilitySample* sample) {
  return ::rapid::ext::arc::MobilitySample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MobilitySample_initialize_ex(
    MobilitySample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::MobilitySample_initialize_w_params(
        sample,&allocParams);
}

RTIBool MobilitySample_initialize_w_params(
        MobilitySample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String32_initialize_w_params(&sample->goalName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_initialize_w_params(&sample->commandFrame,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_initialize_w_params(&sample->xyt,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_initialize_w_params(&sample->xytTolerance,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->hintedSpeed)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String32_initialize_w_params(&sample->navAlgo,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence8_initialize_w_params(&sample->keyedValues,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void MobilitySample_finalize(
    MobilitySample* sample)
{
    ::rapid::ext::arc::MobilitySample_finalize_ex(sample,RTI_TRUE);
}
        
void MobilitySample_finalize_ex(
    MobilitySample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::MobilitySample_finalize_w_params(
        sample,&deallocParams);
}

void MobilitySample_finalize_w_params(
        MobilitySample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String32_finalize_w_params(&sample->goalName, deallocParams);
            

    rapid::String128_finalize_w_params(&sample->commandFrame, deallocParams);
            

    rapid::Vec3d_finalize_w_params(&sample->xyt, deallocParams);
            

    rapid::Vec3d_finalize_w_params(&sample->xytTolerance, deallocParams);
            


    rapid::String32_finalize_w_params(&sample->navAlgo, deallocParams);
            

    rapid::KeyTypeValueSequence8_finalize_w_params(&sample->keyedValues, deallocParams);
            

}

void MobilitySample_finalize_optional_members(
    MobilitySample* sample, RTIBool deletePointers)
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
             

    rapid::String32_finalize_optional_members(&sample->goalName, deallocParams->delete_pointers);
            

    rapid::String128_finalize_optional_members(&sample->commandFrame, deallocParams->delete_pointers);
            

    rapid::Vec3d_finalize_optional_members(&sample->xyt, deallocParams->delete_pointers);
            

    rapid::Vec3d_finalize_optional_members(&sample->xytTolerance, deallocParams->delete_pointers);
            


    rapid::String32_finalize_optional_members(&sample->navAlgo, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence8_finalize_optional_members(&sample->keyedValues, deallocParams->delete_pointers);
            

}

RTIBool MobilitySample_copy(
    MobilitySample* dst,
    const MobilitySample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String32_copy(
        &dst->goalName, &src->goalName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_copy(
        &dst->commandFrame, &src->commandFrame)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_copy(
        &dst->xyt, &src->xyt)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_copy(
        &dst->xytTolerance, &src->xytTolerance)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->hintedSpeed, &src->hintedSpeed)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->navAlgo, &src->navAlgo)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence8_copy(
        &dst->keyedValues, &src->keyedValues)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MobilitySample' sequence class.
 */
#define T MobilitySample
#define TSeq MobilitySampleSeq
#define T_initialize_w_params ::rapid::ext::arc::MobilitySample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::MobilitySample_finalize_w_params
#define T_copy       ::rapid::ext::arc::MobilitySample_copy

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
