
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PointCloudSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PointCloudSamplePlugin_1945903382_h
#define PointCloudSamplePlugin_1945903382_h

#include "PointCloudSample.h"

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


#define PointSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PointSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PointSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define PointSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PointSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PointSample*
PointSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PointSample*
PointSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PointSample*
PointSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PointSamplePluginSupport_copy_data(
    PointSample *out,
    const PointSample *in);

NDDSUSERDllExport extern void 
PointSamplePluginSupport_destroy_data_w_params(
    PointSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PointSamplePluginSupport_destroy_data_ex(
    PointSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PointSamplePluginSupport_destroy_data(
    PointSample *sample);

NDDSUSERDllExport extern void 
PointSamplePluginSupport_print_data(
    const PointSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PointSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PointSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
PointSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PointSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
PointSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
PointSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSample *out,
    const PointSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PointSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PointSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PointSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PointSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PointSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PointSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PointSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PointSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PointSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PointSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PointSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PointSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
PointSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PointSamplePlugin_new(void);

NDDSUSERDllExport extern void
PointSamplePlugin_delete(struct PRESTypePlugin *);


#define PointSampleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PointSampleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PointSampleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define PointSampleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PointSampleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PointSampleSequence*
PointSampleSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PointSampleSequence*
PointSampleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PointSampleSequence*
PointSampleSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PointSampleSequencePluginSupport_copy_data(
    PointSampleSequence *out,
    const PointSampleSequence *in);

NDDSUSERDllExport extern void 
PointSampleSequencePluginSupport_destroy_data_w_params(
    PointSampleSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PointSampleSequencePluginSupport_destroy_data_ex(
    PointSampleSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PointSampleSequencePluginSupport_destroy_data(
    PointSampleSequence *sample);

NDDSUSERDllExport extern void 
PointSampleSequencePluginSupport_print_data(
    const PointSampleSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
PointSampleSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleSequence *out,
    const PointSampleSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PointSampleSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PointSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSampleSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PointSampleSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PointSampleSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PointSampleSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointSampleSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PointSampleSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PointSampleSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PointSampleSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PointSampleSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PointSampleSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSampleSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
PointSampleSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * PointCloudSample.
 *
 * By default, this type is struct PointCloudSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct PointCloudSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct PointCloudSample, the
 * following restriction applies: the key of struct
 * PointCloudSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct PointCloudSample.
*/
typedef  class PointCloudSample PointCloudSampleKeyHolder;


#define PointCloudSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PointCloudSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PointCloudSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define PointCloudSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PointCloudSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define PointCloudSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PointCloudSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PointCloudSample*
PointCloudSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PointCloudSample*
PointCloudSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PointCloudSample*
PointCloudSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePluginSupport_copy_data(
    PointCloudSample *out,
    const PointCloudSample *in);

NDDSUSERDllExport extern void 
PointCloudSamplePluginSupport_destroy_data_w_params(
    PointCloudSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PointCloudSamplePluginSupport_destroy_data_ex(
    PointCloudSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PointCloudSamplePluginSupport_destroy_data(
    PointCloudSample *sample);

NDDSUSERDllExport extern void 
PointCloudSamplePluginSupport_print_data(
    const PointCloudSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern PointCloudSample*
PointCloudSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PointCloudSample*
PointCloudSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PointCloudSamplePluginSupport_destroy_key_ex(
    PointCloudSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PointCloudSamplePluginSupport_destroy_key(
    PointCloudSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PointCloudSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PointCloudSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
PointCloudSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PointCloudSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
PointCloudSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample *out,
    const PointCloudSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PointCloudSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PointCloudSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PointCloudSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PointCloudSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointCloudSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PointCloudSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PointCloudSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PointCloudSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PointCloudSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
PointCloudSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSampleKeyHolder *key, 
    const PointCloudSample *instance);

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudSample *instance, 
    const PointCloudSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const PointCloudSample *instance);

NDDSUSERDllExport extern RTIBool 
PointCloudSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PointCloudSamplePlugin_new(void);

NDDSUSERDllExport extern void
PointCloudSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* PointCloudSamplePlugin_1945903382_h */
