
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FrameStoreConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FrameStoreConfigPlugin_2002790448_h
#define FrameStoreConfigPlugin_2002790448_h

#include "FrameStoreConfig.h"

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


#define FrameDefPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FrameDefPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FrameDefPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FrameDefPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FrameDefPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FrameDef*
FrameDefPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FrameDef*
FrameDefPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FrameDef*
FrameDefPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FrameDefPluginSupport_copy_data(
    FrameDef *out,
    const FrameDef *in);

NDDSUSERDllExport extern void 
FrameDefPluginSupport_destroy_data_w_params(
    FrameDef *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FrameDefPluginSupport_destroy_data_ex(
    FrameDef *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FrameDefPluginSupport_destroy_data(
    FrameDef *sample);

NDDSUSERDllExport extern void 
FrameDefPluginSupport_print_data(
    const FrameDef *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FrameDefPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FrameDefPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FrameDefPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FrameDefPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FrameDefPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameDef *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FrameDefPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameDef *out,
    const FrameDef *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FrameDefPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FrameDef *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FrameDefPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameDef *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FrameDefPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FrameDef **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FrameDefPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FrameDefPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FrameDefPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FrameDefPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FrameDef * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FrameDefPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FrameDefPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FrameDefPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FrameDef *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FrameDefPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameDef * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FrameDefPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FrameDef ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FrameDefPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FrameDef *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FrameDefPlugin_new(void);

NDDSUSERDllExport extern void
FrameDefPlugin_delete(struct PRESTypePlugin *);


#define FrameDefSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FrameDefSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FrameDefSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FrameDefSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FrameDefSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FrameDefSequence*
FrameDefSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FrameDefSequence*
FrameDefSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FrameDefSequence*
FrameDefSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FrameDefSequencePluginSupport_copy_data(
    FrameDefSequence *out,
    const FrameDefSequence *in);

NDDSUSERDllExport extern void 
FrameDefSequencePluginSupport_destroy_data_w_params(
    FrameDefSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FrameDefSequencePluginSupport_destroy_data_ex(
    FrameDefSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FrameDefSequencePluginSupport_destroy_data(
    FrameDefSequence *sample);

NDDSUSERDllExport extern void 
FrameDefSequencePluginSupport_print_data(
    const FrameDefSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FrameDefSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameDefSequence *out,
    const FrameDefSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FrameDefSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FrameDefSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FrameDefSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameDefSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FrameDefSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FrameDefSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FrameDefSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FrameDefSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FrameDefSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FrameDefSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FrameDefSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FrameDefSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FrameDefSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FrameDefSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameDefSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FrameDefSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FrameDefSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * FrameStoreConfig.
 *
 * By default, this type is struct FrameStoreConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FrameStoreConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FrameStoreConfig, the
 * following restriction applies: the key of struct
 * FrameStoreConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FrameStoreConfig.
*/
typedef  class FrameStoreConfig FrameStoreConfigKeyHolder;


#define FrameStoreConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FrameStoreConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FrameStoreConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FrameStoreConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FrameStoreConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FrameStoreConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FrameStoreConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FrameStoreConfig*
FrameStoreConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FrameStoreConfig*
FrameStoreConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FrameStoreConfig*
FrameStoreConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPluginSupport_copy_data(
    FrameStoreConfig *out,
    const FrameStoreConfig *in);

NDDSUSERDllExport extern void 
FrameStoreConfigPluginSupport_destroy_data_w_params(
    FrameStoreConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FrameStoreConfigPluginSupport_destroy_data_ex(
    FrameStoreConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FrameStoreConfigPluginSupport_destroy_data(
    FrameStoreConfig *sample);

NDDSUSERDllExport extern void 
FrameStoreConfigPluginSupport_print_data(
    const FrameStoreConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FrameStoreConfig*
FrameStoreConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FrameStoreConfig*
FrameStoreConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FrameStoreConfigPluginSupport_destroy_key_ex(
    FrameStoreConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FrameStoreConfigPluginSupport_destroy_key(
    FrameStoreConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FrameStoreConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FrameStoreConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FrameStoreConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FrameStoreConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FrameStoreConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig *out,
    const FrameStoreConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FrameStoreConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FrameStoreConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FrameStoreConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FrameStoreConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FrameStoreConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FrameStoreConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FrameStoreConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FrameStoreConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FrameStoreConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FrameStoreConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfigKeyHolder *key, 
    const FrameStoreConfig *instance);

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FrameStoreConfig *instance, 
    const FrameStoreConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FrameStoreConfig *instance);

NDDSUSERDllExport extern RTIBool 
FrameStoreConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FrameStoreConfigPlugin_new(void);

NDDSUSERDllExport extern void
FrameStoreConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FrameStoreConfigPlugin_2002790448_h */
