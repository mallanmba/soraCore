
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from JointSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef JointSamplePlugin_26465713_h
#define JointSamplePlugin_26465713_h

#include "JointSample.h"

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
 * JointSample.
 *
 * By default, this type is struct JointSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct JointSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct JointSample, the
 * following restriction applies: the key of struct
 * JointSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct JointSample.
*/
typedef  class JointSample JointSampleKeyHolder;


#define JointSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define JointSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define JointSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define JointSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define JointSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define JointSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define JointSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern JointSample*
JointSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern JointSample*
JointSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern JointSample*
JointSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
JointSamplePluginSupport_copy_data(
    JointSample *out,
    const JointSample *in);

NDDSUSERDllExport extern void 
JointSamplePluginSupport_destroy_data_w_params(
    JointSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
JointSamplePluginSupport_destroy_data_ex(
    JointSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
JointSamplePluginSupport_destroy_data(
    JointSample *sample);

NDDSUSERDllExport extern void 
JointSamplePluginSupport_print_data(
    const JointSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern JointSample*
JointSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern JointSample*
JointSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
JointSamplePluginSupport_destroy_key_ex(
    JointSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
JointSamplePluginSupport_destroy_key(
    JointSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
JointSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
JointSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
JointSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
JointSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
JointSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointSample *out,
    const JointSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const JointSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    JointSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
JointSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
JointSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
JointSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
JointSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const JointSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
JointSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
JointSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const JointSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    JointSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    JointSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
JointSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JointSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JointSampleKeyHolder *key, 
    const JointSample *instance);

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    JointSample *instance, 
    const JointSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const JointSample *instance);

NDDSUSERDllExport extern RTIBool 
JointSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
JointSamplePlugin_new(void);

NDDSUSERDllExport extern void
JointSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* JointSamplePlugin_26465713_h */
