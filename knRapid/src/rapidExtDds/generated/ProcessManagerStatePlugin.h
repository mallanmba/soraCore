
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessManagerState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ProcessManagerStatePlugin_1150325614_h
#define ProcessManagerStatePlugin_1150325614_h

#include "ProcessManagerState.h"

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
ProcessStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ProcessStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ProcessStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ProcessStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ProcessStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ProcessStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ProcessStatusPluginSupport_print_data(
    const ProcessStatus *sample, const char *desc, int indent_level);



#define ProcessStatusSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ProcessStatusSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ProcessStatusSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ProcessStatusSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ProcessStatusSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ProcessStatusSequence*
ProcessStatusSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ProcessStatusSequence*
ProcessStatusSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessStatusSequence*
ProcessStatusSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ProcessStatusSequencePluginSupport_copy_data(
    ProcessStatusSequence *out,
    const ProcessStatusSequence *in);

NDDSUSERDllExport extern void 
ProcessStatusSequencePluginSupport_destroy_data_w_params(
    ProcessStatusSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ProcessStatusSequencePluginSupport_destroy_data_ex(
    ProcessStatusSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessStatusSequencePluginSupport_destroy_data(
    ProcessStatusSequence *sample);

NDDSUSERDllExport extern void 
ProcessStatusSequencePluginSupport_print_data(
    const ProcessStatusSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ProcessStatusSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessStatusSequence *out,
    const ProcessStatusSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ProcessStatusSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessStatusSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessStatusSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessStatusSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ProcessStatusSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessStatusSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ProcessStatusSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessStatusSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessStatusSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ProcessStatusSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ProcessStatusSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ProcessStatusSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessStatusSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessStatusSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessStatusSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ProcessStatusSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessStatusSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * ProcessManagerState.
 *
 * By default, this type is struct ProcessManagerState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ProcessManagerState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ProcessManagerState, the
 * following restriction applies: the key of struct
 * ProcessManagerState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ProcessManagerState.
*/
typedef  class ProcessManagerState ProcessManagerStateKeyHolder;


#define ProcessManagerStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ProcessManagerStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ProcessManagerStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ProcessManagerStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ProcessManagerStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ProcessManagerStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ProcessManagerStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ProcessManagerState*
ProcessManagerStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ProcessManagerState*
ProcessManagerStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessManagerState*
ProcessManagerStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePluginSupport_copy_data(
    ProcessManagerState *out,
    const ProcessManagerState *in);

NDDSUSERDllExport extern void 
ProcessManagerStatePluginSupport_destroy_data_w_params(
    ProcessManagerState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ProcessManagerStatePluginSupport_destroy_data_ex(
    ProcessManagerState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessManagerStatePluginSupport_destroy_data(
    ProcessManagerState *sample);

NDDSUSERDllExport extern void 
ProcessManagerStatePluginSupport_print_data(
    const ProcessManagerState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ProcessManagerState*
ProcessManagerStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ProcessManagerState*
ProcessManagerStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ProcessManagerStatePluginSupport_destroy_key_ex(
    ProcessManagerStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ProcessManagerStatePluginSupport_destroy_key(
    ProcessManagerStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ProcessManagerStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ProcessManagerStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ProcessManagerStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ProcessManagerStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ProcessManagerStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState *out,
    const ProcessManagerState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessManagerState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ProcessManagerStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ProcessManagerStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ProcessManagerStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ProcessManagerStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ProcessManagerState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ProcessManagerStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ProcessManagerStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ProcessManagerState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ProcessManagerStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerStateKeyHolder *key, 
    const ProcessManagerState *instance);

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ProcessManagerState *instance, 
    const ProcessManagerStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ProcessManagerState *instance);

NDDSUSERDllExport extern RTIBool 
ProcessManagerStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ProcessManagerStatePlugin_new(void);

NDDSUSERDllExport extern void
ProcessManagerStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ProcessManagerStatePlugin_1150325614_h */
