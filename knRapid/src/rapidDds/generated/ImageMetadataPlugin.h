
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageMetadata.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageMetadataPlugin_1779228579_h
#define ImageMetadataPlugin_1779228579_h

#include "ImageMetadata.h"

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


#define ImageMetadataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ImageMetadataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ImageMetadataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ImageMetadataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ImageMetadataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ImageMetadata*
ImageMetadataPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ImageMetadata*
ImageMetadataPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ImageMetadata*
ImageMetadataPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ImageMetadataPluginSupport_copy_data(
    ImageMetadata *out,
    const ImageMetadata *in);

NDDSUSERDllExport extern void 
ImageMetadataPluginSupport_destroy_data_w_params(
    ImageMetadata *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ImageMetadataPluginSupport_destroy_data_ex(
    ImageMetadata *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ImageMetadataPluginSupport_destroy_data(
    ImageMetadata *sample);

NDDSUSERDllExport extern void 
ImageMetadataPluginSupport_print_data(
    const ImageMetadata *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ImageMetadataPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ImageMetadataPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ImageMetadataPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ImageMetadataPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ImageMetadataPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageMetadata *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ImageMetadataPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageMetadata *out,
    const ImageMetadata *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ImageMetadataPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ImageMetadata *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageMetadataPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageMetadata *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageMetadataPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ImageMetadata **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ImageMetadataPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ImageMetadataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ImageMetadataPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ImageMetadataPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ImageMetadata * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ImageMetadataPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ImageMetadataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ImageMetadataPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ImageMetadata *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ImageMetadataPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ImageMetadata * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ImageMetadataPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageMetadata ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ImageMetadataPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ImageMetadata *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ImageMetadataPlugin_new(void);

NDDSUSERDllExport extern void
ImageMetadataPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ImageMetadataPlugin_1779228579_h */
