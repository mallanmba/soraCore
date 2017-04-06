
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MobilitySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MobilitySamplePlugin_947072007_h
#define MobilitySamplePlugin_947072007_h

#include "MobilitySample.h"

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
 * MobilitySample.
 *
 * By default, this type is struct MobilitySample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct MobilitySample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct MobilitySample, the
 * following restriction applies: the key of struct
 * MobilitySample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct MobilitySample.
*/
typedef  class MobilitySample MobilitySampleKeyHolder;


#define MobilitySamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MobilitySamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MobilitySamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MobilitySamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MobilitySamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define MobilitySamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MobilitySamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MobilitySample*
MobilitySamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MobilitySample*
MobilitySamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MobilitySample*
MobilitySamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MobilitySamplePluginSupport_copy_data(
    MobilitySample *out,
    const MobilitySample *in);

NDDSUSERDllExport extern void 
MobilitySamplePluginSupport_destroy_data_w_params(
    MobilitySample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MobilitySamplePluginSupport_destroy_data_ex(
    MobilitySample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MobilitySamplePluginSupport_destroy_data(
    MobilitySample *sample);

NDDSUSERDllExport extern void 
MobilitySamplePluginSupport_print_data(
    const MobilitySample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern MobilitySample*
MobilitySamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MobilitySample*
MobilitySamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MobilitySamplePluginSupport_destroy_key_ex(
    MobilitySampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MobilitySamplePluginSupport_destroy_key(
    MobilitySampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MobilitySamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MobilitySamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MobilitySamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MobilitySamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MobilitySamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample *out,
    const MobilitySample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MobilitySample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MobilitySamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MobilitySamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MobilitySamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MobilitySamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MobilitySample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MobilitySamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MobilitySamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MobilitySample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MobilitySamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySampleKeyHolder *key, 
    const MobilitySample *instance);

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    MobilitySample *instance, 
    const MobilitySampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const MobilitySample *instance);

NDDSUSERDllExport extern RTIBool 
MobilitySamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MobilitySamplePlugin_new(void);

NDDSUSERDllExport extern void
MobilitySamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MobilitySamplePlugin_947072007_h */
