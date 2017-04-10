
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectoryConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TrajectoryConfigPlugin_1875959215_h
#define TrajectoryConfigPlugin_1875959215_h

#include "TrajectoryConfig.h"

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

/**

 * TrajectoryConfig is a message that tells the receiver what frame the TrajectorySample messages will be in.

 */

/* The type used to store keys for instances of type struct
 * TrajectoryConfig.
 *
 * By default, this type is struct TrajectoryConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TrajectoryConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TrajectoryConfig, the
 * following restriction applies: the key of struct
 * TrajectoryConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TrajectoryConfig.
*/
typedef  class TrajectoryConfig TrajectoryConfigKeyHolder;


#define TrajectoryConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TrajectoryConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TrajectoryConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TrajectoryConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TrajectoryConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TrajectoryConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TrajectoryConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TrajectoryConfig*
TrajectoryConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TrajectoryConfig*
TrajectoryConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TrajectoryConfig*
TrajectoryConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPluginSupport_copy_data(
    TrajectoryConfig *out,
    const TrajectoryConfig *in);

NDDSUSERDllExport extern void 
TrajectoryConfigPluginSupport_destroy_data_w_params(
    TrajectoryConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TrajectoryConfigPluginSupport_destroy_data_ex(
    TrajectoryConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TrajectoryConfigPluginSupport_destroy_data(
    TrajectoryConfig *sample);

NDDSUSERDllExport extern void 
TrajectoryConfigPluginSupport_print_data(
    const TrajectoryConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TrajectoryConfig*
TrajectoryConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TrajectoryConfig*
TrajectoryConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TrajectoryConfigPluginSupport_destroy_key_ex(
    TrajectoryConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TrajectoryConfigPluginSupport_destroy_key(
    TrajectoryConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TrajectoryConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TrajectoryConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TrajectoryConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TrajectoryConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TrajectoryConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig *out,
    const TrajectoryConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TrajectoryConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TrajectoryConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TrajectoryConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TrajectoryConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TrajectoryConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TrajectoryConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TrajectoryConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TrajectoryConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TrajectoryConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TrajectoryConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfigKeyHolder *key, 
    const TrajectoryConfig *instance);

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TrajectoryConfig *instance, 
    const TrajectoryConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TrajectoryConfig *instance);

NDDSUSERDllExport extern RTIBool 
TrajectoryConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TrajectoryConfigPlugin_new(void);

NDDSUSERDllExport extern void
TrajectoryConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TrajectoryConfigPlugin_1875959215_h */
