
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GpsSample.idl using "rtiddsgen".
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



#include "GpsSample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *GpsSampleTYPENAME = "rapid::ext::arc::GpsSample";

DDS_TypeCode* GpsSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member GpsSample_g_tc_members[9]=
    {
        {
            (char *)"xyz",/* Member name */
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
            (char *)"sigmaXyz",/* Member name */
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
            (char *)"utmZone",/* Member name */
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
            (char *)"utmDesig",/* Member name */
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
            (char *)"mode",/* Member name */
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
            (char *)"numSats",/* Member name */
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
            (char *)"diffAge",/* Member name */
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
            (char *)"solAge",/* Member name */
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
            (char *)"undulation",/* Member name */
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

    static DDS_TypeCode GpsSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::GpsSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        9, /* Number of members */
        GpsSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for GpsSample*/

    if (is_initialized) {
        return &GpsSample_g_tc;
    }


    GpsSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    GpsSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::Vec3d_get_typecode();
    GpsSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    GpsSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    GpsSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    GpsSample_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    GpsSample_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    GpsSample_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    GpsSample_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    GpsSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &GpsSample_g_tc;
}


RTIBool GpsSample_initialize(
    GpsSample* sample) {
  return ::rapid::ext::arc::GpsSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GpsSample_initialize_ex(
    GpsSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::GpsSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool GpsSample_initialize_w_params(
        GpsSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::Vec3d_initialize_w_params(&sample->xyz,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_initialize_w_params(&sample->sigmaXyz,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initOctet(&sample->utmZone)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->utmDesig)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->mode)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initOctet(&sample->numSats)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->diffAge)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->solAge)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->undulation)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void GpsSample_finalize(
    GpsSample* sample)
{
    ::rapid::ext::arc::GpsSample_finalize_ex(sample,RTI_TRUE);
}
        
void GpsSample_finalize_ex(
    GpsSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::GpsSample_finalize_w_params(
        sample,&deallocParams);
}

void GpsSample_finalize_w_params(
        GpsSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::Vec3d_finalize_w_params(&sample->xyz, deallocParams);
            

    rapid::Vec3d_finalize_w_params(&sample->sigmaXyz, deallocParams);
            








}

void GpsSample_finalize_optional_members(
    GpsSample* sample, RTIBool deletePointers)
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
             

    rapid::Vec3d_finalize_optional_members(&sample->xyz, deallocParams->delete_pointers);
            

    rapid::Vec3d_finalize_optional_members(&sample->sigmaXyz, deallocParams->delete_pointers);
            








}

RTIBool GpsSample_copy(
    GpsSample* dst,
    const GpsSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::Vec3d_copy(
        &dst->xyz, &src->xyz)) {
        return RTI_FALSE;
    }
            

    if (!rapid::Vec3d_copy(
        &dst->sigmaXyz, &src->sigmaXyz)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->utmZone, &src->utmZone)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->utmDesig, &src->utmDesig)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->mode, &src->mode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->numSats, &src->numSats)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->diffAge, &src->diffAge)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->solAge, &src->solAge)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->undulation, &src->undulation)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GpsSample' sequence class.
 */
#define T GpsSample
#define TSeq GpsSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::GpsSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::GpsSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::GpsSample_copy

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
