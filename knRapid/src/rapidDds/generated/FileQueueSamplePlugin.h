
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueSamplePlugin_1725042530_h
#define FileQueueSamplePlugin_1725042530_h

#include "FileQueueSample.h"

#include "MessagePlugin.h"


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

/* The type used to store keys for instances of type struct
 * FileQueueSample.
 *
 * By default, this type is struct FileQueueSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FileQueueSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FileQueueSample, the
 * following restriction applies: the key of struct
 * FileQueueSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FileQueueSample.
*/
typedef  class FileQueueSample FileQueueSampleKeyHolder;


#define FileQueueSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FileQueueSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FileQueueSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FileQueueSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FileQueueSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FileQueueSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FileQueueSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FileQueueSample*
FileQueueSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FileQueueSample*
FileQueueSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueSample*
FileQueueSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePluginSupport_copy_data(
    FileQueueSample *out,
    const FileQueueSample *in);

NDDSUSERDllExport extern void 
FileQueueSamplePluginSupport_destroy_data_w_params(
    FileQueueSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FileQueueSamplePluginSupport_destroy_data_ex(
    FileQueueSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueSamplePluginSupport_destroy_data(
    FileQueueSample *sample);

NDDSUSERDllExport extern void 
FileQueueSamplePluginSupport_print_data(
    const FileQueueSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FileQueueSample*
FileQueueSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueSample*
FileQueueSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FileQueueSamplePluginSupport_destroy_key_ex(
    FileQueueSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueSamplePluginSupport_destroy_key(
    FileQueueSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FileQueueSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FileQueueSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FileQueueSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FileQueueSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FileQueueSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *out,
    const FileQueueSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FileQueueSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FileQueueSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FileQueueSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileQueueSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileQueueSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FileQueueSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FileQueueSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FileQueueSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSampleKeyHolder *key, 
    const FileQueueSample *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *instance, 
    const FileQueueSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileQueueSample *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FileQueueSamplePlugin_new(void);

NDDSUSERDllExport extern void
FileQueueSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FileQueueSamplePlugin_1725042530_h */
