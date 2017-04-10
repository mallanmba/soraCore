
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryAppearanceState.idl using "rtiddsgen".
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



#include "GeometryAppearanceState.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *GeometryAppearanceStateTYPENAME = "rapid::ext::arc::GeometryAppearanceState";

DDS_TypeCode* GeometryAppearanceState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member GeometryAppearanceState_g_tc_members[9]=
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
            (char *)"hasMaterial",/* Member name */
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
            (char *)"diffuse",/* Member name */
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
            (char *)"ambient",/* Member name */
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
            (char *)"specular",/* Member name */
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
            (char *)"emissive",/* Member name */
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
            (char *)"shininess",/* Member name */
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
            (char *)"hasTexture",/* Member name */
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
            (char *)"texImage0Url",/* Member name */
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

    static DDS_TypeCode GeometryAppearanceState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::GeometryAppearanceState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        9, /* Number of members */
        GeometryAppearanceState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for GeometryAppearanceState*/

    if (is_initialized) {
        return &GeometryAppearanceState_g_tc;
    }


    GeometryAppearanceState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    GeometryAppearanceState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    GeometryAppearanceState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::Color4f_get_typecode();
    GeometryAppearanceState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::Color4f_get_typecode();
    GeometryAppearanceState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::Color4f_get_typecode();
    GeometryAppearanceState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::Color4f_get_typecode();
    GeometryAppearanceState_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    GeometryAppearanceState_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    GeometryAppearanceState_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();

    GeometryAppearanceState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &GeometryAppearanceState_g_tc;
}


RTIBool GeometryAppearanceState_initialize(
    GeometryAppearanceState* sample) {
  return ::rapid::ext::arc::GeometryAppearanceState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GeometryAppearanceState_initialize_ex(
    GeometryAppearanceState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::GeometryAppearanceState_initialize_w_params(
        sample,&allocParams);
}

RTIBool GeometryAppearanceState_initialize_w_params(
        GeometryAppearanceState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initLong(&sample->geometryId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->hasMaterial)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::Color4f_initialize_w_params(&sample->diffuse,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Color4f_initialize_w_params(&sample->ambient,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Color4f_initialize_w_params(&sample->specular,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Color4f_initialize_w_params(&sample->emissive,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initFloat(&sample->shininess)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->hasTexture)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String128_initialize_w_params(&sample->texImage0Url,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void GeometryAppearanceState_finalize(
    GeometryAppearanceState* sample)
{
    ::rapid::ext::arc::GeometryAppearanceState_finalize_ex(sample,RTI_TRUE);
}
        
void GeometryAppearanceState_finalize_ex(
    GeometryAppearanceState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::GeometryAppearanceState_finalize_w_params(
        sample,&deallocParams);
}

void GeometryAppearanceState_finalize_w_params(
        GeometryAppearanceState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);



    rapid::Color4f_finalize_w_params(&sample->diffuse, deallocParams);
            

    rapid::Color4f_finalize_w_params(&sample->ambient, deallocParams);
            

    rapid::Color4f_finalize_w_params(&sample->specular, deallocParams);
            

    rapid::Color4f_finalize_w_params(&sample->emissive, deallocParams);
            



    rapid::String128_finalize_w_params(&sample->texImage0Url, deallocParams);
            

}

void GeometryAppearanceState_finalize_optional_members(
    GeometryAppearanceState* sample, RTIBool deletePointers)
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
             



    rapid::Color4f_finalize_optional_members(&sample->diffuse, deallocParams->delete_pointers);
            

    rapid::Color4f_finalize_optional_members(&sample->ambient, deallocParams->delete_pointers);
            

    rapid::Color4f_finalize_optional_members(&sample->specular, deallocParams->delete_pointers);
            

    rapid::Color4f_finalize_optional_members(&sample->emissive, deallocParams->delete_pointers);
            



    rapid::String128_finalize_optional_members(&sample->texImage0Url, deallocParams->delete_pointers);
            

}

RTIBool GeometryAppearanceState_copy(
    GeometryAppearanceState* dst,
    const GeometryAppearanceState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong(
        &dst->geometryId, &src->geometryId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->hasMaterial, &src->hasMaterial)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Color4f_copy(
        &dst->diffuse, &src->diffuse)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Color4f_copy(
        &dst->ambient, &src->ambient)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Color4f_copy(
        &dst->specular, &src->specular)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Color4f_copy(
        &dst->emissive, &src->emissive)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->shininess, &src->shininess)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->hasTexture, &src->hasTexture)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_copy(
        &dst->texImage0Url, &src->texImage0Url)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GeometryAppearanceState' sequence class.
 */
#define T GeometryAppearanceState
#define TSeq GeometryAppearanceStateSeq
#define T_initialize_w_params ::rapid::ext::arc::GeometryAppearanceState_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::GeometryAppearanceState_finalize_w_params
#define T_copy       ::rapid::ext::arc::GeometryAppearanceState_copy

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
