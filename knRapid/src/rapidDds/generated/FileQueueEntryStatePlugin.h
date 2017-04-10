
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueEntryState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueEntryStatePlugin_181250757_h
#define FileQueueEntryStatePlugin_181250757_h

#include "FileQueueEntryState.h"

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


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
FileTransferStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileTransferStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FileTransferStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileTransferStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
FileTransferStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
FileTransferStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileTransferStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileTransferStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileTransferStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
FileTransferStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileTransferStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileTransferStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileTransferStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FileTransferStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
FileTransferStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileTransferStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
FileTransferStatusPluginSupport_print_data(
    const FileTransferStatus *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * FileQueueEntryState.
 *
 * By default, this type is struct FileQueueEntryState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FileQueueEntryState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FileQueueEntryState, the
 * following restriction applies: the key of struct
 * FileQueueEntryState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FileQueueEntryState.
*/
typedef  class FileQueueEntryState FileQueueEntryStateKeyHolder;


#define FileQueueEntryStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FileQueueEntryStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FileQueueEntryStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FileQueueEntryStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FileQueueEntryStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FileQueueEntryStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FileQueueEntryStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FileQueueEntryState*
FileQueueEntryStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FileQueueEntryState*
FileQueueEntryStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueEntryState*
FileQueueEntryStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePluginSupport_copy_data(
    FileQueueEntryState *out,
    const FileQueueEntryState *in);

NDDSUSERDllExport extern void 
FileQueueEntryStatePluginSupport_destroy_data_w_params(
    FileQueueEntryState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FileQueueEntryStatePluginSupport_destroy_data_ex(
    FileQueueEntryState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueEntryStatePluginSupport_destroy_data(
    FileQueueEntryState *sample);

NDDSUSERDllExport extern void 
FileQueueEntryStatePluginSupport_print_data(
    const FileQueueEntryState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FileQueueEntryState*
FileQueueEntryStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueEntryState*
FileQueueEntryStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FileQueueEntryStatePluginSupport_destroy_key_ex(
    FileQueueEntryStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueEntryStatePluginSupport_destroy_key(
    FileQueueEntryStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FileQueueEntryStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FileQueueEntryStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FileQueueEntryStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FileQueueEntryStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FileQueueEntryStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState *out,
    const FileQueueEntryState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueEntryState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FileQueueEntryStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FileQueueEntryStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FileQueueEntryStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileQueueEntryStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileQueueEntryState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FileQueueEntryStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FileQueueEntryStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueEntryState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FileQueueEntryStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryStateKeyHolder *key, 
    const FileQueueEntryState *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueEntryState *instance, 
    const FileQueueEntryStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileQueueEntryState *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueEntryStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FileQueueEntryStatePlugin_new(void);

NDDSUSERDllExport extern void
FileQueueEntryStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FileQueueEntryStatePlugin_181250757_h */
