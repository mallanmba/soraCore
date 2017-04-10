
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GeometryConfigPlugin_227136281_h
#define GeometryConfigPlugin_227136281_h

#include "GeometryConfig.h"

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

/* The type used to store keys for instances of type struct
 * GeometryConfig.
 *
 * By default, this type is struct GeometryConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct GeometryConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct GeometryConfig, the
 * following restriction applies: the key of struct
 * GeometryConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct GeometryConfig.
*/
typedef  class GeometryConfig GeometryConfigKeyHolder;


#define GeometryConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GeometryConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GeometryConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define GeometryConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define GeometryConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define GeometryConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GeometryConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GeometryConfig*
GeometryConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GeometryConfig*
GeometryConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GeometryConfig*
GeometryConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GeometryConfigPluginSupport_copy_data(
    GeometryConfig *out,
    const GeometryConfig *in);

NDDSUSERDllExport extern void 
GeometryConfigPluginSupport_destroy_data_w_params(
    GeometryConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GeometryConfigPluginSupport_destroy_data_ex(
    GeometryConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GeometryConfigPluginSupport_destroy_data(
    GeometryConfig *sample);

NDDSUSERDllExport extern void 
GeometryConfigPluginSupport_print_data(
    const GeometryConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern GeometryConfig*
GeometryConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GeometryConfig*
GeometryConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
GeometryConfigPluginSupport_destroy_key_ex(
    GeometryConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GeometryConfigPluginSupport_destroy_key(
    GeometryConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GeometryConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GeometryConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
GeometryConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GeometryConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
GeometryConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig *out,
    const GeometryConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GeometryConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GeometryConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GeometryConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GeometryConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GeometryConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GeometryConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GeometryConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfigKeyHolder *key, 
    const GeometryConfig *instance);

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GeometryConfig *instance, 
    const GeometryConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GeometryConfig *instance);

NDDSUSERDllExport extern RTIBool 
GeometryConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GeometryConfigPlugin_new(void);

NDDSUSERDllExport extern void
GeometryConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* GeometryConfigPlugin_227136281_h */
