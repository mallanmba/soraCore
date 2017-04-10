
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeConfigPlugin_1024433843_h
#define NoticeConfigPlugin_1024433843_h

#include "NoticeConfig.h"

#include "NoticeTypesPlugin.h"


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

/**

 * Notice item description

 */


#define NoticeItemPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NoticeItemPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NoticeItemPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NoticeItemPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NoticeItemPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NoticeItem*
NoticeItemPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NoticeItem*
NoticeItemPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeItem*
NoticeItemPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NoticeItemPluginSupport_copy_data(
    NoticeItem *out,
    const NoticeItem *in);

NDDSUSERDllExport extern void 
NoticeItemPluginSupport_destroy_data_w_params(
    NoticeItem *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NoticeItemPluginSupport_destroy_data_ex(
    NoticeItem *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeItemPluginSupport_destroy_data(
    NoticeItem *sample);

NDDSUSERDllExport extern void 
NoticeItemPluginSupport_print_data(
    const NoticeItem *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NoticeItemPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NoticeItemPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NoticeItemPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NoticeItemPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NoticeItemPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItem *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NoticeItemPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItem *out,
    const NoticeItem *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NoticeItemPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeItem *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeItemPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItem *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeItemPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItem **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NoticeItemPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NoticeItemPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NoticeItemPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NoticeItemPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NoticeItem * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NoticeItemPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NoticeItemPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NoticeItemPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeItem *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeItemPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItem * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeItemPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItem ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NoticeItemPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItem *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NoticeItemPlugin_new(void);

NDDSUSERDllExport extern void
NoticeItemPlugin_delete(struct PRESTypePlugin *);


#define NoticeItemSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NoticeItemSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NoticeItemSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NoticeItemSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NoticeItemSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NoticeItemSequence*
NoticeItemSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NoticeItemSequence*
NoticeItemSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeItemSequence*
NoticeItemSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NoticeItemSequencePluginSupport_copy_data(
    NoticeItemSequence *out,
    const NoticeItemSequence *in);

NDDSUSERDllExport extern void 
NoticeItemSequencePluginSupport_destroy_data_w_params(
    NoticeItemSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NoticeItemSequencePluginSupport_destroy_data_ex(
    NoticeItemSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeItemSequencePluginSupport_destroy_data(
    NoticeItemSequence *sample);

NDDSUSERDllExport extern void 
NoticeItemSequencePluginSupport_print_data(
    const NoticeItemSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NoticeItemSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItemSequence *out,
    const NoticeItemSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NoticeItemSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeItemSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeItemSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItemSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NoticeItemSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NoticeItemSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NoticeItemSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NoticeItemSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NoticeItemSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NoticeItemSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NoticeItemSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NoticeItemSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeItemSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeItemSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItemSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NoticeItemSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeItemSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/**

 * NoticeConfig describes the possible notice items

 * and value keys for extension data

 */

/* The type used to store keys for instances of type struct
 * NoticeConfig.
 *
 * By default, this type is struct NoticeConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct NoticeConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct NoticeConfig, the
 * following restriction applies: the key of struct
 * NoticeConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct NoticeConfig.
*/
typedef  class NoticeConfig NoticeConfigKeyHolder;


#define NoticeConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NoticeConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NoticeConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define NoticeConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define NoticeConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define NoticeConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NoticeConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NoticeConfig*
NoticeConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NoticeConfig*
NoticeConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeConfig*
NoticeConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NoticeConfigPluginSupport_copy_data(
    NoticeConfig *out,
    const NoticeConfig *in);

NDDSUSERDllExport extern void 
NoticeConfigPluginSupport_destroy_data_w_params(
    NoticeConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NoticeConfigPluginSupport_destroy_data_ex(
    NoticeConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeConfigPluginSupport_destroy_data(
    NoticeConfig *sample);

NDDSUSERDllExport extern void 
NoticeConfigPluginSupport_print_data(
    const NoticeConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern NoticeConfig*
NoticeConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeConfig*
NoticeConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
NoticeConfigPluginSupport_destroy_key_ex(
    NoticeConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeConfigPluginSupport_destroy_key(
    NoticeConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NoticeConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NoticeConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NoticeConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NoticeConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NoticeConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig *out,
    const NoticeConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NoticeConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NoticeConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NoticeConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NoticeConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NoticeConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NoticeConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NoticeConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NoticeConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfigKeyHolder *key, 
    const NoticeConfig *instance);

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    NoticeConfig *instance, 
    const NoticeConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const NoticeConfig *instance);

NDDSUSERDllExport extern RTIBool 
NoticeConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NoticeConfigPlugin_new(void);

NDDSUSERDllExport extern void
NoticeConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* NoticeConfigPlugin_1024433843_h */
