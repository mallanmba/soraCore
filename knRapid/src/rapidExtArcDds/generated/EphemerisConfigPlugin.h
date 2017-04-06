
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EphemerisConfigPlugin_2055029897_h
#define EphemerisConfigPlugin_2055029897_h

#include "EphemerisConfig.h"

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


#define EphemerisConfigEntryPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define EphemerisConfigEntryPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EphemerisConfigEntryPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EphemerisConfigEntryPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EphemerisConfigEntryPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EphemerisConfigEntry*
EphemerisConfigEntryPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern EphemerisConfigEntry*
EphemerisConfigEntryPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EphemerisConfigEntry*
EphemerisConfigEntryPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPluginSupport_copy_data(
    EphemerisConfigEntry *out,
    const EphemerisConfigEntry *in);

NDDSUSERDllExport extern void 
EphemerisConfigEntryPluginSupport_destroy_data_w_params(
    EphemerisConfigEntry *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
EphemerisConfigEntryPluginSupport_destroy_data_ex(
    EphemerisConfigEntry *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EphemerisConfigEntryPluginSupport_destroy_data(
    EphemerisConfigEntry *sample);

NDDSUSERDllExport extern void 
EphemerisConfigEntryPluginSupport_print_data(
    const EphemerisConfigEntry *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EphemerisConfigEntryPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EphemerisConfigEntryPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EphemerisConfigEntryPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EphemerisConfigEntryPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
EphemerisConfigEntryPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigEntry *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigEntry *out,
    const EphemerisConfigEntry *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisConfigEntry *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigEntry *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigEntry **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EphemerisConfigEntryPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigEntryPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigEntryPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EphemerisConfigEntryPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EphemerisConfigEntry * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EphemerisConfigEntryPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigEntryPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisConfigEntry *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigEntry * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisConfigEntryPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigEntry ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EphemerisConfigEntryPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigEntry *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EphemerisConfigEntryPlugin_new(void);

NDDSUSERDllExport extern void
EphemerisConfigEntryPlugin_delete(struct PRESTypePlugin *);


#define EphemerisConfigVector32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define EphemerisConfigVector32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EphemerisConfigVector32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EphemerisConfigVector32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EphemerisConfigVector32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EphemerisConfigVector32*
EphemerisConfigVector32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern EphemerisConfigVector32*
EphemerisConfigVector32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EphemerisConfigVector32*
EphemerisConfigVector32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigVector32PluginSupport_copy_data(
    EphemerisConfigVector32 *out,
    const EphemerisConfigVector32 *in);

NDDSUSERDllExport extern void 
EphemerisConfigVector32PluginSupport_destroy_data_w_params(
    EphemerisConfigVector32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
EphemerisConfigVector32PluginSupport_destroy_data_ex(
    EphemerisConfigVector32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EphemerisConfigVector32PluginSupport_destroy_data(
    EphemerisConfigVector32 *sample);

NDDSUSERDllExport extern void 
EphemerisConfigVector32PluginSupport_print_data(
    const EphemerisConfigVector32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
EphemerisConfigVector32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigVector32 *out,
    const EphemerisConfigVector32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EphemerisConfigVector32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisConfigVector32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigVector32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigVector32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EphemerisConfigVector32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigVector32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigVector32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EphemerisConfigVector32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EphemerisConfigVector32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EphemerisConfigVector32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigVector32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigVector32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisConfigVector32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigVector32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigVector32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
EphemerisConfigVector32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigVector32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * EphemerisConfig.
 *
 * By default, this type is struct EphemerisConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EphemerisConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EphemerisConfig, the
 * following restriction applies: the key of struct
 * EphemerisConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EphemerisConfig.
*/
typedef  class EphemerisConfig EphemerisConfigKeyHolder;


#define EphemerisConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define EphemerisConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EphemerisConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EphemerisConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EphemerisConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EphemerisConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EphemerisConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EphemerisConfig*
EphemerisConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern EphemerisConfig*
EphemerisConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EphemerisConfig*
EphemerisConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPluginSupport_copy_data(
    EphemerisConfig *out,
    const EphemerisConfig *in);

NDDSUSERDllExport extern void 
EphemerisConfigPluginSupport_destroy_data_w_params(
    EphemerisConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
EphemerisConfigPluginSupport_destroy_data_ex(
    EphemerisConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EphemerisConfigPluginSupport_destroy_data(
    EphemerisConfig *sample);

NDDSUSERDllExport extern void 
EphemerisConfigPluginSupport_print_data(
    const EphemerisConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EphemerisConfig*
EphemerisConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EphemerisConfig*
EphemerisConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EphemerisConfigPluginSupport_destroy_key_ex(
    EphemerisConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EphemerisConfigPluginSupport_destroy_key(
    EphemerisConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EphemerisConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EphemerisConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EphemerisConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EphemerisConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
EphemerisConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig *out,
    const EphemerisConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EphemerisConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EphemerisConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EphemerisConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EphemerisConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EphemerisConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EphemerisConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfigKeyHolder *key, 
    const EphemerisConfig *instance);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisConfig *instance, 
    const EphemerisConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EphemerisConfig *instance);

NDDSUSERDllExport extern RTIBool 
EphemerisConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EphemerisConfigPlugin_new(void);

NDDSUSERDllExport extern void
EphemerisConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* EphemerisConfigPlugin_2055029897_h */
