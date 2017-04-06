
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GpsConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GpsConfigPlugin_253487379_h
#define GpsConfigPlugin_253487379_h

#include "GpsConfig.h"

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

namespace arc{

/* The type used to store keys for instances of type struct
 * GpsConfig.
 *
 * By default, this type is struct GpsConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct GpsConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct GpsConfig, the
 * following restriction applies: the key of struct
 * GpsConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct GpsConfig.
*/
typedef  class GpsConfig GpsConfigKeyHolder;


#define GpsConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GpsConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GpsConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define GpsConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define GpsConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define GpsConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GpsConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GpsConfig*
GpsConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GpsConfig*
GpsConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GpsConfig*
GpsConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GpsConfigPluginSupport_copy_data(
    GpsConfig *out,
    const GpsConfig *in);

NDDSUSERDllExport extern void 
GpsConfigPluginSupport_destroy_data_w_params(
    GpsConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GpsConfigPluginSupport_destroy_data_ex(
    GpsConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GpsConfigPluginSupport_destroy_data(
    GpsConfig *sample);

NDDSUSERDllExport extern void 
GpsConfigPluginSupport_print_data(
    const GpsConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern GpsConfig*
GpsConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GpsConfig*
GpsConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
GpsConfigPluginSupport_destroy_key_ex(
    GpsConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GpsConfigPluginSupport_destroy_key(
    GpsConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GpsConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GpsConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
GpsConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GpsConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
GpsConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig *out,
    const GpsConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GpsConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GpsConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GpsConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GpsConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GpsConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GpsConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GpsConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GpsConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GpsConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GpsConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfigKeyHolder *key, 
    const GpsConfig *instance);

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GpsConfig *instance, 
    const GpsConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GpsConfig *instance);

NDDSUSERDllExport extern RTIBool 
GpsConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GpsConfigPlugin_new(void);

NDDSUSERDllExport extern void
GpsConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* GpsConfigPlugin_253487379_h */
