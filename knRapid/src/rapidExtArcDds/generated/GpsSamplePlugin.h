
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GpsSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GpsSamplePlugin_434874120_h
#define GpsSamplePlugin_434874120_h

#include "GpsSample.h"

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

namespace arc{

/* The type used to store keys for instances of type struct
 * GpsSample.
 *
 * By default, this type is struct GpsSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct GpsSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct GpsSample, the
 * following restriction applies: the key of struct
 * GpsSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct GpsSample.
*/
typedef  class GpsSample GpsSampleKeyHolder;


#define GpsSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GpsSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GpsSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define GpsSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define GpsSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define GpsSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GpsSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GpsSample*
GpsSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GpsSample*
GpsSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GpsSample*
GpsSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GpsSamplePluginSupport_copy_data(
    GpsSample *out,
    const GpsSample *in);

NDDSUSERDllExport extern void 
GpsSamplePluginSupport_destroy_data_w_params(
    GpsSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GpsSamplePluginSupport_destroy_data_ex(
    GpsSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GpsSamplePluginSupport_destroy_data(
    GpsSample *sample);

NDDSUSERDllExport extern void 
GpsSamplePluginSupport_print_data(
    const GpsSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern GpsSample*
GpsSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GpsSample*
GpsSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
GpsSamplePluginSupport_destroy_key_ex(
    GpsSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GpsSamplePluginSupport_destroy_key(
    GpsSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GpsSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GpsSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
GpsSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GpsSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
GpsSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample *out,
    const GpsSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GpsSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GpsSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GpsSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GpsSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GpsSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GpsSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GpsSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GpsSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GpsSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GpsSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GpsSampleKeyHolder *key, 
    const GpsSample *instance);

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GpsSample *instance, 
    const GpsSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GpsSample *instance);

NDDSUSERDllExport extern RTIBool 
GpsSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GpsSamplePlugin_new(void);

NDDSUSERDllExport extern void
GpsSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* GpsSamplePlugin_434874120_h */
