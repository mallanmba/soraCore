
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PointCloudConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PointCloudConfigPlugin_1660714053_h
#define PointCloudConfigPlugin_1660714053_h

#include "PointCloudConfig.h"

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
PointSampleXyzModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PointSampleXyzMode *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PointSampleXyzModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleXyzMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PointSampleXyzModePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
PointSampleXyzModePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointSampleXyzModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointSampleXyzModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PointSampleXyzMode * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
PointSampleXyzModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PointSampleXyzMode *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSampleXyzModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleXyzMode *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PointSampleXyzModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
PointSampleXyzModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleXyzMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
PointSampleXyzModePluginSupport_print_data(
    const PointSampleXyzMode *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
PointSampleAttributeModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PointSampleAttributeMode *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PointSampleAttributeModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleAttributeMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PointSampleAttributeModePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
PointSampleAttributeModePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointSampleAttributeModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointSampleAttributeModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PointSampleAttributeMode * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
PointSampleAttributeModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PointSampleAttributeMode *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSampleAttributeModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleAttributeMode *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PointSampleAttributeModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
PointSampleAttributeModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointSampleAttributeMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
PointSampleAttributeModePluginSupport_print_data(
    const PointSampleAttributeMode *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * PointCloudConfig.
 *
 * By default, this type is struct PointCloudConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct PointCloudConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct PointCloudConfig, the
 * following restriction applies: the key of struct
 * PointCloudConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct PointCloudConfig.
*/
typedef  class PointCloudConfig PointCloudConfigKeyHolder;


#define PointCloudConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PointCloudConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PointCloudConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define PointCloudConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PointCloudConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define PointCloudConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PointCloudConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PointCloudConfig*
PointCloudConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PointCloudConfig*
PointCloudConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PointCloudConfig*
PointCloudConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPluginSupport_copy_data(
    PointCloudConfig *out,
    const PointCloudConfig *in);

NDDSUSERDllExport extern void 
PointCloudConfigPluginSupport_destroy_data_w_params(
    PointCloudConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PointCloudConfigPluginSupport_destroy_data_ex(
    PointCloudConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PointCloudConfigPluginSupport_destroy_data(
    PointCloudConfig *sample);

NDDSUSERDllExport extern void 
PointCloudConfigPluginSupport_print_data(
    const PointCloudConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern PointCloudConfig*
PointCloudConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PointCloudConfig*
PointCloudConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PointCloudConfigPluginSupport_destroy_key_ex(
    PointCloudConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PointCloudConfigPluginSupport_destroy_key(
    PointCloudConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PointCloudConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PointCloudConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
PointCloudConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PointCloudConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
PointCloudConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig *out,
    const PointCloudConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PointCloudConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PointCloudConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PointCloudConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PointCloudConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointCloudConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PointCloudConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PointCloudConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PointCloudConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PointCloudConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
PointCloudConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfigKeyHolder *key, 
    const PointCloudConfig *instance);

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PointCloudConfig *instance, 
    const PointCloudConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const PointCloudConfig *instance);

NDDSUSERDllExport extern RTIBool 
PointCloudConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PointCloudConfigPlugin_new(void);

NDDSUSERDllExport extern void
PointCloudConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* PointCloudConfigPlugin_1660714053_h */
