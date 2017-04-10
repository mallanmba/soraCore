
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from WheelGroupSample.idl using "rtiddsgen".
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



#include "WheelGroupSample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *CtrlModeTYPENAME = "rapid::ext::arc::CtrlMode";

DDS_TypeCode* CtrlMode_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member CtrlMode_g_tc_members[5] =
    {
        {
            (char *)"CTRL_POSITION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CTRL_POSITION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CTRL_TRAPECOID",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CTRL_TRAPECOID, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CTRL_TRAJECTORY",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CTRL_TRAJECTORY, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CTRL_HOLD",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CTRL_HOLD, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CTRL_OFF",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CTRL_OFF, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode CtrlMode_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::CtrlMode", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of enumerators */
        CtrlMode_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &CtrlMode_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &CtrlMode_g_tc;
}
 

RTIBool CtrlMode_initialize(
    CtrlMode* sample)
{
    *sample = CTRL_POSITION;
    return RTI_TRUE;
}
        
RTIBool CtrlMode_initialize_ex(
    CtrlMode* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = CTRL_POSITION;
    return RTI_TRUE;
}

RTIBool CtrlMode_initialize_w_params(
        CtrlMode* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = CTRL_POSITION;
    return RTI_TRUE;
}

void CtrlMode_finalize(
    CtrlMode* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void CtrlMode_finalize_ex(
    CtrlMode* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void CtrlMode_finalize_w_params(
        CtrlMode* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool CtrlMode_copy(
    CtrlMode* dst,
    const CtrlMode* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool CtrlMode_getValues(CtrlModeSeq * values) 
    
{
    int i = 0;
    CtrlMode * buffer;


    if (!values->maximum(5)) {
        return RTI_FALSE;
    }

    if (!values->length(5)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = CTRL_POSITION;
    i++;
    
    buffer[i] = CTRL_TRAPECOID;
    i++;
    
    buffer[i] = CTRL_TRAJECTORY;
    i++;
    
    buffer[i] = CTRL_HOLD;
    i++;
    
    buffer[i] = CTRL_OFF;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CtrlMode' sequence class.
 */
#define T CtrlMode
#define TSeq CtrlModeSeq
#define T_initialize_w_params CtrlMode_initialize_w_params
#define T_finalize_w_params   CtrlMode_finalize_w_params
#define T_copy       CtrlMode_copy

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
const char *PositionModeTYPENAME = "rapid::ext::arc::PositionMode";

DDS_TypeCode* PositionMode_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member PositionMode_g_tc_members[3] =
    {
        {
            (char *)"POS_ABS",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            POS_ABS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"POS_REL",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            POS_REL, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"POS_NA",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            POS_NA, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode PositionMode_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::PositionMode", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of enumerators */
        PositionMode_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &PositionMode_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &PositionMode_g_tc;
}
 

RTIBool PositionMode_initialize(
    PositionMode* sample)
{
    *sample = POS_ABS;
    return RTI_TRUE;
}
        
RTIBool PositionMode_initialize_ex(
    PositionMode* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = POS_ABS;
    return RTI_TRUE;
}

RTIBool PositionMode_initialize_w_params(
        PositionMode* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = POS_ABS;
    return RTI_TRUE;
}

void PositionMode_finalize(
    PositionMode* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void PositionMode_finalize_ex(
    PositionMode* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void PositionMode_finalize_w_params(
        PositionMode* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool PositionMode_copy(
    PositionMode* dst,
    const PositionMode* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool PositionMode_getValues(PositionModeSeq * values) 
    
{
    int i = 0;
    PositionMode * buffer;


    if (!values->maximum(3)) {
        return RTI_FALSE;
    }

    if (!values->length(3)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = POS_ABS;
    i++;
    
    buffer[i] = POS_REL;
    i++;
    
    buffer[i] = POS_NA;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PositionMode' sequence class.
 */
#define T PositionMode
#define TSeq PositionModeSeq
#define T_initialize_w_params PositionMode_initialize_w_params
#define T_finalize_w_params   PositionMode_finalize_w_params
#define T_copy       PositionMode_copy

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
const char *MotorProfileTYPENAME = "rapid::ext::arc::MotorProfile";

DDS_TypeCode* MotorProfile_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MotorProfile_g_tc_members[5]=
    {
        {
            (char *)"ctrlMode",/* Member name */
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
            (char *)"posMode",/* Member name */
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
            (char *)"position",/* Member name */
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
            (char *)"speed",/* Member name */
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
            (char *)"acc",/* Member name */
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

    static DDS_TypeCode MotorProfile_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::MotorProfile", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        MotorProfile_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MotorProfile*/

    if (is_initialized) {
        return &MotorProfile_g_tc;
    }


    MotorProfile_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::CtrlMode_get_typecode();
    MotorProfile_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::PositionMode_get_typecode();
    MotorProfile_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    MotorProfile_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    MotorProfile_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &MotorProfile_g_tc;
}


RTIBool MotorProfile_initialize(
    MotorProfile* sample) {
  return ::rapid::ext::arc::MotorProfile_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MotorProfile_initialize_ex(
    MotorProfile* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::MotorProfile_initialize_w_params(
        sample,&allocParams);
}

RTIBool MotorProfile_initialize_w_params(
        MotorProfile* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::ext::arc::CtrlMode_initialize_w_params(&sample->ctrlMode,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::PositionMode_initialize_w_params(&sample->posMode,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initDouble(&sample->position)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->speed)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->acc)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void MotorProfile_finalize(
    MotorProfile* sample)
{
    ::rapid::ext::arc::MotorProfile_finalize_ex(sample,RTI_TRUE);
}
        
void MotorProfile_finalize_ex(
    MotorProfile* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::MotorProfile_finalize_w_params(
        sample,&deallocParams);
}

void MotorProfile_finalize_w_params(
        MotorProfile* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::ext::arc::CtrlMode_finalize_w_params(&sample->ctrlMode, deallocParams);
            

    rapid::ext::arc::PositionMode_finalize_w_params(&sample->posMode, deallocParams);
            




}

void MotorProfile_finalize_optional_members(
    MotorProfile* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::ext::arc::CtrlMode_finalize_w_params(&sample->ctrlMode, deallocParams);
            

    rapid::ext::arc::PositionMode_finalize_w_params(&sample->posMode, deallocParams);
            




}

RTIBool MotorProfile_copy(
    MotorProfile* dst,
    const MotorProfile* src)
{

    if (!rapid::ext::arc::CtrlMode_copy(
        &dst->ctrlMode, &src->ctrlMode)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::PositionMode_copy(
        &dst->posMode, &src->posMode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->position, &src->position)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->speed, &src->speed)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->acc, &src->acc)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MotorProfile' sequence class.
 */
#define T MotorProfile
#define TSeq MotorProfileSeq
#define T_initialize_w_params ::rapid::ext::arc::MotorProfile_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::MotorProfile_finalize_w_params
#define T_copy       ::rapid::ext::arc::MotorProfile_copy

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
const char *MotorStateTYPENAME = "rapid::ext::arc::MotorState";

DDS_TypeCode* MotorState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MotorState_g_tc_members[3]=
    {
        {
            (char *)"cmd",/* Member name */
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
            (char *)"position",/* Member name */
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
            (char *)"speed",/* Member name */
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

    static DDS_TypeCode MotorState_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::MotorState", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        MotorState_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MotorState*/

    if (is_initialized) {
        return &MotorState_g_tc;
    }


    MotorState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::MotorProfile_get_typecode();
    MotorState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    MotorState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &MotorState_g_tc;
}


RTIBool MotorState_initialize(
    MotorState* sample) {
  return ::rapid::ext::arc::MotorState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MotorState_initialize_ex(
    MotorState* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::MotorState_initialize_w_params(
        sample,&allocParams);
}

RTIBool MotorState_initialize_w_params(
        MotorState* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!rapid::ext::arc::MotorProfile_initialize_w_params(&sample->cmd,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initDouble(&sample->position)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->speed)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void MotorState_finalize(
    MotorState* sample)
{
    ::rapid::ext::arc::MotorState_finalize_ex(sample,RTI_TRUE);
}
        
void MotorState_finalize_ex(
    MotorState* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::MotorState_finalize_w_params(
        sample,&deallocParams);
}

void MotorState_finalize_w_params(
        MotorState* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    rapid::ext::arc::MotorProfile_finalize_w_params(&sample->cmd, deallocParams);
            



}

void MotorState_finalize_optional_members(
    MotorState* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::ext::arc::MotorProfile_finalize_optional_members(&sample->cmd, deallocParams->delete_pointers);
            



}

RTIBool MotorState_copy(
    MotorState* dst,
    const MotorState* src)
{

    if (!rapid::ext::arc::MotorProfile_copy(
        &dst->cmd, &src->cmd)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->position, &src->position)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->speed, &src->speed)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MotorState' sequence class.
 */
#define T MotorState
#define TSeq MotorStateSeq
#define T_initialize_w_params ::rapid::ext::arc::MotorState_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::MotorState_finalize_w_params
#define T_copy       ::rapid::ext::arc::MotorState_copy

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

DDS_TypeCode* MotorStateSequence32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode MotorStateSequence32_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(32,NULL);

    static DDS_TypeCode MotorStateSequence32_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::MotorStateSequence32", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MotorStateSequence32 */

    if (is_initialized) {
        return &MotorStateSequence32_g_tc;
    }

    MotorStateSequence32_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::MotorState_get_typecode();
    MotorStateSequence32_g_tc._data._typeCode = (RTICdrTypeCode *)&MotorStateSequence32_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &MotorStateSequence32_g_tc;
}


RTIBool MotorStateSequence32_initialize(
    MotorStateSequence32* sample)
{
    return ::rapid::ext::arc::MotorStateSequence32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool MotorStateSequence32_initialize_ex(
    MotorStateSequence32* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::MotorStateSequence32_initialize_w_params(
        sample,&allocParams);
}

RTIBool MotorStateSequence32_initialize_w_params(
        MotorStateSequence32* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::MotorStateSeq_initialize(sample);
        rapid::ext::arc::MotorStateSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::MotorStateSeq_set_maximum(sample,
                                           (32))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::MotorStateSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void MotorStateSequence32_finalize(
    MotorStateSequence32* sample)
{
    ::rapid::ext::arc::MotorStateSequence32_finalize_ex(sample,RTI_TRUE);
}
 
void MotorStateSequence32_finalize_ex(
    MotorStateSequence32* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::MotorStateSequence32_finalize_w_params(
        sample,&deallocParams);
}
           
void MotorStateSequence32_finalize_w_params(
    MotorStateSequence32* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::MotorStateSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::MotorStateSeq_finalize(sample);
            

}

void MotorStateSequence32_finalize_optional_members(
    MotorStateSequence32* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::MotorStateSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::MotorState_finalize_optional_members(
                rapid::ext::arc::MotorStateSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool MotorStateSequence32_copy(
    MotorStateSequence32* dst,
    const MotorStateSequence32* src)
{

    if (!rapid::ext::arc::MotorStateSeq_copy(dst,
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
 * Configure and implement 'MotorStateSequence32' sequence class.
 */
#define T            MotorStateSequence32
#define TSeq         MotorStateSequence32Seq
#define T_initialize_w_params ::rapid::ext::arc::MotorStateSequence32_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::MotorStateSequence32_finalize_w_params
#define T_copy       ::rapid::ext::arc::MotorStateSequence32_copy


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
const char *WheelGroupSampleTYPENAME = "rapid::ext::arc::WheelGroupSample";

DDS_TypeCode* WheelGroupSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member WheelGroupSample_g_tc_members[15]=
    {
        {
            (char *)"targetTime",/* Member name */
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
            (char *)"curvature",/* Member name */
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
            (char *)"curvatureRate",/* Member name */
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
            (char *)"speed",/* Member name */
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
            (char *)"crabAngle",/* Member name */
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
            (char *)"crabRate",/* Member name */
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
            (char *)"targetCurvature",/* Member name */
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
            (char *)"targetCurvatureRate",/* Member name */
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
            (char *)"targetCrabRate",/* Member name */
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
        },
        {
            (char *)"targetSpeed",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 10),/* Representation ID */
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
            (char *)"targetCrabAngle",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 11),/* Representation ID */
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
            (char *)"motors",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 12),/* Representation ID */
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
            (char *)"motorStatus",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 13),/* Representation ID */
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
            (char *)"currents",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 14),/* Representation ID */
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
            (char *)"temperatures",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 15),/* Representation ID */
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

    static DDS_TypeCode WheelGroupSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::WheelGroupSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        15, /* Number of members */
        WheelGroupSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for WheelGroupSample*/

    if (is_initialized) {
        return &WheelGroupSample_g_tc;
    }


    WheelGroupSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    WheelGroupSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    WheelGroupSample_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::MotorStateSequence32_get_typecode();
    WheelGroupSample_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)rapid::LongSequence32_get_typecode();
    WheelGroupSample_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence32_get_typecode();
    WheelGroupSample_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)rapid::FloatSequence32_get_typecode();

    WheelGroupSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &WheelGroupSample_g_tc;
}


RTIBool WheelGroupSample_initialize(
    WheelGroupSample* sample) {
  return ::rapid::ext::arc::WheelGroupSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool WheelGroupSample_initialize_ex(
    WheelGroupSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::WheelGroupSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool WheelGroupSample_initialize_w_params(
        WheelGroupSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initLongLong(&sample->targetTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->curvature)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->curvatureRate)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->speed)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->crabAngle)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->crabRate)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->targetCurvature)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->targetCurvatureRate)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->targetCrabRate)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->targetSpeed)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->targetCrabAngle)) {
        return RTI_FALSE;
    }                
            

    if (!rapid::ext::arc::MotorStateSequence32_initialize_w_params(&sample->motors,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence32_initialize_w_params(&sample->motorStatus,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence32_initialize_w_params(&sample->currents,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence32_initialize_w_params(&sample->temperatures,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void WheelGroupSample_finalize(
    WheelGroupSample* sample)
{
    ::rapid::ext::arc::WheelGroupSample_finalize_ex(sample,RTI_TRUE);
}
        
void WheelGroupSample_finalize_ex(
    WheelGroupSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::WheelGroupSample_finalize_w_params(
        sample,&deallocParams);
}

void WheelGroupSample_finalize_w_params(
        WheelGroupSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);












    rapid::ext::arc::MotorStateSequence32_finalize_w_params(&sample->motors, deallocParams);
            

    rapid::LongSequence32_finalize_w_params(&sample->motorStatus, deallocParams);
            

    rapid::FloatSequence32_finalize_w_params(&sample->currents, deallocParams);
            

    rapid::FloatSequence32_finalize_w_params(&sample->temperatures, deallocParams);
            

}

void WheelGroupSample_finalize_optional_members(
    WheelGroupSample* sample, RTIBool deletePointers)
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
             












    rapid::ext::arc::MotorStateSequence32_finalize_optional_members(&sample->motors, deallocParams->delete_pointers);
            

    rapid::LongSequence32_finalize_optional_members(&sample->motorStatus, deallocParams->delete_pointers);
            

    rapid::FloatSequence32_finalize_optional_members(&sample->currents, deallocParams->delete_pointers);
            

    rapid::FloatSequence32_finalize_optional_members(&sample->temperatures, deallocParams->delete_pointers);
            

}

RTIBool WheelGroupSample_copy(
    WheelGroupSample* dst,
    const WheelGroupSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLongLong(
        &dst->targetTime, &src->targetTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->curvature, &src->curvature)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->curvatureRate, &src->curvatureRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->speed, &src->speed)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->crabAngle, &src->crabAngle)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->crabRate, &src->crabRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->targetCurvature, &src->targetCurvature)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->targetCurvatureRate, &src->targetCurvatureRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->targetCrabRate, &src->targetCrabRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->targetSpeed, &src->targetSpeed)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->targetCrabAngle, &src->targetCrabAngle)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::MotorStateSequence32_copy(
        &dst->motors, &src->motors)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence32_copy(
        &dst->motorStatus, &src->motorStatus)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence32_copy(
        &dst->currents, &src->currents)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence32_copy(
        &dst->temperatures, &src->temperatures)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'WheelGroupSample' sequence class.
 */
#define T WheelGroupSample
#define TSeq WheelGroupSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::WheelGroupSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::WheelGroupSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::WheelGroupSample_copy

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
