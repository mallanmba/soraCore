
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NavMapConfig.idl using "rtiddsgen".
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



#include "NavMapConfig.h"


namespace rapid{

namespace ext{
/* ========================================================================= */

DDS_TypeCode* ShortMapLayerNameSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShortMapLayerNameSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((rapid::ext::NAVMAP_NUM_SHORT_LAYERS),NULL);

    static DDS_TypeCode ShortMapLayerNameSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::ShortMapLayerNameSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ShortMapLayerNameSequence */

    if (is_initialized) {
        return &ShortMapLayerNameSequence_g_tc;
    }

    ShortMapLayerNameSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ShortMapLayerNameSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ShortMapLayerNameSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ShortMapLayerNameSequence_g_tc;
}


RTIBool ShortMapLayerNameSequence_initialize(
    ShortMapLayerNameSequence* sample)
{
    return ::rapid::ext::ShortMapLayerNameSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShortMapLayerNameSequence_initialize_ex(
    ShortMapLayerNameSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::ShortMapLayerNameSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ShortMapLayerNameSequence_initialize_w_params(
        ShortMapLayerNameSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String32Seq_initialize(sample);
        rapid::String32Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String32Seq_set_maximum(sample,
                                           ((rapid::ext::NAVMAP_NUM_SHORT_LAYERS)))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String32Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ShortMapLayerNameSequence_finalize(
    ShortMapLayerNameSequence* sample)
{
    ::rapid::ext::ShortMapLayerNameSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ShortMapLayerNameSequence_finalize_ex(
    ShortMapLayerNameSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::ShortMapLayerNameSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ShortMapLayerNameSequence_finalize_w_params(
    ShortMapLayerNameSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String32Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String32Seq_finalize(sample);
            

}

void ShortMapLayerNameSequence_finalize_optional_members(
    ShortMapLayerNameSequence* sample, RTIBool deletePointers)
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
        length = rapid::String32Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String32_finalize_optional_members(
                rapid::String32Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ShortMapLayerNameSequence_copy(
    ShortMapLayerNameSequence* dst,
    const ShortMapLayerNameSequence* src)
{

    if (!rapid::String32Seq_copy(dst,
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
 * Configure and implement 'ShortMapLayerNameSequence' sequence class.
 */
#define T            ShortMapLayerNameSequence
#define TSeq         ShortMapLayerNameSequenceSeq
#define T_initialize_w_params ::rapid::ext::ShortMapLayerNameSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::ShortMapLayerNameSequence_finalize_w_params
#define T_copy       ::rapid::ext::ShortMapLayerNameSequence_copy


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

DDS_TypeCode* OctetMapLayerNameSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OctetMapLayerNameSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((rapid::ext::NAVMAP_NUM_OCTET_LAYERS),NULL);

    static DDS_TypeCode OctetMapLayerNameSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::OctetMapLayerNameSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OctetMapLayerNameSequence */

    if (is_initialized) {
        return &OctetMapLayerNameSequence_g_tc;
    }

    OctetMapLayerNameSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    OctetMapLayerNameSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&OctetMapLayerNameSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &OctetMapLayerNameSequence_g_tc;
}


RTIBool OctetMapLayerNameSequence_initialize(
    OctetMapLayerNameSequence* sample)
{
    return ::rapid::ext::OctetMapLayerNameSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool OctetMapLayerNameSequence_initialize_ex(
    OctetMapLayerNameSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::OctetMapLayerNameSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool OctetMapLayerNameSequence_initialize_w_params(
        OctetMapLayerNameSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::String32Seq_initialize(sample);
        rapid::String32Seq_set_element_allocation_params(sample,allocParams);
        if (!rapid::String32Seq_set_maximum(sample,
                                           ((rapid::ext::NAVMAP_NUM_OCTET_LAYERS)))) {
            return RTI_FALSE;
        }
    } else {
        rapid::String32Seq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void OctetMapLayerNameSequence_finalize(
    OctetMapLayerNameSequence* sample)
{
    ::rapid::ext::OctetMapLayerNameSequence_finalize_ex(sample,RTI_TRUE);
}
 
void OctetMapLayerNameSequence_finalize_ex(
    OctetMapLayerNameSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::OctetMapLayerNameSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void OctetMapLayerNameSequence_finalize_w_params(
    OctetMapLayerNameSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::String32Seq_set_element_deallocation_params(sample,deallocParams);
    rapid::String32Seq_finalize(sample);
            

}

void OctetMapLayerNameSequence_finalize_optional_members(
    OctetMapLayerNameSequence* sample, RTIBool deletePointers)
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
        length = rapid::String32Seq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::String32_finalize_optional_members(
                rapid::String32Seq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool OctetMapLayerNameSequence_copy(
    OctetMapLayerNameSequence* dst,
    const OctetMapLayerNameSequence* src)
{

    if (!rapid::String32Seq_copy(dst,
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
 * Configure and implement 'OctetMapLayerNameSequence' sequence class.
 */
#define T            OctetMapLayerNameSequence
#define TSeq         OctetMapLayerNameSequenceSeq
#define T_initialize_w_params ::rapid::ext::OctetMapLayerNameSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::OctetMapLayerNameSequence_finalize_w_params
#define T_copy       ::rapid::ext::OctetMapLayerNameSequence_copy


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
const char *NavMapConfigTYPENAME = "rapid::ext::NavMapConfig";

DDS_TypeCode* NavMapConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode NavMapConfig_g_tc_offset_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);
    static DDS_TypeCode NavMapConfig_g_tc_cellSize_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);
    static DDS_TypeCode NavMapConfig_g_tc_numCells_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,2,NULL,NULL);

    static DDS_TypeCode_Member NavMapConfig_g_tc_members[6]=
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
            (char *)"offset",/* Member name */
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
            (char *)"cellSize",/* Member name */
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
            (char *)"numCells",/* Member name */
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
            (char *)"shortLayerNames",/* Member name */
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
            (char *)"octetLayerNames",/* Member name */
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
        }
    };

    static DDS_TypeCode NavMapConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::NavMapConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        NavMapConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for NavMapConfig*/

    if (is_initialized) {
        return &NavMapConfig_g_tc;
    }

    NavMapConfig_g_tc_offset_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    NavMapConfig_g_tc_cellSize_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    NavMapConfig_g_tc_numCells_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    NavMapConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    NavMapConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&NavMapConfig_g_tc_offset_array;
    NavMapConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&NavMapConfig_g_tc_cellSize_array;
    NavMapConfig_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&NavMapConfig_g_tc_numCells_array;
    NavMapConfig_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::ShortMapLayerNameSequence_get_typecode();
    NavMapConfig_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::OctetMapLayerNameSequence_get_typecode();

    NavMapConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &NavMapConfig_g_tc;
}


RTIBool NavMapConfig_initialize(
    NavMapConfig* sample) {
  return ::rapid::ext::NavMapConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool NavMapConfig_initialize_ex(
    NavMapConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::NavMapConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool NavMapConfig_initialize_w_params(
        NavMapConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String128_initialize_w_params(&sample->referenceFrame,allocParams)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->offset, (2), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->cellSize, (2), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->numCells, (2), RTI_CDR_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ShortMapLayerNameSequence_initialize_w_params(&sample->shortLayerNames,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::OctetMapLayerNameSequence_initialize_w_params(&sample->octetLayerNames,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void NavMapConfig_finalize(
    NavMapConfig* sample)
{
    ::rapid::ext::NavMapConfig_finalize_ex(sample,RTI_TRUE);
}
        
void NavMapConfig_finalize_ex(
    NavMapConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::NavMapConfig_finalize_w_params(
        sample,&deallocParams);
}

void NavMapConfig_finalize_w_params(
        NavMapConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String128_finalize_w_params(&sample->referenceFrame, deallocParams);
            




    rapid::ext::ShortMapLayerNameSequence_finalize_w_params(&sample->shortLayerNames, deallocParams);
            

    rapid::ext::OctetMapLayerNameSequence_finalize_w_params(&sample->octetLayerNames, deallocParams);
            

}

void NavMapConfig_finalize_optional_members(
    NavMapConfig* sample, RTIBool deletePointers)
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
            




    rapid::ext::ShortMapLayerNameSequence_finalize_optional_members(&sample->shortLayerNames, deallocParams->delete_pointers);
            

    rapid::ext::OctetMapLayerNameSequence_finalize_optional_members(&sample->octetLayerNames, deallocParams->delete_pointers);
            

}

RTIBool NavMapConfig_copy(
    NavMapConfig* dst,
    const NavMapConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String128_copy(
        &dst->referenceFrame, &src->referenceFrame)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->offset, src->offset, (2), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->cellSize, src->cellSize, (2), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->numCells, src->numCells, (2), RTI_CDR_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::ShortMapLayerNameSequence_copy(
        &dst->shortLayerNames, &src->shortLayerNames)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::OctetMapLayerNameSequence_copy(
        &dst->octetLayerNames, &src->octetLayerNames)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NavMapConfig' sequence class.
 */
#define T NavMapConfig
#define TSeq NavMapConfigSeq
#define T_initialize_w_params ::rapid::ext::NavMapConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::NavMapConfig_finalize_w_params
#define T_copy       ::rapid::ext::NavMapConfig_copy

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
