
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueStatePlugin_1566277297_h
#define FileQueueStatePlugin_1566277297_h

#include "FileQueueState.h"

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
ChannelStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ChannelStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ChannelStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ChannelStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ChannelStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ChannelStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ChannelStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ChannelStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ChannelStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ChannelStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ChannelStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ChannelStatusPluginSupport_print_data(
    const ChannelStatus *sample, const char *desc, int indent_level);



#define ChannelStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ChannelStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ChannelStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ChannelStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ChannelStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ChannelState*
ChannelStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ChannelState*
ChannelStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ChannelState*
ChannelStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ChannelStatePluginSupport_copy_data(
    ChannelState *out,
    const ChannelState *in);

NDDSUSERDllExport extern void 
ChannelStatePluginSupport_destroy_data_w_params(
    ChannelState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ChannelStatePluginSupport_destroy_data_ex(
    ChannelState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ChannelStatePluginSupport_destroy_data(
    ChannelState *sample);

NDDSUSERDllExport extern void 
ChannelStatePluginSupport_print_data(
    const ChannelState *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ChannelStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ChannelStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ChannelStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ChannelStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ChannelStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ChannelStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelState *out,
    const ChannelState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ChannelStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ChannelStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ChannelState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ChannelStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ChannelStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ChannelStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ChannelStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ChannelState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ChannelStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ChannelStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ChannelStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ChannelStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ChannelState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ChannelStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ChannelState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ChannelStatePlugin_new(void);

NDDSUSERDllExport extern void
ChannelStatePlugin_delete(struct PRESTypePlugin *);


#define ChannelStateSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ChannelStateSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ChannelStateSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ChannelStateSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ChannelStateSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ChannelStateSequence*
ChannelStateSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ChannelStateSequence*
ChannelStateSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ChannelStateSequence*
ChannelStateSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ChannelStateSequencePluginSupport_copy_data(
    ChannelStateSequence *out,
    const ChannelStateSequence *in);

NDDSUSERDllExport extern void 
ChannelStateSequencePluginSupport_destroy_data_w_params(
    ChannelStateSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ChannelStateSequencePluginSupport_destroy_data_ex(
    ChannelStateSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ChannelStateSequencePluginSupport_destroy_data(
    ChannelStateSequence *sample);

NDDSUSERDllExport extern void 
ChannelStateSequencePluginSupport_print_data(
    const ChannelStateSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ChannelStateSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelStateSequence *out,
    const ChannelStateSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ChannelStateSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelStateSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelStateSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelStateSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ChannelStateSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ChannelStateSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ChannelStateSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ChannelStateSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ChannelStateSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ChannelStateSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ChannelStateSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ChannelStateSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ChannelStateSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ChannelStateSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ChannelStateSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ChannelStateSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ChannelStateSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * FileQueueState.
 *
 * By default, this type is struct FileQueueState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FileQueueState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FileQueueState, the
 * following restriction applies: the key of struct
 * FileQueueState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FileQueueState.
*/
typedef  class FileQueueState FileQueueStateKeyHolder;


#define FileQueueStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FileQueueStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FileQueueStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FileQueueStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FileQueueStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FileQueueStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FileQueueStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FileQueueState*
FileQueueStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FileQueueState*
FileQueueStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueState*
FileQueueStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FileQueueStatePluginSupport_copy_data(
    FileQueueState *out,
    const FileQueueState *in);

NDDSUSERDllExport extern void 
FileQueueStatePluginSupport_destroy_data_w_params(
    FileQueueState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FileQueueStatePluginSupport_destroy_data_ex(
    FileQueueState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueStatePluginSupport_destroy_data(
    FileQueueState *sample);

NDDSUSERDllExport extern void 
FileQueueStatePluginSupport_print_data(
    const FileQueueState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FileQueueState*
FileQueueStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FileQueueState*
FileQueueStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FileQueueStatePluginSupport_destroy_key_ex(
    FileQueueStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FileQueueStatePluginSupport_destroy_key(
    FileQueueStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FileQueueStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FileQueueStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FileQueueStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FileQueueStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FileQueueStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState *out,
    const FileQueueState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FileQueueStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FileQueueStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FileQueueStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FileQueueStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileQueueState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FileQueueStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FileQueueStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FileQueueStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueStateKeyHolder *key, 
    const FileQueueState *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueState *instance, 
    const FileQueueStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileQueueState *instance);

NDDSUSERDllExport extern RTIBool 
FileQueueStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FileQueueStatePlugin_new(void);

NDDSUSERDllExport extern void
FileQueueStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FileQueueStatePlugin_1566277297_h */
