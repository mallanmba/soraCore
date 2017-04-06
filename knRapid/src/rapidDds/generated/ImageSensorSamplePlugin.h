
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageSensorSamplePlugin_101220480_h
#define ImageSensorSamplePlugin_101220480_h

#include "ImageSensorSample.h"

#include "ImageMetadataPlugin.h"


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


#define ImageDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ImageDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ImageDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ImageDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ImageDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ImageData*
ImageDataPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ImageData*
ImageDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ImageData*
ImageDataPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ImageDataPluginSupport_copy_data(
    ImageData *out,
    const ImageData *in);

NDDSUSERDllExport extern void 
ImageDataPluginSupport_destroy_data_w_params(
    ImageData *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ImageDataPluginSupport_destroy_data_ex(
    ImageData *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ImageDataPluginSupport_destroy_data(
    ImageData *sample);

NDDSUSERDllExport extern void 
ImageDataPluginSupport_print_data(
    const ImageData *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ImageDataPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageData *out,
    const ImageData *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ImageDataPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ImageData *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageDataPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageData *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ImageDataPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ImageDataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ImageDataPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ImageDataPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ImageData * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ImageDataPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ImageDataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ImageDataPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ImageData *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageDataPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageData * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ImageDataPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageData *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * ImageSensorSample.
 *
 * By default, this type is struct ImageSensorSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ImageSensorSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ImageSensorSample, the
 * following restriction applies: the key of struct
 * ImageSensorSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ImageSensorSample.
*/
typedef  class ImageSensorSample ImageSensorSampleKeyHolder;


#define ImageSensorSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ImageSensorSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ImageSensorSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ImageSensorSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ImageSensorSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ImageSensorSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ImageSensorSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ImageSensorSample*
ImageSensorSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ImageSensorSample*
ImageSensorSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ImageSensorSample*
ImageSensorSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePluginSupport_copy_data(
    ImageSensorSample *out,
    const ImageSensorSample *in);

NDDSUSERDllExport extern void 
ImageSensorSamplePluginSupport_destroy_data_w_params(
    ImageSensorSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ImageSensorSamplePluginSupport_destroy_data_ex(
    ImageSensorSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ImageSensorSamplePluginSupport_destroy_data(
    ImageSensorSample *sample);

NDDSUSERDllExport extern void 
ImageSensorSamplePluginSupport_print_data(
    const ImageSensorSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ImageSensorSample*
ImageSensorSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ImageSensorSample*
ImageSensorSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ImageSensorSamplePluginSupport_destroy_key_ex(
    ImageSensorSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ImageSensorSamplePluginSupport_destroy_key(
    ImageSensorSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ImageSensorSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ImageSensorSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ImageSensorSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ImageSensorSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ImageSensorSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample *out,
    const ImageSensorSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ImageSensorSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ImageSensorSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ImageSensorSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ImageSensorSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ImageSensorSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ImageSensorSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ImageSensorSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ImageSensorSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ImageSensorSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ImageSensorSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSampleKeyHolder *key, 
    const ImageSensorSample *instance);

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ImageSensorSample *instance, 
    const ImageSensorSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ImageSensorSample *instance);

NDDSUSERDllExport extern RTIBool 
ImageSensorSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ImageSensorSamplePlugin_new(void);

NDDSUSERDllExport extern void
ImageSensorSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ImageSensorSamplePlugin_101220480_h */
