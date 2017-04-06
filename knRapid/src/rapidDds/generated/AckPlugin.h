
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Ack.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AckPlugin_492777816_h
#define AckPlugin_492777816_h

#include "Ack.h"

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


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
AckStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AckStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
AckStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AckStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
AckStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
AckStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AckStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AckStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AckStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
AckStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AckStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AckStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AckStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AckStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
AckStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AckStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
AckStatusPluginSupport_print_data(
    const AckStatus *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
AckCompletedStatusPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AckCompletedStatus *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
AckCompletedStatusPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AckCompletedStatus *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
AckCompletedStatusPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
AckCompletedStatusPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AckCompletedStatusPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AckCompletedStatusPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AckCompletedStatus * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
AckCompletedStatusPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AckCompletedStatus *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AckCompletedStatusPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AckCompletedStatus *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AckCompletedStatusPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
AckCompletedStatusPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AckCompletedStatus *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
AckCompletedStatusPluginSupport_print_data(
    const AckCompletedStatus *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * Ack.
 *
 * By default, this type is struct Ack
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Ack)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Ack, the
 * following restriction applies: the key of struct
 * Ack must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Ack.
*/
typedef  class Ack AckKeyHolder;


#define AckPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define AckPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AckPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AckPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AckPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AckPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AckPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Ack*
AckPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Ack*
AckPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Ack*
AckPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AckPluginSupport_copy_data(
    Ack *out,
    const Ack *in);

NDDSUSERDllExport extern void 
AckPluginSupport_destroy_data_w_params(
    Ack *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
AckPluginSupport_destroy_data_ex(
    Ack *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AckPluginSupport_destroy_data(
    Ack *sample);

NDDSUSERDllExport extern void 
AckPluginSupport_print_data(
    const Ack *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Ack*
AckPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Ack*
AckPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AckPluginSupport_destroy_key_ex(
    AckKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AckPluginSupport_destroy_key(
    AckKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AckPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AckPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AckPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AckPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
AckPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Ack *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
AckPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Ack *out,
    const Ack *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AckPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Ack *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AckPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Ack *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AckPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Ack **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
AckPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AckPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AckPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AckPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Ack * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AckPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AckPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AckPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Ack *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AckPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Ack * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AckPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Ack ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AckPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Ack *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AckPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AckKeyHolder *key, 
    const Ack *instance);

NDDSUSERDllExport extern RTIBool 
AckPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Ack *instance, 
    const AckKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AckPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Ack *instance);

NDDSUSERDllExport extern RTIBool 
AckPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AckPlugin_new(void);

NDDSUSERDllExport extern void
AckPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* AckPlugin_492777816_h */
