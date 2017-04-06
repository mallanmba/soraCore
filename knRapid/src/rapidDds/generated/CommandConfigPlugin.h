
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommandConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommandConfigPlugin_667935284_h
#define CommandConfigPlugin_667935284_h

#include "CommandConfig.h"

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


#define CommandDefPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CommandDefPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CommandDefPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CommandDefPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CommandDefPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CommandDef*
CommandDefPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CommandDef*
CommandDefPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CommandDef*
CommandDefPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CommandDefPluginSupport_copy_data(
    CommandDef *out,
    const CommandDef *in);

NDDSUSERDllExport extern void 
CommandDefPluginSupport_destroy_data_w_params(
    CommandDef *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CommandDefPluginSupport_destroy_data_ex(
    CommandDef *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CommandDefPluginSupport_destroy_data(
    CommandDef *sample);

NDDSUSERDllExport extern void 
CommandDefPluginSupport_print_data(
    const CommandDef *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CommandDefPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CommandDefPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CommandDefPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CommandDefPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CommandDefPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandDef *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CommandDefPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandDef *out,
    const CommandDef *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CommandDefPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CommandDef *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandDefPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandDef *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandDefPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CommandDef **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CommandDefPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CommandDefPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CommandDefPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CommandDefPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CommandDef * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CommandDefPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CommandDefPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CommandDefPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CommandDef *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandDefPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandDef * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandDefPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandDef ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CommandDefPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandDef *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CommandDefPlugin_new(void);

NDDSUSERDllExport extern void
CommandDefPlugin_delete(struct PRESTypePlugin *);


#define CommandDefSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CommandDefSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CommandDefSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CommandDefSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CommandDefSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CommandDefSequence*
CommandDefSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CommandDefSequence*
CommandDefSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CommandDefSequence*
CommandDefSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CommandDefSequencePluginSupport_copy_data(
    CommandDefSequence *out,
    const CommandDefSequence *in);

NDDSUSERDllExport extern void 
CommandDefSequencePluginSupport_destroy_data_w_params(
    CommandDefSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CommandDefSequencePluginSupport_destroy_data_ex(
    CommandDefSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CommandDefSequencePluginSupport_destroy_data(
    CommandDefSequence *sample);

NDDSUSERDllExport extern void 
CommandDefSequencePluginSupport_print_data(
    const CommandDefSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
CommandDefSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandDefSequence *out,
    const CommandDefSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CommandDefSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CommandDefSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandDefSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandDefSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CommandDefSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CommandDefSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CommandDefSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CommandDefSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CommandDefSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CommandDefSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CommandDefSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CommandDefSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CommandDefSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandDefSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandDefSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
CommandDefSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandDefSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define SubsystemTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SubsystemTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SubsystemTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SubsystemTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SubsystemTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SubsystemType*
SubsystemTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SubsystemType*
SubsystemTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SubsystemType*
SubsystemTypePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SubsystemTypePluginSupport_copy_data(
    SubsystemType *out,
    const SubsystemType *in);

NDDSUSERDllExport extern void 
SubsystemTypePluginSupport_destroy_data_w_params(
    SubsystemType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SubsystemTypePluginSupport_destroy_data_ex(
    SubsystemType *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SubsystemTypePluginSupport_destroy_data(
    SubsystemType *sample);

NDDSUSERDllExport extern void 
SubsystemTypePluginSupport_print_data(
    const SubsystemType *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SubsystemTypePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SubsystemTypePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SubsystemTypePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SubsystemTypePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SubsystemTypePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemType *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SubsystemTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemType *out,
    const SubsystemType *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SubsystemTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SubsystemType *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemType *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SubsystemTypePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemType **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SubsystemTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SubsystemTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SubsystemTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SubsystemTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SubsystemType * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SubsystemTypePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SubsystemTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SubsystemTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SubsystemType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemType * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SubsystemTypePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemType ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SubsystemTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SubsystemTypePlugin_new(void);

NDDSUSERDllExport extern void
SubsystemTypePlugin_delete(struct PRESTypePlugin *);


#define SubsystemPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SubsystemPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SubsystemPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SubsystemPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SubsystemPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Subsystem*
SubsystemPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Subsystem*
SubsystemPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Subsystem*
SubsystemPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SubsystemPluginSupport_copy_data(
    Subsystem *out,
    const Subsystem *in);

NDDSUSERDllExport extern void 
SubsystemPluginSupport_destroy_data_w_params(
    Subsystem *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SubsystemPluginSupport_destroy_data_ex(
    Subsystem *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SubsystemPluginSupport_destroy_data(
    Subsystem *sample);

NDDSUSERDllExport extern void 
SubsystemPluginSupport_print_data(
    const Subsystem *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SubsystemPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SubsystemPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SubsystemPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SubsystemPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SubsystemPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Subsystem *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SubsystemPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Subsystem *out,
    const Subsystem *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SubsystemPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Subsystem *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Subsystem *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SubsystemPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Subsystem **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SubsystemPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SubsystemPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SubsystemPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SubsystemPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Subsystem * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SubsystemPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SubsystemPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SubsystemPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Subsystem *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Subsystem * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SubsystemPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Subsystem ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SubsystemPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Subsystem *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SubsystemPlugin_new(void);

NDDSUSERDllExport extern void
SubsystemPlugin_delete(struct PRESTypePlugin *);


#define SubsystemTypeSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SubsystemTypeSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SubsystemTypeSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SubsystemTypeSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SubsystemTypeSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SubsystemTypeSequence*
SubsystemTypeSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SubsystemTypeSequence*
SubsystemTypeSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SubsystemTypeSequence*
SubsystemTypeSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SubsystemTypeSequencePluginSupport_copy_data(
    SubsystemTypeSequence *out,
    const SubsystemTypeSequence *in);

NDDSUSERDllExport extern void 
SubsystemTypeSequencePluginSupport_destroy_data_w_params(
    SubsystemTypeSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SubsystemTypeSequencePluginSupport_destroy_data_ex(
    SubsystemTypeSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SubsystemTypeSequencePluginSupport_destroy_data(
    SubsystemTypeSequence *sample);

NDDSUSERDllExport extern void 
SubsystemTypeSequencePluginSupport_print_data(
    const SubsystemTypeSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
SubsystemTypeSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemTypeSequence *out,
    const SubsystemTypeSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SubsystemTypeSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SubsystemTypeSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemTypeSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemTypeSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SubsystemTypeSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SubsystemTypeSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SubsystemTypeSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SubsystemTypeSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SubsystemTypeSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SubsystemTypeSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SubsystemTypeSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SubsystemTypeSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SubsystemTypeSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemTypeSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemTypeSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
SubsystemTypeSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemTypeSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define SubsystemSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SubsystemSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SubsystemSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SubsystemSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SubsystemSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SubsystemSequence*
SubsystemSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SubsystemSequence*
SubsystemSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SubsystemSequence*
SubsystemSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SubsystemSequencePluginSupport_copy_data(
    SubsystemSequence *out,
    const SubsystemSequence *in);

NDDSUSERDllExport extern void 
SubsystemSequencePluginSupport_destroy_data_w_params(
    SubsystemSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SubsystemSequencePluginSupport_destroy_data_ex(
    SubsystemSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SubsystemSequencePluginSupport_destroy_data(
    SubsystemSequence *sample);

NDDSUSERDllExport extern void 
SubsystemSequencePluginSupport_print_data(
    const SubsystemSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
SubsystemSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemSequence *out,
    const SubsystemSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SubsystemSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SubsystemSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SubsystemSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SubsystemSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SubsystemSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SubsystemSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SubsystemSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SubsystemSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SubsystemSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SubsystemSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SubsystemSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubsystemSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
SubsystemSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SubsystemSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * CommandConfig.
 *
 * By default, this type is struct CommandConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct CommandConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct CommandConfig, the
 * following restriction applies: the key of struct
 * CommandConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct CommandConfig.
*/
typedef  class CommandConfig CommandConfigKeyHolder;


#define CommandConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CommandConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CommandConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define CommandConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define CommandConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define CommandConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CommandConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CommandConfig*
CommandConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CommandConfig*
CommandConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CommandConfig*
CommandConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CommandConfigPluginSupport_copy_data(
    CommandConfig *out,
    const CommandConfig *in);

NDDSUSERDllExport extern void 
CommandConfigPluginSupport_destroy_data_w_params(
    CommandConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CommandConfigPluginSupport_destroy_data_ex(
    CommandConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CommandConfigPluginSupport_destroy_data(
    CommandConfig *sample);

NDDSUSERDllExport extern void 
CommandConfigPluginSupport_print_data(
    const CommandConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern CommandConfig*
CommandConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CommandConfig*
CommandConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
CommandConfigPluginSupport_destroy_key_ex(
    CommandConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CommandConfigPluginSupport_destroy_key(
    CommandConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CommandConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CommandConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CommandConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CommandConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CommandConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig *out,
    const CommandConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CommandConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CommandConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CommandConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CommandConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CommandConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CommandConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CommandConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CommandConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CommandConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CommandConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfigKeyHolder *key, 
    const CommandConfig *instance);

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    CommandConfig *instance, 
    const CommandConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const CommandConfig *instance);

NDDSUSERDllExport extern RTIBool 
CommandConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CommandConfigPlugin_new(void);

NDDSUSERDllExport extern void
CommandConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CommandConfigPlugin_667935284_h */
