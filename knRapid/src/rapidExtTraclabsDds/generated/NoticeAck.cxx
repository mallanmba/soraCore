
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeAck.idl using "rtiddsgen".
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



#include "NoticeAck.h"


namespace rapid{

namespace ext{

namespace traclabs{
/* ========================================================================= */
const char *NoticeAckTYPENAME = "rapid::ext::traclabs::NoticeAck";

DDS_TypeCode* NoticeAck_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NoticeAck_g_tc_members[2]=
    {
        {
            (char *)"noticeId",/* Member name */
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
            (char *)"ackTarget",/* Member name */
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
        }
    };

    static DDS_TypeCode NoticeAck_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::traclabs::NoticeAck", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        NoticeAck_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for NoticeAck*/

    if (is_initialized) {
        return &NoticeAck_g_tc;
    }


    NoticeAck_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    NoticeAck_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();

    NoticeAck_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &NoticeAck_g_tc;
}


RTIBool NoticeAck_initialize(
    NoticeAck* sample) {
  return ::rapid::ext::traclabs::NoticeAck_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NoticeAck_initialize_ex(
    NoticeAck* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::traclabs::NoticeAck_initialize_w_params(
        sample,&allocParams);
}

RTIBool NoticeAck_initialize_w_params(
        NoticeAck* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
/** noticeId of notice being acknowledged */

    if (!rapid::String16_initialize_w_params(&sample->noticeId,allocParams)) {
        return RTI_FALSE;
    }
            

/** id of user who acknowledged the notice */

    if (!rapid::String64_initialize_w_params(&sample->ackTarget,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NoticeAck_finalize(
    NoticeAck* sample)
{
    ::rapid::ext::traclabs::NoticeAck_finalize_ex(sample,RTI_TRUE);
}
        
void NoticeAck_finalize_ex(
    NoticeAck* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::traclabs::NoticeAck_finalize_w_params(
        sample,&deallocParams);
}

void NoticeAck_finalize_w_params(
        NoticeAck* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

/** noticeId of notice being acknowledged */

    rapid::String16_finalize_w_params(&sample->noticeId, deallocParams);
            

/** id of user who acknowledged the notice */

    rapid::String64_finalize_w_params(&sample->ackTarget, deallocParams);
            

}

void NoticeAck_finalize_optional_members(
    NoticeAck* sample, RTIBool deletePointers)
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
             

/** noticeId of notice being acknowledged */

    rapid::String16_finalize_optional_members(&sample->noticeId, deallocParams->delete_pointers);
            

/** id of user who acknowledged the notice */

    rapid::String64_finalize_optional_members(&sample->ackTarget, deallocParams->delete_pointers);
            

}

RTIBool NoticeAck_copy(
    NoticeAck* dst,
    const NoticeAck* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

/** noticeId of notice being acknowledged */

    if (!rapid::String16_copy(
        &dst->noticeId, &src->noticeId)) {
        return RTI_FALSE;
    }
            

/** id of user who acknowledged the notice */

    if (!rapid::String64_copy(
        &dst->ackTarget, &src->ackTarget)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NoticeAck' sequence class.
 */
#define T NoticeAck
#define TSeq NoticeAckSeq
#define T_initialize_w_params ::rapid::ext::traclabs::NoticeAck_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::traclabs::NoticeAck_finalize_w_params
#define T_copy       ::rapid::ext::traclabs::NoticeAck_copy

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


} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */
