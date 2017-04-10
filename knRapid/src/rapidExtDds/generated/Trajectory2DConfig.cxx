
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DConfig.idl using "rtiddsgen".
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



#include "Trajectory2DConfig.h"


namespace rapid{

namespace ext{
/* ========================================================================= */
const char *RTrans2DInterpretationTYPENAME = "rapid::ext::RTrans2DInterpretation";

DDS_TypeCode* RTrans2DInterpretation_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTrans2DInterpretation_g_tc_members[2] =
    {
        {
            (char *)"RTRANS2D_RELATIVE_TO_ORIGIN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RTRANS2D_RELATIVE_TO_ORIGIN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RTRANS2D_RELATIVE_TO_PREVIOUS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            RTRANS2D_RELATIVE_TO_PREVIOUS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RTrans2DInterpretation_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::RTrans2DInterpretation", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of enumerators */
        RTrans2DInterpretation_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &RTrans2DInterpretation_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &RTrans2DInterpretation_g_tc;
}
 

RTIBool RTrans2DInterpretation_initialize(
    RTrans2DInterpretation* sample)
{
    *sample = RTRANS2D_RELATIVE_TO_ORIGIN;
    return RTI_TRUE;
}
        
RTIBool RTrans2DInterpretation_initialize_ex(
    RTrans2DInterpretation* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = RTRANS2D_RELATIVE_TO_ORIGIN;
    return RTI_TRUE;
}

RTIBool RTrans2DInterpretation_initialize_w_params(
        RTrans2DInterpretation* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = RTRANS2D_RELATIVE_TO_ORIGIN;
    return RTI_TRUE;
}

void RTrans2DInterpretation_finalize(
    RTrans2DInterpretation* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void RTrans2DInterpretation_finalize_ex(
    RTrans2DInterpretation* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void RTrans2DInterpretation_finalize_w_params(
        RTrans2DInterpretation* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool RTrans2DInterpretation_copy(
    RTrans2DInterpretation* dst,
    const RTrans2DInterpretation* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool RTrans2DInterpretation_getValues(RTrans2DInterpretationSeq * values) 
    
{
    int i = 0;
    RTrans2DInterpretation * buffer;


    if (!values->maximum(2)) {
        return RTI_FALSE;
    }

    if (!values->length(2)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = RTRANS2D_RELATIVE_TO_ORIGIN;
    i++;
    
    buffer[i] = RTRANS2D_RELATIVE_TO_PREVIOUS;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RTrans2DInterpretation' sequence class.
 */
#define T RTrans2DInterpretation
#define TSeq RTrans2DInterpretationSeq
#define T_initialize_w_params RTrans2DInterpretation_initialize_w_params
#define T_finalize_w_params   RTrans2DInterpretation_finalize_w_params
#define T_copy       RTrans2DInterpretation_copy

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
const char *Trajectory2DConfigTYPENAME = "rapid::ext::Trajectory2DConfig";

DDS_TypeCode* Trajectory2DConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Trajectory2DConfig_g_tc_members[4]=
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
            (char *)"trajectoryInterp",/* Member name */
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
            (char *)"samplingInterval",/* Member name */
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
            (char *)"trajectoryMetaKeys",/* Member name */
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

    static DDS_TypeCode Trajectory2DConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::Trajectory2DConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        Trajectory2DConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for Trajectory2DConfig*/

    if (is_initialized) {
        return &Trajectory2DConfig_g_tc;
    }


    Trajectory2DConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    Trajectory2DConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::RTrans2DInterpretation_get_typecode();
    Trajectory2DConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Trajectory2DConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeSequence4_get_typecode();

    Trajectory2DConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &Trajectory2DConfig_g_tc;
}


RTIBool Trajectory2DConfig_initialize(
    Trajectory2DConfig* sample) {
  return ::rapid::ext::Trajectory2DConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Trajectory2DConfig_initialize_ex(
    Trajectory2DConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::Trajectory2DConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool Trajectory2DConfig_initialize_w_params(
        Trajectory2DConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String128_initialize_w_params(&sample->referenceFrame,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RTrans2DInterpretation_initialize_w_params(&sample->trajectoryInterp,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLongLong(&sample->samplingInterval)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::KeyTypeSequence4_initialize_w_params(&sample->trajectoryMetaKeys,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Trajectory2DConfig_finalize(
    Trajectory2DConfig* sample)
{
    ::rapid::ext::Trajectory2DConfig_finalize_ex(sample,RTI_TRUE);
}
        
void Trajectory2DConfig_finalize_ex(
    Trajectory2DConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::Trajectory2DConfig_finalize_w_params(
        sample,&deallocParams);
}

void Trajectory2DConfig_finalize_w_params(
        Trajectory2DConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String128_finalize_w_params(&sample->referenceFrame, deallocParams);
            

    rapid::ext::RTrans2DInterpretation_finalize_w_params(&sample->trajectoryInterp, deallocParams);
            


    rapid::KeyTypeSequence4_finalize_w_params(&sample->trajectoryMetaKeys, deallocParams);
            

}

void Trajectory2DConfig_finalize_optional_members(
    Trajectory2DConfig* sample, RTIBool deletePointers)
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
            

    rapid::ext::RTrans2DInterpretation_finalize_w_params(&sample->trajectoryInterp, deallocParams);
            


    rapid::KeyTypeSequence4_finalize_optional_members(&sample->trajectoryMetaKeys, deallocParams->delete_pointers);
            

}

RTIBool Trajectory2DConfig_copy(
    Trajectory2DConfig* dst,
    const Trajectory2DConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String128_copy(
        &dst->referenceFrame, &src->referenceFrame)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RTrans2DInterpretation_copy(
        &dst->trajectoryInterp, &src->trajectoryInterp)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->samplingInterval, &src->samplingInterval)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeSequence4_copy(
        &dst->trajectoryMetaKeys, &src->trajectoryMetaKeys)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Trajectory2DConfig' sequence class.
 */
#define T Trajectory2DConfig
#define TSeq Trajectory2DConfigSeq
#define T_initialize_w_params ::rapid::ext::Trajectory2DConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::Trajectory2DConfig_finalize_w_params
#define T_copy       ::rapid::ext::Trajectory2DConfig_copy

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
