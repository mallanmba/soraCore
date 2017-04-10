
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SpectrumConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SpectrumConfigPlugin_457348536_h
#define SpectrumConfigPlugin_457348536_h

#include "SpectrumConfig.h"

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


#define NamedIndexRangePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedIndexRangePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedIndexRangePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedIndexRangePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedIndexRangePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedIndexRange*
NamedIndexRangePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedIndexRange*
NamedIndexRangePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedIndexRange*
NamedIndexRangePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangePluginSupport_copy_data(
    NamedIndexRange *out,
    const NamedIndexRange *in);

NDDSUSERDllExport extern void 
NamedIndexRangePluginSupport_destroy_data_w_params(
    NamedIndexRange *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedIndexRangePluginSupport_destroy_data_ex(
    NamedIndexRange *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedIndexRangePluginSupport_destroy_data(
    NamedIndexRange *sample);

NDDSUSERDllExport extern void 
NamedIndexRangePluginSupport_print_data(
    const NamedIndexRange *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NamedIndexRangePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NamedIndexRangePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NamedIndexRangePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NamedIndexRangePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NamedIndexRangePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRange *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NamedIndexRangePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRange *out,
    const NamedIndexRange *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedIndexRangePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedIndexRange *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRange *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedIndexRangePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRange **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedIndexRangePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedIndexRangePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedIndexRangePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedIndexRangePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedIndexRange * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedIndexRangePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedIndexRangePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedIndexRange *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRange * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedIndexRangePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRange ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NamedIndexRangePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRange *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NamedIndexRangePlugin_new(void);

NDDSUSERDllExport extern void
NamedIndexRangePlugin_delete(struct PRESTypePlugin *);


#define NamedIndexRangeSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedIndexRangeSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedIndexRangeSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedIndexRangeSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedIndexRangeSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedIndexRangeSequence16*
NamedIndexRangeSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedIndexRangeSequence16*
NamedIndexRangeSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedIndexRangeSequence16*
NamedIndexRangeSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangeSequence16PluginSupport_copy_data(
    NamedIndexRangeSequence16 *out,
    const NamedIndexRangeSequence16 *in);

NDDSUSERDllExport extern void 
NamedIndexRangeSequence16PluginSupport_destroy_data_w_params(
    NamedIndexRangeSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedIndexRangeSequence16PluginSupport_destroy_data_ex(
    NamedIndexRangeSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedIndexRangeSequence16PluginSupport_destroy_data(
    NamedIndexRangeSequence16 *sample);

NDDSUSERDllExport extern void 
NamedIndexRangeSequence16PluginSupport_print_data(
    const NamedIndexRangeSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NamedIndexRangeSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRangeSequence16 *out,
    const NamedIndexRangeSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedIndexRangeSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedIndexRangeSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangeSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRangeSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedIndexRangeSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedIndexRangeSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedIndexRangeSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedIndexRangeSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedIndexRangeSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedIndexRangeSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedIndexRangeSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangeSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedIndexRangeSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedIndexRangeSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRangeSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NamedIndexRangeSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedIndexRangeSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * SpectrumConfig.
 *
 * By default, this type is struct SpectrumConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SpectrumConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SpectrumConfig, the
 * following restriction applies: the key of struct
 * SpectrumConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SpectrumConfig.
*/
typedef  class SpectrumConfig SpectrumConfigKeyHolder;


#define SpectrumConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SpectrumConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SpectrumConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SpectrumConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SpectrumConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SpectrumConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SpectrumConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SpectrumConfig*
SpectrumConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SpectrumConfig*
SpectrumConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SpectrumConfig*
SpectrumConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPluginSupport_copy_data(
    SpectrumConfig *out,
    const SpectrumConfig *in);

NDDSUSERDllExport extern void 
SpectrumConfigPluginSupport_destroy_data_w_params(
    SpectrumConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SpectrumConfigPluginSupport_destroy_data_ex(
    SpectrumConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SpectrumConfigPluginSupport_destroy_data(
    SpectrumConfig *sample);

NDDSUSERDllExport extern void 
SpectrumConfigPluginSupport_print_data(
    const SpectrumConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SpectrumConfig*
SpectrumConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SpectrumConfig*
SpectrumConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SpectrumConfigPluginSupport_destroy_key_ex(
    SpectrumConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SpectrumConfigPluginSupport_destroy_key(
    SpectrumConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SpectrumConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SpectrumConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SpectrumConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SpectrumConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SpectrumConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig *out,
    const SpectrumConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SpectrumConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SpectrumConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SpectrumConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SpectrumConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SpectrumConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SpectrumConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SpectrumConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SpectrumConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SpectrumConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SpectrumConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfigKeyHolder *key, 
    const SpectrumConfig *instance);

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumConfig *instance, 
    const SpectrumConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SpectrumConfig *instance);

NDDSUSERDllExport extern RTIBool 
SpectrumConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SpectrumConfigPlugin_new(void);

NDDSUSERDllExport extern void
SpectrumConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SpectrumConfigPlugin_457348536_h */
