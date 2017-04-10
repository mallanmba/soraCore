
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BatteryPackConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BatteryPackConfigPlugin_666013808_h
#define BatteryPackConfigPlugin_666013808_h

#include "BatteryPackConfig.h"

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
 * BatteryPackConfig.
 *
 * By default, this type is struct BatteryPackConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BatteryPackConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BatteryPackConfig, the
 * following restriction applies: the key of struct
 * BatteryPackConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BatteryPackConfig.
*/
typedef  class BatteryPackConfig BatteryPackConfigKeyHolder;


#define BatteryPackConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryPackConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryPackConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BatteryPackConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BatteryPackConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BatteryPackConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryPackConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryPackConfig*
BatteryPackConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryPackConfig*
BatteryPackConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryPackConfig*
BatteryPackConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPluginSupport_copy_data(
    BatteryPackConfig *out,
    const BatteryPackConfig *in);

NDDSUSERDllExport extern void 
BatteryPackConfigPluginSupport_destroy_data_w_params(
    BatteryPackConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryPackConfigPluginSupport_destroy_data_ex(
    BatteryPackConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryPackConfigPluginSupport_destroy_data(
    BatteryPackConfig *sample);

NDDSUSERDllExport extern void 
BatteryPackConfigPluginSupport_print_data(
    const BatteryPackConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BatteryPackConfig*
BatteryPackConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryPackConfig*
BatteryPackConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BatteryPackConfigPluginSupport_destroy_key_ex(
    BatteryPackConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryPackConfigPluginSupport_destroy_key(
    BatteryPackConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BatteryPackConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BatteryPackConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BatteryPackConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BatteryPackConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
BatteryPackConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig *out,
    const BatteryPackConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryPackConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryPackConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryPackConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryPackConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryPackConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryPackConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryPackConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryPackConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryPackConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BatteryPackConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfigKeyHolder *key, 
    const BatteryPackConfig *instance);

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BatteryPackConfig *instance, 
    const BatteryPackConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BatteryPackConfig *instance);

NDDSUSERDllExport extern RTIBool 
BatteryPackConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BatteryPackConfigPlugin_new(void);

NDDSUSERDllExport extern void
BatteryPackConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* BatteryPackConfigPlugin_666013808_h */
