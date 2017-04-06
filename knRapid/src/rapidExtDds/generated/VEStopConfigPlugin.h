
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from VEStopConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef VEStopConfigPlugin_1875958170_h
#define VEStopConfigPlugin_1875958170_h

#include "VEStopConfig.h"

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

namespace ext{

/* The type used to store keys for instances of type struct
 * VEStopConfig.
 *
 * By default, this type is struct VEStopConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct VEStopConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct VEStopConfig, the
 * following restriction applies: the key of struct
 * VEStopConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct VEStopConfig.
*/
typedef  class VEStopConfig VEStopConfigKeyHolder;


#define VEStopConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define VEStopConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define VEStopConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define VEStopConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define VEStopConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define VEStopConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define VEStopConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern VEStopConfig*
VEStopConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern VEStopConfig*
VEStopConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern VEStopConfig*
VEStopConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
VEStopConfigPluginSupport_copy_data(
    VEStopConfig *out,
    const VEStopConfig *in);

NDDSUSERDllExport extern void 
VEStopConfigPluginSupport_destroy_data_w_params(
    VEStopConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
VEStopConfigPluginSupport_destroy_data_ex(
    VEStopConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
VEStopConfigPluginSupport_destroy_data(
    VEStopConfig *sample);

NDDSUSERDllExport extern void 
VEStopConfigPluginSupport_print_data(
    const VEStopConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern VEStopConfig*
VEStopConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern VEStopConfig*
VEStopConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
VEStopConfigPluginSupport_destroy_key_ex(
    VEStopConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
VEStopConfigPluginSupport_destroy_key(
    VEStopConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
VEStopConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
VEStopConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
VEStopConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
VEStopConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
VEStopConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig *out,
    const VEStopConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const VEStopConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
VEStopConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
VEStopConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
VEStopConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
VEStopConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const VEStopConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
VEStopConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
VEStopConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const VEStopConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
VEStopConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfigKeyHolder *key, 
    const VEStopConfig *instance);

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    VEStopConfig *instance, 
    const VEStopConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const VEStopConfig *instance);

NDDSUSERDllExport extern RTIBool 
VEStopConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
VEStopConfigPlugin_new(void);

NDDSUSERDllExport extern void
VEStopConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* VEStopConfigPlugin_1875958170_h */
