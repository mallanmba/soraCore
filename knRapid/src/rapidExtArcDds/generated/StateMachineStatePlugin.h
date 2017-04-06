
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StateMachineState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StateMachineStatePlugin_2126867909_h
#define StateMachineStatePlugin_2126867909_h

#include "StateMachineState.h"

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
 * StateMachineState.
 *
 * By default, this type is struct StateMachineState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct StateMachineState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct StateMachineState, the
 * following restriction applies: the key of struct
 * StateMachineState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct StateMachineState.
*/
typedef  class StateMachineState StateMachineStateKeyHolder;


#define StateMachineStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define StateMachineStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define StateMachineStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define StateMachineStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define StateMachineStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define StateMachineStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define StateMachineStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern StateMachineState*
StateMachineStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern StateMachineState*
StateMachineStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StateMachineState*
StateMachineStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
StateMachineStatePluginSupport_copy_data(
    StateMachineState *out,
    const StateMachineState *in);

NDDSUSERDllExport extern void 
StateMachineStatePluginSupport_destroy_data_w_params(
    StateMachineState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
StateMachineStatePluginSupport_destroy_data_ex(
    StateMachineState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StateMachineStatePluginSupport_destroy_data(
    StateMachineState *sample);

NDDSUSERDllExport extern void 
StateMachineStatePluginSupport_print_data(
    const StateMachineState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern StateMachineState*
StateMachineStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StateMachineState*
StateMachineStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
StateMachineStatePluginSupport_destroy_key_ex(
    StateMachineStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StateMachineStatePluginSupport_destroy_key(
    StateMachineStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
StateMachineStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
StateMachineStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
StateMachineStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
StateMachineStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
StateMachineStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState *out,
    const StateMachineState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const StateMachineState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
StateMachineStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StateMachineStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
StateMachineStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StateMachineStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const StateMachineState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
StateMachineStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
StateMachineStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const StateMachineState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
StateMachineStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineStateKeyHolder *key, 
    const StateMachineState *instance);

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    StateMachineState *instance, 
    const StateMachineStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const StateMachineState *instance);

NDDSUSERDllExport extern RTIBool 
StateMachineStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
StateMachineStatePlugin_new(void);

NDDSUSERDllExport extern void
StateMachineStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* StateMachineStatePlugin_2126867909_h */
