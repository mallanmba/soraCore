
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RosMarkerArraySample.idl using "rtiddsgen".
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



#include "RosMarkerArraySample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *ShapeTypeTYPENAME = "rapid::ext::arc::ShapeType";

DDS_TypeCode* ShapeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ShapeType_g_tc_members[12] =
    {
        {
            (char *)"ARROW",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ARROW, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CUBE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CUBE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SPHERE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SPHERE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CYLINDER",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CYLINDER, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"LINE_STRIP",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LINE_STRIP, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"LINE_LIST",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LINE_LIST, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CUBE_LIST",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CUBE_LIST, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SPHERE_LIST",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SPHERE_LIST, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"POINTS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            POINTS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"TEXT_VIEW_FACING",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            TEXT_VIEW_FACING, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MESH_RESOURCE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MESH_RESOURCE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"TRIANGLE_LIST",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            TRIANGLE_LIST, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ShapeType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::ShapeType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        12, /* Number of enumerators */
        ShapeType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ShapeType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ShapeType_g_tc;
}
 

RTIBool ShapeType_initialize(
    ShapeType* sample)
{
    *sample = ARROW;
    return RTI_TRUE;
}
        
RTIBool ShapeType_initialize_ex(
    ShapeType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = ARROW;
    return RTI_TRUE;
}

RTIBool ShapeType_initialize_w_params(
        ShapeType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = ARROW;
    return RTI_TRUE;
}

void ShapeType_finalize(
    ShapeType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ShapeType_finalize_ex(
    ShapeType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ShapeType_finalize_w_params(
        ShapeType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ShapeType_copy(
    ShapeType* dst,
    const ShapeType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ShapeType_getValues(ShapeTypeSeq * values) 
    
{
    int i = 0;
    ShapeType * buffer;


    if (!values->maximum(12)) {
        return RTI_FALSE;
    }

    if (!values->length(12)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = ARROW;
    i++;
    
    buffer[i] = CUBE;
    i++;
    
    buffer[i] = SPHERE;
    i++;
    
    buffer[i] = CYLINDER;
    i++;
    
    buffer[i] = LINE_STRIP;
    i++;
    
    buffer[i] = LINE_LIST;
    i++;
    
    buffer[i] = CUBE_LIST;
    i++;
    
    buffer[i] = SPHERE_LIST;
    i++;
    
    buffer[i] = POINTS;
    i++;
    
    buffer[i] = TEXT_VIEW_FACING;
    i++;
    
    buffer[i] = MESH_RESOURCE;
    i++;
    
    buffer[i] = TRIANGLE_LIST;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ShapeType' sequence class.
 */
#define T ShapeType
#define TSeq ShapeTypeSeq
#define T_initialize_w_params ShapeType_initialize_w_params
#define T_finalize_w_params   ShapeType_finalize_w_params
#define T_copy       ShapeType_copy

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
const char *ActionTYPENAME = "rapid::ext::arc::Action";

DDS_TypeCode* Action_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member Action_g_tc_members[3] =
    {
        {
            (char *)"ADD",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ADD, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"DELETE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            DELETE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"DELETEALL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            DELETEALL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Action_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::Action", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        Action_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &Action_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &Action_g_tc;
}
 

RTIBool Action_initialize(
    Action* sample)
{
    *sample = ADD;
    return RTI_TRUE;
}
        
RTIBool Action_initialize_ex(
    Action* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = ADD;
    return RTI_TRUE;
}

RTIBool Action_initialize_w_params(
        Action* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = ADD;
    return RTI_TRUE;
}

void Action_finalize(
    Action* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void Action_finalize_ex(
    Action* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void Action_finalize_w_params(
        Action* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool Action_copy(
    Action* dst,
    const Action* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool Action_getValues(ActionSeq * values) 
    
{
    int i = 0;
    Action * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = ADD;
    i++;
    
    buffer[i] = DELETE;
    i++;
    
    buffer[i] = DELETEALL;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Action' sequence class.
 */
#define T Action
#define TSeq ActionSeq
#define T_initialize_w_params Action_initialize_w_params
#define T_finalize_w_params   Action_finalize_w_params
#define T_copy       Action_copy

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

DDS_TypeCode* PointSequence1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode PointSequence1K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1024,NULL);

    static DDS_TypeCode PointSequence1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::PointSequence1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for PointSequence1K */

    if (is_initialized) {
        return &PointSequence1K_g_tc;
    }

    PointSequence1K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::Vec3f_get_typecode();
    PointSequence1K_g_tc._data._typeCode = (RTICdrTypeCode *)&PointSequence1K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &PointSequence1K_g_tc;
}


RTIBool PointSequence1K_initialize(
    PointSequence1K* sample)
{
    return ::rapid::ext::arc::PointSequence1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool PointSequence1K_initialize_ex(
    PointSequence1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::PointSequence1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool PointSequence1K_initialize_w_params(
        PointSequence1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::Vec3fSeq_initialize(sample);
        rapid::Vec3fSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::Vec3fSeq_set_maximum(sample,
                                           (1024))) {
            return RTI_FALSE;
        }
    } else {
        rapid::Vec3fSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void PointSequence1K_finalize(
    PointSequence1K* sample)
{
    ::rapid::ext::arc::PointSequence1K_finalize_ex(sample,RTI_TRUE);
}
 
void PointSequence1K_finalize_ex(
    PointSequence1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::PointSequence1K_finalize_w_params(
        sample,&deallocParams);
}
           
void PointSequence1K_finalize_w_params(
    PointSequence1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::Vec3fSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::Vec3fSeq_finalize(sample);
            

}

void PointSequence1K_finalize_optional_members(
    PointSequence1K* sample, RTIBool deletePointers)
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
        length = rapid::Vec3fSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::Vec3f_finalize_optional_members(
                rapid::Vec3fSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool PointSequence1K_copy(
    PointSequence1K* dst,
    const PointSequence1K* src)
{

    if (!rapid::Vec3fSeq_copy(dst,
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
 * Configure and implement 'PointSequence1K' sequence class.
 */
#define T            PointSequence1K
#define TSeq         PointSequence1KSeq
#define T_initialize_w_params ::rapid::ext::arc::PointSequence1K_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::PointSequence1K_finalize_w_params
#define T_copy       ::rapid::ext::arc::PointSequence1K_copy


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

DDS_TypeCode* ColorSequence1K_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ColorSequence1K_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(1024,NULL);

    static DDS_TypeCode ColorSequence1K_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::ColorSequence1K", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ColorSequence1K */

    if (is_initialized) {
        return &ColorSequence1K_g_tc;
    }

    ColorSequence1K_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::Color4f_get_typecode();
    ColorSequence1K_g_tc._data._typeCode = (RTICdrTypeCode *)&ColorSequence1K_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ColorSequence1K_g_tc;
}


RTIBool ColorSequence1K_initialize(
    ColorSequence1K* sample)
{
    return ::rapid::ext::arc::ColorSequence1K_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ColorSequence1K_initialize_ex(
    ColorSequence1K* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::ColorSequence1K_initialize_w_params(
        sample,&allocParams);
}

RTIBool ColorSequence1K_initialize_w_params(
        ColorSequence1K* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::Color4fSeq_initialize(sample);
        rapid::Color4fSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::Color4fSeq_set_maximum(sample,
                                           (1024))) {
            return RTI_FALSE;
        }
    } else {
        rapid::Color4fSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ColorSequence1K_finalize(
    ColorSequence1K* sample)
{
    ::rapid::ext::arc::ColorSequence1K_finalize_ex(sample,RTI_TRUE);
}
 
void ColorSequence1K_finalize_ex(
    ColorSequence1K* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::ColorSequence1K_finalize_w_params(
        sample,&deallocParams);
}
           
void ColorSequence1K_finalize_w_params(
    ColorSequence1K* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::Color4fSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::Color4fSeq_finalize(sample);
            

}

void ColorSequence1K_finalize_optional_members(
    ColorSequence1K* sample, RTIBool deletePointers)
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
        length = rapid::Color4fSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::Color4f_finalize_optional_members(
                rapid::Color4fSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ColorSequence1K_copy(
    ColorSequence1K* dst,
    const ColorSequence1K* src)
{

    if (!rapid::Color4fSeq_copy(dst,
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
 * Configure and implement 'ColorSequence1K' sequence class.
 */
#define T            ColorSequence1K
#define TSeq         ColorSequence1KSeq
#define T_initialize_w_params ::rapid::ext::arc::ColorSequence1K_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::ColorSequence1K_finalize_w_params
#define T_copy       ::rapid::ext::arc::ColorSequence1K_copy


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
const char *MarkerTYPENAME = "rapid::ext::arc::Marker";

DDS_TypeCode* Marker_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Marker_g_tc_members[14]=
    {
        {
            (char *)"ns",/* Member name */
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
            (char *)"id",/* Member name */
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
            (char *)"type",/* Member name */
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
            (char *)"action",/* Member name */
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
            (char *)"pose",/* Member name */
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
            (char *)"scale",/* Member name */
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
            (char *)"color",/* Member name */
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
            (char *)"lifetime",/* Member name */
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
        },
        {
            (char *)"frame_locked",/* Member name */
            {
                8,/* Representation ID */
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
            (char *)"points",/* Member name */
            {
                9,/* Representation ID */
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
            (char *)"colors",/* Member name */
            {
                10,/* Representation ID */
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
            (char *)"text",/* Member name */
            {
                11,/* Representation ID */
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
            (char *)"mesh_resource",/* Member name */
            {
                12,/* Representation ID */
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
            (char *)"mesh_use_embedded_materials",/* Member name */
            {
                13,/* Representation ID */
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

    static DDS_TypeCode Marker_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::Marker", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        14, /* Number of members */
        Marker_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Marker*/

    if (is_initialized) {
        return &Marker_g_tc;
    }


    Marker_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Marker_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Marker_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::ShapeType_get_typecode();
    Marker_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::Action_get_typecode();
    Marker_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    Marker_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3f_get_typecode();
    Marker_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)rapid::Color4f_get_typecode();
    Marker_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Marker_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    Marker_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::PointSequence1K_get_typecode();
    Marker_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::ColorSequence1K_get_typecode();
    Marker_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Marker_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Marker_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &Marker_g_tc;
}


RTIBool Marker_initialize(
    Marker* sample) {
  return ::rapid::ext::arc::Marker_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Marker_initialize_ex(
    Marker* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::Marker_initialize_w_params(
        sample,&allocParams);
}

RTIBool Marker_initialize_w_params(
        Marker* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

/** Namespace to place this object in... used in conjunction with id to create a unique name for the object */

    if (!rapid::String32_initialize_w_params(&sample->ns,allocParams)) {
        return RTI_FALSE;
    }
            

/** object ID useful in conjunction with the namespace for manipulating and deleting the object later */

    if (!RTICdrType_initLong(&sample->id)) {
        return RTI_FALSE;
    }                
            

/** Type of object */

    if (!rapid::ext::arc::ShapeType_initialize_w_params(&sample->type,allocParams)) {
        return RTI_FALSE;
    }
            

/** 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects */

    if (!rapid::ext::arc::Action_initialize_w_params(&sample->action,allocParams)) {
        return RTI_FALSE;
    }
            

/** Pose of the object */

    if (!rapid::Transform3D_initialize_w_params(&sample->pose,allocParams)) {
        return RTI_FALSE;
    }
            

/** Scale of the object 1,1,1 means default (usually 1 meter square) */

    if (!rapid::Vec3f_initialize_w_params(&sample->scale,allocParams)) {
        return RTI_FALSE;
    }
            

/** RGBA color [0.0-1.0] */

    if (!rapid::Color4f_initialize_w_params(&sample->color,allocParams)) {
        return RTI_FALSE;
    }
            

/** NS How long (in nanoseconds) the object should last before being automatically deleted.  0 means forever */

    if (!RTICdrType_initLongLong(&sample->lifetime)) {
        return RTI_FALSE;
    }                
            

/** If this marker should be frame-locked, i.e. retransformed into its frame every timestep */

    if (!RTICdrType_initBoolean(&sample->frame_locked)) {
        return RTI_FALSE;
    }                
            

/** Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...) */

    if (!rapid::ext::arc::PointSequence1K_initialize_w_params(&sample->points,allocParams)) {
        return RTI_FALSE;
    }
            



    if (!rapid::ext::arc::ColorSequence1K_initialize_w_params(&sample->colors,allocParams)) {
        return RTI_FALSE;
    }
            

/**  NOTE: only used for text markers */

    if (!rapid::String32_initialize_w_params(&sample->text,allocParams)) {
        return RTI_FALSE;
    }
            

/**  NOTE: only used for MESH_RESOURCE markers */

    if (!rapid::String32_initialize_w_params(&sample->mesh_resource,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initBoolean(&sample->mesh_use_embedded_materials)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Marker_finalize(
    Marker* sample)
{
    ::rapid::ext::arc::Marker_finalize_ex(sample,RTI_TRUE);
}
        
void Marker_finalize_ex(
    Marker* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::Marker_finalize_w_params(
        sample,&deallocParams);
}

void Marker_finalize_w_params(
        Marker* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


/** Namespace to place this object in... used in conjunction with id to create a unique name for the object */

    rapid::String32_finalize_w_params(&sample->ns, deallocParams);
            

/** object ID useful in conjunction with the namespace for manipulating and deleting the object later */


/** Type of object */

    rapid::ext::arc::ShapeType_finalize_w_params(&sample->type, deallocParams);
            

/** 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects */

    rapid::ext::arc::Action_finalize_w_params(&sample->action, deallocParams);
            

/** Pose of the object */

    rapid::Transform3D_finalize_w_params(&sample->pose, deallocParams);
            

/** Scale of the object 1,1,1 means default (usually 1 meter square) */

    rapid::Vec3f_finalize_w_params(&sample->scale, deallocParams);
            

/** RGBA color [0.0-1.0] */

    rapid::Color4f_finalize_w_params(&sample->color, deallocParams);
            

/** NS How long (in nanoseconds) the object should last before being automatically deleted.  0 means forever */


/** If this marker should be frame-locked, i.e. retransformed into its frame every timestep */


/** Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...) */

    rapid::ext::arc::PointSequence1K_finalize_w_params(&sample->points, deallocParams);
            



    rapid::ext::arc::ColorSequence1K_finalize_w_params(&sample->colors, deallocParams);
            

/**  NOTE: only used for text markers */

    rapid::String32_finalize_w_params(&sample->text, deallocParams);
            

/**  NOTE: only used for MESH_RESOURCE markers */

    rapid::String32_finalize_w_params(&sample->mesh_resource, deallocParams);
            


}

void Marker_finalize_optional_members(
    Marker* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

/** Namespace to place this object in... used in conjunction with id to create a unique name for the object */

    rapid::String32_finalize_optional_members(&sample->ns, deallocParams->delete_pointers);
            

/** object ID useful in conjunction with the namespace for manipulating and deleting the object later */


/** Type of object */

    rapid::ext::arc::ShapeType_finalize_w_params(&sample->type, deallocParams);
            

/** 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects */

    rapid::ext::arc::Action_finalize_w_params(&sample->action, deallocParams);
            

/** Pose of the object */

    rapid::Transform3D_finalize_optional_members(&sample->pose, deallocParams->delete_pointers);
            

/** Scale of the object 1,1,1 means default (usually 1 meter square) */

    rapid::Vec3f_finalize_optional_members(&sample->scale, deallocParams->delete_pointers);
            

/** RGBA color [0.0-1.0] */

    rapid::Color4f_finalize_optional_members(&sample->color, deallocParams->delete_pointers);
            

/** NS How long (in nanoseconds) the object should last before being automatically deleted.  0 means forever */


/** If this marker should be frame-locked, i.e. retransformed into its frame every timestep */


/** Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...) */

    rapid::ext::arc::PointSequence1K_finalize_optional_members(&sample->points, deallocParams->delete_pointers);
            



    rapid::ext::arc::ColorSequence1K_finalize_optional_members(&sample->colors, deallocParams->delete_pointers);
            

/**  NOTE: only used for text markers */

    rapid::String32_finalize_optional_members(&sample->text, deallocParams->delete_pointers);
            

/**  NOTE: only used for MESH_RESOURCE markers */

    rapid::String32_finalize_optional_members(&sample->mesh_resource, deallocParams->delete_pointers);
            


}

RTIBool Marker_copy(
    Marker* dst,
    const Marker* src)
{

/** Namespace to place this object in... used in conjunction with id to create a unique name for the object */

    if (!rapid::String32_copy(
        &dst->ns, &src->ns)) {
        return RTI_FALSE;
    }
            

/** object ID useful in conjunction with the namespace for manipulating and deleting the object later */

    if (!RTICdrType_copyLong(
        &dst->id, &src->id)) {
        return RTI_FALSE;
    }
            

/** Type of object */

    if (!rapid::ext::arc::ShapeType_copy(
        &dst->type, &src->type)) {
        return RTI_FALSE;
    }
            

/** 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects */

    if (!rapid::ext::arc::Action_copy(
        &dst->action, &src->action)) {
        return RTI_FALSE;
    }
            

/** Pose of the object */

    if (!rapid::Transform3D_copy(
        &dst->pose, &src->pose)) {
        return RTI_FALSE;
    }
            

/** Scale of the object 1,1,1 means default (usually 1 meter square) */

    if (!rapid::Vec3f_copy(
        &dst->scale, &src->scale)) {
        return RTI_FALSE;
    }
            

/** RGBA color [0.0-1.0] */

    if (!rapid::Color4f_copy(
        &dst->color, &src->color)) {
        return RTI_FALSE;
    }
            

/** NS How long (in nanoseconds) the object should last before being automatically deleted.  0 means forever */

    if (!RTICdrType_copyLongLong(
        &dst->lifetime, &src->lifetime)) {
        return RTI_FALSE;
    }
            

/** If this marker should be frame-locked, i.e. retransformed into its frame every timestep */

    if (!RTICdrType_copyBoolean(
        &dst->frame_locked, &src->frame_locked)) {
        return RTI_FALSE;
    }
            

/** Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...) */

    if (!rapid::ext::arc::PointSequence1K_copy(
        &dst->points, &src->points)) {
        return RTI_FALSE;
    }
            



    if (!rapid::ext::arc::ColorSequence1K_copy(
        &dst->colors, &src->colors)) {
        return RTI_FALSE;
    }
            

/**  NOTE: only used for text markers */

    if (!rapid::String32_copy(
        &dst->text, &src->text)) {
        return RTI_FALSE;
    }
            

/**  NOTE: only used for MESH_RESOURCE markers */

    if (!rapid::String32_copy(
        &dst->mesh_resource, &src->mesh_resource)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->mesh_use_embedded_materials, &src->mesh_use_embedded_materials)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Marker' sequence class.
 */
#define T Marker
#define TSeq MarkerSeq
#define T_initialize_w_params ::rapid::ext::arc::Marker_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::Marker_finalize_w_params
#define T_copy       ::rapid::ext::arc::Marker_copy

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

DDS_TypeCode* MarkerArraySequence8_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode MarkerArraySequence8_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(8,NULL);

    static DDS_TypeCode MarkerArraySequence8_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::MarkerArraySequence8", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MarkerArraySequence8 */

    if (is_initialized) {
        return &MarkerArraySequence8_g_tc;
    }

    MarkerArraySequence8_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::Marker_get_typecode();
    MarkerArraySequence8_g_tc._data._typeCode = (RTICdrTypeCode *)&MarkerArraySequence8_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &MarkerArraySequence8_g_tc;
}


RTIBool MarkerArraySequence8_initialize(
    MarkerArraySequence8* sample)
{
    return ::rapid::ext::arc::MarkerArraySequence8_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool MarkerArraySequence8_initialize_ex(
    MarkerArraySequence8* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::MarkerArraySequence8_initialize_w_params(
        sample,&allocParams);
}

RTIBool MarkerArraySequence8_initialize_w_params(
        MarkerArraySequence8* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::MarkerSeq_initialize(sample);
        rapid::ext::arc::MarkerSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::MarkerSeq_set_maximum(sample,
                                           (8))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::MarkerSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void MarkerArraySequence8_finalize(
    MarkerArraySequence8* sample)
{
    ::rapid::ext::arc::MarkerArraySequence8_finalize_ex(sample,RTI_TRUE);
}
 
void MarkerArraySequence8_finalize_ex(
    MarkerArraySequence8* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::MarkerArraySequence8_finalize_w_params(
        sample,&deallocParams);
}
           
void MarkerArraySequence8_finalize_w_params(
    MarkerArraySequence8* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::MarkerSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::MarkerSeq_finalize(sample);
            

}

void MarkerArraySequence8_finalize_optional_members(
    MarkerArraySequence8* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::MarkerSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::Marker_finalize_optional_members(
                rapid::ext::arc::MarkerSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool MarkerArraySequence8_copy(
    MarkerArraySequence8* dst,
    const MarkerArraySequence8* src)
{

    if (!rapid::ext::arc::MarkerSeq_copy(dst,
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
 * Configure and implement 'MarkerArraySequence8' sequence class.
 */
#define T            MarkerArraySequence8
#define TSeq         MarkerArraySequence8Seq
#define T_initialize_w_params ::rapid::ext::arc::MarkerArraySequence8_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::MarkerArraySequence8_finalize_w_params
#define T_copy       ::rapid::ext::arc::MarkerArraySequence8_copy


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
const char *RosMarkerArraySampleTYPENAME = "rapid::ext::arc::RosMarkerArraySample";

DDS_TypeCode* RosMarkerArraySample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member RosMarkerArraySample_g_tc_members[1]=
    {
        {
            (char *)"marker_array",/* Member name */
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

    static DDS_TypeCode RosMarkerArraySample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::RosMarkerArraySample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        RosMarkerArraySample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for RosMarkerArraySample*/

    if (is_initialized) {
        return &RosMarkerArraySample_g_tc;
    }


    RosMarkerArraySample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::MarkerArraySequence8_get_typecode();

    RosMarkerArraySample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &RosMarkerArraySample_g_tc;
}


RTIBool RosMarkerArraySample_initialize(
    RosMarkerArraySample* sample) {
  return ::rapid::ext::arc::RosMarkerArraySample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RosMarkerArraySample_initialize_ex(
    RosMarkerArraySample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::RosMarkerArraySample_initialize_w_params(
        sample,&allocParams);
}

RTIBool RosMarkerArraySample_initialize_w_params(
        RosMarkerArraySample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::arc::MarkerArraySequence8_initialize_w_params(&sample->marker_array,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void RosMarkerArraySample_finalize(
    RosMarkerArraySample* sample)
{
    ::rapid::ext::arc::RosMarkerArraySample_finalize_ex(sample,RTI_TRUE);
}
        
void RosMarkerArraySample_finalize_ex(
    RosMarkerArraySample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::RosMarkerArraySample_finalize_w_params(
        sample,&deallocParams);
}

void RosMarkerArraySample_finalize_w_params(
        RosMarkerArraySample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::arc::MarkerArraySequence8_finalize_w_params(&sample->marker_array, deallocParams);
            

}

void RosMarkerArraySample_finalize_optional_members(
    RosMarkerArraySample* sample, RTIBool deletePointers)
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
             

    rapid::ext::arc::MarkerArraySequence8_finalize_optional_members(&sample->marker_array, deallocParams->delete_pointers);
            

}

RTIBool RosMarkerArraySample_copy(
    RosMarkerArraySample* dst,
    const RosMarkerArraySample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::arc::MarkerArraySequence8_copy(
        &dst->marker_array, &src->marker_array)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RosMarkerArraySample' sequence class.
 */
#define T RosMarkerArraySample
#define TSeq RosMarkerArraySampleSeq
#define T_initialize_w_params ::rapid::ext::arc::RosMarkerArraySample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::RosMarkerArraySample_finalize_w_params
#define T_copy       ::rapid::ext::arc::RosMarkerArraySample_copy

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
