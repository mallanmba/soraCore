
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MacroConfigPlugin_2101968535_h
#define MacroConfigPlugin_2101968535_h

#include "MacroConfig.h"

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


#define MacroCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MacroCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MacroCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MacroCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MacroCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MacroCommand*
MacroCommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MacroCommand*
MacroCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroCommand*
MacroCommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MacroCommandPluginSupport_copy_data(
    MacroCommand *out,
    const MacroCommand *in);

NDDSUSERDllExport extern void 
MacroCommandPluginSupport_destroy_data_w_params(
    MacroCommand *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MacroCommandPluginSupport_destroy_data_ex(
    MacroCommand *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroCommandPluginSupport_destroy_data(
    MacroCommand *sample);

NDDSUSERDllExport extern void 
MacroCommandPluginSupport_print_data(
    const MacroCommand *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MacroCommandPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MacroCommandPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MacroCommandPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MacroCommandPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MacroCommandPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommand *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MacroCommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommand *out,
    const MacroCommand *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MacroCommandPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MacroCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroCommandPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommand *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroCommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommand **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MacroCommandPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MacroCommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MacroCommandPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MacroCommandPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MacroCommand * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MacroCommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MacroCommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MacroCommandPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MacroCommand *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroCommandPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommand * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroCommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommand ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MacroCommandPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MacroCommandPlugin_new(void);

NDDSUSERDllExport extern void
MacroCommandPlugin_delete(struct PRESTypePlugin *);


#define MacroCommandSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MacroCommandSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MacroCommandSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MacroCommandSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MacroCommandSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MacroCommandSequence128*
MacroCommandSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MacroCommandSequence128*
MacroCommandSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroCommandSequence128*
MacroCommandSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MacroCommandSequence128PluginSupport_copy_data(
    MacroCommandSequence128 *out,
    const MacroCommandSequence128 *in);

NDDSUSERDllExport extern void 
MacroCommandSequence128PluginSupport_destroy_data_w_params(
    MacroCommandSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MacroCommandSequence128PluginSupport_destroy_data_ex(
    MacroCommandSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroCommandSequence128PluginSupport_destroy_data(
    MacroCommandSequence128 *sample);

NDDSUSERDllExport extern void 
MacroCommandSequence128PluginSupport_print_data(
    const MacroCommandSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
MacroCommandSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommandSequence128 *out,
    const MacroCommandSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MacroCommandSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MacroCommandSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroCommandSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommandSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MacroCommandSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MacroCommandSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MacroCommandSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MacroCommandSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MacroCommandSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MacroCommandSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MacroCommandSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MacroCommandSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MacroCommandSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroCommandSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommandSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
MacroCommandSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroCommandSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * MacroConfig.
 *
 * By default, this type is struct MacroConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct MacroConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct MacroConfig, the
 * following restriction applies: the key of struct
 * MacroConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct MacroConfig.
*/
typedef  class MacroConfig MacroConfigKeyHolder;


#define MacroConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MacroConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MacroConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MacroConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MacroConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define MacroConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MacroConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MacroConfig*
MacroConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MacroConfig*
MacroConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroConfig*
MacroConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MacroConfigPluginSupport_copy_data(
    MacroConfig *out,
    const MacroConfig *in);

NDDSUSERDllExport extern void 
MacroConfigPluginSupport_destroy_data_w_params(
    MacroConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MacroConfigPluginSupport_destroy_data_ex(
    MacroConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroConfigPluginSupport_destroy_data(
    MacroConfig *sample);

NDDSUSERDllExport extern void 
MacroConfigPluginSupport_print_data(
    const MacroConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern MacroConfig*
MacroConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroConfig*
MacroConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MacroConfigPluginSupport_destroy_key_ex(
    MacroConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroConfigPluginSupport_destroy_key(
    MacroConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MacroConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MacroConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MacroConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MacroConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MacroConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig *out,
    const MacroConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MacroConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MacroConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MacroConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MacroConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MacroConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MacroConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MacroConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MacroConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MacroConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MacroConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfigKeyHolder *key, 
    const MacroConfig *instance);

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    MacroConfig *instance, 
    const MacroConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const MacroConfig *instance);

NDDSUSERDllExport extern RTIBool 
MacroConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MacroConfigPlugin_new(void);

NDDSUSERDllExport extern void
MacroConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MacroConfigPlugin_2101968535_h */
