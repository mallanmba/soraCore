
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NavMapSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NavMapSamplePlugin_769629744_h
#define NavMapSamplePlugin_769629744_h

#include "NavMapSample.h"

#include "MessagePlugin.h"


#include "NavMapConfigPlugin.h"




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


#define OctetMapLayerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetMapLayerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetMapLayerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetMapLayerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetMapLayerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetMapLayer*
OctetMapLayerPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetMapLayer*
OctetMapLayerPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetMapLayer*
OctetMapLayerPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerPluginSupport_copy_data(
    OctetMapLayer *out,
    const OctetMapLayer *in);

NDDSUSERDllExport extern void 
OctetMapLayerPluginSupport_destroy_data_w_params(
    OctetMapLayer *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetMapLayerPluginSupport_destroy_data_ex(
    OctetMapLayer *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetMapLayerPluginSupport_destroy_data(
    OctetMapLayer *sample);

NDDSUSERDllExport extern void 
OctetMapLayerPluginSupport_print_data(
    const OctetMapLayer *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OctetMapLayerPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OctetMapLayerPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OctetMapLayerPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OctetMapLayerPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
OctetMapLayerPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayer *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
OctetMapLayerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayer *out,
    const OctetMapLayer *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetMapLayerPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetMapLayer *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayer *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OctetMapLayerPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayer **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetMapLayerPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetMapLayerPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetMapLayer * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetMapLayerPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetMapLayer *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayer * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OctetMapLayerPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayer ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OctetMapLayerPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayer *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OctetMapLayerPlugin_new(void);

NDDSUSERDllExport extern void
OctetMapLayerPlugin_delete(struct PRESTypePlugin *);


#define ShortMapLayerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortMapLayerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortMapLayerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortMapLayerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortMapLayerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortMapLayer*
ShortMapLayerPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortMapLayer*
ShortMapLayerPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortMapLayer*
ShortMapLayerPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerPluginSupport_copy_data(
    ShortMapLayer *out,
    const ShortMapLayer *in);

NDDSUSERDllExport extern void 
ShortMapLayerPluginSupport_destroy_data_w_params(
    ShortMapLayer *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortMapLayerPluginSupport_destroy_data_ex(
    ShortMapLayer *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortMapLayerPluginSupport_destroy_data(
    ShortMapLayer *sample);

NDDSUSERDllExport extern void 
ShortMapLayerPluginSupport_print_data(
    const ShortMapLayer *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ShortMapLayerPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ShortMapLayerPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ShortMapLayerPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ShortMapLayerPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ShortMapLayerPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayer *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ShortMapLayerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayer *out,
    const ShortMapLayer *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortMapLayerPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortMapLayer *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayer *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ShortMapLayerPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayer **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortMapLayerPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortMapLayerPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortMapLayer * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortMapLayerPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortMapLayer *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayer * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ShortMapLayerPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayer ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ShortMapLayerPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayer *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ShortMapLayerPlugin_new(void);

NDDSUSERDllExport extern void
ShortMapLayerPlugin_delete(struct PRESTypePlugin *);


#define ShortMapLayerSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortMapLayerSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortMapLayerSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortMapLayerSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortMapLayerSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortMapLayerSequence*
ShortMapLayerSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortMapLayerSequence*
ShortMapLayerSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortMapLayerSequence*
ShortMapLayerSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerSequencePluginSupport_copy_data(
    ShortMapLayerSequence *out,
    const ShortMapLayerSequence *in);

NDDSUSERDllExport extern void 
ShortMapLayerSequencePluginSupport_destroy_data_w_params(
    ShortMapLayerSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortMapLayerSequencePluginSupport_destroy_data_ex(
    ShortMapLayerSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortMapLayerSequencePluginSupport_destroy_data(
    ShortMapLayerSequence *sample);

NDDSUSERDllExport extern void 
ShortMapLayerSequencePluginSupport_print_data(
    const ShortMapLayerSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortMapLayerSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerSequence *out,
    const ShortMapLayerSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortMapLayerSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortMapLayerSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortMapLayerSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortMapLayerSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortMapLayerSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortMapLayerSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortMapLayerSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortMapLayerSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetMapLayerSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetMapLayerSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetMapLayerSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetMapLayerSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetMapLayerSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetMapLayerSequence*
OctetMapLayerSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetMapLayerSequence*
OctetMapLayerSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetMapLayerSequence*
OctetMapLayerSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerSequencePluginSupport_copy_data(
    OctetMapLayerSequence *out,
    const OctetMapLayerSequence *in);

NDDSUSERDllExport extern void 
OctetMapLayerSequencePluginSupport_destroy_data_w_params(
    OctetMapLayerSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetMapLayerSequencePluginSupport_destroy_data_ex(
    OctetMapLayerSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetMapLayerSequencePluginSupport_destroy_data(
    OctetMapLayerSequence *sample);

NDDSUSERDllExport extern void 
OctetMapLayerSequencePluginSupport_print_data(
    const OctetMapLayerSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetMapLayerSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerSequence *out,
    const OctetMapLayerSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetMapLayerSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetMapLayerSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetMapLayerSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetMapLayerSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetMapLayerSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetMapLayerSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetMapLayerSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetMapLayerSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * NavMapSample.
 *
 * By default, this type is struct NavMapSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct NavMapSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct NavMapSample, the
 * following restriction applies: the key of struct
 * NavMapSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct NavMapSample.
*/
typedef  class NavMapSample NavMapSampleKeyHolder;


#define NavMapSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NavMapSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NavMapSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define NavMapSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define NavMapSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define NavMapSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NavMapSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NavMapSample*
NavMapSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NavMapSample*
NavMapSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NavMapSample*
NavMapSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NavMapSamplePluginSupport_copy_data(
    NavMapSample *out,
    const NavMapSample *in);

NDDSUSERDllExport extern void 
NavMapSamplePluginSupport_destroy_data_w_params(
    NavMapSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NavMapSamplePluginSupport_destroy_data_ex(
    NavMapSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NavMapSamplePluginSupport_destroy_data(
    NavMapSample *sample);

NDDSUSERDllExport extern void 
NavMapSamplePluginSupport_print_data(
    const NavMapSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern NavMapSample*
NavMapSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NavMapSample*
NavMapSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
NavMapSamplePluginSupport_destroy_key_ex(
    NavMapSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NavMapSamplePluginSupport_destroy_key(
    NavMapSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NavMapSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NavMapSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NavMapSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NavMapSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NavMapSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample *out,
    const NavMapSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NavMapSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NavMapSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NavMapSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NavMapSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NavMapSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NavMapSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NavMapSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NavMapSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NavMapSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NavMapSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSampleKeyHolder *key, 
    const NavMapSample *instance);

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    NavMapSample *instance, 
    const NavMapSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const NavMapSample *instance);

NDDSUSERDllExport extern RTIBool 
NavMapSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NavMapSamplePlugin_new(void);

NDDSUSERDllExport extern void
NavMapSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* NavMapSamplePlugin_769629744_h */
