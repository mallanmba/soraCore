
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory2DConfigPlugin_1630800299_h
#define Trajectory2DConfigPlugin_1630800299_h

#include "Trajectory2DConfig.h"

#include "MessagePlugin.h"


#include "BaseTypesPlugin.h"




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
RTrans2DInterpretationPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RTrans2DInterpretation *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTrans2DInterpretationPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DInterpretation *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTrans2DInterpretationPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
RTrans2DInterpretationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RTrans2DInterpretationPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RTrans2DInterpretationPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RTrans2DInterpretation * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
RTrans2DInterpretationPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RTrans2DInterpretation *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTrans2DInterpretationPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DInterpretation *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RTrans2DInterpretationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
RTrans2DInterpretationPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DInterpretation *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RTrans2DInterpretationPluginSupport_print_data(
    const RTrans2DInterpretation *sample, const char *desc, int indent_level);


/* The type used to store keys for instances of type struct
 * Trajectory2DConfig.
 *
 * By default, this type is struct Trajectory2DConfig
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Trajectory2DConfig)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Trajectory2DConfig, the
 * following restriction applies: the key of struct
 * Trajectory2DConfig must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Trajectory2DConfig.
*/
typedef  class Trajectory2DConfig Trajectory2DConfigKeyHolder;


#define Trajectory2DConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Trajectory2DConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Trajectory2DConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define Trajectory2DConfigPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define Trajectory2DConfigPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define Trajectory2DConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Trajectory2DConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Trajectory2DConfig*
Trajectory2DConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Trajectory2DConfig*
Trajectory2DConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Trajectory2DConfig*
Trajectory2DConfigPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPluginSupport_copy_data(
    Trajectory2DConfig *out,
    const Trajectory2DConfig *in);

NDDSUSERDllExport extern void 
Trajectory2DConfigPluginSupport_destroy_data_w_params(
    Trajectory2DConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Trajectory2DConfigPluginSupport_destroy_data_ex(
    Trajectory2DConfig *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Trajectory2DConfigPluginSupport_destroy_data(
    Trajectory2DConfig *sample);

NDDSUSERDllExport extern void 
Trajectory2DConfigPluginSupport_print_data(
    const Trajectory2DConfig *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Trajectory2DConfig*
Trajectory2DConfigPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Trajectory2DConfig*
Trajectory2DConfigPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
Trajectory2DConfigPluginSupport_destroy_key_ex(
    Trajectory2DConfigKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Trajectory2DConfigPluginSupport_destroy_key(
    Trajectory2DConfigKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Trajectory2DConfigPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Trajectory2DConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Trajectory2DConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Trajectory2DConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Trajectory2DConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig *out,
    const Trajectory2DConfig *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Trajectory2DConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Trajectory2DConfigPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Trajectory2DConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Trajectory2DConfigPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Trajectory2DConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Trajectory2DConfig * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Trajectory2DConfigPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Trajectory2DConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Trajectory2DConfig *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Trajectory2DConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfigKeyHolder *key, 
    const Trajectory2DConfig *instance);

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DConfig *instance, 
    const Trajectory2DConfigKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Trajectory2DConfig *instance);

NDDSUSERDllExport extern RTIBool 
Trajectory2DConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Trajectory2DConfigPlugin_new(void);

NDDSUSERDllExport extern void
Trajectory2DConfigPlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* Trajectory2DConfigPlugin_1630800299_h */
