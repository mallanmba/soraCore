
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueReceiverSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueReceiverSamplePlugin_1894773302_h
#define FileQueueReceiverSamplePlugin_1894773302_h

#include "FileQueueReceiverSample.h"

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
 * FileQueueReceiverSample.
 *
 * By default, this type is struct FileQueueReceiverSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FileQueueReceiverSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FileQueueReceiverSample, the
 * following restriction applies: the key of struct
 * FileQueueReceiverSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FileQueueReceiverSample.
*/
typedef  class FileQueueReceiverSample FileQueueReceiverSampleKeyHolder;


#define FileQueueReceiverSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FileQueueReceiverSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FileQueueReceiverSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FileQueueReceiverSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FileQueueReceiverSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FileQueueReceiverSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FileQueueReceiverSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FileQueueReceiverSample*
FileQueueReceiverSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FileQueueReceiverSample*
FileQueueReceiverSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueReceiverSample*
FileQueueReceiverSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePluginSupport_copy_data(
    FileQueueReceiverSample *out,
    const FileQueueReceiverSample *in);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePluginSupport_destroy_data_w_params(
    FileQueueReceiverSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePluginSupport_destroy_data_ex(
    FileQueueReceiverSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePluginSupport_destroy_data(
    FileQueueReceiverSample *sample);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePluginSupport_print_data(
    const FileQueueReceiverSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FileQueueReceiverSample*
FileQueueReceiverSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueReceiverSample*
FileQueueReceiverSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePluginSupport_destroy_key_ex(
    FileQueueReceiverSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePluginSupport_destroy_key(
    FileQueueReceiverSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FileQueueReceiverSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FileQueueReceiverSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FileQueueReceiverSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FileQueueReceiverSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample *out,
    const FileQueueReceiverSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueReceiverSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FileQueueReceiverSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FileQueueReceiverSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FileQueueReceiverSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileQueueReceiverSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileQueueReceiverSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FileQueueReceiverSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FileQueueReceiverSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueReceiverSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FileQueueReceiverSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSampleKeyHolder *key, 
    const FileQueueReceiverSample *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueReceiverSample *instance, 
    const FileQueueReceiverSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileQueueReceiverSample *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueReceiverSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FileQueueReceiverSamplePlugin_new(void);

NDDSUSERDllExport extern void
FileQueueReceiverSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FileQueueReceiverSamplePlugin_1894773302_h */
