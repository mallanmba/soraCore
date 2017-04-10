
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from JointSample.idl using "rtiddsgen".
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



#include "JointSample.h"


namespace rapid{
/* ========================================================================= */
const char *JointSampleTYPENAME = "rapid::JointSample";

DDS_TypeCode* JointSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member JointSample_g_tc_members[8]=
    {
        {
            (char *)"anglePos",/* Member name */
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
            (char *)"angleVel",/* Member name */
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
            (char *)"angleAcc",/* Member name */
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
            (char *)"current",/* Member name */
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
            (char *)"torque",/* Member name */
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
            (char *)"temperature",/* Member name */
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
            (char *)"status",/* Member name */
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
            (char *)"auxFloat",/* Member name */
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
        }
    };

    static DDS_TypeCode JointSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::JointSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of members */
        JointSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for JointSample*/

    if (is_initialized) {
        return &JointSample_g_tc;
    }


    JointSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence64_get_typecode();
    JointSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence64_get_typecode();
    JointSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence64_get_typecode();
    JointSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence64_get_typecode();
    JointSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence64_get_typecode();
    JointSample_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence64_get_typecode();
    JointSample_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::LongSequence64_get_typecode();
    JointSample_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)rapid::NFSeqSequence16_get_typecode();

    JointSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &JointSample_g_tc;
}


RTIBool JointSample_initialize(
    JointSample* sample) {
  return ::rapid::JointSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool JointSample_initialize_ex(
    JointSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::JointSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool JointSample_initialize_w_params(
        JointSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::FloatSequence64_initialize_w_params(&sample->anglePos,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_initialize_w_params(&sample->angleVel,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_initialize_w_params(&sample->angleAcc,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_initialize_w_params(&sample->current,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_initialize_w_params(&sample->torque,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_initialize_w_params(&sample->temperature,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence64_initialize_w_params(&sample->status,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::NFSeqSequence16_initialize_w_params(&sample->auxFloat,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void JointSample_finalize(
    JointSample* sample)
{
    ::rapid::JointSample_finalize_ex(sample,RTI_TRUE);
}
        
void JointSample_finalize_ex(
    JointSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::JointSample_finalize_w_params(
        sample,&deallocParams);
}

void JointSample_finalize_w_params(
        JointSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::FloatSequence64_finalize_w_params(&sample->anglePos, deallocParams);
            

    rapid::FloatSequence64_finalize_w_params(&sample->angleVel, deallocParams);
            

    rapid::FloatSequence64_finalize_w_params(&sample->angleAcc, deallocParams);
            

    rapid::FloatSequence64_finalize_w_params(&sample->current, deallocParams);
            

    rapid::FloatSequence64_finalize_w_params(&sample->torque, deallocParams);
            

    rapid::FloatSequence64_finalize_w_params(&sample->temperature, deallocParams);
            

    rapid::LongSequence64_finalize_w_params(&sample->status, deallocParams);
            

    rapid::NFSeqSequence16_finalize_w_params(&sample->auxFloat, deallocParams);
            

}

void JointSample_finalize_optional_members(
    JointSample* sample, RTIBool deletePointers)
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
             

    rapid::FloatSequence64_finalize_optional_members(&sample->anglePos, deallocParams->delete_pointers);
            

    rapid::FloatSequence64_finalize_optional_members(&sample->angleVel, deallocParams->delete_pointers);
            

    rapid::FloatSequence64_finalize_optional_members(&sample->angleAcc, deallocParams->delete_pointers);
            

    rapid::FloatSequence64_finalize_optional_members(&sample->current, deallocParams->delete_pointers);
            

    rapid::FloatSequence64_finalize_optional_members(&sample->torque, deallocParams->delete_pointers);
            

    rapid::FloatSequence64_finalize_optional_members(&sample->temperature, deallocParams->delete_pointers);
            

    rapid::LongSequence64_finalize_optional_members(&sample->status, deallocParams->delete_pointers);
            

    rapid::NFSeqSequence16_finalize_optional_members(&sample->auxFloat, deallocParams->delete_pointers);
            

}

RTIBool JointSample_copy(
    JointSample* dst,
    const JointSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::FloatSequence64_copy(
        &dst->anglePos, &src->anglePos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_copy(
        &dst->angleVel, &src->angleVel)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_copy(
        &dst->angleAcc, &src->angleAcc)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_copy(
        &dst->current, &src->current)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_copy(
        &dst->torque, &src->torque)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence64_copy(
        &dst->temperature, &src->temperature)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence64_copy(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!rapid::NFSeqSequence16_copy(
        &dst->auxFloat, &src->auxFloat)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'JointSample' sequence class.
 */
#define T JointSample
#define TSeq JointSampleSeq
#define T_initialize_w_params ::rapid::JointSample_initialize_w_params
#define T_finalize_w_params   ::rapid::JointSample_finalize_w_params
#define T_copy       ::rapid::JointSample_copy

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
