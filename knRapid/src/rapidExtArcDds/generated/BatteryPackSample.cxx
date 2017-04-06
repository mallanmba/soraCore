
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BatteryPackSample.idl using "rtiddsgen".
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



#include "BatteryPackSample.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *BatteryTYPENAME = "rapid::ext::arc::Battery";

DDS_TypeCode* Battery_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Battery_g_tc_members[12]=
    {
        {
            (char *)"serialNumber",/* Member name */
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
            (char *)"averageCurrent",/* Member name */
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
            (char *)"temperature",/* Member name */
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
            (char *)"relativeState",/* Member name */
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
            (char *)"absoluteState",/* Member name */
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
        },
        {
            (char *)"remainingCapacity",/* Member name */
            {
                6,/* Representation ID */
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
            (char *)"fullChargeCapacity",/* Member name */
            {
                7,/* Representation ID */
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
            (char *)"remainingTime",/* Member name */
            {
                8,/* Representation ID */
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
            (char *)"averageRemainingTime",/* Member name */
            {
                9,/* Representation ID */
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
            (char *)"averageRemainingChargeTime",/* Member name */
            {
                10,/* Representation ID */
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
            (char *)"numberOfChargeCycles",/* Member name */
            {
                11,/* Representation ID */
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

    static DDS_TypeCode Battery_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::Battery", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        12, /* Number of members */
        Battery_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Battery*/

    if (is_initialized) {
        return &Battery_g_tc;
    }


    Battery_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Battery_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Battery_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Battery_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Battery_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Battery_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Battery_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Battery_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    Battery_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Battery_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Battery_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Battery_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Battery_g_tc;
}


RTIBool Battery_initialize(
    Battery* sample) {
  return ::rapid::ext::arc::Battery_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Battery_initialize_ex(
    Battery* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::Battery_initialize_w_params(
        sample,&allocParams);
}

RTIBool Battery_initialize_w_params(
        Battery* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->serialNumber)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->voltage)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->averageCurrent)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->temperature)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->relativeState)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->absoluteState)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->remainingCapacity)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initFloat(&sample->fullChargeCapacity)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->remainingTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->averageRemainingTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->averageRemainingChargeTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->numberOfChargeCycles)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Battery_finalize(
    Battery* sample)
{
    ::rapid::ext::arc::Battery_finalize_ex(sample,RTI_TRUE);
}
        
void Battery_finalize_ex(
    Battery* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::Battery_finalize_w_params(
        sample,&deallocParams);
}

void Battery_finalize_w_params(
        Battery* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */














}

void Battery_finalize_optional_members(
    Battery* sample, RTIBool deletePointers)
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

RTIBool Battery_copy(
    Battery* dst,
    const Battery* src)
{

    if (!RTICdrType_copyLong(
        &dst->serialNumber, &src->serialNumber)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->voltage, &src->voltage)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->averageCurrent, &src->averageCurrent)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->temperature, &src->temperature)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->relativeState, &src->relativeState)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->absoluteState, &src->absoluteState)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->remainingCapacity, &src->remainingCapacity)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyFloat(
        &dst->fullChargeCapacity, &src->fullChargeCapacity)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->remainingTime, &src->remainingTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->averageRemainingTime, &src->averageRemainingTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->averageRemainingChargeTime, &src->averageRemainingChargeTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->numberOfChargeCycles, &src->numberOfChargeCycles)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Battery' sequence class.
 */
#define T Battery
#define TSeq BatterySeq
#define T_initialize_w_params ::rapid::ext::arc::Battery_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::Battery_finalize_w_params
#define T_copy       ::rapid::ext::arc::Battery_copy

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
const char *BatterySlotTYPENAME = "rapid::ext::arc::BatterySlot";

DDS_TypeCode* BatterySlot_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BatterySlot_g_tc_members[6]=
    {
        {
            (char *)"present",/* Member name */
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
            (char *)"charging",/* Member name */
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
            (char *)"supplyingPower",/* Member name */
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
            (char *)"chargePowerPresent",/* Member name */
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
            (char *)"powerNoGood",/* Member name */
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
            (char *)"chargeInhibited",/* Member name */
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

    static DDS_TypeCode BatterySlot_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::BatterySlot", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        BatterySlot_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BatterySlot*/

    if (is_initialized) {
        return &BatterySlot_g_tc;
    }


    BatterySlot_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BatterySlot_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BatterySlot_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BatterySlot_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BatterySlot_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BatterySlot_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &BatterySlot_g_tc;
}


RTIBool BatterySlot_initialize(
    BatterySlot* sample) {
  return ::rapid::ext::arc::BatterySlot_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool BatterySlot_initialize_ex(
    BatterySlot* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::BatterySlot_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatterySlot_initialize_w_params(
        BatterySlot* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initBoolean(&sample->present)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->charging)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->supplyingPower)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->chargePowerPresent)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->powerNoGood)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->chargeInhibited)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void BatterySlot_finalize(
    BatterySlot* sample)
{
    ::rapid::ext::arc::BatterySlot_finalize_ex(sample,RTI_TRUE);
}
        
