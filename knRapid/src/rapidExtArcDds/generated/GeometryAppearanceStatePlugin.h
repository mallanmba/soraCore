
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryAppearanceState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GeometryAppearanceStatePlugin_1340525930_h
#define GeometryAppearanceStatePlugin_1340525930_h

#include "GeometryAppearanceState.h"

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
 * GeometryAppearanceState.
 *
 * By default, this type is struct GeometryAppearanceState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct GeometryAppearanceState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct GeometryAppearanceState, the
 * following restriction applies: the key of struct
 * GeometryAppearanceState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct GeometryAppearanceState.
*/
typedef  class GeometryAppearanceState GeometryAppearanceStateKeyHolder;


#define GeometryAppearanceStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GeometryAppearanceStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GeometryAppearanceStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define GeometryAppearanceStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define GeometryAppearanceStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define GeometryAppearanceStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GeometryAppearanceStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GeometryAppearanceState*
GeometryAppearanceStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GeometryAppearanceState*
GeometryAppearanceStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GeometryAppearanceState*
GeometryAppearanceStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePluginSupport_copy_data(
    GeometryAppearanceState *out,
    const GeometryAppearanceState *in);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePluginSupport_destroy_data_w_params(
    GeometryAppearanceState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePluginSupport_destroy_data_ex(
    GeometryAppearanceState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePluginSupport_destroy_data(
    GeometryAppearanceState *sample);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePluginSupport_print_data(
    const GeometryAppearanceState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern GeometryAppearanceState*
GeometryAppearanceStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GeometryAppearanceState*
GeometryAppearanceStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePluginSupport_destroy_key_ex(
    GeometryAppearanceStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePluginSupport_destroy_key(
    GeometryAppearanceStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GeometryAppearanceStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
GeometryAppearanceStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GeometryAppearanceStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
GeometryAppearanceStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState *out,
    const GeometryAppearanceState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryAppearanceState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GeometryAppearanceStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GeometryAppearanceStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GeometryAppearanceStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GeometryAppearanceStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryAppearanceState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GeometryAppearanceStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GeometryAppearanceStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryAppearanceState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GeometryAppearanceStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceStateKeyHolder *key, 
    const GeometryAppearanceState *instance);

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GeometryAppearanceState *instance, 
    const GeometryAppearanceStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GeometryAppearanceState *instance);

NDDSUSERDllExport extern RTIBool 
GeometryAppearanceStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GeometryAppearanceStatePlugin_new(void);

NDDSUSERDllExport extern void
GeometryAppearanceStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* GeometryAppearanceStatePlugin_1340525930_h */
