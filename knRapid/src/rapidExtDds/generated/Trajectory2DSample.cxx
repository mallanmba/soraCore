
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DSample.idl using "rtiddsgen".
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



#include "Trajectory2DSample.h"


namespace rapid{

namespace ext{
/* ========================================================================= */

DDS_TypeCode* RTransMetaSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTransMetaSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(4,NULL);

    static DDS_TypeCode RTransMetaSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::RTransMetaSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RTransMetaSequence */

    if (is_initialized) {
        return &RTransMetaSequence_g_tc;
    }

    RTransMetaSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ParameterUnion_get_typecode();
    RTransMetaSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&RTransMetaSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &RTransMetaSequence_g_tc;
}


RTIBool RTransMetaSequence_initialize(
    RTransMetaSequence* sample)
{
    return ::rapid::ext::RTransMetaSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTransMetaSequence_initialize_ex(
    RTransMetaSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::RTransMetaSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool RTransMetaSequence_initialize_w_params(
        RTransMetaSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ParameterUnionSeq_initialize(sample);
        rapid::ParameterUnionSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ParameterUnionSeq_set_maximum(sample,
                                           (4))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ParameterUnionSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void RTransMetaSequence_finalize(
    RTransMetaSequence* sample)
{
    ::rapid::ext::RTransMetaSequence_finalize_ex(sample,RTI_TRUE);
}
 
void RTransMetaSequence_finalize_ex(
    RTransMetaSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::RTransMetaSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void RTransMetaSequence_finalize_w_params(
    RTransMetaSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ParameterUnionSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ParameterUnionSeq_finalize(sample);
            

}

void RTransMetaSequence_finalize_optional_members(
    RTransMetaSequence* sample, RTIBool deletePointers)
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
        length = rapid::ParameterUnionSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ParameterUnion_finalize_optional_members(
                rapid::ParameterUnionSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool RTransMetaSequence_copy(
    RTransMetaSequence* dst,
    const RTransMetaSequence* src)
{

    if (!rapid::ParameterUnionSeq_copy(dst,
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
 * Configure and implement 'RTransMetaSequence' sequence class.
 */
#define T            RTransMetaSequence
#define TSeq         RTransMetaSequenceSeq
#define T_initialize_w_params ::rapid::ext::RTransMetaSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::RTransMetaSequence_finalize_w_params
#define T_copy       ::rapid::ext::RTransMetaSequence_copy


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
const char *RTrans2DMetaTYPENAME = "rapid::ext::RTrans2DMeta";

DDS_TypeCode* RTrans2DMeta_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member RTrans2DMeta_g_tc_members[4]=
    {
        {
            (char *)"x",/* Member name */
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
            (char *)"y",/* Member name */
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
            (char *)"theta",/* Member name */
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
            (char *)"meta",/* Member name */
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
        }
    };

    static DDS_TypeCode RTrans2DMeta_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::RTrans2DMeta", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        RTrans2DMeta_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RTrans2DMeta*/

    if (is_initialized) {
        return &RTrans2DMeta_g_tc;
    }


    RTrans2DMeta_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    RTrans2DMeta_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    RTrans2DMeta_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    RTrans2DMeta_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::RTransMetaSequence_get_typecode();

    is_initialized = RTI_TRUE;

    return &RTrans2DMeta_g_tc;
}


RTIBool RTrans2DMeta_initialize(
    RTrans2DMeta* sample) {
  return ::rapid::ext::RTrans2DMeta_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RTrans2DMeta_initialize_ex(
    RTrans2DMeta* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::RTrans2DMeta_initialize_w_params(
        sample,&allocParams);
}

RTIBool RTrans2DMeta_initialize_w_params(
        RTrans2DMeta* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->x)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->y)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->theta)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ext::RTransMetaSequence_initialize_w_params(&sample->meta,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void RTrans2DMeta_finalize(
    RTrans2DMeta* sample)
{
    ::rapid::ext::RTrans2DMeta_finalize_ex(sample,RTI_TRUE);
}
        
void RTrans2DMeta_finalize_ex(
    RTrans2DMeta* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::RTrans2DMeta_finalize_w_params(
        sample,&deallocParams);
}

void RTrans2DMeta_finalize_w_params(
        RTrans2DMeta* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





    rapid::ext::RTransMetaSequence_finalize_w_params(&sample->meta, deallocParams);
            

}

void RTrans2DMeta_finalize_optional_members(
    RTrans2DMeta* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




    rapid::ext::RTransMetaSequence_finalize_optional_members(&sample->meta, deallocParams->delete_pointers);
            

}

RTIBool RTrans2DMeta_copy(
    RTrans2DMeta* dst,
    const RTrans2DMeta* src)
{

    if (!RTICdrType_copyFloat(
        &dst->x, &src->x)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->y, &src->y)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->theta, &src->theta)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RTransMetaSequence_copy(
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
 * Configure and implement 'RTrans2DMeta' sequence class.
 */
#define T RTrans2DMeta
#define TSeq RTrans2DMetaSeq
#define T_initialize_w_params ::rapid::ext::RTrans2DMeta_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::RTrans2DMeta_finalize_w_params
#define T_copy       ::rapid::ext::RTrans2DMeta_copy

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

DDS_TypeCode* RTrans2DSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTrans2DSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(512,NULL);

    static DDS_TypeCode RTrans2DSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::RTrans2DSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RTrans2DSequence */

    if (is_initialized) {
        return &RTrans2DSequence_g_tc;
    }

    RTrans2DSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::RTrans2DMeta_get_typecode();
    RTrans2DSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&RTrans2DSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &RTrans2DSequence_g_tc;
}


RTIBool RTrans2DSequence_initialize(
    RTrans2DSequence* sample)
{
    return ::rapid::ext::RTrans2DSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTrans2DSequence_initialize_ex(
    RTrans2DSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::RTrans2DSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool RTrans2DSequence_initialize_w_params(
        RTrans2DSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::RTrans2DMetaSeq_initialize(sample);
        rapid::ext::RTrans2DMetaSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::RTrans2DMetaSeq_set_maximum(sample,
                                           (512))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::RTrans2DMetaSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void RTrans2DSequence_finalize(
    RTrans2DSequence* sample)
{
    ::rapid::ext::RTrans2DSequence_finalize_ex(sample,RTI_TRUE);
}
 
void RTrans2DSequence_finalize_ex(
    RTrans2DSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::RTrans2DSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void RTrans2DSequence_finalize_w_params(
    RTrans2DSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::RTrans2DMetaSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::RTrans2DMetaSeq_finalize(sample);
            

}

void RTrans2DSequence_finalize_optional_members(
    RTrans2DSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::RTrans2DMetaSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::RTrans2DMeta_finalize_optional_members(
                rapid::ext::RTrans2DMetaSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool RTrans2DSequence_copy(
    RTrans2DSequence* dst,
    const RTrans2DSequence* src)
{

    if (!rapid::ext::RTrans2DMetaSeq_copy(dst,
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
 * Configure and implement 'RTrans2DSequence' sequence class.
 */
#define T            RTrans2DSequence
#define TSeq         RTrans2DSequenceSeq
#define T_initialize_w_params ::rapid::ext::RTrans2DSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::RTrans2DSequence_finalize_w_params
#define T_copy       ::rapid::ext::RTrans2DSequence_copy


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
const char *Trajectory2DSampleTYPENAME = "rapid::ext::Trajectory2DSample";

DDS_TypeCode* Trajectory2DSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Trajectory2DSample_g_tc_members[2]=
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
            (char *)"trajectory",/* Member name */
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
        }
    };

    static DDS_TypeCode Trajectory2DSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::Trajectory2DSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Trajectory2DSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for Trajectory2DSample*/

    if (is_initialized) {
        return &Trajectory2DSample_g_tc;
    }


    Trajectory2DSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();
    Trajectory2DSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::RTrans2DSequence_get_typecode();

    Trajectory2DSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &Trajectory2DSample_g_tc;
}


RTIBool Trajectory2DSample_initialize(
    Trajectory2DSample* sample) {
  return ::rapid::ext::Trajectory2DSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Trajectory2DSample_initialize_ex(
    Trajectory2DSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::Trajectory2DSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool Trajectory2DSample_initialize_w_params(
        Trajectory2DSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::Transform3D_initialize_w_params(&sample->origin,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RTrans2DSequence_initialize_w_params(&sample->trajectory,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Trajectory2DSample_finalize(
    Trajectory2DSample* sample)
{
    ::rapid::ext::Trajectory2DSample_finalize_ex(sample,RTI_TRUE);
}
        
void Trajectory2DSample_finalize_ex(
    Trajectory2DSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::Trajectory2DSample_finalize_w_params(
        sample,&deallocParams);
}

void Trajectory2DSample_finalize_w_params(
        Trajectory2DSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::Transform3D_finalize_w_params(&sample->origin, deallocParams);
            

    rapid::ext::RTrans2DSequence_finalize_w_params(&sample->trajectory, deallocParams);
            

}

void Trajectory2DSample_finalize_optional_members(
    Trajectory2DSample* sample, RTIBool deletePointers)
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
             

    rapid::Transform3D_finalize_optional_members(&sample->origin, deallocParams->delete_pointers);
            

    rapid::ext::RTrans2DSequence_finalize_optional_members(&sample->trajectory, deallocParams->delete_pointers);
            

}

RTIBool Trajectory2DSample_copy(
    Trajectory2DSample* dst,
    const Trajectory2DSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::Transform3D_copy(
        &dst->origin, &src->origin)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RTrans2DSequence_copy(
        &dst->trajectory, &src->trajectory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Trajectory2DSample' sequence class.
 */
#define T Trajectory2DSample
#define TSeq Trajectory2DSampleSeq
#define T_initialize_w_params ::rapid::ext::Trajectory2DSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::Trajectory2DSample_finalize_w_params
#define T_copy       ::rapid::ext::Trajectory2DSample_copy

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
