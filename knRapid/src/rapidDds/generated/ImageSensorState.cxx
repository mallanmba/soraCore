
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorState.idl using "rtiddsgen".
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



#include "ImageSensorState.h"


namespace rapid{

/**

 * Holds status information for an image sensor - typically a camera, but could be a laser scanner, gpr, or any

 * sensor that can pack a data sample into a 2D array

 */
/* ========================================================================= */
const char *ImageSensorStateTYPENAME = "rapid::ImageSensorState";

DDS_TypeCode* ImageSensorState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ImageSensorState_g_tc_members[1]=
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
        }
    };

    static DDS_TypeCode ImageSensorState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ImageSensorState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        ImageSensorState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for ImageSensorState*/

    if (is_initialized) {
        return &ImageSensorState_g_tc;
    }


    ImageSensorState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ImageMetadata_get_typecode();

    ImageSensorState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &ImageSensorState_g_tc;
}


RTIBool ImageSensorState_initialize(
    ImageSensorState* sample) {
  return ::rapid::ImageSensorState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ImageSensorState_initialize_ex(
    ImageSensorState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ImageSensorState_initialize_w_params(
        sample,&allocParams);
}

RTIBool ImageSensorState_initialize_w_params(
        ImageSensorState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ImageMetadata_initialize_w_params(&sample->meta,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ImageSensorState_finalize(
    ImageSensorState* sample)
{
    ::rapid::ImageSensorState_finalize_ex(sample,RTI_TRUE);
}
        
void ImageSensorState_finalize_ex(
    ImageSensorState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ImageSensorState_finalize_w_params(
        sample,&deallocParams);
}

void ImageSensorState_finalize_w_params(
        ImageSensorState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ImageMetadata_finalize_w_params(&sample->meta, deallocParams);
            

}

void ImageSensorState_finalize_optional_members(
    ImageSensorState* sample, RTIBool deletePointers)
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
            

}

RTIBool ImageSensorState_copy(
    ImageSensorState* dst,
    const ImageSensorState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ImageMetadata_copy(
        &dst->meta, &src->meta)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ImageSensorState' sequence class.
 */
#define T ImageSensorState
#define TSeq ImageSensorStateSeq
#define T_initialize_w_params ::rapid::ImageSensorState_initialize_w_params
#define T_finalize_w_params   ::rapid::ImageSensorState_finalize_w_params
#define T_copy       ::rapid::ImageSensorState_copy

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
