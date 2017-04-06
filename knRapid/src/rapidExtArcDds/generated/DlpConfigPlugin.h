
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef DlpConfigPlugin_1713252555_h
#define DlpConfigPlugin_1713252555_h

#include "DlpConfig.h"

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


#define DlpWarnCriticalRangePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpWarnCriticalRangePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpWarnCriticalRangePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DlpWarnCriticalRangePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpWarnCriticalRangePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpWarnCriticalRange*
DlpWarnCriticalRangePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpWarnCriticalRange*
DlpWarnCriticalRangePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpWarnCriticalRange*
DlpWarnCriticalRangePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePluginSupport_copy_data(
    DlpWarnCriticalRange *out,
    const DlpWarnCriticalRange *in);

NDDSUSERDllExport extern void 
DlpWarnCriticalRangePluginSupport_destroy_data_w_params(
    DlpWarnCriticalRange *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpWarnCriticalRangePluginSupport_destroy_data_ex(
    DlpWarnCriticalRange *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpWarnCriticalRangePluginSupport_destroy_data(
    DlpWarnCriticalRange *sample);

NDDSUSERDllExport extern void 
DlpWarnCriticalRangePluginSupport_print_data(
    const DlpWarnCriticalRange *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DlpWarnCriticalRangePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DlpWarnCriticalRangePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DlpWarnCriticalRangePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DlpWarnCriticalRangePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DlpWarnCriticalRangePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpWarnCriticalRange *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpWarnCriticalRange *out,
    const DlpWarnCriticalRange *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpWarnCriticalRange *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpWarnCriticalRange *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DlpWarnCriticalRange **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpWarnCriticalRangePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpWarnCriticalRangePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpWarnCriticalRangePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpWarnCriticalRangePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpWarnCriticalRange * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpWarnCriticalRangePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpWarnCriticalRangePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpWarnCriticalRange *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpWarnCriticalRange * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpWarnCriticalRangePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpWarnCriticalRange ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DlpWarnCriticalRangePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpWarnCriticalRange *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DlpWarnCriticalRangePlugin_new(void);

NDDSUSERDllExport extern void
DlpWarnCriticalRangePlugin_delete(struct PRESTypePlugin *);


#define DlpChannelConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpChannelConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpChannelConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DlpChannelConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpChannelConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpChannelConfig*
DlpChannelConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpChannelConfig*
DlpChannelConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpChannelConfig*
DlpChannelConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPluginSupport_copy_data(
    DlpChannelConfig *out,
    const DlpChannelConfig *in);

NDDSUSERDllExport extern void 
DlpChannelConfigPluginSupport_destroy_data_w_params(
    DlpChannelConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpChannelConfigPluginSupport_destroy_data_ex(
    DlpChannelConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpChannelConfigPluginSupport_destroy_data(
    DlpChannelConfig *sample);

NDDSUSERDllExport extern void 
DlpChannelConfigPluginSupport_print_data(
    const DlpChannelConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DlpChannelConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DlpChannelConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DlpChannelConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DlpChannelConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DlpChannelConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelConfig *out,
    const DlpChannelConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpChannelConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpChannelConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpChannelConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpChannelConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpChannelConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpChannelConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpChannelConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpChannelConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpChannelConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpChannelConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DlpChannelConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DlpChannelConfigPlugin_new(void);

NDDSUSERDllExport extern void
DlpChannelConfigPlugin_delete(struct PRESTypePlugin *);


#define DlpBoardConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpBoardConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpBoardConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DlpBoardConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpBoardConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpBoardConfig*
DlpBoardConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpBoardConfig*
DlpBoardConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpBoardConfig*
DlpBoardConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPluginSupport_copy_data(
    DlpBoardConfig *out,
    const DlpBoardConfig *in);

NDDSUSERDllExport extern void 
DlpBoardConfigPluginSupport_destroy_data_w_params(
    DlpBoardConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpBoardConfigPluginSupport_destroy_data_ex(
    DlpBoardConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpBoardConfigPluginSupport_destroy_data(
    DlpBoardConfig *sample);

NDDSUSERDllExport extern void 
DlpBoardConfigPluginSupport_print_data(
    const DlpBoardConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DlpBoardConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DlpBoardConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DlpBoardConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DlpBoardConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DlpBoardConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfig *out,
    const DlpBoardConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpBoardConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpBoardConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpBoardConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpBoardConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpBoardConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpBoardConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpBoardConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpBoardConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DlpBoardConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DlpBoardConfigPlugin_new(void);

NDDSUSERDllExport extern void
DlpBoardConfigPlugin_delete(struct PRESTypePlugin *);


#define DlpBoardConfigSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpBoardConfigSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpBoardConfigSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DlpBoardConfigSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpBoardConfigSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpBoardConfigSequence32*
DlpBoardConfigSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpBoardConfigSequence32*
DlpBoardConfigSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpBoardConfigSequence32*
DlpBoardConfigSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigSequence32PluginSupport_copy_data(
    DlpBoardConfigSequence32 *out,
    const DlpBoardConfigSequence32 *in);

NDDSUSERDllExport extern void 
DlpBoardConfigSequence32PluginSupport_destroy_data_w_params(
    DlpBoardConfigSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpBoardConfigSequence32PluginSupport_destroy_data_ex(
    DlpBoardConfigSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpBoardConfigSequence32PluginSupport_destroy_data(
    DlpBoardConfigSequence32 *sample);

NDDSUSERDllExport extern void 
DlpBoardConfigSequence32PluginSupport_print_data(
    const DlpBoardConfigSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfigSequence32 *out,
    const DlpBoardConfigSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardConfigSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfigSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpBoardConfigSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpBoardConfigSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpBoardConfigSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpBoardConfigSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpBoardConfigSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpBoardConfigSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpBoardConfigSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardConfigSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardConfigSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfigSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DlpBoardConfigSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardConfigSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * DlpConfig.
 *
 * By default, this type is struct DlpConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct DlpConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct DlpConfig, the
 * following restriction applies: the key of struct
 * DlpConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct DlpConfig.
*/
typedef  class DlpConfig DlpConfigKeyHolder;


#define DlpConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define DlpConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define DlpConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define DlpConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpConfig*
DlpConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpConfig*
DlpConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpConfig*
DlpConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpConfigPluginSupport_copy_data(
    DlpConfig *out,
    const DlpConfig *in);

NDDSUSERDllExport extern void 
DlpConfigPluginSupport_destroy_data_w_params(
    DlpConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpConfigPluginSupport_destroy_data_ex(
    DlpConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpConfigPluginSupport_destroy_data(
    DlpConfig *sample);

NDDSUSERDllExport extern void 
DlpConfigPluginSupport_print_data(
    const DlpConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern DlpConfig*
DlpConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpConfig*
DlpConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
DlpConfigPluginSupport_destroy_key_ex(
    DlpConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpConfigPluginSupport_destroy_key(
    DlpConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DlpConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DlpConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DlpConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DlpConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DlpConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig *out,
    const DlpConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DlpConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfigKeyHolder *key, 
    const DlpConfig *instance);

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    DlpConfig *instance, 
    const DlpConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const DlpConfig *instance);

NDDSUSERDllExport extern RTIBool 
DlpConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DlpConfigPlugin_new(void);

NDDSUSERDllExport extern void
DlpConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* DlpConfigPlugin_1713252555_h */
