
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Command.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommandPlugin_205486740_h
#define CommandPlugin_205486740_h

#include "Command.h"

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


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
QueueActionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const QueueAction *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
QueueActionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    QueueAction *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
QueueActionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
QueueActionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
QueueActionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
QueueActionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const QueueAction * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
QueueActionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const QueueAction *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
QueueActionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    QueueAction *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
QueueActionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
QueueActionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    QueueAction *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
QueueActionPluginSupport_print_data(
    const QueueAction *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * Command.
 *
 * By default, this type is struct Command
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Command)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Command, the
 * following restriction applies: the key of struct
 * Command must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Command.
*/
typedef  class Command CommandKeyHolder;


#define CommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define CommandPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define CommandPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define CommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Command*
CommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Command*
CommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Command*
CommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CommandPluginSupport_copy_data(
    Command *out,
    const Command *in);

NDDSUSERDllExport extern void 
CommandPluginSupport_destroy_data_w_params(
    Command *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CommandPluginSupport_destroy_data_ex(
    Command *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CommandPluginSupport_destroy_data(
    Command *sample);

NDDSUSERDllExport extern void 
CommandPluginSupport_print_data(
    const Command *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Command*
CommandPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Command*
CommandPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
CommandPluginSupport_destroy_key_ex(
    CommandKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CommandPluginSupport_destroy_key(
    CommandKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CommandPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CommandPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CommandPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CommandPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CommandPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Command *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Command *out,
    const Command *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CommandPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Command *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Command *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Command **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CommandPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CommandPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CommandPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Command * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CommandPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Command *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Command * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Command ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CommandPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Command *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandKeyHolder *key, 
    const Command *instance);

NDDSUSERDllExport extern RTIBool 
CommandPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Command *instance, 
    const CommandKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
CommandPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Command *instance);

NDDSUSERDllExport extern RTIBool 
CommandPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CommandPlugin_new(void);

NDDSUSERDllExport extern void
CommandPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CommandPlugin_205486740_h */
