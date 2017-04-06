
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Message.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessagePlugin_793628358_h
#define MessagePlugin_793628358_h

#include "Message.h"

#include "HeaderPlugin.h"




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
 * Message.
 *
 * By default, this type is struct Message
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Message)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Message, the
 * following restriction applies: the key of struct
 * Message must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Message.
*/
typedef  class Message MessageKeyHolder;


#define MessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define MessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Message*
MessagePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Message*
MessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Message*
MessagePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MessagePluginSupport_copy_data(
    Message *out,
    const Message *in);

NDDSUSERDllExport extern void 
MessagePluginSupport_destroy_data_w_params(
    Message *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MessagePluginSupport_destroy_data_ex(
    Message *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MessagePluginSupport_destroy_data(
    Message *sample);

NDDSUSERDllExport extern void 
MessagePluginSupport_print_data(
    const Message *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Message*
MessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Message*
MessagePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MessagePluginSupport_destroy_key_ex(
    MessageKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MessagePluginSupport_destroy_key(
    MessageKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MessagePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MessagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MessagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MessagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MessagePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Message *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MessagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Message *out,
    const Message *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MessagePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Message *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MessagePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Message *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MessagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Message **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MessagePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MessagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MessagePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MessagePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Message * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MessagePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MessagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MessagePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Message *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MessagePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Message * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MessagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Message ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MessagePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Message *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MessagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MessageKeyHolder *key, 
    const Message *instance);

NDDSUSERDllExport extern RTIBool 
MessagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Message *instance, 
    const MessageKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MessagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Message *instance);

NDDSUSERDllExport extern RTIBool 
MessagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MessagePlugin_new(void);

NDDSUSERDllExport extern void
MessagePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MessagePlugin_793628358_h */
