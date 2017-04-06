
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileAnnounce.idl using "rtiddsgen".
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



#include "FileAnnounce.h"


namespace rapid{
/* ========================================================================= */
const char *FileAnnounceTYPENAME = "rapid::FileAnnounce";

DDS_TypeCode* FileAnnounce_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member FileAnnounce_g_tc_members[4]=
    {
        {
            (char *)"fileUuid",/* Member name */
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
            (char *)"fileLocator",/* Member name */
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
            (char *)"fileSize",/* Member name */
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
            (char *)"metaData",/* Member name */
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

    static DDS_TypeCode FileAnnounce_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::FileAnnounce", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        FileAnnounce_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for FileAnnounce*/

    if (is_initialized) {
        return &FileAnnounce_g_tc;
    }


    FileAnnounce_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String64_get_typecode();
    FileAnnounce_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String256_get_typecode();
    FileAnnounce_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    FileAnnounce_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence16_get_typecode();

    FileAnnounce_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &FileAnnounce_g_tc;
}


RTIBool FileAnnounce_initialize(
    FileAnnounce* sample) {
  return ::rapid::FileAnnounce_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool FileAnnounce_initialize_ex(
    FileAnnounce* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::FileAnnounce_initialize_w_params(
        sample,&allocParams);
}

RTIBool FileAnnounce_initialize_w_params(
        FileAnnounce* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_initialize_w_params(&sample->fileUuid,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_initialize_w_params(&sample->fileLocator,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLongLong(&sample->fileSize)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::KeyTypeValueSequence16_initialize_w_params(&sample->metaData,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void FileAnnounce_finalize(
    FileAnnounce* sample)
{
    ::rapid::FileAnnounce_finalize_ex(sample,RTI_TRUE);
}
        
void FileAnnounce_finalize_ex(
    FileAnnounce* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::FileAnnounce_finalize_w_params(
        sample,&deallocParams);
}

void FileAnnounce_finalize_w_params(
        FileAnnounce* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String64_finalize_w_params(&sample->fileUuid, deallocParams);
            

    rapid::String256_finalize_w_params(&sample->fileLocator, deallocParams);
            


    rapid::KeyTypeValueSequence16_finalize_w_params(&sample->metaData, deallocParams);
            

}

void FileAnnounce_finalize_optional_members(
    FileAnnounce* sample, RTIBool deletePointers)
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
             

    rapid::String64_finalize_optional_members(&sample->fileUuid, deallocParams->delete_pointers);
            

    rapid::String256_finalize_optional_members(&sample->fileLocator, deallocParams->delete_pointers);
            


    rapid::KeyTypeValueSequence16_finalize_optional_members(&sample->metaData, deallocParams->delete_pointers);
            

}

RTIBool FileAnnounce_copy(
    FileAnnounce* dst,
    const FileAnnounce* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String64_copy(
        &dst->fileUuid, &src->fileUuid)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256_copy(
        &dst->fileLocator, &src->fileLocator)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->fileSize, &src->fileSize)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_copy(
        &dst->metaData, &src->metaData)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FileAnnounce' sequence class.
 */
#define T FileAnnounce
#define TSeq FileAnnounceSeq
#define T_initialize_w_params ::rapid::FileAnnounce_initialize_w_params
#define T_finalize_w_params   ::rapid::FileAnnounce_finalize_w_params
#define T_copy       ::rapid::FileAnnounce_copy

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
