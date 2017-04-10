
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisConfig.idl using "rtiddsgen".
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



#include "EphemerisConfig.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *EphemerisConfigEntryTYPENAME = "rapid::ext::arc::EphemerisConfigEntry";

DDS_TypeCode* EphemerisConfigEntry_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode EphemerisConfigEntry_g_tc_solutionName_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EphemerisConfigEntry_g_tc_referenceFrame_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EphemerisConfigEntry_g_tc_sourceBody_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EphemerisConfigEntry_g_tc_targetBody_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member EphemerisConfigEntry_g_tc_members[6]=
    {
        {
            (char *)"solutionName",/* Member name */
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
            (char *)"referenceFrame",/* Member name */
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
            (char *)"sourceBody",/* Member name */
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
            (char *)"targetBody",/* Member name */
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
            (char *)"timeOffset",/* Member name */
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
            (char *)"period",/* Member name */
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
        }
    };

    static DDS_TypeCode EphemerisConfigEntry_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::EphemerisConfigEntry", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        EphemerisConfigEntry_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EphemerisConfigEntry*/

    if (is_initialized) {
        return &EphemerisConfigEntry_g_tc;
    }


    EphemerisConfigEntry_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&EphemerisConfigEntry_g_tc_solutionName_string;
    EphemerisConfigEntry_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&EphemerisConfigEntry_g_tc_referenceFrame_string;
    EphemerisConfigEntry_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&EphemerisConfigEntry_g_tc_sourceBody_string;
    EphemerisConfigEntry_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&EphemerisConfigEntry_g_tc_targetBody_string;
    EphemerisConfigEntry_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    EphemerisConfigEntry_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &EphemerisConfigEntry_g_tc;
}


