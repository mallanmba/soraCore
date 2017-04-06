
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryConfig.idl using "rtiddsgen".
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



#include "GeometryConfig.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *GeometryConfigTYPENAME = "rapid::ext::arc::GeometryConfig";

DDS_TypeCode* GeometryConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member GeometryConfig_g_tc_members[4]=
    {
        {
            (char *)"geometryId",/* Member name */
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
            (char *)"geometryName",/* Member name */
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
            (char *)"refFrame",/* Member name */
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
            (char *)"metaData",/* Member name */
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

    static DDS_TypeCode GeometryConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::GeometryConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        GeometryConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for GeometryConfig*/

    if (is_initialized) {
        return &GeometryConfig_g_tc;
    }


    GeometryConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    GeometryConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    GeometryConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    GeometryConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence16_get_typecode();

    GeometryConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &GeometryConfig_g_tc;
}


RTIBool GeometryConfig_initialize(
    GeometryConfig* sample) {
  return ::rapid::ext::arc::GeometryConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GeometryConfig_initialize_ex(
    GeometryConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::GeometryConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool GeometryConfig_initialize_w_params(
        GeometryConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
/** each distinct geometry must have a unique identifier */

    if (!RTICdrType_initLong(&sample->geometryId)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String128_initialize_w_params(&sample->geometryName,allocParams)) {
        return RTI_FALSE;
    }
            

/** reference frame for geometry - must be a valid FrameStore */

    if (!rapid::String32_initialize_w_params(&sample->refFrame,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_initialize_w_params(&sample->metaData,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void GeometryConfig_finalize(
    GeometryConfig* sample)
{
    ::rapid::ext::arc::GeometryConfig_finalize_ex(sample,RTI_TRUE);
}
        
void GeometryConfig_finalize_ex(
    GeometryConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::GeometryConfig_finalize_w_params(
        sample,&deallocParams);
}

void GeometryConfig_finalize_w_params(
        GeometryConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

/** each distinct geometry must have a unique identifier */


    rapid::String128_finalize_w_params(&sample->geometryName, deallocParams);
            

/** reference frame for geometry - must be a valid FrameStore */

    rapid::String32_finalize_w_params(&sample->refFrame, deallocParams);
            

    rapid::KeyTypeValueSequence16_finalize_w_params(&sample->metaData, deallocParams);
            

}

void GeometryConfig_finalize_optional_members(
    GeometryConfig* sample, RTIBool deletePointers)
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
             

/** each distinct geometry must have a unique identifier */


    rapid::String128_finalize_optional_members(&sample->geometryName, deallocParams->delete_pointers);
            

/** reference frame for geometry - must be a valid FrameStore */

    rapid::String32_finalize_optional_members(&sample->refFrame, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence16_finalize_optional_members(&sample->metaData, deallocParams->delete_pointers);
            

}

RTIBool GeometryConfig_copy(
    GeometryConfig* dst,
    const GeometryConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

/** each distinct geometry must have a unique identifier */

    if (!RTICdrType_copyLong(
        &dst->geometryId, &src->geometryId)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_copy(
        &dst->geometryName, &src->geometryName)) {
        return RTI_FALSE;
    }
            

/** reference frame for geometry - must be a valid FrameStore */

    if (!rapid::String32_copy(
        &dst->refFrame, &src->refFrame)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_copy(
        &dst->metaData, &src->metaData)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GeometryConfig' sequence class.
 */
#define T GeometryConfig
#define TSeq GeometryConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::GeometryConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::GeometryConfig_finalize_w_params
#define T_copy       ::rapid::ext::arc::GeometryConfig_copy

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
