
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeState.idl using "rtiddsgen".
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



#include "NoticeState.h"


namespace rapid{

namespace ext{

namespace traclabs{
/* ========================================================================= */

DDS_TypeCode* ModalityTypes_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ModalityTypes_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(8,NULL);

    static DDS_TypeCode ModalityTypes_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::traclabs::ModalityTypes", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ModalityTypes */

    if (is_initialized) {
        return &ModalityTypes_g_tc;
    }

    ModalityTypes_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::traclabs::ModalityType_get_typecode();
    ModalityTypes_g_tc._data._typeCode = (RTICdrTypeCode *)&ModalityTypes_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ModalityTypes_g_tc;
}


RTIBool ModalityTypes_initialize(
    ModalityTypes* sample)
{
    return ::rapid::ext::traclabs::ModalityTypes_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ModalityTypes_initialize_ex(
    ModalityTypes* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::traclabs::ModalityTypes_initialize_w_params(
        sample,&allocParams);
}

RTIBool ModalityTypes_initialize_w_params(
        ModalityTypes* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::traclabs::ModalityTypeSeq_initialize(sample);
        rapid::ext::traclabs::ModalityTypeSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::traclabs::ModalityTypeSeq_set_maximum(sample,
                                           (8))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::traclabs::ModalityTypeSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ModalityTypes_finalize(
    ModalityTypes* sample)
{
    ::rapid::ext::traclabs::ModalityTypes_finalize_ex(sample,RTI_TRUE);
}
 
void ModalityTypes_finalize_ex(
    ModalityTypes* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::traclabs::ModalityTypes_finalize_w_params(
        sample,&deallocParams);
}
           
void ModalityTypes_finalize_w_params(
    ModalityTypes* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::traclabs::ModalityTypeSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::traclabs::ModalityTypeSeq_finalize(sample);
            

}

void ModalityTypes_finalize_optional_members(
    ModalityTypes* sample, RTIBool deletePointers)
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
        length = rapid::ext::traclabs::ModalityTypeSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::traclabs::ModalityType_finalize_w_params(
                rapid::ext::traclabs::ModalityTypeSeq_get_reference(
                    sample, i), deallocParams);
        }
    }         
            

}

RTIBool ModalityTypes_copy(
    ModalityTypes* dst,
    const ModalityTypes* src)
{

    if (!rapid::ext::traclabs::ModalityTypeSeq_copy(dst,
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
 * Configure and implement 'ModalityTypes' sequence class.
 */
#define T            ModalityTypes
#define TSeq         ModalityTypesSeq
#define T_initialize_w_params ::rapid::ext::traclabs::ModalityTypes_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::traclabs::ModalityTypes_finalize_w_params
#define T_copy       ::rapid::ext::traclabs::ModalityTypes_copy


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


/**

 * NoticeState represents the current state of

 * of all published notice items. The data type is keyed

 * on itemId, so each notice item represents a separate instance.

 */
/* ========================================================================= */
const char *NoticeStateTYPENAME = "rapid::ext::traclabs::NoticeState";

DDS_TypeCode* NoticeState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member NoticeState_g_tc_members[11]=
    {
        {
            (char *)"itemId",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"noticeId",/* Member name */
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
            (char *)"latency",/* Member name */
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
            (char *)"foa",/* Member name */
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
            (char *)"modalities",/* Member name */
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
            (char *)"timeout",/* Member name */
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
            (char *)"ackState",/* Member name */
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
            (char *)"ackTarget",/* Member name */
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
        },
        {
            (char *)"subject",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 9),/* Representation ID */
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
            (char *)"body",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 10),/* Representation ID */
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
            (char *)"values",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 11),/* Representation ID */
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

    static DDS_TypeCode NoticeState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::traclabs::NoticeState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        11, /* Number of members */
        NoticeState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for NoticeState*/

    if (is_initialized) {
        return &NoticeState_g_tc;
    }


    NoticeState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    NoticeState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String16_get_typecode();
    NoticeState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::traclabs::LatencyType_get_typecode();
    NoticeState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::traclabs::FocusOfAttentionType_get_typecode();
    NoticeState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::traclabs::ModalityTypes_get_typecode();
    NoticeState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    NoticeState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::traclabs::NoticeAckState_get_typecode();
    NoticeState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    NoticeState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    NoticeState_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    NoticeState_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)rapid::ValueSequence16_get_typecode();

    NoticeState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &NoticeState_g_tc;
}


RTIBool NoticeState_initialize(
    NoticeState* sample) {
  return ::rapid::ext::traclabs::NoticeState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NoticeState_initialize_ex(
    NoticeState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::traclabs::NoticeState_initialize_w_params(
        sample,&allocParams);
}

RTIBool NoticeState_initialize_w_params(
        NoticeState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
/** what notice relates to (ie. ESTOP) */

    if (!rapid::String16_initialize_w_params(&sample->itemId,allocParams)) {
        return RTI_FALSE;
    }
            

/** unique for each notice */

    if (!rapid::String16_initialize_w_params(&sample->noticeId,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::LatencyType_initialize_w_params(&sample->latency,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::FocusOfAttentionType_initialize_w_params(&sample->foa,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::ModalityTypes_initialize_w_params(&sample->modalities,allocParams)) {
        return RTI_FALSE;
    }
            

/** how long notice should remain active, in seconds */

    if (!RTICdrType_initLong(&sample->timeout)) {
        return RTI_FALSE;
    }                
            

/** acknowledgement state of notice */

    if (!rapid::ext::traclabs::NoticeAckState_initialize_w_params(&sample->ackState,allocParams)) {
        return RTI_FALSE;
    }
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    if (!rapid::String64_initialize_w_params(&sample->ackTarget,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_initialize_w_params(&sample->subject,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_initialize_w_params(&sample->body,allocParams)) {
        return RTI_FALSE;
    }
            

/** extension data */

    if (!rapid::ValueSequence16_initialize_w_params(&sample->values,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NoticeState_finalize(
    NoticeState* sample)
{
    ::rapid::ext::traclabs::NoticeState_finalize_ex(sample,RTI_TRUE);
}
        
void NoticeState_finalize_ex(
    NoticeState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::traclabs::NoticeState_finalize_w_params(
        sample,&deallocParams);
}

void NoticeState_finalize_w_params(
        NoticeState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

/** what notice relates to (ie. ESTOP) */

    rapid::String16_finalize_w_params(&sample->itemId, deallocParams);
            

/** unique for each notice */

    rapid::String16_finalize_w_params(&sample->noticeId, deallocParams);
            

    rapid::ext::traclabs::LatencyType_finalize_w_params(&sample->latency, deallocParams);
            

    rapid::ext::traclabs::FocusOfAttentionType_finalize_w_params(&sample->foa, deallocParams);
            

    rapid::ext::traclabs::ModalityTypes_finalize_w_params(&sample->modalities, deallocParams);
            

/** how long notice should remain active, in seconds */


/** acknowledgement state of notice */

    rapid::ext::traclabs::NoticeAckState_finalize_w_params(&sample->ackState, deallocParams);
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    rapid::String64_finalize_w_params(&sample->ackTarget, deallocParams);
            

    rapid::String64_finalize_w_params(&sample->subject, deallocParams);
            

    rapid::String128_finalize_w_params(&sample->body, deallocParams);
            

/** extension data */

    rapid::ValueSequence16_finalize_w_params(&sample->values, deallocParams);
            

}

void NoticeState_finalize_optional_members(
    NoticeState* sample, RTIBool deletePointers)
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
             

/** what notice relates to (ie. ESTOP) */

    rapid::String16_finalize_optional_members(&sample->itemId, deallocParams->delete_pointers);
            

/** unique for each notice */

    rapid::String16_finalize_optional_members(&sample->noticeId, deallocParams->delete_pointers);
            

    rapid::ext::traclabs::LatencyType_finalize_w_params(&sample->latency, deallocParams);
            

    rapid::ext::traclabs::FocusOfAttentionType_finalize_w_params(&sample->foa, deallocParams);
            

    rapid::ext::traclabs::ModalityTypes_finalize_optional_members(&sample->modalities, deallocParams->delete_pointers);
            

/** how long notice should remain active, in seconds */


/** acknowledgement state of notice */

    rapid::ext::traclabs::NoticeAckState_finalize_w_params(&sample->ackState, deallocParams);
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    rapid::String64_finalize_optional_members(&sample->ackTarget, deallocParams->delete_pointers);
            

    rapid::String64_finalize_optional_members(&sample->subject, deallocParams->delete_pointers);
            

    rapid::String128_finalize_optional_members(&sample->body, deallocParams->delete_pointers);
            

/** extension data */

    rapid::ValueSequence16_finalize_optional_members(&sample->values, deallocParams->delete_pointers);
            

}

RTIBool NoticeState_copy(
    NoticeState* dst,
    const NoticeState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

/** what notice relates to (ie. ESTOP) */

    if (!rapid::String16_copy(
        &dst->itemId, &src->itemId)) {
        return RTI_FALSE;
    }
            

/** unique for each notice */

    if (!rapid::String16_copy(
        &dst->noticeId, &src->noticeId)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::LatencyType_copy(
        &dst->latency, &src->latency)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::FocusOfAttentionType_copy(
        &dst->foa, &src->foa)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::ModalityTypes_copy(
        &dst->modalities, &src->modalities)) {
        return RTI_FALSE;
    }
            

/** how long notice should remain active, in seconds */

    if (!RTICdrType_copyLong(
        &dst->timeout, &src->timeout)) {
        return RTI_FALSE;
    }
            

/** acknowledgement state of notice */

    if (!rapid::ext::traclabs::NoticeAckState_copy(
        &dst->ackState, &src->ackState)) {
        return RTI_FALSE;
    }
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    if (!rapid::String64_copy(
        &dst->ackTarget, &src->ackTarget)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64_copy(
        &dst->subject, &src->subject)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_copy(
        &dst->body, &src->body)) {
        return RTI_FALSE;
    }
            

/** extension data */

    if (!rapid::ValueSequence16_copy(
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
 * Configure and implement 'NoticeState' sequence class.
 */
#define T NoticeState
#define TSeq NoticeStateSeq
#define T_initialize_w_params ::rapid::ext::traclabs::NoticeState_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::traclabs::NoticeState_finalize_w_params
#define T_copy       ::rapid::ext::traclabs::NoticeState_copy

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
