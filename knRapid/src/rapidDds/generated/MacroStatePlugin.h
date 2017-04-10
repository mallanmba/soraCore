
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MacroStatePlugin_2110419408_h
#define MacroStatePlugin_2110419408_h

#include "MacroState.h"

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


#define MacroInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MacroInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MacroInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MacroInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MacroInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MacroInfo*
MacroInfoPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MacroInfo*
MacroInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroInfo*
MacroInfoPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MacroInfoPluginSupport_copy_data(
    MacroInfo *out,
    const MacroInfo *in);

NDDSUSERDllExport extern void 
MacroInfoPluginSupport_destroy_data_w_params(
    MacroInfo *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MacroInfoPluginSupport_destroy_data_ex(
    MacroInfo *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroInfoPluginSupport_destroy_data(
    MacroInfo *sample);

NDDSUSERDllExport extern void 
MacroInfoPluginSupport_print_data(
    const MacroInfo *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MacroInfoPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MacroInfoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MacroInfoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MacroInfoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MacroInfoPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfo *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MacroInfoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfo *out,
    const MacroInfo *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MacroInfoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MacroInfo *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroInfoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfo *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroInfoPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfo **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MacroInfoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MacroInfoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MacroInfoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MacroInfoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MacroInfo * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MacroInfoPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MacroInfoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MacroInfoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MacroInfo *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroInfoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfo * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroInfoPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfo ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MacroInfoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfo *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MacroInfoPlugin_new(void);

NDDSUSERDllExport extern void
MacroInfoPlugin_delete(struct PRESTypePlugin *);


#define MacroInfoSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MacroInfoSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MacroInfoSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MacroInfoSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MacroInfoSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MacroInfoSequence*
MacroInfoSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MacroInfoSequence*
MacroInfoSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroInfoSequence*
MacroInfoSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MacroInfoSequencePluginSupport_copy_data(
    MacroInfoSequence *out,
    const MacroInfoSequence *in);

NDDSUSERDllExport extern void 
MacroInfoSequencePluginSupport_destroy_data_w_params(
    MacroInfoSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MacroInfoSequencePluginSupport_destroy_data_ex(
    MacroInfoSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroInfoSequencePluginSupport_destroy_data(
    MacroInfoSequence *sample);

NDDSUSERDllExport extern void 
MacroInfoSequencePluginSupport_print_data(
    const MacroInfoSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
MacroInfoSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfoSequence *out,
    const MacroInfoSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MacroInfoSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MacroInfoSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroInfoSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfoSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MacroInfoSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MacroInfoSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MacroInfoSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MacroInfoSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MacroInfoSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MacroInfoSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MacroInfoSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MacroInfoSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MacroInfoSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroInfoSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfoSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
MacroInfoSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroInfoSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * MacroState.
 *
 * By default, this type is struct MacroState
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct MacroState)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct MacroState, the
 * following restriction applies: the key of struct
 * MacroState must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct MacroState.
*/
typedef  class MacroState MacroStateKeyHolder;


#define MacroStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MacroStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MacroStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MacroStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MacroStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define MacroStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MacroStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MacroState*
MacroStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MacroState*
MacroStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroState*
MacroStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MacroStatePluginSupport_copy_data(
    MacroState *out,
    const MacroState *in);

NDDSUSERDllExport extern void 
MacroStatePluginSupport_destroy_data_w_params(
    MacroState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MacroStatePluginSupport_destroy_data_ex(
    MacroState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroStatePluginSupport_destroy_data(
    MacroState *sample);

NDDSUSERDllExport extern void 
MacroStatePluginSupport_print_data(
    const MacroState *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern MacroState*
MacroStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MacroState*
MacroStatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MacroStatePluginSupport_destroy_key_ex(
    MacroStateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MacroStatePluginSupport_destroy_key(
    MacroStateKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MacroStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MacroStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MacroStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MacroStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MacroStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroState *out,
    const MacroState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MacroState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MacroState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MacroStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MacroStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MacroStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MacroStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MacroState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MacroStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MacroStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MacroState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MacroState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MacroStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MacroStateKeyHolder *key, 
    const MacroState *instance);

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    MacroState *instance, 
    const MacroStateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const MacroState *instance);

NDDSUSERDllExport extern RTIBool 
MacroStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MacroStatePlugin_new(void);

NDDSUSERDllExport extern void
MacroStatePlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MacroStatePlugin_2110419408_h */
