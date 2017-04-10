
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PositionSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PositionSamplePlugin_1835754899_h
#define PositionSamplePlugin_1835754899_h

#include "PositionSample.h"

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
 * PositionSample.
 *
 * By default, this type is struct PositionSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct PositionSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct PositionSample, the
 * following restriction applies: the key of struct
 * PositionSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct PositionSample.
*/
typedef  class PositionSample PositionSampleKeyHolder;


#define PositionSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PositionSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PositionSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define PositionSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PositionSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define PositionSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PositionSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PositionSample*
PositionSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PositionSample*
PositionSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PositionSample*
PositionSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PositionSamplePluginSupport_copy_data(
    PositionSample *out,
    const PositionSample *in);

NDDSUSERDllExport extern void 
PositionSamplePluginSupport_destroy_data_w_params(
    PositionSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PositionSamplePluginSupport_destroy_data_ex(
    PositionSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PositionSamplePluginSupport_destroy_data(
    PositionSample *sample);

NDDSUSERDllExport extern void 
PositionSamplePluginSupport_print_data(
    const PositionSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern PositionSample*
PositionSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PositionSample*
PositionSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PositionSamplePluginSupport_destroy_key_ex(
    PositionSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PositionSamplePluginSupport_destroy_key(
    PositionSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PositionSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PositionSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
PositionSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PositionSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
PositionSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample *out,
    const PositionSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PositionSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PositionSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PositionSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PositionSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PositionSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PositionSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PositionSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PositionSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PositionSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
PositionSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionSampleKeyHolder *key, 
    const PositionSample *instance);

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PositionSample *instance, 
    const PositionSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const PositionSample *instance);

NDDSUSERDllExport extern RTIBool 
PositionSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PositionSamplePlugin_new(void);

NDDSUSERDllExport extern void
PositionSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* PositionSamplePlugin_1835754899_h */
