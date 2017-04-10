
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraSample.idl using "rtiddsgen".
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



#include "HydraSample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *HydraSampleTYPENAME = "rapid::ext::arc::HydraSample";

DDS_TypeCode* HydraSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode HydraSample_g_tc_sn_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);
    static DDS_TypeCode HydraSample_g_tc_cd_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);
    static DDS_TypeCode HydraSample_g_tc_reading_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(89,NULL);

    static DDS_TypeCode_Member HydraSample_g_tc_members[8]=
    {
        {
            (char *)"soh",/* Member name */
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
            (char *)"sns",/* Member name */
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
            (char *)"cds",/* Member name */
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
            (char *)"cmr",/* Member name */
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
            (char *)"sn",/* Member name */
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
            (char *)"cd",/* Member name */
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
            (char *)"reading",/* Member name */
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
            (char *)"values",/* Member name */
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

    static DDS_TypeCode HydraSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::HydraSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of members */
        HydraSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for HydraSample*/

    if (is_initialized) {
        return &HydraSample_g_tc;
    }

    HydraSample_g_tc_sn_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    HydraSample_g_tc_cd_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    HydraSample_g_tc_reading_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    HydraSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    HydraSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    HydraSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    HydraSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    HydraSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&HydraSample_g_tc_sn_sequence;
    HydraSample_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&HydraSample_g_tc_cd_sequence;
    HydraSample_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&HydraSample_g_tc_reading_sequence;
    HydraSample_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)rapid::ValueSequence32_get_typecode();

    HydraSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &HydraSample_g_tc;
}


RTIBool HydraSample_initialize(
    HydraSample* sample) {
  return ::rapid::ext::arc::HydraSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool HydraSample_initialize_ex(
    HydraSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::HydraSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool HydraSample_initialize_w_params(
        HydraSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initUnsignedShort(&sample->soh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->sns)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->cds)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->cmr)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        DDS_UnsignedShortSeq_initialize(&sample->sn);
        if (!DDS_UnsignedShortSeq_set_maximum(&sample->sn,
                (32))) {
            return RTI_FALSE;
        }
    } else {
        DDS_UnsignedShortSeq_set_length(&sample->sn, 0); 
    }
            

    if (allocParams->allocate_memory) {
        DDS_UnsignedShortSeq_initialize(&sample->cd);
        if (!DDS_UnsignedShortSeq_set_maximum(&sample->cd,
                (32))) {
            return RTI_FALSE;
        }
    } else {
        DDS_UnsignedShortSeq_set_length(&sample->cd, 0); 
    }
            

    if (allocParams->allocate_memory) {
        DDS_UnsignedShortSeq_initialize(&sample->reading);
        if (!DDS_UnsignedShortSeq_set_maximum(&sample->reading,
                (89))) {
            return RTI_FALSE;
        }
    } else {
        DDS_UnsignedShortSeq_set_length(&sample->reading, 0); 
    }
            

    if (!rapid::ValueSequence32_initialize_w_params(&sample->values,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void HydraSample_finalize(
    HydraSample* sample)
{
    ::rapid::ext::arc::HydraSample_finalize_ex(sample,RTI_TRUE);
}
        
void HydraSample_finalize_ex(
    HydraSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::HydraSample_finalize_w_params(
        sample,&deallocParams);
}

void HydraSample_finalize_w_params(
        HydraSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);





    DDS_UnsignedShortSeq_finalize(&sample->sn);
            

    DDS_UnsignedShortSeq_finalize(&sample->cd);
            

    DDS_UnsignedShortSeq_finalize(&sample->reading);
            

    rapid::ValueSequence32_finalize_w_params(&sample->values, deallocParams);
            

}

void HydraSample_finalize_optional_members(
    HydraSample* sample, RTIBool deletePointers)
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
             








    rapid::ValueSequence32_finalize_optional_members(&sample->values, deallocParams->delete_pointers);
            

}

RTIBool HydraSample_copy(
    HydraSample* dst,
    const HydraSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyUnsignedShort(
        &dst->soh, &src->soh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->sns, &src->sns)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->cds, &src->cds)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->cmr, &src->cmr)) {
        return RTI_FALSE;
    }
            

    if (!DDS_UnsignedShortSeq_copy(&dst->sn,
                                          &src->sn)) {
        return RTI_FALSE;
    }
            

    if (!DDS_UnsignedShortSeq_copy(&dst->cd,
                                          &src->cd)) {
        return RTI_FALSE;
    }
            

    if (!DDS_UnsignedShortSeq_copy(&dst->reading,
                                          &src->reading)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ValueSequence32_copy(
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
 * Configure and implement 'HydraSample' sequence class.
 */
#define T HydraSample
#define TSeq HydraSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::HydraSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::HydraSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::HydraSample_copy

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
