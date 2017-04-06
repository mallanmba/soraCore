
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeTypes.idl using "rtiddsgen".
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



#include "NoticeTypes.h"


namespace rapid{

namespace ext{

namespace traclabs{
/* ========================================================================= */
const char *LatencyTypeTYPENAME = "rapid::ext::traclabs::LatencyType";

DDS_TypeCode* LatencyType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member LatencyType_g_tc_members[4] =
    {
        {
            (char *)"LATENCY_DONTCARE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LATENCY_DONTCARE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"LATENCY_IMMEDIATE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LATENCY_IMMEDIATE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"LATENCY_DEFERRED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LATENCY_DEFERRED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"LATENCY_ARCHIVE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            LATENCY_ARCHIVE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode LatencyType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::traclabs::LatencyType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
        LatencyType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &LatencyType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &LatencyType_g_tc;
}
 

RTIBool LatencyType_initialize(
    LatencyType* sample)
{
    *sample = LATENCY_DONTCARE;
    return RTI_TRUE;
}
        
RTIBool LatencyType_initialize_ex(
    LatencyType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = LATENCY_DONTCARE;
    return RTI_TRUE;
}

RTIBool LatencyType_initialize_w_params(
        LatencyType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = LATENCY_DONTCARE;
    return RTI_TRUE;
}

void LatencyType_finalize(
    LatencyType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void LatencyType_finalize_ex(
    LatencyType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void LatencyType_finalize_w_params(
        LatencyType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool LatencyType_copy(
    LatencyType* dst,
    const LatencyType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool LatencyType_getValues(LatencyTypeSeq * values) 
    
{
    int i = 0;
    LatencyType * buffer;


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = LATENCY_DONTCARE;
    i++;
    
    buffer[i] = LATENCY_IMMEDIATE;
    i++;
    
    buffer[i] = LATENCY_DEFERRED;
    i++;
    
    buffer[i] = LATENCY_ARCHIVE;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'LatencyType' sequence class.
 */
#define T LatencyType
#define TSeq LatencyTypeSeq
#define T_initialize_w_params LatencyType_initialize_w_params
#define T_finalize_w_params   LatencyType_finalize_w_params
#define T_copy       LatencyType_copy

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
const char *FocusOfAttentionTypeTYPENAME = "rapid::ext::traclabs::FocusOfAttentionType";

DDS_TypeCode* FocusOfAttentionType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member FocusOfAttentionType_g_tc_members[4] =
    {
        {
            (char *)"FA_DONTCARE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FA_DONTCARE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"FA_PRIMARY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FA_PRIMARY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"FA_SECONDARY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FA_SECONDARY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"FA_NOSHIFT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            FA_NOSHIFT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode FocusOfAttentionType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::traclabs::FocusOfAttentionType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of enumerators */
        FocusOfAttentionType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &FocusOfAttentionType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &FocusOfAttentionType_g_tc;
}
 

RTIBool FocusOfAttentionType_initialize(
    FocusOfAttentionType* sample)
{
    *sample = FA_DONTCARE;
    return RTI_TRUE;
}
        
RTIBool FocusOfAttentionType_initialize_ex(
    FocusOfAttentionType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = FA_DONTCARE;
    return RTI_TRUE;
}

RTIBool FocusOfAttentionType_initialize_w_params(
        FocusOfAttentionType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = FA_DONTCARE;
    return RTI_TRUE;
}

void FocusOfAttentionType_finalize(
    FocusOfAttentionType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void FocusOfAttentionType_finalize_ex(
    FocusOfAttentionType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void FocusOfAttentionType_finalize_w_params(
        FocusOfAttentionType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool FocusOfAttentionType_copy(
    FocusOfAttentionType* dst,
    const FocusOfAttentionType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool FocusOfAttentionType_getValues(FocusOfAttentionTypeSeq * values) 
    
{
    int i = 0;
    FocusOfAttentionType * buffer;


    if (!values->maximum(4)) {
        return RTI_FALSE;
    }

    if (!values->length(4)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = FA_DONTCARE;
    i++;
    
    buffer[i] = FA_PRIMARY;
    i++;
    
    buffer[i] = FA_SECONDARY;
    i++;
    
    buffer[i] = FA_NOSHIFT;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'FocusOfAttentionType' sequence class.
 */
#define T FocusOfAttentionType
#define TSeq FocusOfAttentionTypeSeq
#define T_initialize_w_params FocusOfAttentionType_initialize_w_params
#define T_finalize_w_params   FocusOfAttentionType_finalize_w_params
#define T_copy       FocusOfAttentionType_copy

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
const char *ModalityTypeTYPENAME = "rapid::ext::traclabs::ModalityType";

DDS_TypeCode* ModalityType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member ModalityType_g_tc_members[10] =
    {
        {
            (char *)"MODALITY_DONTCARE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_DONTCARE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_3DNOTICE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_3DNOTICE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_3DAVATAR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_3DAVATAR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_WEBGUI",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_WEBGUI, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_EMAIL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_EMAIL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_DISPLAY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_DISPLAY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_DISPLAYQUEUE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_DISPLAYQUEUE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_PERSONALARCHIVE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_PERSONALARCHIVE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_SPEECH",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_SPEECH, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"MODALITY_STATUSBAR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            MODALITY_STATUSBAR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ModalityType_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::traclabs::ModalityType", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        10, /* Number of enumerators */
        ModalityType_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &ModalityType_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &ModalityType_g_tc;
}
 

RTIBool ModalityType_initialize(
    ModalityType* sample)
{
    *sample = MODALITY_DONTCARE;
    return RTI_TRUE;
}
        
RTIBool ModalityType_initialize_ex(
    ModalityType* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = MODALITY_DONTCARE;
    return RTI_TRUE;
}

RTIBool ModalityType_initialize_w_params(
        ModalityType* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = MODALITY_DONTCARE;
    return RTI_TRUE;
}

void ModalityType_finalize(
    ModalityType* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void ModalityType_finalize_ex(
    ModalityType* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void ModalityType_finalize_w_params(
        ModalityType* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool ModalityType_copy(
    ModalityType* dst,
    const ModalityType* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool ModalityType_getValues(ModalityTypeSeq * values) 
    
{
    int i = 0;
    ModalityType * buffer;


    if (!values->maximum(10)) {
        return RTI_FALSE;
    }

    if (!values->length(10)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = MODALITY_DONTCARE;
    i++;
    
    buffer[i] = MODALITY_3DNOTICE;
    i++;
    
    buffer[i] = MODALITY_3DAVATAR;
    i++;
    
    buffer[i] = MODALITY_WEBGUI;
    i++;
    
    buffer[i] = MODALITY_EMAIL;
    i++;
    
    buffer[i] = MODALITY_DISPLAY;
    i++;
    
    buffer[i] = MODALITY_DISPLAYQUEUE;
    i++;
    
    buffer[i] = MODALITY_PERSONALARCHIVE;
    i++;
    
    buffer[i] = MODALITY_SPEECH;
    i++;
    
    buffer[i] = MODALITY_STATUSBAR;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ModalityType' sequence class.
 */
#define T ModalityType
#define TSeq ModalityTypeSeq
#define T_initialize_w_params ModalityType_initialize_w_params
#define T_finalize_w_params   ModalityType_finalize_w_params
#define T_copy       ModalityType_copy

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
const char *NoticeAckStateTYPENAME = "rapid::ext::traclabs::NoticeAckState";

DDS_TypeCode* NoticeAckState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member NoticeAckState_g_tc_members[3] =
    {
        {
            (char *)"NAS_DONTCARE",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            NAS_DONTCARE, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"NAS_UNACKNOWLEDGED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            NAS_UNACKNOWLEDGED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"NAS_ACKNOWLEDGED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            NAS_ACKNOWLEDGED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode NoticeAckState_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::traclabs::NoticeAckState", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        NoticeAckState_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &NoticeAckState_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &NoticeAckState_g_tc;
}
 

RTIBool NoticeAckState_initialize(
    NoticeAckState* sample)
{
    *sample = NAS_DONTCARE;
    return RTI_TRUE;
}
        
RTIBool NoticeAckState_initialize_ex(
    NoticeAckState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = NAS_DONTCARE;
    return RTI_TRUE;
}

RTIBool NoticeAckState_initialize_w_params(
        NoticeAckState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = NAS_DONTCARE;
    return RTI_TRUE;
}

void NoticeAckState_finalize(
    NoticeAckState* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void NoticeAckState_finalize_ex(
    NoticeAckState* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void NoticeAckState_finalize_w_params(
        NoticeAckState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool NoticeAckState_copy(
    NoticeAckState* dst,
    const NoticeAckState* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool NoticeAckState_getValues(NoticeAckStateSeq * values) 
    
{
    int i = 0;
    NoticeAckState * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = NAS_DONTCARE;
    i++;
    
    buffer[i] = NAS_UNACKNOWLEDGED;
    i++;
    
    buffer[i] = NAS_ACKNOWLEDGED;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'NoticeAckState' sequence class.
 */
#define T NoticeAckState
#define TSeq NoticeAckStateSeq
#define T_initialize_w_params NoticeAckState_initialize_w_params
#define T_finalize_w_params   NoticeAckState_finalize_w_params
#define T_copy       NoticeAckState_copy

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

} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */
