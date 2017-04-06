
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SystemInfoConfigPlugin_1756908395_h
#define SystemInfoConfigPlugin_1756908395_h

#include "SystemInfoConfig.h"

#include "BaseTypesPlugin.h"


#include "MessagePlugin.h"




struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


namespace rapid{

namespace ext{


#define BatteryInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatteryInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryInfoConfig*
BatteryInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryInfoConfig*
BatteryInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryInfoConfig*
BatteryInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPluginSupport_copy_data(
    BatteryInfoConfig *out,
    const BatteryInfoConfig *in);

NDDSUSERDllExport extern void 
BatteryInfoConfigPluginSupport_destroy_data_w_params(
    BatteryInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryInfoConfigPluginSupport_destroy_data_ex(
    BatteryInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryInfoConfigPluginSupport_destroy_data(
    BatteryInfoConfig *sample);

NDDSUSERDllExport extern void 
BatteryInfoConfigPluginSupport_print_data(
    const BatteryInfoConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BatteryInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BatteryInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BatteryInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BatteryInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
BatteryInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfig *out,
    const BatteryInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BatteryInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BatteryInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
BatteryInfoConfigPlugin_delete(struct PRESTypePlugin *);


#define BatteryInfoConfigSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryInfoConfigSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryInfoConfigSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatteryInfoConfigSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryInfoConfigSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryInfoConfigSequence*
BatteryInfoConfigSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryInfoConfigSequence*
BatteryInfoConfigSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryInfoConfigSequence*
BatteryInfoConfigSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigSequencePluginSupport_copy_data(
    BatteryInfoConfigSequence *out,
    const BatteryInfoConfigSequence *in);

NDDSUSERDllExport extern void 
BatteryInfoConfigSequencePluginSupport_destroy_data_w_params(
    BatteryInfoConfigSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryInfoConfigSequencePluginSupport_destroy_data_ex(
    BatteryInfoConfigSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryInfoConfigSequencePluginSupport_destroy_data(
    BatteryInfoConfigSequence *sample);

NDDSUSERDllExport extern void 
BatteryInfoConfigSequencePluginSupport_print_data(
    const BatteryInfoConfigSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfigSequence *out,
    const BatteryInfoConfigSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfigSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryInfoConfigSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryInfoConfigSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryInfoConfigSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryInfoConfigSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryInfoConfigSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryInfoConfigSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryInfoConfigSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoConfigSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoConfigSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfigSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
BatteryInfoConfigSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define MemoryInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MemoryInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MemoryInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MemoryInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MemoryInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MemoryInfoConfig*
MemoryInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MemoryInfoConfig*
MemoryInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MemoryInfoConfig*
MemoryInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPluginSupport_copy_data(
    MemoryInfoConfig *out,
    const MemoryInfoConfig *in);

NDDSUSERDllExport extern void 
MemoryInfoConfigPluginSupport_destroy_data_w_params(
    MemoryInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MemoryInfoConfigPluginSupport_destroy_data_ex(
    MemoryInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MemoryInfoConfigPluginSupport_destroy_data(
    MemoryInfoConfig *sample);

NDDSUSERDllExport extern void 
MemoryInfoConfigPluginSupport_print_data(
    const MemoryInfoConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MemoryInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MemoryInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MemoryInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MemoryInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MemoryInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoConfig *out,
    const MemoryInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MemoryInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MemoryInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MemoryInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MemoryInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MemoryInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MemoryInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MemoryInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MemoryInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MemoryInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MemoryInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MemoryInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MemoryInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
MemoryInfoConfigPlugin_delete(struct PRESTypePlugin *);


#define CpuInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CpuInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CpuInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CpuInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CpuInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CpuInfoConfig*
CpuInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CpuInfoConfig*
CpuInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CpuInfoConfig*
CpuInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPluginSupport_copy_data(
    CpuInfoConfig *out,
    const CpuInfoConfig *in);

NDDSUSERDllExport extern void 
CpuInfoConfigPluginSupport_destroy_data_w_params(
    CpuInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CpuInfoConfigPluginSupport_destroy_data_ex(
    CpuInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CpuInfoConfigPluginSupport_destroy_data(
    CpuInfoConfig *sample);

NDDSUSERDllExport extern void 
CpuInfoConfigPluginSupport_print_data(
    const CpuInfoConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CpuInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CpuInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CpuInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CpuInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CpuInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoConfig *out,
    const CpuInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CpuInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CpuInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CpuInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CpuInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CpuInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CpuInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CpuInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CpuInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CpuInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CpuInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CpuInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CpuInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
CpuInfoConfigPlugin_delete(struct PRESTypePlugin *);


#define FilesystemInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FilesystemInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FilesystemInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FilesystemInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FilesystemInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FilesystemInfoConfig*
FilesystemInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FilesystemInfoConfig*
FilesystemInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FilesystemInfoConfig*
FilesystemInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPluginSupport_copy_data(
    FilesystemInfoConfig *out,
    const FilesystemInfoConfig *in);

NDDSUSERDllExport extern void 
FilesystemInfoConfigPluginSupport_destroy_data_w_params(
    FilesystemInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FilesystemInfoConfigPluginSupport_destroy_data_ex(
    FilesystemInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FilesystemInfoConfigPluginSupport_destroy_data(
    FilesystemInfoConfig *sample);

NDDSUSERDllExport extern void 
FilesystemInfoConfigPluginSupport_print_data(
    const FilesystemInfoConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FilesystemInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FilesystemInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FilesystemInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FilesystemInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FilesystemInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfig *out,
    const FilesystemInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FilesystemInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FilesystemInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FilesystemInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FilesystemInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FilesystemInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FilesystemInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
FilesystemInfoConfigPlugin_delete(struct PRESTypePlugin *);


#define FilesystemInfoConfigSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FilesystemInfoConfigSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FilesystemInfoConfigSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FilesystemInfoConfigSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FilesystemInfoConfigSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FilesystemInfoConfigSequence*
FilesystemInfoConfigSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FilesystemInfoConfigSequence*
FilesystemInfoConfigSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FilesystemInfoConfigSequence*
FilesystemInfoConfigSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigSequencePluginSupport_copy_data(
    FilesystemInfoConfigSequence *out,
    const FilesystemInfoConfigSequence *in);

NDDSUSERDllExport extern void 
FilesystemInfoConfigSequencePluginSupport_destroy_data_w_params(
    FilesystemInfoConfigSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FilesystemInfoConfigSequencePluginSupport_destroy_data_ex(
    FilesystemInfoConfigSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FilesystemInfoConfigSequencePluginSupport_destroy_data(
    FilesystemInfoConfigSequence *sample);

NDDSUSERDllExport extern void 
FilesystemInfoConfigSequencePluginSupport_print_data(
    const FilesystemInfoConfigSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfigSequence *out,
    const FilesystemInfoConfigSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfigSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FilesystemInfoConfigSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoConfigSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoConfigSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FilesystemInfoConfigSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FilesystemInfoConfigSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FilesystemInfoConfigSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoConfigSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoConfigSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoConfigSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfigSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FilesystemInfoConfigSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ThermalInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ThermalInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ThermalInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ThermalInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ThermalInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ThermalInfoConfig*
ThermalInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ThermalInfoConfig*
ThermalInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ThermalInfoConfig*
ThermalInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPluginSupport_copy_data(
    ThermalInfoConfig *out,
    const ThermalInfoConfig *in);

NDDSUSERDllExport extern void 
ThermalInfoConfigPluginSupport_destroy_data_w_params(
    ThermalInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ThermalInfoConfigPluginSupport_destroy_data_ex(
    ThermalInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ThermalInfoConfigPluginSupport_destroy_data(
    ThermalInfoConfig *sample);

NDDSUSERDllExport extern void 
ThermalInfoConfigPluginSupport_print_data(
    const ThermalInfoConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ThermalInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ThermalInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ThermalInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ThermalInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ThermalInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfig *out,
    const ThermalInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ThermalInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ThermalInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ThermalInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ThermalInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ThermalInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ThermalInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ThermalInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ThermalInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ThermalInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
ThermalInfoConfigPlugin_delete(struct PRESTypePlugin *);


#define ThermalInfoConfigSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ThermalInfoConfigSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ThermalInfoConfigSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ThermalInfoConfigSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ThermalInfoConfigSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ThermalInfoConfigSequence*
ThermalInfoConfigSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ThermalInfoConfigSequence*
ThermalInfoConfigSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ThermalInfoConfigSequence*
ThermalInfoConfigSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigSequencePluginSupport_copy_data(
    ThermalInfoConfigSequence *out,
    const ThermalInfoConfigSequence *in);

NDDSUSERDllExport extern void 
ThermalInfoConfigSequencePluginSupport_destroy_data_w_params(
    ThermalInfoConfigSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ThermalInfoConfigSequencePluginSupport_destroy_data_ex(
    ThermalInfoConfigSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ThermalInfoConfigSequencePluginSupport_destroy_data(
    ThermalInfoConfigSequence *sample);

NDDSUSERDllExport extern void 
ThermalInfoConfigSequencePluginSupport_print_data(
    const ThermalInfoConfigSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfigSequence *out,
    const ThermalInfoConfigSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfigSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ThermalInfoConfigSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ThermalInfoConfigSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ThermalInfoConfigSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ThermalInfoConfigSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ThermalInfoConfigSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ThermalInfoConfigSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ThermalInfoConfigSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoConfigSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoConfigSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfigSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ThermalInfoConfigSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define NetTrafficInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NetTrafficInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NetTrafficInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NetTrafficInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NetTrafficInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NetTrafficInfoConfig*
NetTrafficInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NetTrafficInfoConfig*
NetTrafficInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NetTrafficInfoConfig*
NetTrafficInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPluginSupport_copy_data(
    NetTrafficInfoConfig *out,
    const NetTrafficInfoConfig *in);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigPluginSupport_destroy_data_w_params(
    NetTrafficInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigPluginSupport_destroy_data_ex(
    NetTrafficInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigPluginSupport_destroy_data(
    NetTrafficInfoConfig *sample);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigPluginSupport_print_data(
    const NetTrafficInfoConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NetTrafficInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NetTrafficInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NetTrafficInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfig *out,
    const NetTrafficInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NetTrafficInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NetTrafficInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NetTrafficInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NetTrafficInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NetTrafficInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NetTrafficInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
NetTrafficInfoConfigPlugin_delete(struct PRESTypePlugin *);


#define NetTrafficInfoConfigSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NetTrafficInfoConfigSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NetTrafficInfoConfigSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NetTrafficInfoConfigSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NetTrafficInfoConfigSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NetTrafficInfoConfigSequence*
NetTrafficInfoConfigSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NetTrafficInfoConfigSequence*
NetTrafficInfoConfigSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NetTrafficInfoConfigSequence*
NetTrafficInfoConfigSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigSequencePluginSupport_copy_data(
    NetTrafficInfoConfigSequence *out,
    const NetTrafficInfoConfigSequence *in);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigSequencePluginSupport_destroy_data_w_params(
    NetTrafficInfoConfigSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigSequencePluginSupport_destroy_data_ex(
    NetTrafficInfoConfigSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigSequencePluginSupport_destroy_data(
    NetTrafficInfoConfigSequence *sample);

NDDSUSERDllExport extern void 
NetTrafficInfoConfigSequencePluginSupport_print_data(
    const NetTrafficInfoConfigSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfigSequence *out,
    const NetTrafficInfoConfigSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfigSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NetTrafficInfoConfigSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoConfigSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoConfigSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NetTrafficInfoConfigSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NetTrafficInfoConfigSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NetTrafficInfoConfigSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoConfigSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoConfigSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoConfigSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfigSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NetTrafficInfoConfigSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define WifiInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define WifiInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define WifiInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define WifiInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define WifiInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern WifiInfoConfig*
WifiInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern WifiInfoConfig*
WifiInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern WifiInfoConfig*
WifiInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPluginSupport_copy_data(
    WifiInfoConfig *out,
    const WifiInfoConfig *in);

NDDSUSERDllExport extern void 
WifiInfoConfigPluginSupport_destroy_data_w_params(
    WifiInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
WifiInfoConfigPluginSupport_destroy_data_ex(
    WifiInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
WifiInfoConfigPluginSupport_destroy_data(
    WifiInfoConfig *sample);

NDDSUSERDllExport extern void 
WifiInfoConfigPluginSupport_print_data(
    const WifiInfoConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
WifiInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
WifiInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
WifiInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
WifiInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
WifiInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfig *out,
    const WifiInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
WifiInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
WifiInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
WifiInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
WifiInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WifiInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
WifiInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
WifiInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WifiInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
WifiInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
WifiInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
WifiInfoConfigPlugin_delete(struct PRESTypePlugin *);


#define WifiInfoConfigSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define WifiInfoConfigSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define WifiInfoConfigSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define WifiInfoConfigSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define WifiInfoConfigSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern WifiInfoConfigSequence*
WifiInfoConfigSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern WifiInfoConfigSequence*
WifiInfoConfigSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern WifiInfoConfigSequence*
WifiInfoConfigSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigSequencePluginSupport_copy_data(
    WifiInfoConfigSequence *out,
    const WifiInfoConfigSequence *in);

NDDSUSERDllExport extern void 
WifiInfoConfigSequencePluginSupport_destroy_data_w_params(
    WifiInfoConfigSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
WifiInfoConfigSequencePluginSupport_destroy_data_ex(
    WifiInfoConfigSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
WifiInfoConfigSequencePluginSupport_destroy_data(
    WifiInfoConfigSequence *sample);

NDDSUSERDllExport extern void 
WifiInfoConfigSequencePluginSupport_print_data(
    const WifiInfoConfigSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfigSequence *out,
    const WifiInfoConfigSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfigSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
WifiInfoConfigSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
WifiInfoConfigSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
WifiInfoConfigSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
WifiInfoConfigSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WifiInfoConfigSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
WifiInfoConfigSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
WifiInfoConfigSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoConfigSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoConfigSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfigSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
WifiInfoConfigSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * SystemInfoConfig.
 *
 * By default, this type is struct SystemInfoConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SystemInfoConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SystemInfoConfig, the
 * following restriction applies: the key of struct
 * SystemInfoConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SystemInfoConfig.
*/
typedef  class SystemInfoConfig SystemInfoConfigKeyHolder;


#define SystemInfoConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SystemInfoConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SystemInfoConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SystemInfoConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SystemInfoConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SystemInfoConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SystemInfoConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SystemInfoConfig*
SystemInfoConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SystemInfoConfig*
SystemInfoConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SystemInfoConfig*
SystemInfoConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPluginSupport_copy_data(
    SystemInfoConfig *out,
    const SystemInfoConfig *in);

NDDSUSERDllExport extern void 
SystemInfoConfigPluginSupport_destroy_data_w_params(
    SystemInfoConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SystemInfoConfigPluginSupport_destroy_data_ex(
    SystemInfoConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SystemInfoConfigPluginSupport_destroy_data(
    SystemInfoConfig *sample);

NDDSUSERDllExport extern void 
SystemInfoConfigPluginSupport_print_data(
    const SystemInfoConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SystemInfoConfig*
SystemInfoConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SystemInfoConfig*
SystemInfoConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SystemInfoConfigPluginSupport_destroy_key_ex(
    SystemInfoConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SystemInfoConfigPluginSupport_destroy_key(
    SystemInfoConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SystemInfoConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SystemInfoConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SystemInfoConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SystemInfoConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SystemInfoConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig *out,
    const SystemInfoConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SystemInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SystemInfoConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SystemInfoConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SystemInfoConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SystemInfoConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SystemInfoConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SystemInfoConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SystemInfoConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SystemInfoConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SystemInfoConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfigKeyHolder *key, 
    const SystemInfoConfig *instance);

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoConfig *instance, 
    const SystemInfoConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SystemInfoConfig *instance);

NDDSUSERDllExport extern RTIBool 
SystemInfoConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SystemInfoConfigPlugin_new(void);

NDDSUSERDllExport extern void
SystemInfoConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SystemInfoConfigPlugin_1756908395_h */
