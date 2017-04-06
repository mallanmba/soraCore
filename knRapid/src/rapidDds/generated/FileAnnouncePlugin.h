
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileAnnounce.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileAnnouncePlugin_13966367_h
#define FileAnnouncePlugin_13966367_h

#include "FileAnnounce.h"

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
 * FileAnnounce.
 *
 * By default, this type is struct FileAnnounce
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FileAnnounce)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FileAnnounce, the
 * following restriction applies: the key of struct
 * FileAnnounce must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FileAnnounce.
*/
typedef  class FileAnnounce FileAnnounceKeyHolder;


#define FileAnnouncePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FileAnnouncePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FileAnnouncePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FileAnnouncePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FileAnnouncePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FileAnnouncePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FileAnnouncePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FileAnnounce*
FileAnnouncePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FileAnnounce*
FileAnnouncePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileAnnounce*
FileAnnouncePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FileAnnouncePluginSupport_copy_data(
    FileAnnounce *out,
    const FileAnnounce *in);

NDDSUSERDllExport extern void 
FileAnnouncePluginSupport_destroy_data_w_params(
    FileAnnounce *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FileAnnouncePluginSupport_destroy_data_ex(
    FileAnnounce *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileAnnouncePluginSupport_destroy_data(
    FileAnnounce *sample);

NDDSUSERDllExport extern void 
FileAnnouncePluginSupport_print_data(
    const FileAnnounce *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FileAnnounce*
FileAnnouncePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileAnnounce*
FileAnnouncePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FileAnnouncePluginSupport_destroy_key_ex(
    FileAnnounceKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileAnnouncePluginSupport_destroy_key(
    FileAnnounceKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FileAnnouncePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FileAnnouncePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FileAnnouncePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FileAnnouncePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FileAnnouncePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *out,
    const FileAnnounce *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileAnnounce *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FileAnnouncePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FileAnnouncePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FileAnnouncePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileAnnouncePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileAnnounce * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FileAnnouncePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FileAnnouncePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileAnnounce *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FileAnnouncePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounceKeyHolder *key, 
    const FileAnnounce *instance);

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *instance, 
    const FileAnnounceKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileAnnounce *instance);

NDDSUSERDllExport extern RTIBool 
FileAnnouncePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FileAnnouncePlugin_new(void);

NDDSUSERDllExport extern void
FileAnnouncePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FileAnnouncePlugin_13966367_h */
