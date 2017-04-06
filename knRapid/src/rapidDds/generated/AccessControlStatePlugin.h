
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AccessControlState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AccessControlStatePlugin_1862954327_h
#define AccessControlStatePlugin_1862954327_h

#include "AccessControlState.h"

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
 * AccessControlState.
 *
 * By default, this type is struct AccessControlState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AccessControlState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AccessControlState, the
 * following restriction applies: the key of struct
 * AccessControlState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AccessControlState.
*/
typedef  class AccessControlState AccessControlStateKeyHolder;


#define AccessControlStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define AccessControlStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AccessControlStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AccessControlStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AccessControlStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AccessControlStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AccessControlStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AccessControlState*
AccessControlStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern AccessControlState*
AccessControlStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AccessControlState*
AccessControlStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AccessControlStatePluginSupport_copy_data(
    AccessControlState *out,
    const AccessControlState *in);

NDDSUSERDllExport extern void 
AccessControlStatePluginSupport_destroy_data_w_params(
    AccessControlState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
AccessControlStatePluginSupport_destroy_data_ex(
    AccessControlState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AccessControlStatePluginSupport_destroy_data(
    AccessControlState *sample);

NDDSUSERDllExport extern void 
AccessControlStatePluginSupport_print_data(
    const AccessControlState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AccessControlState*
AccessControlStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AccessControlState*
AccessControlStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AccessControlStatePluginSupport_destroy_key_ex(
    AccessControlStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AccessControlStatePluginSupport_destroy_key(
    AccessControlStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AccessControlStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AccessControlStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AccessControlStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AccessControlStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
AccessControlStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState *out,
    const AccessControlState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AccessControlState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
AccessControlStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AccessControlStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AccessControlStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AccessControlStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AccessControlState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AccessControlStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AccessControlStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AccessControlState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AccessControlStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlStateKeyHolder *key, 
    const AccessControlState *instance);

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AccessControlState *instance, 
    const AccessControlStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AccessControlState *instance);

NDDSUSERDllExport extern RTIBool 
AccessControlStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AccessControlStatePlugin_new(void);

NDDSUSERDllExport extern void
AccessControlStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* AccessControlStatePlugin_1862954327_h */
