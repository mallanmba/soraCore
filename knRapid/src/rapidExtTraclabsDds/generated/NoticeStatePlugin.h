
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeStatePlugin_2075659869_h
#define NoticeStatePlugin_2075659869_h

#include "NoticeState.h"

#include "NoticeTypesPlugin.h"


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

namespace traclabs{


#define ModalityTypesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ModalityTypesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ModalityTypesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ModalityTypesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ModalityTypesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ModalityTypes*
ModalityTypesPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ModalityTypes*
ModalityTypesPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ModalityTypes*
ModalityTypesPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ModalityTypesPluginSupport_copy_data(
    ModalityTypes *out,
    const ModalityTypes *in);

NDDSUSERDllExport extern void 
ModalityTypesPluginSupport_destroy_data_w_params(
    ModalityTypes *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ModalityTypesPluginSupport_destroy_data_ex(
    ModalityTypes *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ModalityTypesPluginSupport_destroy_data(
    ModalityTypes *sample);

NDDSUSERDllExport extern void 
ModalityTypesPluginSupport_print_data(
    const ModalityTypes *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ModalityTypesPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes *out,
    const ModalityTypes *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ModalityTypesPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ModalityTypes *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ModalityTypesPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ModalityTypesPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ModalityTypesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ModalityTypesPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ModalityTypesPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ModalityTypes * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ModalityTypesPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ModalityTypesPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ModalityTypesPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ModalityTypes *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ModalityTypesPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ModalityTypesPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/**

 * NoticeState represents the current state of

 * of all published notice items. The data type is keyed

 * on itemId, so each notice item represents a separate instance.

 */

/* The type used to store keys for instances of type struct
 * NoticeState.
 *
 * By default, this type is struct NoticeState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct NoticeState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct NoticeState, the
 * following restriction applies: the key of struct
 * NoticeState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct NoticeState.
*/
typedef  class NoticeState NoticeStateKeyHolder;


#define NoticeStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NoticeStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NoticeStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define NoticeStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define NoticeStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define NoticeStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NoticeStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NoticeState*
NoticeStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NoticeState*
NoticeStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeState*
NoticeStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NoticeStatePluginSupport_copy_data(
    NoticeState *out,
    const NoticeState *in);

NDDSUSERDllExport extern void 
NoticeStatePluginSupport_destroy_data_w_params(
    NoticeState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NoticeStatePluginSupport_destroy_data_ex(
    NoticeState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeStatePluginSupport_destroy_data(
    NoticeState *sample);

NDDSUSERDllExport extern void 
NoticeStatePluginSupport_print_data(
    const NoticeState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern NoticeState*
NoticeStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NoticeState*
NoticeStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
NoticeStatePluginSupport_destroy_key_ex(
    NoticeStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NoticeStatePluginSupport_destroy_key(
    NoticeStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NoticeStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NoticeStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NoticeStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NoticeStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NoticeStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *out,
    const NoticeState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NoticeStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NoticeStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NoticeStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NoticeStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NoticeState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NoticeStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NoticeStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NoticeStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeStateKeyHolder *key, 
    const NoticeState *instance);

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *instance, 
    const NoticeStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const NoticeState *instance);

NDDSUSERDllExport extern RTIBool 
NoticeStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NoticeStatePlugin_new(void);

NDDSUSERDllExport extern void
NoticeStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* NoticeStatePlugin_2075659869_h */
