
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageSensorStatePlugin_260437485_h
#define ImageSensorStatePlugin_260437485_h

#include "ImageSensorState.h"

#include "MessagePlugin.h"


#include "ImageMetadataPlugin.h"




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

/**

 * Holds status information for an image sensor - typically a camera, but could be a laser scanner, gpr, or any

 * sensor that can pack a data sample into a 2D array

 */

/* The type used to store keys for instances of type struct
 * ImageSensorState.
 *
 * By default, this type is struct ImageSensorState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ImageSensorState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ImageSensorState, the
 * following restriction applies: the key of struct
 * ImageSensorState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ImageSensorState.
*/
typedef  class ImageSensorState ImageSensorStateKeyHolder;


#define ImageSensorStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ImageSensorStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ImageSensorStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ImageSensorStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ImageSensorStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ImageSensorStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ImageSensorStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ImageSensorState*
ImageSensorStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ImageSensorState*
ImageSensorStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ImageSensorState*
ImageSensorStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePluginSupport_copy_data(
    ImageSensorState *out,
    const ImageSensorState *in);

NDDSUSERDllExport extern void 
ImageSensorStatePluginSupport_destroy_data_w_params(
    ImageSensorState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ImageSensorStatePluginSupport_destroy_data_ex(
    ImageSensorState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ImageSensorStatePluginSupport_destroy_data(
    ImageSensorState *sample);

NDDSUSERDllExport extern void 
ImageSensorStatePluginSupport_print_data(
    const ImageSensorState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ImageSensorState*
ImageSensorStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ImageSensorState*
ImageSensorStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ImageSensorStatePluginSupport_destroy_key_ex(
    ImageSensorStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ImageSensorStatePluginSupport_destroy_key(
    ImageSensorStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ImageSensorStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ImageSensorStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ImageSensorStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ImageSensorStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ImageSensorStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState *out,
    const ImageSensorState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ImageSensorState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ImageSensorStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ImageSensorStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ImageSensorStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ImageSensorStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ImageSensorState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ImageSensorStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ImageSensorStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ImageSensorState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ImageSensorStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorStateKeyHolder *key, 
    const ImageSensorState *instance);

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorState *instance, 
    const ImageSensorStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ImageSensorState *instance);

NDDSUSERDllExport extern RTIBool 
ImageSensorStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ImageSensorStatePlugin_new(void);

NDDSUSERDllExport extern void
ImageSensorStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ImageSensorStatePlugin_260437485_h */
