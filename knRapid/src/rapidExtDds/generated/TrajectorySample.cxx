
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectorySample.idl using "rtiddsgen".
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



#include "TrajectorySample.h"


namespace rapid{

namespace ext{

/**

 * SegmentType describes the type of segment that is being represented.

 */
/* ========================================================================= */
const char *SegmentTypeTYPENAME = "rapid::ext::SegmentType";

DDS_TypeCode* SegmentType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member SegmentType_g_tc_members[4] =
    {
        {
            (char *)"SEG_STRAIGHT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SEG_STRAIGHT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SEG_ARC",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SEG_ARC, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SEG_POINTTURN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SEG_POINTTURN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SEG_CLOTHOID",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SEG_CLOTHOID, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SegmentType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::SegmentType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
        SegmentType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &SegmentType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &SegmentType_g_tc;
}
 

RTIBool SegmentType_initialize(
    SegmentType* sample)
{
    *sample = SEG_STRAIGHT;
    return RTI_TRUE;
}
        
RTIBool SegmentType_initialize_ex(
    SegmentType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = SEG_STRAIGHT;
    return RTI_TRUE;
}

RTIBool SegmentType_initialize_w_params(
        SegmentType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = SEG_STRAIGHT;
    return RTI_TRUE;
}

void SegmentType_finalize(
    SegmentType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void SegmentType_finalize_ex(
    SegmentType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void SegmentType_finalize_w_params(
        SegmentType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool SegmentType_copy(
    SegmentType* dst,
    const SegmentType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool SegmentType_getValues(SegmentTypeSeq * values) 
    
{
    int i = 0;
    SegmentType * buffer;


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = SEG_STRAIGHT;
    i++;
    
    buffer[i] = SEG_ARC;
    i++;
    
    buffer[i] = SEG_POINTTURN;
    i++;
    
    buffer[i] = SEG_CLOTHOID;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SegmentType' sequence class.
 */
#define T SegmentType
#define TSeq SegmentTypeSeq
#define T_initialize_w_params SegmentType_initialize_w_params
#define T_finalize_w_params   SegmentType_finalize_w_params
#define T_copy       SegmentType_copy

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

 * SingleSegment holds the info for an "atomic" segment.

 *

 */
/* ========================================================================= */
const char *SingleSegmentTYPENAME = "rapid::ext::SingleSegment";

DDS_TypeCode* SingleSegment_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SingleSegment_g_tc_members[7]=
    {
        {
            (char *)"type",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"distance",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"length",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"angleOffset",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"start",/* Member name */
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
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"end",/* Member name */
            {
                5,/* Representation ID */
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
            (char *)"velocity",/* Member name */
            {
                6,/* Representation ID */
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

    static DDS_TypeCode SingleSegment_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::SingleSegment", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        SingleSegment_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for SingleSegment*/

    if (is_initialized) {
        return &SingleSegment_g_tc;
    }


    SingleSegment_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::SegmentType_get_typecode();
    SingleSegment_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    SingleSegment_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    SingleSegment_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    SingleSegment_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    SingleSegment_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    SingleSegment_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    SingleSegment_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_null; /* Base class */

    is_initialized = RTI_TRUE;

    return &SingleSegment_g_tc;
}


RTIBool SingleSegment_initialize(
    SingleSegment* sample) {
  return ::rapid::ext::SingleSegment_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SingleSegment_initialize_ex(
    SingleSegment* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::SingleSegment_initialize_w_params(
        sample,&allocParams);
}

RTIBool SingleSegment_initialize_w_params(
        SingleSegment* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::ext::SegmentType_initialize_w_params(&sample->type,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->distance)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->length)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->angleOffset)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::Transform3D_initialize_w_params(&sample->start,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_initialize_w_params(&sample->end,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->velocity)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void SingleSegment_finalize(
    SingleSegment* sample)
{
    ::rapid::ext::SingleSegment_finalize_ex(sample,RTI_TRUE);
}
        
void SingleSegment_finalize_ex(
    SingleSegment* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::SingleSegment_finalize_w_params(
        sample,&deallocParams);
}

void SingleSegment_finalize_w_params(
        SingleSegment* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::ext::SegmentType_finalize_w_params(&sample->type, deallocParams);
            




    rapid::Transform3D_finalize_w_params(&sample->start, deallocParams);
            

    rapid::Transform3D_finalize_w_params(&sample->end, deallocParams);
            


}

void SingleSegment_finalize_optional_members(
    SingleSegment* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::ext::SegmentType_finalize_w_params(&sample->type, deallocParams);
            




    rapid::Transform3D_finalize_optional_members(&sample->start, deallocParams->delete_pointers);
            

    rapid::Transform3D_finalize_optional_members(&sample->end, deallocParams->delete_pointers);
            


}

RTIBool SingleSegment_copy(
    SingleSegment* dst,
    const SingleSegment* src)
{

    if (!rapid::ext::SegmentType_copy(
        &dst->type, &src->type)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->distance, &src->distance)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->length, &src->length)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->angleOffset, &src->angleOffset)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_copy(
        &dst->start, &src->start)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_copy(
        &dst->end, &src->end)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->velocity, &src->velocity)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SingleSegment' sequence class.
 */
#define T SingleSegment
#define TSeq SingleSegmentSeq
#define T_initialize_w_params ::rapid::ext::SingleSegment_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::SingleSegment_finalize_w_params
#define T_copy       ::rapid::ext::SingleSegment_copy

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

DDS_TypeCode* SegmentSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SegmentSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode SegmentSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::SegmentSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SegmentSequence */

    if (is_initialized) {
        return &SegmentSequence_g_tc;
    }

    SegmentSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::SingleSegment_get_typecode();
    SegmentSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&SegmentSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &SegmentSequence_g_tc;
}


RTIBool SegmentSequence_initialize(
    SegmentSequence* sample)
{
    return ::rapid::ext::SegmentSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool SegmentSequence_initialize_ex(
    SegmentSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::SegmentSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool SegmentSequence_initialize_w_params(
        SegmentSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::SingleSegmentSeq_initialize(sample);
        rapid::ext::SingleSegmentSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::SingleSegmentSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::SingleSegmentSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void SegmentSequence_finalize(
    SegmentSequence* sample)
{
    ::rapid::ext::SegmentSequence_finalize_ex(sample,RTI_TRUE);
}
 
void SegmentSequence_finalize_ex(
    SegmentSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::SegmentSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void SegmentSequence_finalize_w_params(
    SegmentSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::SingleSegmentSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::SingleSegmentSeq_finalize(sample);
            

}

void SegmentSequence_finalize_optional_members(
    SegmentSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::SingleSegmentSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::SingleSegment_finalize_optional_members(
                rapid::ext::SingleSegmentSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool SegmentSequence_copy(
    SegmentSequence* dst,
    const SegmentSequence* src)
{

    if (!rapid::ext::SingleSegmentSeq_copy(dst,
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
 * Configure and implement 'SegmentSequence' sequence class.
 */
#define T            SegmentSequence
#define TSeq         SegmentSequenceSeq
#define T_initialize_w_params ::rapid::ext::SegmentSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::SegmentSequence_finalize_w_params
#define T_copy       ::rapid::ext::SegmentSequence_copy


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

 * TrajectorySample is a message that holds the current sequence of geometric trajectory segments that the robot plans to follow.

 * The receiver will need to convert this to whatever form they need to identify potential collisions or to render it in a GUI

 */
/* ========================================================================= */
const char *TrajectorySampleTYPENAME = "rapid::ext::TrajectorySample";

DDS_TypeCode* TrajectorySample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TrajectorySample_g_tc_members[1]=
    {
        {
            (char *)"geometricSegments",/* Member name */
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

    static DDS_TypeCode TrajectorySample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::TrajectorySample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TrajectorySample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for TrajectorySample*/

    if (is_initialized) {
        return &TrajectorySample_g_tc;
    }


    TrajectorySample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::SegmentSequence_get_typecode();

    TrajectorySample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &TrajectorySample_g_tc;
}


RTIBool TrajectorySample_initialize(
    TrajectorySample* sample) {
  return ::rapid::ext::TrajectorySample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TrajectorySample_initialize_ex(
    TrajectorySample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::TrajectorySample_initialize_w_params(
        sample,&allocParams);
}

RTIBool TrajectorySample_initialize_w_params(
        TrajectorySample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::SegmentSequence_initialize_w_params(&sample->geometricSegments,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TrajectorySample_finalize(
    TrajectorySample* sample)
{
    ::rapid::ext::TrajectorySample_finalize_ex(sample,RTI_TRUE);
}
        
void TrajectorySample_finalize_ex(
    TrajectorySample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::TrajectorySample_finalize_w_params(
        sample,&deallocParams);
}

void TrajectorySample_finalize_w_params(
        TrajectorySample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::SegmentSequence_finalize_w_params(&sample->geometricSegments, deallocParams);
            

}

void TrajectorySample_finalize_optional_members(
    TrajectorySample* sample, RTIBool deletePointers)
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
             

    rapid::ext::SegmentSequence_finalize_optional_members(&sample->geometricSegments, deallocParams->delete_pointers);
            

}

RTIBool TrajectorySample_copy(
    TrajectorySample* dst,
    const TrajectorySample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::SegmentSequence_copy(
        &dst->geometricSegments, &src->geometricSegments)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TrajectorySample' sequence class.
 */
#define T TrajectorySample
#define TSeq TrajectorySampleSeq
#define T_initialize_w_params ::rapid::ext::TrajectorySample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::TrajectorySample_finalize_w_params
#define T_copy       ::rapid::ext::TrajectorySample_copy

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
