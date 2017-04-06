
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QueueState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef QueueStatePlugin_357500448_h
#define QueueStatePlugin_357500448_h

#include "QueueState.h"

#include "CommandPlugin.h"




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
StatusTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const StatusType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
StatusTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    StatusType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
StatusTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
StatusTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StatusTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StatusTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const StatusType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
StatusTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const StatusType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StatusTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    StatusType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StatusTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
StatusTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StatusType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
StatusTypePluginSupport_print_data(
    const StatusType *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
ResultTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ResultType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ResultTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ResultType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ResultTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ResultTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ResultTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ResultTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ResultType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ResultTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ResultType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ResultTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ResultType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ResultTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ResultTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ResultType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ResultTypePluginSupport_print_data(
    const ResultType *sample, const char *desc, int indent_level);



#define CommandRecordPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CommandRecordPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CommandRecordPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CommandRecordPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CommandRecordPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CommandRecord*
CommandRecordPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CommandRecord*
CommandRecordPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CommandRecord*
CommandRecordPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CommandRecordPluginSupport_copy_data(
    CommandRecord *out,
    const CommandRecord *in);

NDDSUSERDllExport extern void 
CommandRecordPluginSupport_destroy_data_w_params(
    CommandRecord *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CommandRecordPluginSupport_destroy_data_ex(
    CommandRecord *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CommandRecordPluginSupport_destroy_data(
    CommandRecord *sample);

NDDSUSERDllExport extern void 
CommandRecordPluginSupport_print_data(
    const CommandRecord *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CommandRecordPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CommandRecordPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CommandRecordPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CommandRecordPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CommandRecordPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandRecord *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CommandRecordPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandRecord *out,
    const CommandRecord *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CommandRecordPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CommandRecord *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandRecordPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandRecord *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandRecordPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CommandRecord **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CommandRecordPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CommandRecordPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CommandRecordPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CommandRecordPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CommandRecord * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CommandRecordPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CommandRecordPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CommandRecordPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CommandRecord *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CommandRecordPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CommandRecord * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CommandRecordPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandRecord ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CommandRecordPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CommandRecord *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CommandRecordPlugin_new(void);

NDDSUSERDllExport extern void
CommandRecordPlugin_delete(struct PRESTypePlugin *);


#define SingleQueuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SingleQueuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SingleQueuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SingleQueuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SingleQueuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SingleQueue*
SingleQueuePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SingleQueue*
SingleQueuePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SingleQueue*
SingleQueuePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SingleQueuePluginSupport_copy_data(
    SingleQueue *out,
    const SingleQueue *in);

NDDSUSERDllExport extern void 
SingleQueuePluginSupport_destroy_data_w_params(
    SingleQueue *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SingleQueuePluginSupport_destroy_data_ex(
    SingleQueue *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SingleQueuePluginSupport_destroy_data(
    SingleQueue *sample);

NDDSUSERDllExport extern void 
SingleQueuePluginSupport_print_data(
    const SingleQueue *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SingleQueuePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SingleQueuePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SingleQueuePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SingleQueuePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SingleQueuePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleQueue *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SingleQueuePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleQueue *out,
    const SingleQueue *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SingleQueuePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SingleQueue *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SingleQueuePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleQueue *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SingleQueuePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SingleQueue **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SingleQueuePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SingleQueuePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SingleQueuePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SingleQueuePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SingleQueue * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SingleQueuePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SingleQueuePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SingleQueuePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SingleQueue *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SingleQueuePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleQueue * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SingleQueuePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SingleQueue ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SingleQueuePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SingleQueue *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SingleQueuePlugin_new(void);

NDDSUSERDllExport extern void
SingleQueuePlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * QueueState.
 *
 * By default, this type is struct QueueState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct QueueState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct QueueState, the
 * following restriction applies: the key of struct
 * QueueState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct QueueState.
*/
typedef  class QueueState QueueStateKeyHolder;


#define QueueStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define QueueStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define QueueStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define QueueStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define QueueStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define QueueStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define QueueStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern QueueState*
QueueStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern QueueState*
QueueStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern QueueState*
QueueStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
QueueStatePluginSupport_copy_data(
    QueueState *out,
    const QueueState *in);

NDDSUSERDllExport extern void 
QueueStatePluginSupport_destroy_data_w_params(
    QueueState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
QueueStatePluginSupport_destroy_data_ex(
    QueueState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
QueueStatePluginSupport_destroy_data(
    QueueState *sample);

NDDSUSERDllExport extern void 
QueueStatePluginSupport_print_data(
    const QueueState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern QueueState*
QueueStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern QueueState*
QueueStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
QueueStatePluginSupport_destroy_key_ex(
    QueueStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
QueueStatePluginSupport_destroy_key(
    QueueStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
QueueStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
QueueStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
QueueStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
QueueStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
QueueStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    QueueState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    QueueState *out,
    const QueueState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const QueueState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    QueueState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    QueueState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
QueueStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
QueueStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
QueueStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
QueueStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const QueueState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
QueueStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
QueueStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const QueueState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    QueueState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    QueueState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
QueueStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    QueueState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    QueueStateKeyHolder *key, 
    const QueueState *instance);

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    QueueState *instance, 
    const QueueStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const QueueState *instance);

NDDSUSERDllExport extern RTIBool 
QueueStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
QueueStatePlugin_new(void);

NDDSUSERDllExport extern void
QueueStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* QueueStatePlugin_357500448_h */
