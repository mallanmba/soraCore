
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RangeScanSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RangeScanSamplePlugin_361358178_h
#define RangeScanSamplePlugin_361358178_h

#include "RangeScanSample.h"

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

/* The type used to store keys for instances of type struct
 * RangeScanSample.
 *
 * By default, this type is struct RangeScanSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct RangeScanSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct RangeScanSample, the
 * following restriction applies: the key of struct
 * RangeScanSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct RangeScanSample.
*/
typedef  class RangeScanSample RangeScanSampleKeyHolder;


#define RangeScanSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RangeScanSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RangeScanSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define RangeScanSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RangeScanSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define RangeScanSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RangeScanSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RangeScanSample*
RangeScanSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RangeScanSample*
RangeScanSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RangeScanSample*
RangeScanSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePluginSupport_copy_data(
    RangeScanSample *out,
    const RangeScanSample *in);

NDDSUSERDllExport extern void 
RangeScanSamplePluginSupport_destroy_data_w_params(
    RangeScanSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RangeScanSamplePluginSupport_destroy_data_ex(
    RangeScanSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RangeScanSamplePluginSupport_destroy_data(
    RangeScanSample *sample);

NDDSUSERDllExport extern void 
RangeScanSamplePluginSupport_print_data(
    const RangeScanSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern RangeScanSample*
RangeScanSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RangeScanSample*
RangeScanSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RangeScanSamplePluginSupport_destroy_key_ex(
    RangeScanSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RangeScanSamplePluginSupport_destroy_key(
    RangeScanSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RangeScanSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RangeScanSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
RangeScanSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RangeScanSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
RangeScanSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample *out,
    const RangeScanSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RangeScanSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RangeScanSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RangeScanSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RangeScanSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RangeScanSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RangeScanSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RangeScanSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RangeScanSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSampleKeyHolder *key, 
    const RangeScanSample *instance);

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanSample *instance, 
    const RangeScanSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RangeScanSample *instance);

NDDSUSERDllExport extern RTIBool 
RangeScanSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RangeScanSamplePlugin_new(void);

NDDSUSERDllExport extern void
RangeScanSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* RangeScanSamplePlugin_361358178_h */
