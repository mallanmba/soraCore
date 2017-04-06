
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisSample.idl using "rtiddsgen".
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



#include "EphemerisSample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *EphemerisSampleTYPENAME = "rapid::ext::arc::EphemerisSample";

DDS_TypeCode* EphemerisSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EphemerisSample_g_tc_members[5]=
    {
        {
            (char *)"configIdx",/* Member name */
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
            (char *)"solutionTime",/* Member name */
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
            (char *)"lat",/* Member name */
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
            (char *)"lon",/* Member name */
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
            (char *)"vec",/* Member name */
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
        }
    };

    static DDS_TypeCode EphemerisSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::EphemerisSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        EphemerisSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for EphemerisSample*/

    if (is_initialized) {
        return &EphemerisSample_g_tc;
    }


    EphemerisSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    EphemerisSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    EphemerisSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    EphemerisSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    EphemerisSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3f_get_typecode();

    EphemerisSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &EphemerisSample_g_tc;
}


RTIBool EphemerisSample_initialize(
    EphemerisSample* sample) {
  return ::rapid::ext::arc::EphemerisSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EphemerisSample_initialize_ex(
    EphemerisSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::EphemerisSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool EphemerisSample_initialize_w_params(
        EphemerisSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initLong(&sample->configIdx)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->solutionTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->lat)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->lon)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::Vec3f_initialize_w_params(&sample->vec,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void EphemerisSample_finalize(
    EphemerisSample* sample)
{
    ::rapid::ext::arc::EphemerisSample_finalize_ex(sample,RTI_TRUE);
}
        
void EphemerisSample_finalize_ex(
    EphemerisSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::EphemerisSample_finalize_w_params(
        sample,&deallocParams);
}

void EphemerisSample_finalize_w_params(
        EphemerisSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);





    rapid::Vec3f_finalize_w_params(&sample->vec, deallocParams);
            

}

void EphemerisSample_finalize_optional_members(
    EphemerisSample* sample, RTIBool deletePointers)
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
             





    rapid::Vec3f_finalize_optional_members(&sample->vec, deallocParams->delete_pointers);
            

}

RTIBool EphemerisSample_copy(
    EphemerisSample* dst,
    const EphemerisSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong(
        &dst->configIdx, &src->configIdx)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->solutionTime, &src->solutionTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->lat, &src->lat)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->lon, &src->lon)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3f_copy(
        &dst->vec, &src->vec)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EphemerisSample' sequence class.
 */
#define T EphemerisSample
#define TSeq EphemerisSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::EphemerisSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::EphemerisSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::EphemerisSample_copy

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
