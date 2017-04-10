
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RangeScanConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RangeScanConfigPlugin_1049717493_h
#define RangeScanConfigPlugin_1049717493_h

#include "RangeScanConfig.h"

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
RangeScanDirectionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanDirection *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RangeScanDirectionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanDirection *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RangeScanDirectionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
RangeScanDirectionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RangeScanDirectionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RangeScanDirectionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RangeScanDirection * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
RangeScanDirectionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanDirection *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RangeScanDirectionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanDirection *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RangeScanDirectionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
RangeScanDirectionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanDirection *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RangeScanDirectionPluginSupport_print_data(
    const RangeScanDirection *sample, const char *desc, int indent_level);



#define Transform3DSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Transform3DSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Transform3DSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Transform3DSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Transform3DSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Transform3DSequence64*
Transform3DSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Transform3DSequence64*
Transform3DSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Transform3DSequence64*
Transform3DSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Transform3DSequence64PluginSupport_copy_data(
    Transform3DSequence64 *out,
    const Transform3DSequence64 *in);

NDDSUSERDllExport extern void 
Transform3DSequence64PluginSupport_destroy_data_w_params(
    Transform3DSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Transform3DSequence64PluginSupport_destroy_data_ex(
    Transform3DSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Transform3DSequence64PluginSupport_destroy_data(
    Transform3DSequence64 *sample);

NDDSUSERDllExport extern void 
Transform3DSequence64PluginSupport_print_data(
    const Transform3DSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Transform3DSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 *out,
    const Transform3DSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Transform3DSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Transform3DSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Transform3DSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Transform3DSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Transform3DSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Transform3DSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Transform3DSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Transform3DSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Transform3DSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Transform3DSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Transform3DSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Transform3DSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Transform3DSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Transform3DSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * RangeScanConfig.
 *
 * By default, this type is struct RangeScanConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct RangeScanConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct RangeScanConfig, the
 * following restriction applies: the key of struct
 * RangeScanConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct RangeScanConfig.
*/
typedef  class RangeScanConfig RangeScanConfigKeyHolder;


#define RangeScanConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RangeScanConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RangeScanConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define RangeScanConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RangeScanConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define RangeScanConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RangeScanConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RangeScanConfig*
RangeScanConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RangeScanConfig*
RangeScanConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RangeScanConfig*
RangeScanConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPluginSupport_copy_data(
    RangeScanConfig *out,
    const RangeScanConfig *in);

NDDSUSERDllExport extern void 
RangeScanConfigPluginSupport_destroy_data_w_params(
    RangeScanConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RangeScanConfigPluginSupport_destroy_data_ex(
    RangeScanConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RangeScanConfigPluginSupport_destroy_data(
    RangeScanConfig *sample);

NDDSUSERDllExport extern void 
RangeScanConfigPluginSupport_print_data(
    const RangeScanConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern RangeScanConfig*
RangeScanConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RangeScanConfig*
RangeScanConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RangeScanConfigPluginSupport_destroy_key_ex(
    RangeScanConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RangeScanConfigPluginSupport_destroy_key(
    RangeScanConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RangeScanConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RangeScanConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
RangeScanConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RangeScanConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
RangeScanConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *out,
    const RangeScanConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RangeScanConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RangeScanConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RangeScanConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RangeScanConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RangeScanConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RangeScanConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RangeScanConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RangeScanConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfigKeyHolder *key, 
    const RangeScanConfig *instance);

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *instance, 
    const RangeScanConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RangeScanConfig *instance);

NDDSUSERDllExport extern RTIBool 
RangeScanConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RangeScanConfigPlugin_new(void);

NDDSUSERDllExport extern void
RangeScanConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* RangeScanConfigPlugin_1049717493_h */
