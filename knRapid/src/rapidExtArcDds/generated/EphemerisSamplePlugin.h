
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EphemerisSamplePlugin_1366671838_h
#define EphemerisSamplePlugin_1366671838_h

#include "EphemerisSample.h"

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

namespace arc{

/* The type used to store keys for instances of type struct
 * EphemerisSample.
 *
 * By default, this type is struct EphemerisSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EphemerisSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EphemerisSample, the
 * following restriction applies: the key of struct
 * EphemerisSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EphemerisSample.
*/
typedef  class EphemerisSample EphemerisSampleKeyHolder;


#define EphemerisSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define EphemerisSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EphemerisSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EphemerisSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EphemerisSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EphemerisSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EphemerisSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EphemerisSample*
EphemerisSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern EphemerisSample*
EphemerisSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EphemerisSample*
EphemerisSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePluginSupport_copy_data(
    EphemerisSample *out,
    const EphemerisSample *in);

NDDSUSERDllExport extern void 
EphemerisSamplePluginSupport_destroy_data_w_params(
    EphemerisSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
EphemerisSamplePluginSupport_destroy_data_ex(
    EphemerisSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EphemerisSamplePluginSupport_destroy_data(
    EphemerisSample *sample);

NDDSUSERDllExport extern void 
EphemerisSamplePluginSupport_print_data(
    const EphemerisSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EphemerisSample*
EphemerisSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EphemerisSample*
EphemerisSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EphemerisSamplePluginSupport_destroy_key_ex(
    EphemerisSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EphemerisSamplePluginSupport_destroy_key(
    EphemerisSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EphemerisSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EphemerisSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EphemerisSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EphemerisSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
EphemerisSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample *out,
    const EphemerisSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EphemerisSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EphemerisSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EphemerisSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EphemerisSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EphemerisSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EphemerisSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EphemerisSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EphemerisSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EphemerisSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSampleKeyHolder *key, 
    const EphemerisSample *instance);

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EphemerisSample *instance, 
    const EphemerisSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EphemerisSample *instance);

NDDSUSERDllExport extern RTIBool 
EphemerisSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EphemerisSamplePlugin_new(void);

NDDSUSERDllExport extern void
EphemerisSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* EphemerisSamplePlugin_1366671838_h */
