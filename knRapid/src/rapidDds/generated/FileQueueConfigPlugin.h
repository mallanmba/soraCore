
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueConfigPlugin_1881571180_h
#define FileQueueConfigPlugin_1881571180_h

#include "FileQueueConfig.h"

#include "MessagePlugin.h"


#include "BaseTypesPlugin.h"




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


#define ChannelConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ChannelConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ChannelConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ChannelConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ChannelConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ChannelConfig*
ChannelConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ChannelConfig*
ChannelConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ChannelConfig*
ChannelConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ChannelConfigPluginSupport_copy_data(
    ChannelConfig *out,
    const ChannelConfig *in);

NDDSUSERDllExport extern void 
ChannelConfigPluginSupport_destroy_data_w_params(
    ChannelConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ChannelConfigPluginSupport_destroy_data_ex(
    ChannelConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ChannelConfigPluginSupport_destroy_data(
    ChannelConfig *sample);

NDDSUSERDllExport extern void 
ChannelConfigPluginSupport_print_data(
    const ChannelConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ChannelConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ChannelConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ChannelConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ChannelConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ChannelConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ChannelConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfig *out,
    const ChannelConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ChannelConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ChannelConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ChannelConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ChannelConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ChannelConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ChannelConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ChannelConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ChannelConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ChannelConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ChannelConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ChannelConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ChannelConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ChannelConfigPlugin_new(void);

NDDSUSERDllExport extern void
ChannelConfigPlugin_delete(struct PRESTypePlugin *);


#define ChannelConfigSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ChannelConfigSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ChannelConfigSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ChannelConfigSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ChannelConfigSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ChannelConfigSequence*
ChannelConfigSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ChannelConfigSequence*
ChannelConfigSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ChannelConfigSequence*
ChannelConfigSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ChannelConfigSequencePluginSupport_copy_data(
    ChannelConfigSequence *out,
    const ChannelConfigSequence *in);

NDDSUSERDllExport extern void 
ChannelConfigSequencePluginSupport_destroy_data_w_params(
    ChannelConfigSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ChannelConfigSequencePluginSupport_destroy_data_ex(
    ChannelConfigSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ChannelConfigSequencePluginSupport_destroy_data(
    ChannelConfigSequence *sample);

NDDSUSERDllExport extern void 
ChannelConfigSequencePluginSupport_print_data(
    const ChannelConfigSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ChannelConfigSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfigSequence *out,
    const ChannelConfigSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ChannelConfigSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelConfigSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfigSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ChannelConfigSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ChannelConfigSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ChannelConfigSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ChannelConfigSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ChannelConfigSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ChannelConfigSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ChannelConfigSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ChannelConfigSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelConfigSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelConfigSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfigSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ChannelConfigSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ChannelConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * FileQueueConfig.
 *
 * By default, this type is struct FileQueueConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FileQueueConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FileQueueConfig, the
 * following restriction applies: the key of struct
 * FileQueueConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FileQueueConfig.
*/
typedef  class FileQueueConfig FileQueueConfigKeyHolder;


#define FileQueueConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FileQueueConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FileQueueConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FileQueueConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FileQueueConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FileQueueConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FileQueueConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FileQueueConfig*
FileQueueConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FileQueueConfig*
FileQueueConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueConfig*
FileQueueConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPluginSupport_copy_data(
    FileQueueConfig *out,
    const FileQueueConfig *in);

NDDSUSERDllExport extern void 
FileQueueConfigPluginSupport_destroy_data_w_params(
    FileQueueConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FileQueueConfigPluginSupport_destroy_data_ex(
    FileQueueConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueConfigPluginSupport_destroy_data(
    FileQueueConfig *sample);

NDDSUSERDllExport extern void 
FileQueueConfigPluginSupport_print_data(
    const FileQueueConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FileQueueConfig*
FileQueueConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueConfig*
FileQueueConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FileQueueConfigPluginSupport_destroy_key_ex(
    FileQueueConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueConfigPluginSupport_destroy_key(
    FileQueueConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FileQueueConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FileQueueConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FileQueueConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FileQueueConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FileQueueConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig *out,
    const FileQueueConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FileQueueConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FileQueueConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FileQueueConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileQueueConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileQueueConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FileQueueConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FileQueueConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FileQueueConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfigKeyHolder *key, 
    const FileQueueConfig *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueConfig *instance, 
    const FileQueueConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileQueueConfig *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FileQueueConfigPlugin_new(void);

NDDSUSERDllExport extern void
FileQueueConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FileQueueConfigPlugin_1881571180_h */
