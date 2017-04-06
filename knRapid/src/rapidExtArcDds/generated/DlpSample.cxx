
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpSample.idl using "rtiddsgen".
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



#include "DlpSample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *DlpChannelSampleTYPENAME = "rapid::ext::arc::DlpChannelSample";

DDS_TypeCode* DlpChannelSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DlpChannelSample_g_tc_members[3]=
    {
        {
            (char *)"powered",/* Member name */
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
            (char *)"voltage",/* Member name */
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
            (char *)"current",/* Member name */
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

    static DDS_TypeCode DlpChannelSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::DlpChannelSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        DlpChannelSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DlpChannelSample*/

    if (is_initialized) {
        return &DlpChannelSample_g_tc;
    }


    DlpChannelSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    DlpChannelSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    DlpChannelSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &DlpChannelSample_g_tc;
}


RTIBool DlpChannelSample_initialize(
    DlpChannelSample* sample) {
  return ::rapid::ext::arc::DlpChannelSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DlpChannelSample_initialize_ex(
    DlpChannelSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpChannelSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpChannelSample_initialize_w_params(
        DlpChannelSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initBoolean(&sample->powered)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->voltage)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->current)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void DlpChannelSample_finalize(
    DlpChannelSample* sample)
{
    ::rapid::ext::arc::DlpChannelSample_finalize_ex(sample,RTI_TRUE);
}
        
void DlpChannelSample_finalize_ex(
    DlpChannelSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpChannelSample_finalize_w_params(
        sample,&deallocParams);
}

void DlpChannelSample_finalize_w_params(
        DlpChannelSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void DlpChannelSample_finalize_optional_members(
    DlpChannelSample* sample, RTIBool deletePointers)
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

RTIBool DlpChannelSample_copy(
    DlpChannelSample* dst,
    const DlpChannelSample* src)
{

    if (!RTICdrType_copyBoolean(
        &dst->powered, &src->powered)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->voltage, &src->voltage)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->current, &src->current)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DlpChannelSample' sequence class.
 */
#define T DlpChannelSample
#define TSeq DlpChannelSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::DlpChannelSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpChannelSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpChannelSample_copy

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
const char *DlpBoardSampleTYPENAME = "rapid::ext::arc::DlpBoardSample";

DDS_TypeCode* DlpBoardSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DlpBoardSample_g_tc_channels_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member DlpBoardSample_g_tc_members[2]=
    {
        {
            (char *)"channels",/* Member name */
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
            (char *)"temp",/* Member name */
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
        }
    };

    static DDS_TypeCode DlpBoardSample_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::DlpBoardSample", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        DlpBoardSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DlpBoardSample*/

    if (is_initialized) {
        return &DlpBoardSample_g_tc;
    }

    DlpBoardSample_g_tc_channels_array._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpChannelSample_get_typecode();

    DlpBoardSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DlpBoardSample_g_tc_channels_array;
    DlpBoardSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &DlpBoardSample_g_tc;
}


RTIBool DlpBoardSample_initialize(
    DlpBoardSample* sample) {
  return ::rapid::ext::arc::DlpBoardSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DlpBoardSample_initialize_ex(
    DlpBoardSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpBoardSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpBoardSample_initialize_w_params(
        DlpBoardSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    {
        int i = 0;
        rapid::ext::arc::DlpChannelSample* elem =
            (rapid::ext::arc::DlpChannelSample*) &sample->channels[0];

        for (i = 0; i < (int)((3)); ++i, ++elem) {
            if (!rapid::ext::arc::DlpChannelSample_initialize_w_params(elem,allocParams)) {
                return RTI_FALSE;
            }
        }
    }
            

    if (!RTICdrType_initFloat(&sample->temp)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void DlpBoardSample_finalize(
    DlpBoardSample* sample)
{
    ::rapid::ext::arc::DlpBoardSample_finalize_ex(sample,RTI_TRUE);
}
        
void DlpBoardSample_finalize_ex(
    DlpBoardSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpBoardSample_finalize_w_params(
        sample,&deallocParams);
}

void DlpBoardSample_finalize_w_params(
        DlpBoardSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    
    {
        int i = 0;
        rapid::ext::arc::DlpChannelSample* elem =
            (rapid::ext::arc::DlpChannelSample*) &sample->channels[0];

        for (i = 0; i < (int)((3)); ++i, ++elem) {
            rapid::ext::arc::DlpChannelSample_finalize_w_params(elem, deallocParams);
        }
    }
            


}

void DlpBoardSample_finalize_optional_members(
    DlpBoardSample* sample, RTIBool deletePointers)
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
        int i = 0;
        rapid::ext::arc::DlpChannelSample* elem =
            (rapid::ext::arc::DlpChannelSample*) &sample->channels[0];

        for (i = 0; i < (int)((3)); ++i, ++elem) {
            rapid::ext::arc::DlpChannelSample_finalize_optional_members(elem, deallocParams->delete_pointers);
        }
    }
            


}

RTIBool DlpBoardSample_copy(
    DlpBoardSample* dst,
    const DlpBoardSample* src)
{

    
    {
        int i = 0;
        rapid::ext::arc::DlpChannelSample* elemOut = (rapid::ext::arc::DlpChannelSample*) &dst->channels[0];
        const rapid::ext::arc::DlpChannelSample* elemIn = (const rapid::ext::arc::DlpChannelSample*) &src->channels[0];

        for (i = 0; i < (int)((3));
             ++i, ++elemOut, ++elemIn) {
            if (!rapid::ext::arc::DlpChannelSample_copy(elemOut,(const rapid::ext::arc::DlpChannelSample*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }
            

    if (!RTICdrType_copyFloat(
        &dst->temp, &src->temp)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DlpBoardSample' sequence class.
 */
#define T DlpBoardSample
#define TSeq DlpBoardSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::DlpBoardSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpBoardSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpBoardSample_copy

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

DDS_TypeCode* DlpBoardSampleSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode DlpBoardSampleSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode DlpBoardSampleSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::DlpBoardSampleSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DlpBoardSampleSequence32 */

    if (is_initialized) {
        return &DlpBoardSampleSequence32_g_tc;
    }

    DlpBoardSampleSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpBoardSample_get_typecode();
    DlpBoardSampleSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&DlpBoardSampleSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &DlpBoardSampleSequence32_g_tc;
}


RTIBool DlpBoardSampleSequence32_initialize(
    DlpBoardSampleSequence32* sample)
{
    return ::rapid::ext::arc::DlpBoardSampleSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool DlpBoardSampleSequence32_initialize_ex(
    DlpBoardSampleSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpBoardSampleSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpBoardSampleSequence32_initialize_w_params(
        DlpBoardSampleSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::DlpBoardSampleSeq_initialize(sample);
        rapid::ext::arc::DlpBoardSampleSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::DlpBoardSampleSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::DlpBoardSampleSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void DlpBoardSampleSequence32_finalize(
    DlpBoardSampleSequence32* sample)
{
    ::rapid::ext::arc::DlpBoardSampleSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void DlpBoardSampleSequence32_finalize_ex(
    DlpBoardSampleSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpBoardSampleSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void DlpBoardSampleSequence32_finalize_w_params(
    DlpBoardSampleSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::DlpBoardSampleSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::DlpBoardSampleSeq_finalize(sample);
            

}

void DlpBoardSampleSequence32_finalize_optional_members(
    DlpBoardSampleSequence32* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::DlpBoardSampleSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::DlpBoardSample_finalize_optional_members(
                rapid::ext::arc::DlpBoardSampleSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool DlpBoardSampleSequence32_copy(
    DlpBoardSampleSequence32* dst,
    const DlpBoardSampleSequence32* src)
{

    if (!rapid::ext::arc::DlpBoardSampleSeq_copy(dst,
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
 * Configure and implement 'DlpBoardSampleSequence32' sequence class.
 */
#define T            DlpBoardSampleSequence32
#define TSeq         DlpBoardSampleSequence32Seq
#define T_initialize_w_params ::rapid::ext::arc::DlpBoardSampleSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpBoardSampleSequence32_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpBoardSampleSequence32_copy


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
const char *DlpSampleTYPENAME = "rapid::ext::arc::DlpSample";

DDS_TypeCode* DlpSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DlpSample_g_tc_members[1]=
    {
        {
            (char *)"dlpBoards",/* Member name */
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

    static DDS_TypeCode DlpSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::DlpSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        DlpSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for DlpSample*/

    if (is_initialized) {
        return &DlpSample_g_tc;
    }


    DlpSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::DlpBoardSampleSequence32_get_typecode();

    DlpSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &DlpSample_g_tc;
}


RTIBool DlpSample_initialize(
    DlpSample* sample) {
  return ::rapid::ext::arc::DlpSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DlpSample_initialize_ex(
    DlpSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::DlpSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool DlpSample_initialize_w_params(
        DlpSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::arc::DlpBoardSampleSequence32_initialize_w_params(&sample->dlpBoards,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void DlpSample_finalize(
    DlpSample* sample)
{
    ::rapid::ext::arc::DlpSample_finalize_ex(sample,RTI_TRUE);
}
        
void DlpSample_finalize_ex(
    DlpSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::DlpSample_finalize_w_params(
        sample,&deallocParams);
}

void DlpSample_finalize_w_params(
        DlpSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::arc::DlpBoardSampleSequence32_finalize_w_params(&sample->dlpBoards, deallocParams);
            

}

void DlpSample_finalize_optional_members(
    DlpSample* sample, RTIBool deletePointers)
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
             

    rapid::ext::arc::DlpBoardSampleSequence32_finalize_optional_members(&sample->dlpBoards, deallocParams->delete_pointers);
            

}

RTIBool DlpSample_copy(
    DlpSample* dst,
    const DlpSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::arc::DlpBoardSampleSequence32_copy(
        &dst->dlpBoards, &src->dlpBoards)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DlpSample' sequence class.
 */
#define T DlpSample
#define TSeq DlpSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::DlpSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::DlpSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::DlpSample_copy

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
