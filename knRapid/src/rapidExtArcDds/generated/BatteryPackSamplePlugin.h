
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BatteryPackSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BatteryPackSamplePlugin_1354374548_h
#define BatteryPackSamplePlugin_1354374548_h

#include "BatteryPackSample.h"

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

namespace arc{


#define BatteryPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatteryPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Battery*
BatteryPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Battery*
BatteryPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Battery*
BatteryPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryPluginSupport_copy_data(
    Battery *out,
    const Battery *in);

NDDSUSERDllExport extern void 
BatteryPluginSupport_destroy_data_w_params(
    Battery *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryPluginSupport_destroy_data_ex(
    Battery *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryPluginSupport_destroy_data(
    Battery *sample);

NDDSUSERDllExport extern void 
BatteryPluginSupport_print_data(
    const Battery *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BatteryPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BatteryPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BatteryPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BatteryPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
BatteryPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Battery *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
BatteryPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Battery *out,
    const Battery *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Battery *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Battery *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Battery **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Battery * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Battery *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Battery * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Battery ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BatteryPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Battery *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BatteryPlugin_new(void);

NDDSUSERDllExport extern void
BatteryPlugin_delete(struct PRESTypePlugin *);


#define BatterySlotPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatterySlotPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatterySlotPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatterySlotPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatterySlotPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatterySlot*
BatterySlotPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatterySlot*
BatterySlotPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatterySlot*
BatterySlotPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatterySlotPluginSupport_copy_data(
    BatterySlot *out,
    const BatterySlot *in);

NDDSUSERDllExport extern void 
BatterySlotPluginSupport_destroy_data_w_params(
    BatterySlot *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatterySlotPluginSupport_destroy_data_ex(
    BatterySlot *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatterySlotPluginSupport_destroy_data(
    BatterySlot *sample);

NDDSUSERDllExport extern void 
BatterySlotPluginSupport_print_data(
    const BatterySlot *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BatterySlotPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BatterySlotPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BatterySlotPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BatterySlotPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
BatterySlotPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatterySlot *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
BatterySlotPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatterySlot *out,
    const BatterySlot *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatterySlotPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatterySlot *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatterySlotPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatterySlot *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatterySlotPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BatterySlot **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatterySlotPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatterySlotPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatterySlotPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatterySlotPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatterySlot * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatterySlotPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatterySlotPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatterySlotPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatterySlot *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatterySlotPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatterySlot * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatterySlotPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BatterySlot ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BatterySlotPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatterySlot *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BatterySlotPlugin_new(void);

NDDSUSERDllExport extern void
BatterySlotPlugin_delete(struct PRESTypePlugin *);


#define BatteryControllerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryControllerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryControllerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatteryControllerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryControllerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryController*
BatteryControllerPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryController*
BatteryControllerPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryController*
BatteryControllerPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryControllerPluginSupport_copy_data(
    BatteryController *out,
    const BatteryController *in);

NDDSUSERDllExport extern void 
BatteryControllerPluginSupport_destroy_data_w_params(
    BatteryController *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryControllerPluginSupport_destroy_data_ex(
    BatteryController *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryControllerPluginSupport_destroy_data(
    BatteryController *sample);

NDDSUSERDllExport extern void 
BatteryControllerPluginSupport_print_data(
    const BatteryController *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BatteryControllerPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BatteryControllerPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BatteryControllerPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BatteryControllerPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
BatteryControllerPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryController *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
BatteryControllerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryController *out,
    const BatteryController *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryControllerPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryController *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryControllerPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryController *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryControllerPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BatteryController **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryControllerPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryControllerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryControllerPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryControllerPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryController * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryControllerPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryControllerPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryControllerPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryController *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryControllerPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryController * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryControllerPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryController ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BatteryControllerPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryController *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BatteryControllerPlugin_new(void);

NDDSUSERDllExport extern void
BatteryControllerPlugin_delete(struct PRESTypePlugin *);


#define BatteryControllerSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryControllerSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryControllerSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatteryControllerSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryControllerSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryControllerSequence16*
BatteryControllerSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryControllerSequence16*
BatteryControllerSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryControllerSequence16*
BatteryControllerSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryControllerSequence16PluginSupport_copy_data(
    BatteryControllerSequence16 *out,
    const BatteryControllerSequence16 *in);

NDDSUSERDllExport extern void 
BatteryControllerSequence16PluginSupport_destroy_data_w_params(
    BatteryControllerSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryControllerSequence16PluginSupport_destroy_data_ex(
    BatteryControllerSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryControllerSequence16PluginSupport_destroy_data(
    BatteryControllerSequence16 *sample);

NDDSUSERDllExport extern void 
BatteryControllerSequence16PluginSupport_print_data(
    const BatteryControllerSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
BatteryControllerSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryControllerSequence16 *out,
    const BatteryControllerSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryControllerSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryControllerSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryControllerSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryControllerSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryControllerSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryControllerSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryControllerSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryControllerSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryControllerSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryControllerSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryControllerSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryControllerSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryControllerSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryControllerSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryControllerSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
BatteryControllerSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryControllerSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * BatteryPackSample.
 *
 * By default, this type is struct BatteryPackSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BatteryPackSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BatteryPackSample, the
 * following restriction applies: the key of struct
 * BatteryPackSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BatteryPackSample.
*/
typedef  class BatteryPackSample BatteryPackSampleKeyHolder;


#define BatteryPackSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryPackSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryPackSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BatteryPackSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BatteryPackSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BatteryPackSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryPackSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryPackSample*
BatteryPackSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryPackSample*
BatteryPackSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryPackSample*
BatteryPackSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePluginSupport_copy_data(
    BatteryPackSample *out,
    const BatteryPackSample *in);

NDDSUSERDllExport extern void 
BatteryPackSamplePluginSupport_destroy_data_w_params(
    BatteryPackSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryPackSamplePluginSupport_destroy_data_ex(
    BatteryPackSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryPackSamplePluginSupport_destroy_data(
    BatteryPackSample *sample);

NDDSUSERDllExport extern void 
BatteryPackSamplePluginSupport_print_data(
    const BatteryPackSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BatteryPackSample*
BatteryPackSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryPackSample*
BatteryPackSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BatteryPackSamplePluginSupport_destroy_key_ex(
    BatteryPackSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryPackSamplePluginSupport_destroy_key(
    BatteryPackSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BatteryPackSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BatteryPackSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BatteryPackSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BatteryPackSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
BatteryPackSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample *out,
    const BatteryPackSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryPackSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryPackSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryPackSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryPackSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryPackSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryPackSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryPackSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryPackSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryPackSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BatteryPackSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSampleKeyHolder *key, 
    const BatteryPackSample *instance);

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackSample *instance, 
    const BatteryPackSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BatteryPackSample *instance);

NDDSUSERDllExport extern RTIBool 
BatteryPackSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BatteryPackSamplePlugin_new(void);

NDDSUSERDllExport extern void
BatteryPackSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* BatteryPackSamplePlugin_1354374548_h */
