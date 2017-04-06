
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NavMapConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NavMapConfigPlugin_1457985733_h
#define NavMapConfigPlugin_1457985733_h

#include "NavMapConfig.h"

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


#define ShortMapLayerNameSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortMapLayerNameSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortMapLayerNameSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortMapLayerNameSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortMapLayerNameSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortMapLayerNameSequence*
ShortMapLayerNameSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortMapLayerNameSequence*
ShortMapLayerNameSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortMapLayerNameSequence*
ShortMapLayerNameSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerNameSequencePluginSupport_copy_data(
    ShortMapLayerNameSequence *out,
    const ShortMapLayerNameSequence *in);

NDDSUSERDllExport extern void 
ShortMapLayerNameSequencePluginSupport_destroy_data_w_params(
    ShortMapLayerNameSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortMapLayerNameSequencePluginSupport_destroy_data_ex(
    ShortMapLayerNameSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortMapLayerNameSequencePluginSupport_destroy_data(
    ShortMapLayerNameSequence *sample);

NDDSUSERDllExport extern void 
ShortMapLayerNameSequencePluginSupport_print_data(
    const ShortMapLayerNameSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortMapLayerNameSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerNameSequence *out,
    const ShortMapLayerNameSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortMapLayerNameSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortMapLayerNameSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerNameSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerNameSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortMapLayerNameSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerNameSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerNameSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortMapLayerNameSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortMapLayerNameSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortMapLayerNameSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortMapLayerNameSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerNameSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortMapLayerNameSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortMapLayerNameSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerNameSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortMapLayerNameSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortMapLayerNameSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetMapLayerNameSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetMapLayerNameSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetMapLayerNameSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetMapLayerNameSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetMapLayerNameSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetMapLayerNameSequence*
OctetMapLayerNameSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetMapLayerNameSequence*
OctetMapLayerNameSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetMapLayerNameSequence*
OctetMapLayerNameSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerNameSequencePluginSupport_copy_data(
    OctetMapLayerNameSequence *out,
    const OctetMapLayerNameSequence *in);

NDDSUSERDllExport extern void 
OctetMapLayerNameSequencePluginSupport_destroy_data_w_params(
    OctetMapLayerNameSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetMapLayerNameSequencePluginSupport_destroy_data_ex(
    OctetMapLayerNameSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetMapLayerNameSequencePluginSupport_destroy_data(
    OctetMapLayerNameSequence *sample);

NDDSUSERDllExport extern void 
OctetMapLayerNameSequencePluginSupport_print_data(
    const OctetMapLayerNameSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetMapLayerNameSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerNameSequence *out,
    const OctetMapLayerNameSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetMapLayerNameSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetMapLayerNameSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerNameSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerNameSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetMapLayerNameSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerNameSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerNameSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetMapLayerNameSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetMapLayerNameSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetMapLayerNameSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetMapLayerNameSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerNameSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetMapLayerNameSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetMapLayerNameSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerNameSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetMapLayerNameSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetMapLayerNameSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * NavMapConfig.
 *
 * By default, this type is struct NavMapConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct NavMapConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct NavMapConfig, the
 * following restriction applies: the key of struct
 * NavMapConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct NavMapConfig.
*/
typedef  class NavMapConfig NavMapConfigKeyHolder;


#define NavMapConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NavMapConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NavMapConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define NavMapConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define NavMapConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define NavMapConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NavMapConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NavMapConfig*
NavMapConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NavMapConfig*
NavMapConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NavMapConfig*
NavMapConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NavMapConfigPluginSupport_copy_data(
    NavMapConfig *out,
    const NavMapConfig *in);

NDDSUSERDllExport extern void 
NavMapConfigPluginSupport_destroy_data_w_params(
    NavMapConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NavMapConfigPluginSupport_destroy_data_ex(
    NavMapConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NavMapConfigPluginSupport_destroy_data(
    NavMapConfig *sample);

NDDSUSERDllExport extern void 
NavMapConfigPluginSupport_print_data(
    const NavMapConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern NavMapConfig*
NavMapConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NavMapConfig*
NavMapConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
NavMapConfigPluginSupport_destroy_key_ex(
    NavMapConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NavMapConfigPluginSupport_destroy_key(
    NavMapConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NavMapConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NavMapConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NavMapConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NavMapConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NavMapConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig *out,
    const NavMapConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NavMapConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NavMapConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NavMapConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NavMapConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NavMapConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NavMapConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NavMapConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NavMapConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NavMapConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NavMapConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfigKeyHolder *key, 
    const NavMapConfig *instance);

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    NavMapConfig *instance, 
    const NavMapConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const NavMapConfig *instance);

NDDSUSERDllExport extern RTIBool 
NavMapConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NavMapConfigPlugin_new(void);

NDDSUSERDllExport extern void
NavMapConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* NavMapConfigPlugin_1457985733_h */
