
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageMetadata.idl using "rtiddsgen".
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



#include "ImageMetadata.h"


namespace rapid{
/* ========================================================================= */
const char *ImageMetadataTYPENAME = "rapid::ImageMetadata";

DDS_TypeCode* ImageMetadata_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ImageMetadata_g_tc_members[8]=
    {
        {
            (char *)"sensorName",/* Member name */
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
            (char *)"sensorType",/* Member name */
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
        },
        {
            (char *)"offset",/* Member name */
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
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"width",/* Member name */
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
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"height",/* Member name */
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
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"rangeSettings",/* Member name */
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
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"optionSettings",/* Member name */
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
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"extras",/* Member name */
            {
                7,/* Representation ID */
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

    static DDS_TypeCode ImageMetadata_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ImageMetadata", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of members */
        ImageMetadata_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ImageMetadata*/

    if (is_initialized) {
        return &ImageMetadata_g_tc;
    }


    ImageMetadata_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ImageMetadata_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ImageMetadata_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    ImageMetadata_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    ImageMetadata_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    ImageMetadata_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::NamedFloatRangeValueSequence16_get_typecode();
    ImageMetadata_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::NamedOptionSetValueSequence16_get_typecode();
    ImageMetadata_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence16_get_typecode();

    is_initialized = RTI_TRUE;

    return &ImageMetadata_g_tc;
}


RTIBool ImageMetadata_initialize(
    ImageMetadata* sample) {
  return ::rapid::ImageMetadata_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ImageMetadata_initialize_ex(
    ImageMetadata* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ImageMetadata_initialize_w_params(
        sample,&allocParams);
}

RTIBool ImageMetadata_initialize_w_params(
        ImageMetadata* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->sensorName,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_initialize_w_params(&sample->sensorType,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_initialize_w_params(&sample->offset,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->width)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->height)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::NamedFloatRangeValueSequence16_initialize_w_params(&sample->rangeSettings,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::NamedOptionSetValueSequence16_initialize_w_params(&sample->optionSettings,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_initialize_w_params(&sample->extras,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ImageMetadata_finalize(
    ImageMetadata* sample)
{
    ::rapid::ImageMetadata_finalize_ex(sample,RTI_TRUE);
}
        
void ImageMetadata_finalize_ex(
    ImageMetadata* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ImageMetadata_finalize_w_params(
        sample,&deallocParams);
}

void ImageMetadata_finalize_w_params(
        ImageMetadata* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->sensorName, deallocParams);
            

    rapid::String32_finalize_w_params(&sample->sensorType, deallocParams);
            

    rapid::Transform3D_finalize_w_params(&sample->offset, deallocParams);
            



    rapid::NamedFloatRangeValueSequence16_finalize_w_params(&sample->rangeSettings, deallocParams);
            

    rapid::NamedOptionSetValueSequence16_finalize_w_params(&sample->optionSettings, deallocParams);
            

    rapid::KeyTypeValueSequence16_finalize_w_params(&sample->extras, deallocParams);
            

}

void ImageMetadata_finalize_optional_members(
    ImageMetadata* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->sensorName, deallocParams->delete_pointers);
            

    rapid::String32_finalize_optional_members(&sample->sensorType, deallocParams->delete_pointers);
            

    rapid::Transform3D_finalize_optional_members(&sample->offset, deallocParams->delete_pointers);
            



    rapid::NamedFloatRangeValueSequence16_finalize_optional_members(&sample->rangeSettings, deallocParams->delete_pointers);
            

    rapid::NamedOptionSetValueSequence16_finalize_optional_members(&sample->optionSettings, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence16_finalize_optional_members(&sample->extras, deallocParams->delete_pointers);
            

}

RTIBool ImageMetadata_copy(
    ImageMetadata* dst,
    const ImageMetadata* src)
{

    if (!rapid::String32_copy(
        &dst->sensorName, &src->sensorName)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->sensorType, &src->sensorType)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Transform3D_copy(
        &dst->offset, &src->offset)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->width, &src->width)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->height, &src->height)) {
        return RTI_FALSE;
    }
            

    if (!rapid::NamedFloatRangeValueSequence16_copy(
        &dst->rangeSettings, &src->rangeSettings)) {
        return RTI_FALSE;
    }
            

    if (!rapid::NamedOptionSetValueSequence16_copy(
        &dst->optionSettings, &src->optionSettings)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_copy(
        &dst->extras, &src->extras)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ImageMetadata' sequence class.
 */
#define T ImageMetadata
#define TSeq ImageMetadataSeq
#define T_initialize_w_params ::rapid::ImageMetadata_initialize_w_params
#define T_finalize_w_params   ::rapid::ImageMetadata_finalize_w_params
#define T_copy       ::rapid::ImageMetadata_copy

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
