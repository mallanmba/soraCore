
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PointCloudSample.idl using "rtiddsgen".
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



#include "PointCloudSample.h"


namespace rapid{
/* ========================================================================= */
const char *PointSampleTYPENAME = "rapid::PointSample";

DDS_TypeCode* PointSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode PointSample_g_tc_xyz_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);
    static DDS_TypeCode PointSample_g_tc_attributes_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);

    static DDS_TypeCode_Member PointSample_g_tc_members[2]=
    {
        {
            (char *)"xyz",/* Member name */
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
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"attributes",/* Member name */
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
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode PointSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::PointSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        PointSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for PointSample*/

    if (is_initialized) {
        return &PointSample_g_tc;
    }

    PointSample_g_tc_xyz_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    PointSample_g_tc_attributes_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    PointSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&PointSample_g_tc_xyz_array;
    PointSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&PointSample_g_tc_attributes_array;

    is_initialized = RTI_TRUE;

    return &PointSample_g_tc;
}


RTIBool PointSample_initialize(
    PointSample* sample) {
  return ::rapid::PointSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool PointSample_initialize_ex(
    PointSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::PointSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool PointSample_initialize_w_params(
        PointSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->xyz, (3), RTI_CDR_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->attributes, (2), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void PointSample_finalize(
    PointSample* sample)
{
    ::rapid::PointSample_finalize_ex(sample,RTI_TRUE);
}
        
void PointSample_finalize_ex(
    PointSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::PointSample_finalize_w_params(
        sample,&deallocParams);
}

void PointSample_finalize_w_params(
        PointSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void PointSample_finalize_optional_members(
    PointSample* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             



}

RTIBool PointSample_copy(
    PointSample* dst,
    const PointSample* src)
{

    if (!RTICdrType_copyArray(
        dst->xyz, src->xyz, (3), RTI_CDR_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->attributes, src->attributes, (2), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PointSample' sequence class.
 */
#define T PointSample
#define TSeq PointSampleSeq
#define T_initialize_w_params ::rapid::PointSample_initialize_w_params
#define T_finalize_w_params   ::rapid::PointSample_finalize_w_params
#define T_copy       ::rapid::PointSample_copy

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

DDS_TypeCode* PointSampleSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode PointSampleSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((rapid::POINTCLOUD_SAMPLE_MAX_POINTS),NULL);

    static DDS_TypeCode PointSampleSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::PointSampleSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for PointSampleSequence */

    if (is_initialized) {
        return &PointSampleSequence_g_tc;
    }

    PointSampleSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::PointSample_get_typecode();
    PointSampleSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&PointSampleSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &PointSampleSequence_g_tc;
}


RTIBool PointSampleSequence_initialize(
    PointSampleSequence* sample)
{
    return ::rapid::PointSampleSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool PointSampleSequence_initialize_ex(
    PointSampleSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::PointSampleSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool PointSampleSequence_initialize_w_params(
        PointSampleSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::PointSampleSeq_initialize(sample);
        rapid::PointSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::PointSampleSeq_set_maximum(sample,
                                           ((rapid::POINTCLOUD_SAMPLE_MAX_POINTS)))) {
            return RTI_FALSE;
        }
    } else {
        rapid::PointSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void PointSampleSequence_finalize(
    PointSampleSequence* sample)
{
    ::rapid::PointSampleSequence_finalize_ex(sample,RTI_TRUE);
}
 
void PointSampleSequence_finalize_ex(
    PointSampleSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::PointSampleSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void PointSampleSequence_finalize_w_params(
    PointSampleSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::PointSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::PointSampleSeq_finalize(sample);
            

}

void PointSampleSequence_finalize_optional_members(
    PointSampleSequence* sample, RTIBool deletePointers)
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
        length = rapid::PointSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::PointSample_finalize_optional_members(
                rapid::PointSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool PointSampleSequence_copy(
    PointSampleSequence* dst,
    const PointSampleSequence* src)
{

    if (!rapid::PointSampleSeq_copy(dst,
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
 * Configure and implement 'PointSampleSequence' sequence class.
 */
#define T            PointSampleSequence
#define TSeq         PointSampleSequenceSeq
#define T_initialize_w_params ::rapid::PointSampleSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::PointSampleSequence_finalize_w_params
#define T_copy       ::rapid::PointSampleSequence_copy


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
const char *PointCloudSampleTYPENAME = "rapid::PointCloudSample";

DDS_TypeCode* PointCloudSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member PointCloudSample_g_tc_members[4]=
    {
        {
            (char *)"origin",/* Member name */
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
            (char *)"xyzScale",/* Member name */
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
            (char *)"points",/* Member name */
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
            (char *)"rowLengths",/* Member name */
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

    static DDS_TypeCode PointCloudSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::PointCloudSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        PointCloudSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for PointCloudSample*/

    if (is_initialized) {
        return &PointCloudSample_g_tc;
    }


    PointCloudSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    PointCloudSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    PointCloudSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::PointSampleSequence_get_typecode();
    PointCloudSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ShortSequence128_get_typecode();

    PointCloudSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &PointCloudSample_g_tc;
}


RTIBool PointCloudSample_initialize(
    PointCloudSample* sample) {
  return ::rapid::PointCloudSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool PointCloudSample_initialize_ex(
    PointCloudSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::PointCloudSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool PointCloudSample_initialize_w_params(
        PointCloudSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::Vec3d_initialize_w_params(&sample->origin,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_initialize_w_params(&sample->xyzScale,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::PointSampleSequence_initialize_w_params(&sample->points,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence128_initialize_w_params(&sample->rowLengths,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void PointCloudSample_finalize(
    PointCloudSample* sample)
{
    ::rapid::PointCloudSample_finalize_ex(sample,RTI_TRUE);
}
        
void PointCloudSample_finalize_ex(
    PointCloudSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::PointCloudSample_finalize_w_params(
        sample,&deallocParams);
}

void PointCloudSample_finalize_w_params(
        PointCloudSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::Vec3d_finalize_w_params(&sample->origin, deallocParams);
            

    rapid::Vec3d_finalize_w_params(&sample->xyzScale, deallocParams);
            

    rapid::PointSampleSequence_finalize_w_params(&sample->points, deallocParams);
            

    rapid::ShortSequence128_finalize_w_params(&sample->rowLengths, deallocParams);
            

}

void PointCloudSample_finalize_optional_members(
    PointCloudSample* sample, RTIBool deletePointers)
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
             

    rapid::Vec3d_finalize_optional_members(&sample->origin, deallocParams->delete_pointers);
            

    rapid::Vec3d_finalize_optional_members(&sample->xyzScale, deallocParams->delete_pointers);
            

    rapid::PointSampleSequence_finalize_optional_members(&sample->points, deallocParams->delete_pointers);
            

    rapid::ShortSequence128_finalize_optional_members(&sample->rowLengths, deallocParams->delete_pointers);
            

}

RTIBool PointCloudSample_copy(
    PointCloudSample* dst,
    const PointCloudSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::Vec3d_copy(
        &dst->origin, &src->origin)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_copy(
        &dst->xyzScale, &src->xyzScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::PointSampleSequence_copy(
        &dst->points, &src->points)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence128_copy(
        &dst->rowLengths, &src->rowLengths)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PointCloudSample' sequence class.
 */
#define T PointCloudSample
#define TSeq PointCloudSampleSeq
#define T_initialize_w_params ::rapid::PointCloudSample_initialize_w_params
#define T_finalize_w_params   ::rapid::PointCloudSample_finalize_w_params
#define T_copy       ::rapid::PointCloudSample_copy

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
