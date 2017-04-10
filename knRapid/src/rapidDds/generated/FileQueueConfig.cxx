
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueConfig.idl using "rtiddsgen".
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



#include "FileQueueConfig.h"


namespace rapid{
/* ========================================================================= */
const char *ChannelConfigTYPENAME = "rapid::ChannelConfig";

DDS_TypeCode* ChannelConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ChannelConfig_g_tc_members[2]=
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
            (char *)"numTokens",/* Member name */
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

    static DDS_TypeCode ChannelConfig_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ChannelConfig", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        ChannelConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ChannelConfig*/

    if (is_initialized) {
        return &ChannelConfig_g_tc;
    }


    ChannelConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    ChannelConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &ChannelConfig_g_tc;
}


RTIBool ChannelConfig_initialize(
    ChannelConfig* sample) {
  return ::rapid::ChannelConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ChannelConfig_initialize_ex(
    ChannelConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ChannelConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool ChannelConfig_initialize_w_params(
        ChannelConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::String32_initialize_w_params(&sample->name,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initShort(&sample->numTokens)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void ChannelConfig_finalize(
    ChannelConfig* sample)
{
    ::rapid::ChannelConfig_finalize_ex(sample,RTI_TRUE);
}
        
void ChannelConfig_finalize_ex(
    ChannelConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ChannelConfig_finalize_w_params(
        sample,&deallocParams);
}

void ChannelConfig_finalize_w_params(
        ChannelConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::String32_finalize_w_params(&sample->name, deallocParams);
            


}

void ChannelConfig_finalize_optional_members(
    ChannelConfig* sample, RTIBool deletePointers)
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
            


}

RTIBool ChannelConfig_copy(
    ChannelConfig* dst,
    const ChannelConfig* src)
{

    if (!rapid::String32_copy(
        &dst->name, &src->name)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->numTokens, &src->numTokens)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ChannelConfig' sequence class.
 */
#define T ChannelConfig
#define TSeq ChannelConfigSeq
#define T_initialize_w_params ::rapid::ChannelConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::ChannelConfig_finalize_w_params
#define T_copy       ::rapid::ChannelConfig_copy

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

DDS_TypeCode* ChannelConfigSequence_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ChannelConfigSequence_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(8,NULL);

    static DDS_TypeCode ChannelConfigSequence_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ChannelConfigSequence", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ChannelConfigSequence */

    if (is_initialized) {
        return &ChannelConfigSequence_g_tc;
    }

    ChannelConfigSequence_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ChannelConfig_get_typecode();
    ChannelConfigSequence_g_tc._data._typeCode = (RTICdrTypeCode *)&ChannelConfigSequence_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &ChannelConfigSequence_g_tc;
}


RTIBool ChannelConfigSequence_initialize(
    ChannelConfigSequence* sample)
{
    return ::rapid::ChannelConfigSequence_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ChannelConfigSequence_initialize_ex(
    ChannelConfigSequence* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ChannelConfigSequence_initialize_w_params(
        sample,&allocParams);
}

RTIBool ChannelConfigSequence_initialize_w_params(
        ChannelConfigSequence* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ChannelConfigSeq_initialize(sample);
        rapid::ChannelConfigSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ChannelConfigSeq_set_maximum(sample,
                                           (8))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ChannelConfigSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void ChannelConfigSequence_finalize(
    ChannelConfigSequence* sample)
{
    ::rapid::ChannelConfigSequence_finalize_ex(sample,RTI_TRUE);
}
 
void ChannelConfigSequence_finalize_ex(
    ChannelConfigSequence* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ChannelConfigSequence_finalize_w_params(
        sample,&deallocParams);
}
           
void ChannelConfigSequence_finalize_w_params(
    ChannelConfigSequence* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ChannelConfigSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ChannelConfigSeq_finalize(sample);
            

}

void ChannelConfigSequence_finalize_optional_members(
    ChannelConfigSequence* sample, RTIBool deletePointers)
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
        length = rapid::ChannelConfigSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ChannelConfig_finalize_optional_members(
                rapid::ChannelConfigSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool ChannelConfigSequence_copy(
    ChannelConfigSequence* dst,
    const ChannelConfigSequence* src)
{

    if (!rapid::ChannelConfigSeq_copy(dst,
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
 * Configure and implement 'ChannelConfigSequence' sequence class.
 */
#define T            ChannelConfigSequence
#define TSeq         ChannelConfigSequenceSeq
#define T_initialize_w_params ::rapid::ChannelConfigSequence_initialize_w_params
#define T_finalize_w_params   ::rapid::ChannelConfigSequence_finalize_w_params
#define T_copy       ::rapid::ChannelConfigSequence_copy


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
const char *FileQueueConfigTYPENAME = "rapid::FileQueueConfig";

DDS_TypeCode* FileQueueConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FileQueueConfig_g_tc_members[1]=
    {
        {
            (char *)"channels",/* Member name */
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

    static DDS_TypeCode FileQueueConfig_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FileQueueConfig", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        FileQueueConfig_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for FileQueueConfig*/

    if (is_initialized) {
        return &FileQueueConfig_g_tc;
    }


    FileQueueConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ChannelConfigSequence_get_typecode();

    FileQueueConfig_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &FileQueueConfig_g_tc;
}


RTIBool FileQueueConfig_initialize(
    FileQueueConfig* sample) {
  return ::rapid::FileQueueConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FileQueueConfig_initialize_ex(
    FileQueueConfig* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FileQueueConfig_initialize_w_params(
        sample,&allocParams);
}

RTIBool FileQueueConfig_initialize_w_params(
        FileQueueConfig* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ChannelConfigSequence_initialize_w_params(&sample->channels,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void FileQueueConfig_finalize(
    FileQueueConfig* sample)
{
    ::rapid::FileQueueConfig_finalize_ex(sample,RTI_TRUE);
}
        
void FileQueueConfig_finalize_ex(
    FileQueueConfig* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FileQueueConfig_finalize_w_params(
        sample,&deallocParams);
}

void FileQueueConfig_finalize_w_params(
        FileQueueConfig* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ChannelConfigSequence_finalize_w_params(&sample->channels, deallocParams);
            

}

void FileQueueConfig_finalize_optional_members(
    FileQueueConfig* sample, RTIBool deletePointers)
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
             

    rapid::ChannelConfigSequence_finalize_optional_members(&sample->channels, deallocParams->delete_pointers);
            

}

RTIBool FileQueueConfig_copy(
    FileQueueConfig* dst,
    const FileQueueConfig* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ChannelConfigSequence_copy(
        &dst->channels, &src->channels)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FileQueueConfig' sequence class.
 */
#define T FileQueueConfig
#define TSeq FileQueueConfigSeq
#define T_initialize_w_params ::rapid::FileQueueConfig_initialize_w_params
#define T_finalize_w_params   ::rapid::FileQueueConfig_finalize_w_params
#define T_copy       ::rapid::FileQueueConfig_copy

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
