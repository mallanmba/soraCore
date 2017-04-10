
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RangeScanConfig.idl using "rtiddsgen".
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



#include "RangeScanConfig.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *RangeScanDirectionTYPENAME = "rapid::ext::RangeScanDirection";

DDS_TypeCode* RangeScanDirection_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RangeScanDirection_g_tc_members[2] =
    {
        {
            (char *)"SCAN_HORIZONTAL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SCAN_HORIZONTAL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SCAN_VERTICAL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SCAN_VERTICAL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RangeScanDirection_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::RangeScanDirection", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        RangeScanDirection_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &RangeScanDirection_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &RangeScanDirection_g_tc;
}
 

RTIBool RangeScanDirection_initialize(
    RangeScanDirection* sample)
{
    *sample = SCAN_HORIZONTAL;
    return RTI_TRUE;
}
        
RTIBool RangeScanDirection_initialize_ex(
    RangeScanDirection* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = SCAN_HORIZONTAL;
    return RTI_TRUE;
}

RTIBool RangeScanDirection_initialize_w_params(
        RangeScanDirection* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = SCAN_HORIZONTAL;
    return RTI_TRUE;
}

void RangeScanDirection_finalize(
    RangeScanDirection* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void RangeScanDirection_finalize_ex(
    RangeScanDirection* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void RangeScanDirection_finalize_w_params(
        RangeScanDirection* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool RangeScanDirection_copy(
    RangeScanDirection* dst,
    const RangeScanDirection* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool RangeScanDirection_getValues(RangeScanDirectionSeq * values) 
    
{
    int i = 0;
    RangeScanDirection * buffer;


    if (!values->maximum(2)) {
        return RTI_FALSE;
    }

    if (!values->length(2)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = SCAN_HORIZONTAL;
    i++;
    
    buffer[i] = SCAN_VERTICAL;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RangeScanDirection' sequence class.
 */
#define T RangeScanDirection
#define TSeq RangeScanDirectionSeq
#define T_initialize_w_params RangeScanDirection_initialize_w_params
#define T_finalize_w_params   RangeScanDirection_finalize_w_params
#define T_copy       RangeScanDirection_copy

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

DDS_TypeCode* Transform3DSequence64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Transform3DSequence64_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode Transform3DSequence64_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::Transform3DSequence64", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Transform3DSequence64 */

    if (is_initialized) {
        return &Transform3DSequence64_g_tc;
    }

    Transform3DSequence64_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    Transform3DSequence64_g_tc._data._typeCode = (RTICdrTypeCode *)&Transform3DSequence64_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Transform3DSequence64_g_tc;
}


RTIBool Transform3DSequence64_initialize(
    Transform3DSequence64* sample)
{
    return ::rapid::ext::Transform3DSequence64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Transform3DSequence64_initialize_ex(
    Transform3DSequence64* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::Transform3DSequence64_initialize_w_params(
        sample,&allocParams);
}

RTIBool Transform3DSequence64_initialize_w_params(
        Transform3DSequence64* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::Transform3DSeq_initialize(sample);
        rapid::Transform3DSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::Transform3DSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::Transform3DSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void Transform3DSequence64_finalize(
    Transform3DSequence64* sample)
{
    ::rapid::ext::Transform3DSequence64_finalize_ex(sample,RTI_TRUE);
}
 
void Transform3DSequence64_finalize_ex(
    Transform3DSequence64* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::Transform3DSequence64_finalize_w_params(
        sample,&deallocParams);
}
           
void Transform3DSequence64_finalize_w_params(
    Transform3DSequence64* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::Transform3DSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::Transform3DSeq_finalize(sample);
            

}

void Transform3DSequence64_finalize_optional_members(
    Transform3DSequence64* sample, RTIBool deletePointers)
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
        length = rapid::Transform3DSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::Transform3D_finalize_optional_members(
                rapid::Transform3DSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool Transform3DSequence64_copy(
    Transform3DSequence64* dst,
    const Transform3DSequence64* src)
{

    if (!rapid::Transform3DSeq_copy(dst,
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
 * Configure and implement 'Transform3DSequence64' sequence class.
 */
#define T            Transform3DSequence64
#define TSeq         Transform3DSequence64Seq
#define T_initialize_w_params ::rapid::ext::Transform3DSequence64_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::Transform3DSequence64_finalize_w_params
#define T_copy       ::rapid::ext::Transform3DSequence64_copy


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
const char *RangeScanConfigTYPENAME = "rapid::ext::RangeScanConfig";

DDS_TypeCode* RangeScanConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member RangeScanConfig_g_tc_members[9]=
    {
        {
            (char *)"referenceFrame",/* Member name */
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
            (char *)"scanLengths",/* Member name */
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
            (char *)"scanDirection",/* Member name */
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
            (char *)"scanAzimuth",/* Member name */
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
            (char *)"scanAzimuthScale",/* Member name */
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
            (char *)"scanElevation",/* Member name */
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
            (char *)"scanElevationScale",/* Member name */
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
            (char *)"rangeScale",/* Member name */
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
            (char *)"intensityScale",/* Member name */
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
        }
    };

    static DDS_TypeCode RangeScanConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::RangeScanConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        9, /* Number of members */
        RangeScanConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for RangeScanConfig*/

    if (is_initialized) {
        return &RangeScanConfig_g_tc;
    }


    RangeScanConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    RangeScanConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence64_get_typecode();
    RangeScanConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::RangeScanDirection_get_typecode();
    RangeScanConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence64_get_typecode();
    RangeScanConfig_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    RangeScanConfig_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence64_get_typecode();
    RangeScanConfig_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    RangeScanConfig_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    RangeScanConfig_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    RangeScanConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &RangeScanConfig_g_tc;
}


RTIBool RangeScanConfig_initialize(
    RangeScanConfig* sample) {
  return ::rapid::ext::RangeScanConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RangeScanConfig_initialize_ex(
    RangeScanConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::RangeScanConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool RangeScanConfig_initialize_w_params(
        RangeScanConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String128_initialize_w_params(&sample->referenceFrame,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64_initialize_w_params(&sample->scanLengths,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RangeScanDirection_initialize_w_params(&sample->scanDirection,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64_initialize_w_params(&sample->scanAzimuth,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->scanAzimuthScale)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ShortSequence64_initialize_w_params(&sample->scanElevation,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->scanElevationScale)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->rangeScale)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->intensityScale)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void RangeScanConfig_finalize(
    RangeScanConfig* sample)
{
    ::rapid::ext::RangeScanConfig_finalize_ex(sample,RTI_TRUE);
}
        
void RangeScanConfig_finalize_ex(
    RangeScanConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::RangeScanConfig_finalize_w_params(
        sample,&deallocParams);
}

void RangeScanConfig_finalize_w_params(
        RangeScanConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String128_finalize_w_params(&sample->referenceFrame, deallocParams);
            

    rapid::ShortSequence64_finalize_w_params(&sample->scanLengths, deallocParams);
            

    rapid::ext::RangeScanDirection_finalize_w_params(&sample->scanDirection, deallocParams);
            

    rapid::ShortSequence64_finalize_w_params(&sample->scanAzimuth, deallocParams);
            


    rapid::ShortSequence64_finalize_w_params(&sample->scanElevation, deallocParams);
            




}

void RangeScanConfig_finalize_optional_members(
    RangeScanConfig* sample, RTIBool deletePointers)
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
             

    rapid::String128_finalize_optional_members(&sample->referenceFrame, deallocParams->delete_pointers);
            

    rapid::ShortSequence64_finalize_optional_members(&sample->scanLengths, deallocParams->delete_pointers);
            

    rapid::ext::RangeScanDirection_finalize_w_params(&sample->scanDirection, deallocParams);
            

    rapid::ShortSequence64_finalize_optional_members(&sample->scanAzimuth, deallocParams->delete_pointers);
            


    rapid::ShortSequence64_finalize_optional_members(&sample->scanElevation, deallocParams->delete_pointers);
            




}

RTIBool RangeScanConfig_copy(
    RangeScanConfig* dst,
    const RangeScanConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String128_copy(
        &dst->referenceFrame, &src->referenceFrame)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64_copy(
        &dst->scanLengths, &src->scanLengths)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RangeScanDirection_copy(
        &dst->scanDirection, &src->scanDirection)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64_copy(
        &dst->scanAzimuth, &src->scanAzimuth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->scanAzimuthScale, &src->scanAzimuthScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64_copy(
        &dst->scanElevation, &src->scanElevation)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->scanElevationScale, &src->scanElevationScale)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->rangeScale, &src->rangeScale)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->intensityScale, &src->intensityScale)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RangeScanConfig' sequence class.
 */
#define T RangeScanConfig
#define TSeq RangeScanConfigSeq
#define T_initialize_w_params ::rapid::ext::RangeScanConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::RangeScanConfig_finalize_w_params
#define T_copy       ::rapid::ext::RangeScanConfig_copy

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
