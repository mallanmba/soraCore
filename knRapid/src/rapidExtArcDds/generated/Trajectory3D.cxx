
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory3D.idl using "rtiddsgen".
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



#include "Trajectory3D.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *TrajPoint3DTYPENAME = "rapid::ext::arc::TrajPoint3D";

DDS_TypeCode* TrajPoint3D_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TrajPoint3D_g_tc_members[1]=
    {
        {
            (char *)"pose",/* Member name */
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
        }
    };

    static DDS_TypeCode TrajPoint3D_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::TrajPoint3D", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        TrajPoint3D_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TrajPoint3D*/

    if (is_initialized) {
        return &TrajPoint3D_g_tc;
    }


    TrajPoint3D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::Transform3D_get_typecode();

    is_initialized = RTI_TRUE;

    return &TrajPoint3D_g_tc;
}


RTIBool TrajPoint3D_initialize(
    TrajPoint3D* sample) {
  return ::rapid::ext::arc::TrajPoint3D_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TrajPoint3D_initialize_ex(
    TrajPoint3D* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::TrajPoint3D_initialize_w_params(
        sample,&allocParams);
}

RTIBool TrajPoint3D_initialize_w_params(
        TrajPoint3D* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::Transform3D_initialize_w_params(&sample->pose,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TrajPoint3D_finalize(
    TrajPoint3D* sample)
{
    ::rapid::ext::arc::TrajPoint3D_finalize_ex(sample,RTI_TRUE);
}
        
void TrajPoint3D_finalize_ex(
    TrajPoint3D* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::TrajPoint3D_finalize_w_params(
        sample,&deallocParams);
}

void TrajPoint3D_finalize_w_params(
        TrajPoint3D* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::Transform3D_finalize_w_params(&sample->pose, deallocParams);
            

}

void TrajPoint3D_finalize_optional_members(
    TrajPoint3D* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::Transform3D_finalize_optional_members(&sample->pose, deallocParams->delete_pointers);
            

}

RTIBool TrajPoint3D_copy(
    TrajPoint3D* dst,
    const TrajPoint3D* src)
{

    if (!rapid::Transform3D_copy(
        &dst->pose, &src->pose)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TrajPoint3D' sequence class.
 */
#define T TrajPoint3D
#define TSeq TrajPoint3DSeq
#define T_initialize_w_params ::rapid::ext::arc::TrajPoint3D_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::TrajPoint3D_finalize_w_params
#define T_copy       ::rapid::ext::arc::TrajPoint3D_copy

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

DDS_TypeCode* TrajPoint3DSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TrajPoint3DSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode TrajPoint3DSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::TrajPoint3DSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TrajPoint3DSequence */

    if (is_initialized) {
        return &TrajPoint3DSequence_g_tc;
    }

    TrajPoint3DSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::TrajPoint3D_get_typecode();
    TrajPoint3DSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&TrajPoint3DSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &TrajPoint3DSequence_g_tc;
}


RTIBool TrajPoint3DSequence_initialize(
    TrajPoint3DSequence* sample)
{
    return ::rapid::ext::arc::TrajPoint3DSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TrajPoint3DSequence_initialize_ex(
    TrajPoint3DSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::TrajPoint3DSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool TrajPoint3DSequence_initialize_w_params(
        TrajPoint3DSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::TrajPoint3DSeq_initialize(sample);
        rapid::ext::arc::TrajPoint3DSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::TrajPoint3DSeq_set_maximum(sample,
                                           (64))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::TrajPoint3DSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void TrajPoint3DSequence_finalize(
    TrajPoint3DSequence* sample)
{
    ::rapid::ext::arc::TrajPoint3DSequence_finalize_ex(sample,RTI_TRUE);
}
 
void TrajPoint3DSequence_finalize_ex(
    TrajPoint3DSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::TrajPoint3DSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void TrajPoint3DSequence_finalize_w_params(
    TrajPoint3DSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::TrajPoint3DSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::TrajPoint3DSeq_finalize(sample);
            

}

void TrajPoint3DSequence_finalize_optional_members(
    TrajPoint3DSequence* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::TrajPoint3DSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::TrajPoint3D_finalize_optional_members(
                rapid::ext::arc::TrajPoint3DSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool TrajPoint3DSequence_copy(
    TrajPoint3DSequence* dst,
    const TrajPoint3DSequence* src)
{

    if (!rapid::ext::arc::TrajPoint3DSeq_copy(dst,
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
 * Configure and implement 'TrajPoint3DSequence' sequence class.
 */
#define T            TrajPoint3DSequence
#define TSeq         TrajPoint3DSequenceSeq
#define T_initialize_w_params ::rapid::ext::arc::TrajPoint3DSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::TrajPoint3DSequence_finalize_w_params
#define T_copy       ::rapid::ext::arc::TrajPoint3DSequence_copy


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
const char *Trajectory3DTYPENAME = "rapid::ext::arc::Trajectory3D";

DDS_TypeCode* Trajectory3D_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Trajectory3D_g_tc_members[5]=
    {
        {
            (char *)"weight",/* Member name */
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
            (char *)"name",/* Member name */
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
            (char *)"t0",/* Member name */
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
            (char *)"tsep",/* Member name */
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
            (char *)"points",/* Member name */
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
        }
    };

    static DDS_TypeCode Trajectory3D_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::Trajectory3D", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        Trajectory3D_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Trajectory3D*/

    if (is_initialized) {
        return &Trajectory3D_g_tc;
    }


    Trajectory3D_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Trajectory3D_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Trajectory3D_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Trajectory3D_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Trajectory3D_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::TrajPoint3DSequence_get_typecode();

    is_initialized = RTI_TRUE;

    return &Trajectory3D_g_tc;
}


RTIBool Trajectory3D_initialize(
    Trajectory3D* sample) {
  return ::rapid::ext::arc::Trajectory3D_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Trajectory3D_initialize_ex(
    Trajectory3D* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::Trajectory3D_initialize_w_params(
        sample,&allocParams);
}

RTIBool Trajectory3D_initialize_w_params(
        Trajectory3D* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initFloat(&sample->weight)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLongLong(&sample->t0)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->tsep)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ext::arc::TrajPoint3DSequence_initialize_w_params(&sample->points,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Trajectory3D_finalize(
    Trajectory3D* sample)
{
    ::rapid::ext::arc::Trajectory3D_finalize_ex(sample,RTI_TRUE);
}
        
void Trajectory3D_finalize_ex(
    Trajectory3D* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::Trajectory3D_finalize_w_params(
        sample,&deallocParams);
}

void Trajectory3D_finalize_w_params(
        Trajectory3D* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            



    rapid::ext::arc::TrajPoint3DSequence_finalize_w_params(&sample->points, deallocParams);
            

}

void Trajectory3D_finalize_optional_members(
    Trajectory3D* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    rapid::String32_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            



    rapid::ext::arc::TrajPoint3DSequence_finalize_optional_members(&sample->points, deallocParams->delete_pointers);
            

}

RTIBool Trajectory3D_copy(
    Trajectory3D* dst,
    const Trajectory3D* src)
{

    if (!RTICdrType_copyFloat(
        &dst->weight, &src->weight)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->t0, &src->t0)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->tsep, &src->tsep)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::TrajPoint3DSequence_copy(
        &dst->points, &src->points)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Trajectory3D' sequence class.
 */
#define T Trajectory3D
#define TSeq Trajectory3DSeq
#define T_initialize_w_params ::rapid::ext::arc::Trajectory3D_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::Trajectory3D_finalize_w_params
#define T_copy       ::rapid::ext::arc::Trajectory3D_copy

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
