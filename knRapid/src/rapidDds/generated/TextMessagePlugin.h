
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TextMessage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TextMessagePlugin_297220591_h
#define TextMessagePlugin_297220591_h

#include "TextMessage.h"

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
MessageLevelPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MessageLevel *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
MessageLevelPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MessageLevel *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
MessageLevelPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
MessageLevelPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MessageLevelPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MessageLevelPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MessageLevel * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
MessageLevelPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MessageLevel *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MessageLevelPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MessageLevel *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MessageLevelPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
MessageLevelPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MessageLevel *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
MessageLevelPluginSupport_print_data(
    const MessageLevel *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * TextMessage.
 *
 * By default, this type is struct TextMessage
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TextMessage)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TextMessage, the
 * following restriction applies: the key of struct
 * TextMessage must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TextMessage.
*/
typedef  class TextMessage TextMessageKeyHolder;


#define TextMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TextMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TextMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TextMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TextMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TextMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TextMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TextMessage*
TextMessagePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TextMessage*
TextMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TextMessage*
TextMessagePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TextMessagePluginSupport_copy_data(
    TextMessage *out,
    const TextMessage *in);

NDDSUSERDllExport extern void 
TextMessagePluginSupport_destroy_data_w_params(
    TextMessage *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TextMessagePluginSupport_destroy_data_ex(
    TextMessage *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TextMessagePluginSupport_destroy_data(
    TextMessage *sample);

NDDSUSERDllExport extern void 
TextMessagePluginSupport_print_data(
    const TextMessage *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TextMessage*
TextMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TextMessage*
TextMessagePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TextMessagePluginSupport_destroy_key_ex(
    TextMessageKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TextMessagePluginSupport_destroy_key(
    TextMessageKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TextMessagePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TextMessagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TextMessagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TextMessagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TextMessagePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage *out,
    const TextMessage *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TextMessage *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TextMessagePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TextMessagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TextMessagePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TextMessagePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TextMessage * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TextMessagePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TextMessagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TextMessage *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TextMessagePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TextMessageKeyHolder *key, 
    const TextMessage *instance);

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TextMessage *instance, 
    const TextMessageKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TextMessage *instance);

NDDSUSERDllExport extern RTIBool 
TextMessagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TextMessagePlugin_new(void);

NDDSUSERDllExport extern void
TextMessagePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TextMessagePlugin_297220591_h */
