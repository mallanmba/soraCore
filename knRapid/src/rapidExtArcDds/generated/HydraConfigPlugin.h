
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HydraConfigPlugin_1295220390_h
#define HydraConfigPlugin_1295220390_h

#include "HydraConfig.h"

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
 * HydraConfig.
 *
 * By default, this type is struct HydraConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct HydraConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct HydraConfig, the
 * following restriction applies: the key of struct
 * HydraConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct HydraConfig.
*/
typedef  class HydraConfig HydraConfigKeyHolder;


#define HydraConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define HydraConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HydraConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define HydraConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define HydraConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define HydraConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HydraConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HydraConfig*
HydraConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HydraConfig*
HydraConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HydraConfig*
HydraConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HydraConfigPluginSupport_copy_data(
    HydraConfig *out,
    const HydraConfig *in);

NDDSUSERDllExport extern void 
HydraConfigPluginSupport_destroy_data_w_params(
    HydraConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HydraConfigPluginSupport_destroy_data_ex(
    HydraConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HydraConfigPluginSupport_destroy_data(
    HydraConfig *sample);

NDDSUSERDllExport extern void 
HydraConfigPluginSupport_print_data(
    const HydraConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern HydraConfig*
HydraConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HydraConfig*
HydraConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
HydraConfigPluginSupport_destroy_key_ex(
    HydraConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HydraConfigPluginSupport_destroy_key(
    HydraConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HydraConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HydraConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
HydraConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HydraConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
HydraConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig *out,
    const HydraConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const HydraConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
HydraConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
HydraConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HydraConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
HydraConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const HydraConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
HydraConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HydraConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const HydraConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
HydraConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfigKeyHolder *key, 
    const HydraConfig *instance);

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    HydraConfig *instance, 
    const HydraConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const HydraConfig *instance);

NDDSUSERDllExport extern RTIBool 
HydraConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HydraConfigPlugin_new(void);

NDDSUSERDllExport extern void
HydraConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* HydraConfigPlugin_1295220390_h */
