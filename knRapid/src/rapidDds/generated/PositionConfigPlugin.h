
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PositionConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PositionConfigPlugin_1147397490_h
#define PositionConfigPlugin_1147397490_h

#include "PositionConfig.h"

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

/* The type used to store keys for instances of type struct
 * PositionConfig.
 *
 * By default, this type is struct PositionConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct PositionConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct PositionConfig, the
 * following restriction applies: the key of struct
 * PositionConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct PositionConfig.
*/
typedef  class PositionConfig PositionConfigKeyHolder;


#define PositionConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PositionConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PositionConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define PositionConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PositionConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define PositionConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PositionConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PositionConfig*
PositionConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PositionConfig*
PositionConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PositionConfig*
PositionConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PositionConfigPluginSupport_copy_data(
    PositionConfig *out,
    const PositionConfig *in);

NDDSUSERDllExport extern void 
PositionConfigPluginSupport_destroy_data_w_params(
    PositionConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PositionConfigPluginSupport_destroy_data_ex(
    PositionConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PositionConfigPluginSupport_destroy_data(
    PositionConfig *sample);

NDDSUSERDllExport extern void 
PositionConfigPluginSupport_print_data(
    const PositionConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern PositionConfig*
PositionConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PositionConfig*
PositionConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PositionConfigPluginSupport_destroy_key_ex(
    PositionConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PositionConfigPluginSupport_destroy_key(
    PositionConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PositionConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PositionConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
PositionConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PositionConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
PositionConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig *out,
    const PositionConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PositionConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PositionConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PositionConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PositionConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PositionConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PositionConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PositionConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PositionConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PositionConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
PositionConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfigKeyHolder *key, 
    const PositionConfig *instance);

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PositionConfig *instance, 
    const PositionConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const PositionConfig *instance);

NDDSUSERDllExport extern RTIBool 
PositionConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PositionConfigPlugin_new(void);

NDDSUSERDllExport extern void
PositionConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* PositionConfigPlugin_1147397490_h */
