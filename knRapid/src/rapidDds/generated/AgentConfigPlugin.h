
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AgentConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AgentConfigPlugin_954873217_h
#define AgentConfigPlugin_954873217_h

#include "AgentConfig.h"

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

/* The type used to store keys for instances of type struct
 * AgentConfig.
 *
 * By default, this type is struct AgentConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AgentConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AgentConfig, the
 * following restriction applies: the key of struct
 * AgentConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AgentConfig.
*/
typedef  class AgentConfig AgentConfigKeyHolder;


#define AgentConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define AgentConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AgentConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AgentConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AgentConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AgentConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AgentConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AgentConfig*
AgentConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern AgentConfig*
AgentConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AgentConfig*
AgentConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AgentConfigPluginSupport_copy_data(
    AgentConfig *out,
    const AgentConfig *in);

NDDSUSERDllExport extern void 
AgentConfigPluginSupport_destroy_data_w_params(
    AgentConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
AgentConfigPluginSupport_destroy_data_ex(
    AgentConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AgentConfigPluginSupport_destroy_data(
    AgentConfig *sample);

NDDSUSERDllExport extern void 
AgentConfigPluginSupport_print_data(
    const AgentConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AgentConfig*
AgentConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AgentConfig*
AgentConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AgentConfigPluginSupport_destroy_key_ex(
    AgentConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AgentConfigPluginSupport_destroy_key(
    AgentConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AgentConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AgentConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AgentConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AgentConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
AgentConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig *out,
    const AgentConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AgentConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
AgentConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AgentConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AgentConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AgentConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AgentConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AgentConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AgentConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AgentConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AgentConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfigKeyHolder *key, 
    const AgentConfig *instance);

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AgentConfig *instance, 
    const AgentConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AgentConfig *instance);

NDDSUSERDllExport extern RTIBool 
AgentConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AgentConfigPlugin_new(void);

NDDSUSERDllExport extern void
AgentConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* AgentConfigPlugin_954873217_h */