RTIBool EphemerisConfigEntry_initialize(
    EphemerisConfigEntry* sample) {
  return ::rapid::ext::arc::EphemerisConfigEntry_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EphemerisConfigEntry_initialize_ex(
    EphemerisConfigEntry* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::EphemerisConfigEntry_initialize_w_params(
        sample,&allocParams);
}

RTIBool EphemerisConfigEntry_initialize_w_params(
        EphemerisConfigEntry* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (allocParams->allocate_memory) {
        sample->solutionName = DDS_String_alloc((255));
        if (sample->solutionName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->solutionName != NULL) { 
            sample->solutionName[0] = '\0';
        }
    }
            

    if (allocParams->allocate_memory) {
        sample->referenceFrame = DDS_String_alloc((255));
        if (sample->referenceFrame == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->referenceFrame != NULL) { 
            sample->referenceFrame[0] = '\0';
        }
    }
            

    if (allocParams->allocate_memory) {
        sample->sourceBody = DDS_String_alloc((255));
        if (sample->sourceBody == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->sourceBody != NULL) { 
            sample->sourceBody[0] = '\0';
        }
    }
            

    if (allocParams->allocate_memory) {
        sample->targetBody = DDS_String_alloc((255));
        if (sample->targetBody == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->targetBody != NULL) { 
            sample->targetBody[0] = '\0';
        }
    }
            

    if (!RTICdrType_initLongLong(&sample->timeOffset)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->period)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void EphemerisConfigEntry_finalize(
    EphemerisConfigEntry* sample)
{
    ::rapid::ext::arc::EphemerisConfigEntry_finalize_ex(sample,RTI_TRUE);
}
        
void EphemerisConfigEntry_finalize_ex(
    EphemerisConfigEntry* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::EphemerisConfigEntry_finalize_w_params(
        sample,&deallocParams);
}

void EphemerisConfigEntry_finalize_w_params(
        EphemerisConfigEntry* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    if (sample->solutionName != NULL) {    
        DDS_String_free(sample->solutionName);
        sample->solutionName = NULL;
    }
            

    if (sample->referenceFrame != NULL) {    
        DDS_String_free(sample->referenceFrame);
        sample->referenceFrame = NULL;
    }
            

    if (sample->sourceBody != NULL) {    
        DDS_String_free(sample->sourceBody);
        sample->sourceBody = NULL;
    }
            

    if (sample->targetBody != NULL) {    
        DDS_String_free(sample->targetBody);
        sample->targetBody = NULL;
    }
            



}

void EphemerisConfigEntry_finalize_optional_members(
    EphemerisConfigEntry* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             







}

RTIBool EphemerisConfigEntry_copy(
    EphemerisConfigEntry* dst,
    const EphemerisConfigEntry* src)
{

    if (!RTICdrType_copyString(
        dst->solutionName, src->solutionName, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->referenceFrame, src->referenceFrame, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->sourceBody, src->sourceBody, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->targetBody, src->targetBody, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->timeOffset, &src->timeOffset)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->period, &src->period)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EphemerisConfigEntry' sequence class.
 */
#define T EphemerisConfigEntry
#define TSeq EphemerisConfigEntrySeq
#define T_initialize_w_params ::rapid::ext::arc::EphemerisConfigEntry_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::EphemerisConfigEntry_finalize_w_params
#define T_copy       ::rapid::ext::arc::EphemerisConfigEntry_copy

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

DDS_TypeCode* EphemerisConfigVector32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode EphemerisConfigVector32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode EphemerisConfigVector32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::EphemerisConfigVector32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EphemerisConfigVector32 */

    if (is_initialized) {
        return &EphemerisConfigVector32_g_tc;
    }

    EphemerisConfigVector32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::EphemerisConfigEntry_get_typecode();
    EphemerisConfigVector32_g_tc._data._typeCode = (RTICdrTypeCode *)&EphemerisConfigVector32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &EphemerisConfigVector32_g_tc;
}


RTIBool EphemerisConfigVector32_initialize(
    EphemerisConfigVector32* sample)
{
    return ::rapid::ext::arc::EphemerisConfigVector32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool EphemerisConfigVector32_initialize_ex(
    EphemerisConfigVector32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::EphemerisConfigVector32_initialize_w_params(
        sample,&allocParams);
}

RTIBool EphemerisConfigVector32_initialize_w_params(
        EphemerisConfigVector32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::EphemerisConfigEntrySeq_initialize(sample);
        rapid::ext::arc::EphemerisConfigEntrySeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::EphemerisConfigEntrySeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::EphemerisConfigEntrySeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void EphemerisConfigVector32_finalize(
    EphemerisConfigVector32* sample)
{
    ::rapid::ext::arc::EphemerisConfigVector32_finalize_ex(sample,RTI_TRUE);
}
 
void EphemerisConfigVector32_finalize_ex(
    EphemerisConfigVector32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::EphemerisConfigVector32_finalize_w_params(
        sample,&deallocParams);
}
           
void EphemerisConfigVector32_finalize_w_params(
    EphemerisConfigVector32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::EphemerisConfigEntrySeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::EphemerisConfigEntrySeq_finalize(sample);
            

}

void EphemerisConfigVector32_finalize_optional_members(
    EphemerisConfigVector32* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::EphemerisConfigEntrySeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::EphemerisConfigEntry_finalize_optional_members(
                rapid::ext::arc::EphemerisConfigEntrySeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool EphemerisConfigVector32_copy(
    EphemerisConfigVector32* dst,
    const EphemerisConfigVector32* src)
{

    if (!rapid::ext::arc::EphemerisConfigEntrySeq_copy(dst,
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
 * Configure and implement 'EphemerisConfigVector32' sequence class.
 */
#define T            EphemerisConfigVector32
#define TSeq         EphemerisConfigVector32Seq
#define T_initialize_w_params ::rapid::ext::arc::EphemerisConfigVector32_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::EphemerisConfigVector32_finalize_w_params
#define T_copy       ::rapid::ext::arc::EphemerisConfigVector32_copy


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
const char *EphemerisConfigTYPENAME = "rapid::ext::arc::EphemerisConfig";

DDS_TypeCode* EphemerisConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EphemerisConfig_g_tc_members[1]=
    {
        {
            (char *)"entries",/* Member name */
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

    static DDS_TypeCode EphemerisConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::EphemerisConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        EphemerisConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for EphemerisConfig*/

    if (is_initialized) {
        return &EphemerisConfig_g_tc;
    }


    EphemerisConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::EphemerisConfigVector32_get_typecode();

    EphemerisConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &EphemerisConfig_g_tc;
}


RTIBool EphemerisConfig_initialize(
    EphemerisConfig* sample) {
  return ::rapid::ext::arc::EphemerisConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EphemerisConfig_initialize_ex(
    EphemerisConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::EphemerisConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool EphemerisConfig_initialize_w_params(
        EphemerisConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::arc::EphemerisConfigVector32_initialize_w_params(&sample->entries,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void EphemerisConfig_finalize(
    EphemerisConfig* sample)
{
    ::rapid::ext::arc::EphemerisConfig_finalize_ex(sample,RTI_TRUE);
}
        
void EphemerisConfig_finalize_ex(
    EphemerisConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::EphemerisConfig_finalize_w_params(
        sample,&deallocParams);
}

void EphemerisConfig_finalize_w_params(
        EphemerisConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::arc::EphemerisConfigVector32_finalize_w_params(&sample->entries, deallocParams);
            

}

void EphemerisConfig_finalize_optional_members(
    EphemerisConfig* sample, RTIBool deletePointers)
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
             

    rapid::ext::arc::EphemerisConfigVector32_finalize_optional_members(&sample->entries, deallocParams->delete_pointers);
            

}

RTIBool EphemerisConfig_copy(
    EphemerisConfig* dst,
    const EphemerisConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::arc::EphemerisConfigVector32_copy(
        &dst->entries, &src->entries)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EphemerisConfig' sequence class.
 */
#define T EphemerisConfig
#define TSeq EphemerisConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::EphemerisConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::EphemerisConfig_finalize_w_params
#define T_copy       ::rapid::ext::arc::EphemerisConfig_copy

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
