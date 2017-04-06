
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from JointConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef JointConfigPlugin_714822731_h
#define JointConfigPlugin_714822731_h

#include "JointConfig.h"

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


#define JointDefPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define JointDefPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define JointDefPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define JointDefPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define JointDefPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern JointDef*
JointDefPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern JointDef*
JointDefPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern JointDef*
JointDefPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
JointDefPluginSupport_copy_data(
    JointDef *out,
    const JointDef *in);

NDDSUSERDllExport extern void 
JointDefPluginSupport_destroy_data_w_params(
    JointDef *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
JointDefPluginSupport_destroy_data_ex(
    JointDef *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
JointDefPluginSupport_destroy_data(
    JointDef *sample);

NDDSUSERDllExport extern void 
JointDefPluginSupport_print_data(
    const JointDef *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
JointDefPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
JointDefPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
JointDefPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
JointDefPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
JointDefPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointDef *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
JointDefPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointDef *out,
    const JointDef *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
JointDefPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const JointDef *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointDefPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointDef *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointDefPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    JointDef **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
JointDefPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
JointDefPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
JointDefPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
JointDefPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const JointDef * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
JointDefPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
JointDefPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
JointDefPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const JointDef *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointDefPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointDef * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointDefPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    JointDef ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
JointDefPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JointDef *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
JointDefPlugin_new(void);

NDDSUSERDllExport extern void
JointDefPlugin_delete(struct PRESTypePlugin *);


#define JointDefSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define JointDefSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define JointDefSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define JointDefSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define JointDefSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern JointDefSequence*
JointDefSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern JointDefSequence*
JointDefSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern JointDefSequence*
JointDefSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
JointDefSequencePluginSupport_copy_data(
    JointDefSequence *out,
    const JointDefSequence *in);

NDDSUSERDllExport extern void 
JointDefSequencePluginSupport_destroy_data_w_params(
    JointDefSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
JointDefSequencePluginSupport_destroy_data_ex(
    JointDefSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
JointDefSequencePluginSupport_destroy_data(
    JointDefSequence *sample);

NDDSUSERDllExport extern void 
JointDefSequencePluginSupport_print_data(
    const JointDefSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
JointDefSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointDefSequence *out,
    const JointDefSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
JointDefSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const JointDefSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointDefSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointDefSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
JointDefSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
JointDefSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
JointDefSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
JointDefSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const JointDefSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
JointDefSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
JointDefSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
JointDefSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const JointDefSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointDefSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointDefSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
JointDefSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JointDefSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * JointConfig.
 *
 * By default, this type is struct JointConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct JointConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct JointConfig, the
 * following restriction applies: the key of struct
 * JointConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct JointConfig.
*/
typedef  class JointConfig JointConfigKeyHolder;


#define JointConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define JointConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define JointConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define JointConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define JointConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define JointConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define JointConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern JointConfig*
JointConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern JointConfig*
JointConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern JointConfig*
JointConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
JointConfigPluginSupport_copy_data(
    JointConfig *out,
    const JointConfig *in);

NDDSUSERDllExport extern void 
JointConfigPluginSupport_destroy_data_w_params(
    JointConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
JointConfigPluginSupport_destroy_data_ex(
    JointConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
JointConfigPluginSupport_destroy_data(
    JointConfig *sample);

NDDSUSERDllExport extern void 
JointConfigPluginSupport_print_data(
    const JointConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern JointConfig*
JointConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern JointConfig*
JointConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
JointConfigPluginSupport_destroy_key_ex(
    JointConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
JointConfigPluginSupport_destroy_key(
    JointConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
JointConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
JointConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
JointConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
JointConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
JointConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig *out,
    const JointConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const JointConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
JointConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
JointConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
JointConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
JointConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const JointConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
JointConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
JointConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const JointConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
JointConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JointConfigKeyHolder *key, 
    const JointConfig *instance);

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    JointConfig *instance, 
    const JointConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const JointConfig *instance);

NDDSUSERDllExport extern RTIBool 
JointConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
JointConfigPlugin_new(void);

NDDSUSERDllExport extern void
JointConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* JointConfigPlugin_714822731_h */
