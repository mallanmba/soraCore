
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GenericConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GenericConfigPlugin_1318546965_h
#define GenericConfigPlugin_1318546965_h

#include "GenericConfig.h"

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
 * GenericConfig.
 *
 * By default, this type is struct GenericConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct GenericConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct GenericConfig, the
 * following restriction applies: the key of struct
 * GenericConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct GenericConfig.
*/
typedef  class GenericConfig GenericConfigKeyHolder;


#define GenericConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GenericConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GenericConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define GenericConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define GenericConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define GenericConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GenericConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GenericConfig*
GenericConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GenericConfig*
GenericConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GenericConfig*
GenericConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GenericConfigPluginSupport_copy_data(
    GenericConfig *out,
    const GenericConfig *in);

NDDSUSERDllExport extern void 
GenericConfigPluginSupport_destroy_data_w_params(
    GenericConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GenericConfigPluginSupport_destroy_data_ex(
    GenericConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GenericConfigPluginSupport_destroy_data(
    GenericConfig *sample);

NDDSUSERDllExport extern void 
GenericConfigPluginSupport_print_data(
    const GenericConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern GenericConfig*
GenericConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GenericConfig*
GenericConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
GenericConfigPluginSupport_destroy_key_ex(
    GenericConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GenericConfigPluginSupport_destroy_key(
    GenericConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GenericConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GenericConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
GenericConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GenericConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
GenericConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig *out,
    const GenericConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GenericConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GenericConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GenericConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GenericConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GenericConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GenericConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GenericConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GenericConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GenericConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GenericConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfigKeyHolder *key, 
    const GenericConfig *instance);

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GenericConfig *instance, 
    const GenericConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GenericConfig *instance);

NDDSUSERDllExport extern RTIBool 
GenericConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GenericConfigPlugin_new(void);

NDDSUSERDllExport extern void
GenericConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* GenericConfigPlugin_1318546965_h */
