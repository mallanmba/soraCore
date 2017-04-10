
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeAck.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeAckPlugin_459267048_h
#define NoticeAckPlugin_459267048_h

#include "NoticeAck.h"

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

namespace traclabs{

/* The type used to store keys for instances of type struct
 * NoticeAck.
 *
 * By default, this type is struct NoticeAck
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct NoticeAck)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct NoticeAck, the
 * following restriction applies: the key of struct
 * NoticeAck must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct NoticeAck.
*/
typedef  class NoticeAck NoticeAckKeyHolder;


#define NoticeAckPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NoticeAckPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NoticeAckPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define NoticeAckPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define NoticeAckPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define NoticeAckPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NoticeAckPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NoticeAck*
NoticeAckPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NoticeAck*
NoticeAckPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeAck*
NoticeAckPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NoticeAckPluginSupport_copy_data(
    NoticeAck *out,
    const NoticeAck *in);

NDDSUSERDllExport extern void 
NoticeAckPluginSupport_destroy_data_w_params(
    NoticeAck *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NoticeAckPluginSupport_destroy_data_ex(
    NoticeAck *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeAckPluginSupport_destroy_data(
    NoticeAck *sample);

NDDSUSERDllExport extern void 
NoticeAckPluginSupport_print_data(
    const NoticeAck *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern NoticeAck*
NoticeAckPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeAck*
NoticeAckPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
NoticeAckPluginSupport_destroy_key_ex(
    NoticeAckKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeAckPluginSupport_destroy_key(
    NoticeAckKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NoticeAckPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NoticeAckPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NoticeAckPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NoticeAckPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NoticeAckPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck *out,
    const NoticeAck *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeAck *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NoticeAckPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NoticeAckPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NoticeAckPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NoticeAckPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NoticeAck * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NoticeAckPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NoticeAckPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeAck *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NoticeAckPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAckKeyHolder *key, 
    const NoticeAck *instance);

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    NoticeAck *instance, 
    const NoticeAckKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const NoticeAck *instance);

NDDSUSERDllExport extern RTIBool 
NoticeAckPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NoticeAckPlugin_new(void);

NDDSUSERDllExport extern void
NoticeAckPlugin_delete(struct PRESTypePlugin *);

} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* NoticeAckPlugin_459267048_h */
