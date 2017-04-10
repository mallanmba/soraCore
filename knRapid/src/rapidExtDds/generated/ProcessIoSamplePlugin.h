
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessIoSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ProcessIoSamplePlugin_1382961988_h
#define ProcessIoSamplePlugin_1382961988_h

#include "ProcessIoSample.h"

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


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
ProcessIoStreamPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessIoStream *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ProcessIoStreamPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoStream *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ProcessIoStreamPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ProcessIoStreamPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessIoStreamPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessIoStreamPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessIoStream * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ProcessIoStreamPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessIoStream *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessIoStreamPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoStream *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessIoStreamPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ProcessIoStreamPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoStream *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ProcessIoStreamPluginSupport_print_data(
    const ProcessIoStream *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * ProcessIoSample.
 *
 * By default, this type is struct ProcessIoSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ProcessIoSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ProcessIoSample, the
 * following restriction applies: the key of struct
 * ProcessIoSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ProcessIoSample.
*/
typedef  class ProcessIoSample ProcessIoSampleKeyHolder;


#define ProcessIoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ProcessIoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ProcessIoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ProcessIoSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ProcessIoSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ProcessIoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ProcessIoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ProcessIoSample*
ProcessIoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ProcessIoSample*
ProcessIoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessIoSample*
ProcessIoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePluginSupport_copy_data(
    ProcessIoSample *out,
    const ProcessIoSample *in);

NDDSUSERDllExport extern void 
ProcessIoSamplePluginSupport_destroy_data_w_params(
    ProcessIoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ProcessIoSamplePluginSupport_destroy_data_ex(
    ProcessIoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessIoSamplePluginSupport_destroy_data(
    ProcessIoSample *sample);

NDDSUSERDllExport extern void 
ProcessIoSamplePluginSupport_print_data(
    const ProcessIoSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ProcessIoSample*
ProcessIoSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessIoSample*
ProcessIoSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ProcessIoSamplePluginSupport_destroy_key_ex(
    ProcessIoSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessIoSamplePluginSupport_destroy_key(
    ProcessIoSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ProcessIoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ProcessIoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ProcessIoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ProcessIoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ProcessIoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample *out,
    const ProcessIoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessIoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ProcessIoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessIoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ProcessIoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessIoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessIoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ProcessIoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ProcessIoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessIoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ProcessIoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSampleKeyHolder *key, 
    const ProcessIoSample *instance);

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ProcessIoSample *instance, 
    const ProcessIoSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ProcessIoSample *instance);

NDDSUSERDllExport extern RTIBool 
ProcessIoSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ProcessIoSamplePlugin_new(void);

NDDSUSERDllExport extern void
ProcessIoSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ProcessIoSamplePlugin_1382961988_h */
