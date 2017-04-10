
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessManagerConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ProcessManagerConfigPlugin_196766896_h
#define ProcessManagerConfigPlugin_196766896_h

#include "ProcessManagerConfig.h"

#include "BaseTypesPlugin.h"


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

/**

 * ProcessConfig

 */


#define ProcessConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ProcessConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ProcessConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ProcessConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ProcessConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ProcessConfig*
ProcessConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ProcessConfig*
ProcessConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessConfig*
ProcessConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ProcessConfigPluginSupport_copy_data(
    ProcessConfig *out,
    const ProcessConfig *in);

NDDSUSERDllExport extern void 
ProcessConfigPluginSupport_destroy_data_w_params(
    ProcessConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ProcessConfigPluginSupport_destroy_data_ex(
    ProcessConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessConfigPluginSupport_destroy_data(
    ProcessConfig *sample);

NDDSUSERDllExport extern void 
ProcessConfigPluginSupport_print_data(
    const ProcessConfig *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ProcessConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ProcessConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ProcessConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ProcessConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ProcessConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ProcessConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfig *out,
    const ProcessConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ProcessConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ProcessConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ProcessConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ProcessConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ProcessConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ProcessConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ProcessConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ProcessConfigPlugin_new(void);

NDDSUSERDllExport extern void
ProcessConfigPlugin_delete(struct PRESTypePlugin *);


#define ProcessConfigSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ProcessConfigSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ProcessConfigSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ProcessConfigSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ProcessConfigSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ProcessConfigSequence*
ProcessConfigSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ProcessConfigSequence*
ProcessConfigSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessConfigSequence*
ProcessConfigSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ProcessConfigSequencePluginSupport_copy_data(
    ProcessConfigSequence *out,
    const ProcessConfigSequence *in);

NDDSUSERDllExport extern void 
ProcessConfigSequencePluginSupport_destroy_data_w_params(
    ProcessConfigSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ProcessConfigSequencePluginSupport_destroy_data_ex(
    ProcessConfigSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessConfigSequencePluginSupport_destroy_data(
    ProcessConfigSequence *sample);

NDDSUSERDllExport extern void 
ProcessConfigSequencePluginSupport_print_data(
    const ProcessConfigSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ProcessConfigSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfigSequence *out,
    const ProcessConfigSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ProcessConfigSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessConfigSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfigSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ProcessConfigSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessConfigSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ProcessConfigSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessConfigSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessConfigSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ProcessConfigSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ProcessConfigSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ProcessConfigSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessConfigSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessConfigSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfigSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ProcessConfigSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessConfigSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/**

 * ProcessManagerConfig

 */

/* The type used to store keys for instances of type struct
 * ProcessManagerConfig.
 *
 * By default, this type is struct ProcessManagerConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ProcessManagerConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ProcessManagerConfig, the
 * following restriction applies: the key of struct
 * ProcessManagerConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ProcessManagerConfig.
*/
typedef  class ProcessManagerConfig ProcessManagerConfigKeyHolder;


#define ProcessManagerConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ProcessManagerConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ProcessManagerConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ProcessManagerConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ProcessManagerConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ProcessManagerConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ProcessManagerConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ProcessManagerConfig*
ProcessManagerConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ProcessManagerConfig*
ProcessManagerConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessManagerConfig*
ProcessManagerConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPluginSupport_copy_data(
    ProcessManagerConfig *out,
    const ProcessManagerConfig *in);

NDDSUSERDllExport extern void 
ProcessManagerConfigPluginSupport_destroy_data_w_params(
    ProcessManagerConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ProcessManagerConfigPluginSupport_destroy_data_ex(
    ProcessManagerConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessManagerConfigPluginSupport_destroy_data(
    ProcessManagerConfig *sample);

NDDSUSERDllExport extern void 
ProcessManagerConfigPluginSupport_print_data(
    const ProcessManagerConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ProcessManagerConfig*
ProcessManagerConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessManagerConfig*
ProcessManagerConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ProcessManagerConfigPluginSupport_destroy_key_ex(
    ProcessManagerConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessManagerConfigPluginSupport_destroy_key(
    ProcessManagerConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ProcessManagerConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ProcessManagerConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ProcessManagerConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ProcessManagerConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ProcessManagerConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig *out,
    const ProcessManagerConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessManagerConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ProcessManagerConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessManagerConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ProcessManagerConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessManagerConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessManagerConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ProcessManagerConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ProcessManagerConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessManagerConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ProcessManagerConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfigKeyHolder *key, 
    const ProcessManagerConfig *instance);

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerConfig *instance, 
    const ProcessManagerConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ProcessManagerConfig *instance);

NDDSUSERDllExport extern RTIBool 
ProcessManagerConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ProcessManagerConfigPlugin_new(void);

NDDSUSERDllExport extern void
ProcessManagerConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ProcessManagerConfigPlugin_196766896_h */
