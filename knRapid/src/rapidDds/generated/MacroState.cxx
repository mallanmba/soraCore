
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroState.idl using "rtiddsgen".
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



#include "MacroState.h"


namespace rapid{
/* ========================================================================= */
const char *MacroInfoTYPENAME = "rapid::MacroInfo";

DDS_TypeCode* MacroInfo_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MacroInfo_g_tc_members[3]=
    {
        {
            (char *)"name",/* Member name */
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
            (char *)"serial",/* Member name */
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
            (char *)"accepted",/* Member name */
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
        }
    };

    static DDS_TypeCode MacroInfo_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::MacroInfo", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        MacroInfo_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MacroInfo*/

    if (is_initialized) {
        return &MacroInfo_g_tc;
    }


    MacroInfo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    MacroInfo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    MacroInfo_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &MacroInfo_g_tc;
}


RTIBool MacroInfo_initialize(
    MacroInfo* sample) {
  return ::rapid::MacroInfo_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MacroInfo_initialize_ex(
    MacroInfo* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::MacroInfo_initialize_w_params(
        sample,&allocParams);
}

RTIBool MacroInfo_initialize_w_params(
        MacroInfo* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String64_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->serial)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->accepted)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void MacroInfo_finalize(
    MacroInfo* sample)
{
    ::rapid::MacroInfo_finalize_ex(sample,RTI_TRUE);
}
        
void MacroInfo_finalize_ex(
    MacroInfo* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::MacroInfo_finalize_w_params(
        sample,&deallocParams);
}

void MacroInfo_finalize_w_params(
        MacroInfo* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String64_finalize_w_params(&sample->name, deallocParams);
            



}

void MacroInfo_finalize_optional_members(
    MacroInfo* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String64_finalize_optional_members(&sample->name, deallocParams->delete_pointers);
            



}

RTIBool MacroInfo_copy(
    MacroInfo* dst,
    const MacroInfo* src)
{

    if (!rapid::String64_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->serial, &src->serial)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->accepted, &src->accepted)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MacroInfo' sequence class.
 */
#define T MacroInfo
#define TSeq MacroInfoSeq
#define T_initialize_w_params ::rapid::MacroInfo_initialize_w_params
#define T_finalize_w_params   ::rapid::MacroInfo_finalize_w_params
#define T_copy       ::rapid::MacroInfo_copy

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

DDS_TypeCode* MacroInfoSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode MacroInfoSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(128,NULL);

    static DDS_TypeCode MacroInfoSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::MacroInfoSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MacroInfoSequence */

    if (is_initialized) {
        return &MacroInfoSequence_g_tc;
    }

    MacroInfoSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::MacroInfo_get_typecode();
    MacroInfoSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&MacroInfoSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &MacroInfoSequence_g_tc;
}


RTIBool MacroInfoSequence_initialize(
    MacroInfoSequence* sample)
{
    return ::rapid::MacroInfoSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool MacroInfoSequence_initialize_ex(
    MacroInfoSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::MacroInfoSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool MacroInfoSequence_initialize_w_params(
        MacroInfoSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::MacroInfoSeq_initialize(sample);
        rapid::MacroInfoSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::MacroInfoSeq_set_maximum(sample,
                                           (128))) {
            return RTI_FALSE;
        }
    } else {
        rapid::MacroInfoSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void MacroInfoSequence_finalize(
    MacroInfoSequence* sample)
{
    ::rapid::MacroInfoSequence_finalize_ex(sample,RTI_TRUE);
}
 
void MacroInfoSequence_finalize_ex(
    MacroInfoSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::MacroInfoSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void MacroInfoSequence_finalize_w_params(
    MacroInfoSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::MacroInfoSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::MacroInfoSeq_finalize(sample);
            

}

void MacroInfoSequence_finalize_optional_members(
    MacroInfoSequence* sample, RTIBool deletePointers)
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
        length = rapid::MacroInfoSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::MacroInfo_finalize_optional_members(
                rapid::MacroInfoSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool MacroInfoSequence_copy(
    MacroInfoSequence* dst,
    const MacroInfoSequence* src)
{

    if (!rapid::MacroInfoSeq_copy(dst,
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
 * Configure and implement 'MacroInfoSequence' sequence class.
 */
#define T            MacroInfoSequence
#define TSeq         MacroInfoSequenceSeq
#define T_initialize_w_params ::rapid::MacroInfoSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::MacroInfoSequence_finalize_w_params
#define T_copy       ::rapid::MacroInfoSequence_copy


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
const char *MacroStateTYPENAME = "rapid::MacroState";

DDS_TypeCode* MacroState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MacroState_g_tc_members[1]=
    {
        {
            (char *)"macros",/* Member name */
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

    static DDS_TypeCode MacroState_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::MacroState", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        MacroState_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for MacroState*/

    if (is_initialized) {
        return &MacroState_g_tc;
    }


    MacroState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::MacroInfoSequence_get_typecode();

    MacroState_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &MacroState_g_tc;
}


RTIBool MacroState_initialize(
    MacroState* sample) {
  return ::rapid::MacroState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MacroState_initialize_ex(
    MacroState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::MacroState_initialize_w_params(
        sample,&allocParams);
}

RTIBool MacroState_initialize_w_params(
        MacroState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::MacroInfoSequence_initialize_w_params(&sample->macros,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void MacroState_finalize(
    MacroState* sample)
{
    ::rapid::MacroState_finalize_ex(sample,RTI_TRUE);
}
        
void MacroState_finalize_ex(
    MacroState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::MacroState_finalize_w_params(
        sample,&deallocParams);
}

void MacroState_finalize_w_params(
        MacroState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::MacroInfoSequence_finalize_w_params(&sample->macros, deallocParams);
            

}

void MacroState_finalize_optional_members(
    MacroState* sample, RTIBool deletePointers)
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
             

    rapid::MacroInfoSequence_finalize_optional_members(&sample->macros, deallocParams->delete_pointers);
            

}

RTIBool MacroState_copy(
    MacroState* dst,
    const MacroState* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::MacroInfoSequence_copy(
        &dst->macros, &src->macros)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MacroState' sequence class.
 */
#define T MacroState
#define TSeq MacroStateSeq
#define T_initialize_w_params ::rapid::MacroState_initialize_w_params
#define T_finalize_w_params   ::rapid::MacroState_finalize_w_params
#define T_copy       ::rapid::MacroState_copy

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
