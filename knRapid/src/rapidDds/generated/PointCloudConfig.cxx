
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PointCloudConfig.idl using "rtiddsgen".
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



#include "PointCloudConfig.h"


namespace rapid{
/* ========================================================================= */
const char *PointSampleXyzModeTYPENAME = "rapid::PointSampleXyzMode";

DDS_TypeCode* PointSampleXyzMode_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member PointSampleXyzMode_g_tc_members[3] =
    {
        {
            (char *)"PS_XYZ",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_XYZ, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_XYt",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_XYt, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_Rae",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_Rae, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode PointSampleXyzMode_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::PointSampleXyzMode", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        PointSampleXyzMode_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &PointSampleXyzMode_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &PointSampleXyzMode_g_tc;
}
 

RTIBool PointSampleXyzMode_initialize(
    PointSampleXyzMode* sample)
{
    *sample = PS_XYZ;
    return RTI_TRUE;
}
        
RTIBool PointSampleXyzMode_initialize_ex(
    PointSampleXyzMode* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = PS_XYZ;
    return RTI_TRUE;
}

RTIBool PointSampleXyzMode_initialize_w_params(
        PointSampleXyzMode* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = PS_XYZ;
    return RTI_TRUE;
}

void PointSampleXyzMode_finalize(
    PointSampleXyzMode* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void PointSampleXyzMode_finalize_ex(
    PointSampleXyzMode* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void PointSampleXyzMode_finalize_w_params(
        PointSampleXyzMode* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool PointSampleXyzMode_copy(
    PointSampleXyzMode* dst,
    const PointSampleXyzMode* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool PointSampleXyzMode_getValues(PointSampleXyzModeSeq * values) 
    
{
    int i = 0;
    PointSampleXyzMode * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = PS_XYZ;
    i++;
    
    buffer[i] = PS_XYt;
    i++;
    
    buffer[i] = PS_Rae;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PointSampleXyzMode' sequence class.
 */
#define T PointSampleXyzMode
#define TSeq PointSampleXyzModeSeq
#define T_initialize_w_params PointSampleXyzMode_initialize_w_params
#define T_finalize_w_params   PointSampleXyzMode_finalize_w_params
#define T_copy       PointSampleXyzMode_copy

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
const char *PointSampleAttributeModeTYPENAME = "rapid::PointSampleAttributeMode";

DDS_TypeCode* PointSampleAttributeMode_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member PointSampleAttributeMode_g_tc_members[8] =
    {
        {
            (char *)"PS_UNUSED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_UNUSED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_INTENSITY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_INTENSITY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_LAYER",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_LAYER, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_ECHO",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_ECHO, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_LAYER4_ECHO4",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_LAYER4_ECHO4, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_PULSE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_PULSE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_RGB332",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_RGB332, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PS_RGB565",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PS_RGB565, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode PointSampleAttributeMode_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::PointSampleAttributeMode", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        8, /* Number of enumerators */
        PointSampleAttributeMode_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &PointSampleAttributeMode_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &PointSampleAttributeMode_g_tc;
}
 

RTIBool PointSampleAttributeMode_initialize(
    PointSampleAttributeMode* sample)
{
    *sample = PS_UNUSED;
    return RTI_TRUE;
}
        
RTIBool PointSampleAttributeMode_initialize_ex(
    PointSampleAttributeMode* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = PS_UNUSED;
    return RTI_TRUE;
}

RTIBool PointSampleAttributeMode_initialize_w_params(
        PointSampleAttributeMode* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = PS_UNUSED;
    return RTI_TRUE;
}

void PointSampleAttributeMode_finalize(
    PointSampleAttributeMode* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void PointSampleAttributeMode_finalize_ex(
    PointSampleAttributeMode* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void PointSampleAttributeMode_finalize_w_params(
        PointSampleAttributeMode* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool PointSampleAttributeMode_copy(
    PointSampleAttributeMode* dst,
    const PointSampleAttributeMode* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool PointSampleAttributeMode_getValues(PointSampleAttributeModeSeq * values) 
    
{
    int i = 0;
    PointSampleAttributeMode * buffer;


    if (!values->maximum(8)) {
        return RTI_FALSE;
    }

    if (!values->length(8)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = PS_UNUSED;
    i++;
    
    buffer[i] = PS_INTENSITY;
    i++;
    
    buffer[i] = PS_LAYER;
    i++;
    
    buffer[i] = PS_ECHO;
    i++;
    
    buffer[i] = PS_LAYER4_ECHO4;
    i++;
    
    buffer[i] = PS_PULSE;
    i++;
    
    buffer[i] = PS_RGB332;
    i++;
    
    buffer[i] = PS_RGB565;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PointSampleAttributeMode' sequence class.
 */
#define T PointSampleAttributeMode
#define TSeq PointSampleAttributeModeSeq
#define T_initialize_w_params PointSampleAttributeMode_initialize_w_params
#define T_finalize_w_params   PointSampleAttributeMode_finalize_w_params
#define T_copy       PointSampleAttributeMode_copy

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
const char *PointCloudConfigTYPENAME = "rapid::PointCloudConfig";

DDS_TypeCode* PointCloudConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode PointCloudConfig_g_tc_attributesMode_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);

    static DDS_TypeCode_Member PointCloudConfig_g_tc_members[4]=
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
            (char *)"xyzMode",/* Member name */
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
            (char *)"attributesMode",/* Member name */
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
            (char *)"attributes",/* Member name */
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

    static DDS_TypeCode PointCloudConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::PointCloudConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        PointCloudConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for PointCloudConfig*/

    if (is_initialized) {
        return &PointCloudConfig_g_tc;
    }

    PointCloudConfig_g_tc_attributesMode_array._data._typeCode = (RTICdrTypeCode *)rapid::PointSampleAttributeMode_get_typecode();

    PointCloudConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    PointCloudConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::PointSampleXyzMode_get_typecode();
    PointCloudConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&PointCloudConfig_g_tc_attributesMode_array;
    PointCloudConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence16_get_typecode();

    PointCloudConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &PointCloudConfig_g_tc;
}


RTIBool PointCloudConfig_initialize(
    PointCloudConfig* sample) {
  return ::rapid::PointCloudConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool PointCloudConfig_initialize_ex(
    PointCloudConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::PointCloudConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool PointCloudConfig_initialize_w_params(
        PointCloudConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String128_initialize_w_params(&sample->referenceFrame,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::PointSampleXyzMode_initialize_w_params(&sample->xyzMode,allocParams)) {
        return RTI_FALSE;
    }
            

    
    {
        int i = 0;
        rapid::PointSampleAttributeMode* elem =
            (rapid::PointSampleAttributeMode*) &sample->attributesMode[0];

        for (i = 0; i < (int)((2)); ++i, ++elem) {
            if (!rapid::PointSampleAttributeMode_initialize_w_params(elem,allocParams)) {
                return RTI_FALSE;
            }
        }
    }
            

    if (!rapid::KeyTypeValueSequence16_initialize_w_params(&sample->attributes,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void PointCloudConfig_finalize(
    PointCloudConfig* sample)
{
    ::rapid::PointCloudConfig_finalize_ex(sample,RTI_TRUE);
}
        
void PointCloudConfig_finalize_ex(
    PointCloudConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::PointCloudConfig_finalize_w_params(
        sample,&deallocParams);
}

void PointCloudConfig_finalize_w_params(
        PointCloudConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String128_finalize_w_params(&sample->referenceFrame, deallocParams);
            

    rapid::PointSampleXyzMode_finalize_w_params(&sample->xyzMode, deallocParams);
            

    
    {
        int i = 0;
        rapid::PointSampleAttributeMode* elem =
            (rapid::PointSampleAttributeMode*) &sample->attributesMode[0];

        for (i = 0; i < (int)((2)); ++i, ++elem) {
            rapid::PointSampleAttributeMode_finalize_w_params(elem, deallocParams);
        }
    }
            

    rapid::KeyTypeValueSequence16_finalize_w_params(&sample->attributes, deallocParams);
            

}

void PointCloudConfig_finalize_optional_members(
    PointCloudConfig* sample, RTIBool deletePointers)
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
            

    rapid::PointSampleXyzMode_finalize_w_params(&sample->xyzMode, deallocParams);
            

    {
        int i = 0;
        rapid::PointSampleAttributeMode* elem =
            (rapid::PointSampleAttributeMode*) &sample->attributesMode[0];

        for (i = 0; i < (int)((2)); ++i, ++elem) {
            rapid::PointSampleAttributeMode_finalize_w_params(elem, deallocParams);
        }
    }
            

    rapid::KeyTypeValueSequence16_finalize_optional_members(&sample->attributes, deallocParams->delete_pointers);
            

}

RTIBool PointCloudConfig_copy(
    PointCloudConfig* dst,
    const PointCloudConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String128_copy(
        &dst->referenceFrame, &src->referenceFrame)) {
        return RTI_FALSE;
    }
            

    if (!rapid::PointSampleXyzMode_copy(
        &dst->xyzMode, &src->xyzMode)) {
        return RTI_FALSE;
    }
            

    
    {
        int i = 0;
        rapid::PointSampleAttributeMode* elemOut = (rapid::PointSampleAttributeMode*) &dst->attributesMode[0];
        const rapid::PointSampleAttributeMode* elemIn = (const rapid::PointSampleAttributeMode*) &src->attributesMode[0];

        for (i = 0; i < (int)((2));
             ++i, ++elemOut, ++elemIn) {
            if (!rapid::PointSampleAttributeMode_copy(elemOut,(const rapid::PointSampleAttributeMode*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }
            

    if (!rapid::KeyTypeValueSequence16_copy(
        &dst->attributes, &src->attributes)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PointCloudConfig' sequence class.
 */
#define T PointCloudConfig
#define TSeq PointCloudConfigSeq
#define T_initialize_w_params ::rapid::PointCloudConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::PointCloudConfig_finalize_w_params
#define T_copy       ::rapid::PointCloudConfig_copy

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