void BatterySlot_finalize_ex(
    BatterySlot* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::BatterySlot_finalize_w_params(
        sample,&deallocParams);
}

void BatterySlot_finalize_w_params(
        BatterySlot* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */








}

void BatterySlot_finalize_optional_members(
    BatterySlot* sample, RTIBool deletePointers)
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

RTIBool BatterySlot_copy(
    BatterySlot* dst,
    const BatterySlot* src)
{

    if (!RTICdrType_copyBoolean(
        &dst->present, &src->present)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->charging, &src->charging)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->supplyingPower, &src->supplyingPower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->chargePowerPresent, &src->chargePowerPresent)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->powerNoGood, &src->powerNoGood)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->chargeInhibited, &src->chargeInhibited)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BatterySlot' sequence class.
 */
#define T BatterySlot
#define TSeq BatterySlotSeq
#define T_initialize_w_params ::rapid::ext::arc::BatterySlot_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::BatterySlot_finalize_w_params
#define T_copy       ::rapid::ext::arc::BatterySlot_copy

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
const char *BatteryControllerTYPENAME = "rapid::ext::arc::BatteryController";

DDS_TypeCode* BatteryController_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode BatteryController_g_tc_batterySlots_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,8,NULL,NULL);
    static DDS_TypeCode BatteryController_g_tc_batteries_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,8,NULL,NULL);

    static DDS_TypeCode_Member BatteryController_g_tc_members[2]=
    {
        {
            (char *)"batterySlots",/* Member name */
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
            (char *)"batteries",/* Member name */
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

    static DDS_TypeCode BatteryController_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::BatteryController", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        BatteryController_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BatteryController*/

    if (is_initialized) {
        return &BatteryController_g_tc;
    }

    BatteryController_g_tc_batterySlots_array._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::BatterySlot_get_typecode();
    BatteryController_g_tc_batteries_array._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::Battery_get_typecode();

    BatteryController_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&BatteryController_g_tc_batterySlots_array;
    BatteryController_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&BatteryController_g_tc_batteries_array;

    is_initialized = RTI_TRUE;

    return &BatteryController_g_tc;
}


RTIBool BatteryController_initialize(
    BatteryController* sample) {
  return ::rapid::ext::arc::BatteryController_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool BatteryController_initialize_ex(
    BatteryController* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::BatteryController_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatteryController_initialize_w_params(
        BatteryController* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    {
        int i = 0;
        rapid::ext::arc::BatterySlot* elem =
            (rapid::ext::arc::BatterySlot*) &sample->batterySlots[0];

        for (i = 0; i < (int)((8)); ++i, ++elem) {
            if (!rapid::ext::arc::BatterySlot_initialize_w_params(elem,allocParams)) {
                return RTI_FALSE;
            }
        }
    }
            

    
    {
        int i = 0;
        rapid::ext::arc::Battery* elem =
            (rapid::ext::arc::Battery*) &sample->batteries[0];

        for (i = 0; i < (int)((8)); ++i, ++elem) {
            if (!rapid::ext::arc::Battery_initialize_w_params(elem,allocParams)) {
                return RTI_FALSE;
            }
        }
    }
            


    return RTI_TRUE;
}

void BatteryController_finalize(
    BatteryController* sample)
{
    ::rapid::ext::arc::BatteryController_finalize_ex(sample,RTI_TRUE);
}
        
void BatteryController_finalize_ex(
    BatteryController* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::BatteryController_finalize_w_params(
        sample,&deallocParams);
}

void BatteryController_finalize_w_params(
        BatteryController* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    
    {
        int i = 0;
        rapid::ext::arc::BatterySlot* elem =
            (rapid::ext::arc::BatterySlot*) &sample->batterySlots[0];

        for (i = 0; i < (int)((8)); ++i, ++elem) {
            rapid::ext::arc::BatterySlot_finalize_w_params(elem, deallocParams);
        }
    }
            

    
    {
        int i = 0;
        rapid::ext::arc::Battery* elem =
            (rapid::ext::arc::Battery*) &sample->batteries[0];

        for (i = 0; i < (int)((8)); ++i, ++elem) {
            rapid::ext::arc::Battery_finalize_w_params(elem, deallocParams);
        }
    }
            

}

void BatteryController_finalize_optional_members(
    BatteryController* sample, RTIBool deletePointers)
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
        rapid::ext::arc::BatterySlot* elem =
            (rapid::ext::arc::BatterySlot*) &sample->batterySlots[0];

        for (i = 0; i < (int)((8)); ++i, ++elem) {
            rapid::ext::arc::BatterySlot_finalize_optional_members(elem, deallocParams->delete_pointers);
        }
    }
            

    {
        int i = 0;
        rapid::ext::arc::Battery* elem =
            (rapid::ext::arc::Battery*) &sample->batteries[0];

        for (i = 0; i < (int)((8)); ++i, ++elem) {
            rapid::ext::arc::Battery_finalize_optional_members(elem, deallocParams->delete_pointers);
        }
    }
            

}

RTIBool BatteryController_copy(
    BatteryController* dst,
    const BatteryController* src)
{

    
    {
        int i = 0;
        rapid::ext::arc::BatterySlot* elemOut = (rapid::ext::arc::BatterySlot*) &dst->batterySlots[0];
        const rapid::ext::arc::BatterySlot* elemIn = (const rapid::ext::arc::BatterySlot*) &src->batterySlots[0];

        for (i = 0; i < (int)((8));
             ++i, ++elemOut, ++elemIn) {
            if (!rapid::ext::arc::BatterySlot_copy(elemOut,(const rapid::ext::arc::BatterySlot*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }
            

    
    {
        int i = 0;
        rapid::ext::arc::Battery* elemOut = (rapid::ext::arc::Battery*) &dst->batteries[0];
        const rapid::ext::arc::Battery* elemIn = (const rapid::ext::arc::Battery*) &src->batteries[0];

        for (i = 0; i < (int)((8));
             ++i, ++elemOut, ++elemIn) {
            if (!rapid::ext::arc::Battery_copy(elemOut,(const rapid::ext::arc::Battery*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BatteryController' sequence class.
 */
#define T BatteryController
#define TSeq BatteryControllerSeq
#define T_initialize_w_params ::rapid::ext::arc::BatteryController_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::BatteryController_finalize_w_params
#define T_copy       ::rapid::ext::arc::BatteryController_copy

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

DDS_TypeCode* BatteryControllerSequence16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode BatteryControllerSequence16_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(16,NULL);

    static DDS_TypeCode BatteryControllerSequence16_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"rapid::ext::arc::BatteryControllerSequence16", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BatteryControllerSequence16 */

    if (is_initialized) {
        return &BatteryControllerSequence16_g_tc;
    }

    BatteryControllerSequence16_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)rapid::ext::arc::BatteryController_get_typecode();
    BatteryControllerSequence16_g_tc._data._typeCode = (RTICdrTypeCode *)&BatteryControllerSequence16_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &BatteryControllerSequence16_g_tc;
}


RTIBool BatteryControllerSequence16_initialize(
    BatteryControllerSequence16* sample)
{
    return ::rapid::ext::arc::BatteryControllerSequence16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool BatteryControllerSequence16_initialize_ex(
    BatteryControllerSequence16* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::BatteryControllerSequence16_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatteryControllerSequence16_initialize_w_params(
        BatteryControllerSequence16* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        rapid::ext::arc::BatteryControllerSeq_initialize(sample);
        rapid::ext::arc::BatteryControllerSeq_set_element_allocation_params(sample,allocParams);
        if (!rapid::ext::arc::BatteryControllerSeq_set_maximum(sample,
                                           (16))) {
            return RTI_FALSE;
        }
    } else {
        rapid::ext::arc::BatteryControllerSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void BatteryControllerSequence16_finalize(
    BatteryControllerSequence16* sample)
{
    ::rapid::ext::arc::BatteryControllerSequence16_finalize_ex(sample,RTI_TRUE);
}
 
void BatteryControllerSequence16_finalize_ex(
    BatteryControllerSequence16* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::BatteryControllerSequence16_finalize_w_params(
        sample,&deallocParams);
}
           
void BatteryControllerSequence16_finalize_w_params(
    BatteryControllerSequence16* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    

    rapid::ext::arc::BatteryControllerSeq_set_element_deallocation_params(sample,deallocParams);
    rapid::ext::arc::BatteryControllerSeq_finalize(sample);
            

}

void BatteryControllerSequence16_finalize_optional_members(
    BatteryControllerSequence16* sample, RTIBool deletePointers)
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
        length = rapid::ext::arc::BatteryControllerSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            rapid::ext::arc::BatteryController_finalize_optional_members(
                rapid::ext::arc::BatteryControllerSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool BatteryControllerSequence16_copy(
    BatteryControllerSequence16* dst,
    const BatteryControllerSequence16* src)
{

    if (!rapid::ext::arc::BatteryControllerSeq_copy(dst,
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
 * Configure and implement 'BatteryControllerSequence16' sequence class.
 */
#define T            BatteryControllerSequence16
#define TSeq         BatteryControllerSequence16Seq
#define T_initialize_w_params ::rapid::ext::arc::BatteryControllerSequence16_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::BatteryControllerSequence16_finalize_w_params
#define T_copy       ::rapid::ext::arc::BatteryControllerSequence16_copy


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
const char *BatteryPackSampleTYPENAME = "rapid::ext::arc::BatteryPackSample";

DDS_TypeCode* BatteryPackSample_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BatteryPackSample_g_tc_members[4]=
    {
        {
            (char *)"controllers",/* Member name */
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
            (char *)"message",/* Member name */
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
            (char *)"minutesToEmpty",/* Member name */
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
            (char *)"overallCharge",/* Member name */
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

    static DDS_TypeCode BatteryPackSample_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::BatteryPackSample", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BatteryPackSample_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for BatteryPackSample*/

    if (is_initialized) {
        return &BatteryPackSample_g_tc;
    }


    BatteryPackSample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::ext::arc::BatteryControllerSequence16_get_typecode();
    BatteryPackSample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::String128_get_typecode();
    BatteryPackSample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    BatteryPackSample_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    BatteryPackSample_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &BatteryPackSample_g_tc;
}


RTIBool BatteryPackSample_initialize(
    BatteryPackSample* sample) {
  return ::rapid::ext::arc::BatteryPackSample_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool BatteryPackSample_initialize_ex(
    BatteryPackSample* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::BatteryPackSample_initialize_w_params(
        sample,&allocParams);
}

RTIBool BatteryPackSample_initialize_w_params(
        BatteryPackSample* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::ext::arc::BatteryControllerSequence16_initialize_w_params(&sample->controllers,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_initialize_w_params(&sample->message,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initShort(&sample->minutesToEmpty)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->overallCharge)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void BatteryPackSample_finalize(
    BatteryPackSample* sample)
{
    ::rapid::ext::arc::BatteryPackSample_finalize_ex(sample,RTI_TRUE);
}
        
void BatteryPackSample_finalize_ex(
    BatteryPackSample* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::BatteryPackSample_finalize_w_params(
        sample,&deallocParams);
}

void BatteryPackSample_finalize_w_params(
        BatteryPackSample* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::ext::arc::BatteryControllerSequence16_finalize_w_params(&sample->controllers, deallocParams);
            

    rapid::String128_finalize_w_params(&sample->message, deallocParams);
            



}

void BatteryPackSample_finalize_optional_members(
    BatteryPackSample* sample, RTIBool deletePointers)
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
             

    rapid::ext::arc::BatteryControllerSequence16_finalize_optional_members(&sample->controllers, deallocParams->delete_pointers);
            

    rapid::String128_finalize_optional_members(&sample->message, deallocParams->delete_pointers);
            



}

RTIBool BatteryPackSample_copy(
    BatteryPackSample* dst,
    const BatteryPackSample* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::arc::BatteryControllerSequence16_copy(
        &dst->controllers, &src->controllers)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128_copy(
        &dst->message, &src->message)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->minutesToEmpty, &src->minutesToEmpty)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->overallCharge, &src->overallCharge)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BatteryPackSample' sequence class.
 */
#define T BatteryPackSample
#define TSeq BatteryPackSampleSeq
#define T_initialize_w_params ::rapid::ext::arc::BatteryPackSample_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::BatteryPackSample_finalize_w_params
#define T_copy       ::rapid::ext::arc::BatteryPackSample_copy

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
