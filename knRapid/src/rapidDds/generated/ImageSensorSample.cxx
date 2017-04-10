
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorSample.idl using "rtiddsgen".
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



#include "ImageSensorSample.h"


namespace rapid{
/* ========================================================================= */

DDS_TypeCode* ImageData_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ImageData_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1048576,NULL);

    static DDS_TypeCode ImageData_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ImageData", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ImageData */

    if (is_initialized) {
        return &ImageData_g_tc;
    }

    ImageData_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    ImageData_g_tc._data._typeCode = (RTICdrTypeCode *)&ImageData_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ImageData_g_tc;
}


RTIBool ImageData_initialize(
    ImageData* sample)
{
    return ::rapid::ImageData_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ImageData_initialize_ex(
    ImageData* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ImageData_initialize_w_params(
        sample,&allocParams);
}

RTIBool ImageData_initialize_w_params(
        ImageData* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        DDS_OctetSeq_initialize(sample);
        if (!DDS_OctetSeq_set_maximum(sample,
                (1048576))) {
            return RTI_FALSE;
        }
    } else {
        DDS_OctetSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void ImageData_finalize(
    ImageData* sample)
{
    ::rapid::ImageData_finalize_ex(sample,RTI_TRUE);
}
 
void ImageData_finalize_ex(
    ImageData* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ImageData_finalize_w_params(
        sample,&deallocParams);
}
           
void ImageData_finalize_w_params(
    ImageData* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    DDS_OctetSeq_finalize(sample);
            

}

void ImageData_finalize_optional_members(
    ImageData* sample, RTIBool deletePointers)
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

RTIBool ImageData_copy(
    ImageData* dst,
    const ImageData* src)
{

    if (!DDS_OctetSeq_copy(dst,
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
 * Configure and implement 'ImageData' sequence class.
 */
#define T            ImageData
#define TSeq         ImageDataSeq
#define T_initialize_w_params ::rapid::ImageData_initialize_w_params
#define T_finalize_w_params   ::rapid::ImageData_finalize_w_params
#define T_copy       ::rapid::ImageData_copy


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
const char *ImageSensorSampleTYPENAME = "rapid::ImageSensorSample";

DDS_TypeCode* ImageSensorSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ImageSensorSample_g_tc_members[3]=
    {
        {
            (char *)"meta",/* Member name */
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
            (char *)"mimeType",/* Member name */
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
            (char *)"data",/* Member name */
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
        }
    };

    static DDS_TypeCode ImageSensorSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ImageSensorSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        ImageSensorSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for ImageSensorSample*/

    if (is_initialized) {
        return &ImageSensorSample_g_tc;
    }


    ImageSensorSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ImageMetadata_get_typecode();
    ImageSensorSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ImageSensorSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ImageData_get_typecode();

    ImageSensorSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &ImageSensorSample_g_tc;
}


RTIBool ImageSensorSample_initialize(
    ImageSensorSample* sample) {
  return ::rapid::ImageSensorSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ImageSensorSample_initialize_ex(
    ImageSensorSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ImageSensorSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool ImageSensorSample_initialize_w_params(
        ImageSensorSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ImageMetadata_initialize_w_params(&sample->meta,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->mimeType,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ImageData_initialize_w_params(&sample->data,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ImageSensorSample_finalize(
    ImageSensorSample* sample)
{
    ::rapid::ImageSensorSample_finalize_ex(sample,RTI_TRUE);
}
        
void ImageSensorSample_finalize_ex(
    ImageSensorSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ImageSensorSample_finalize_w_params(
        sample,&deallocParams);
}

void ImageSensorSample_finalize_w_params(
        ImageSensorSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ImageMetadata_finalize_w_params(&sample->meta, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->mimeType, deallocParams);
            

    rapid::ImageData_finalize_w_params(&sample->data, deallocParams);
            

}

void ImageSensorSample_finalize_optional_members(
    ImageSensorSample* sample, RTIBool deletePointers)
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
             

    rapid::ImageMetadata_finalize_optional_members(&sample->meta, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->mimeType, deallocParams->delete_pointers);
            

    rapid::ImageData_finalize_optional_members(&sample->data, deallocParams->delete_pointers);
            

}

RTIBool ImageSensorSample_copy(
    ImageSensorSample* dst,
    const ImageSensorSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ImageMetadata_copy(
        &dst->meta, &src->meta)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->mimeType, &src->mimeType)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ImageData_copy(
        &dst->data, &src->data)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ImageSensorSample' sequence class.
 */
#define T ImageSensorSample
#define TSeq ImageSensorSampleSeq
#define T_initialize_w_params ::rapid::ImageSensorSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ImageSensorSample_finalize_w_params
#define T_copy       ::rapid::ImageSensorSample_copy

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
