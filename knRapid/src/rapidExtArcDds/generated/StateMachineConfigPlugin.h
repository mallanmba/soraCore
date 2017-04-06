
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StateMachineConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StateMachineConfigPlugin_1683097370_h
#define StateMachineConfigPlugin_1683097370_h

#include "StateMachineConfig.h"

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

namespace arc{


#define TransitionTriplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TransitionTriplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TransitionTriplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TransitionTriplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TransitionTriplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TransitionTriple*
TransitionTriplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TransitionTriple*
TransitionTriplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TransitionTriple*
TransitionTriplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TransitionTriplePluginSupport_copy_data(
    TransitionTriple *out,
    const TransitionTriple *in);

NDDSUSERDllExport extern void 
TransitionTriplePluginSupport_destroy_data_w_params(
    TransitionTriple *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TransitionTriplePluginSupport_destroy_data_ex(
    TransitionTriple *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TransitionTriplePluginSupport_destroy_data(
    TransitionTriple *sample);

NDDSUSERDllExport extern void 
TransitionTriplePluginSupport_print_data(
    const TransitionTriple *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TransitionTriplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TransitionTriplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TransitionTriplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TransitionTriplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TransitionTriplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransitionTriple *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TransitionTriplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransitionTriple *out,
    const TransitionTriple *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TransitionTriplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TransitionTriple *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TransitionTriplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransitionTriple *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TransitionTriplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TransitionTriple **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TransitionTriplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TransitionTriplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TransitionTriplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TransitionTriplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TransitionTriple * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TransitionTriplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TransitionTriplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TransitionTriplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TransitionTriple *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TransitionTriplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransitionTriple * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TransitionTriplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TransitionTriple ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TransitionTriplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TransitionTriple *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TransitionTriplePlugin_new(void);

NDDSUSERDllExport extern void
TransitionTriplePlugin_delete(struct PRESTypePlugin *);


#define TransitionSequence16KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TransitionSequence16KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TransitionSequence16KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TransitionSequence16KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TransitionSequence16KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TransitionSequence16K*
TransitionSequence16KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TransitionSequence16K*
TransitionSequence16KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TransitionSequence16K*
TransitionSequence16KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TransitionSequence16KPluginSupport_copy_data(
    TransitionSequence16K *out,
    const TransitionSequence16K *in);

NDDSUSERDllExport extern void 
TransitionSequence16KPluginSupport_destroy_data_w_params(
    TransitionSequence16K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TransitionSequence16KPluginSupport_destroy_data_ex(
    TransitionSequence16K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TransitionSequence16KPluginSupport_destroy_data(
    TransitionSequence16K *sample);

NDDSUSERDllExport extern void 
TransitionSequence16KPluginSupport_print_data(
    const TransitionSequence16K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
TransitionSequence16KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransitionSequence16K *out,
    const TransitionSequence16K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TransitionSequence16KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TransitionSequence16K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TransitionSequence16KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransitionSequence16K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TransitionSequence16KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TransitionSequence16KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TransitionSequence16KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TransitionSequence16KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TransitionSequence16K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TransitionSequence16KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TransitionSequence16KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TransitionSequence16KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TransitionSequence16K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TransitionSequence16KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TransitionSequence16K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TransitionSequence16KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TransitionSequence16K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * StateMachineConfig.
 *
 * By default, this type is struct StateMachineConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct StateMachineConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct StateMachineConfig, the
 * following restriction applies: the key of struct
 * StateMachineConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct StateMachineConfig.
*/
typedef  class StateMachineConfig StateMachineConfigKeyHolder;


#define StateMachineConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define StateMachineConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define StateMachineConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define StateMachineConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define StateMachineConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define StateMachineConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define StateMachineConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern StateMachineConfig*
StateMachineConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern StateMachineConfig*
StateMachineConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StateMachineConfig*
StateMachineConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPluginSupport_copy_data(
    StateMachineConfig *out,
    const StateMachineConfig *in);

NDDSUSERDllExport extern void 
StateMachineConfigPluginSupport_destroy_data_w_params(
    StateMachineConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
StateMachineConfigPluginSupport_destroy_data_ex(
    StateMachineConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StateMachineConfigPluginSupport_destroy_data(
    StateMachineConfig *sample);

NDDSUSERDllExport extern void 
StateMachineConfigPluginSupport_print_data(
    const StateMachineConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern StateMachineConfig*
StateMachineConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StateMachineConfig*
StateMachineConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
StateMachineConfigPluginSupport_destroy_key_ex(
    StateMachineConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StateMachineConfigPluginSupport_destroy_key(
    StateMachineConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
StateMachineConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
StateMachineConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
StateMachineConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
StateMachineConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
StateMachineConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig *out,
    const StateMachineConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const StateMachineConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
StateMachineConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StateMachineConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
StateMachineConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StateMachineConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const StateMachineConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
StateMachineConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
StateMachineConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const StateMachineConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
StateMachineConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfigKeyHolder *key, 
    const StateMachineConfig *instance);

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineConfig *instance, 
    const StateMachineConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const StateMachineConfig *instance);

NDDSUSERDllExport extern RTIBool 
StateMachineConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
StateMachineConfigPlugin_new(void);

NDDSUSERDllExport extern void
StateMachineConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* StateMachineConfigPlugin_1683097370_h */
