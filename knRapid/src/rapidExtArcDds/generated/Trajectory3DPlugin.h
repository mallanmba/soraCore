
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory3D.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory3DPlugin_1790257475_h
#define Trajectory3DPlugin_1790257475_h

#include "Trajectory3D.h"

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

namespace arc{


#define TrajPoint3DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TrajPoint3DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TrajPoint3DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TrajPoint3DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TrajPoint3DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TrajPoint3D*
TrajPoint3DPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TrajPoint3D*
TrajPoint3DPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TrajPoint3D*
TrajPoint3DPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DPluginSupport_copy_data(
    TrajPoint3D *out,
    const TrajPoint3D *in);

NDDSUSERDllExport extern void 
TrajPoint3DPluginSupport_destroy_data_w_params(
    TrajPoint3D *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TrajPoint3DPluginSupport_destroy_data_ex(
    TrajPoint3D *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TrajPoint3DPluginSupport_destroy_data(
    TrajPoint3D *sample);

NDDSUSERDllExport extern void 
TrajPoint3DPluginSupport_print_data(
    const TrajPoint3D *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TrajPoint3DPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TrajPoint3DPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TrajPoint3DPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TrajPoint3DPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TrajPoint3DPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3D *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TrajPoint3DPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3D *out,
    const TrajPoint3D *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TrajPoint3DPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TrajPoint3D *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3D *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajPoint3DPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3D **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TrajPoint3DPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TrajPoint3DPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TrajPoint3DPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TrajPoint3DPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TrajPoint3D * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TrajPoint3DPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TrajPoint3DPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TrajPoint3D *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3D * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajPoint3DPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3D ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TrajPoint3DPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3D *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TrajPoint3DPlugin_new(void);

NDDSUSERDllExport extern void
TrajPoint3DPlugin_delete(struct PRESTypePlugin *);


#define TrajPoint3DSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TrajPoint3DSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TrajPoint3DSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define TrajPoint3DSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TrajPoint3DSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TrajPoint3DSequence*
TrajPoint3DSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TrajPoint3DSequence*
TrajPoint3DSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TrajPoint3DSequence*
TrajPoint3DSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DSequencePluginSupport_copy_data(
    TrajPoint3DSequence *out,
    const TrajPoint3DSequence *in);

NDDSUSERDllExport extern void 
TrajPoint3DSequencePluginSupport_destroy_data_w_params(
    TrajPoint3DSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TrajPoint3DSequencePluginSupport_destroy_data_ex(
    TrajPoint3DSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TrajPoint3DSequencePluginSupport_destroy_data(
    TrajPoint3DSequence *sample);

NDDSUSERDllExport extern void 
TrajPoint3DSequencePluginSupport_print_data(
    const TrajPoint3DSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
TrajPoint3DSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3DSequence *out,
    const TrajPoint3DSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TrajPoint3DSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TrajPoint3DSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3DSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TrajPoint3DSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TrajPoint3DSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TrajPoint3DSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TrajPoint3DSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TrajPoint3DSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TrajPoint3DSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TrajPoint3DSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TrajPoint3DSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajPoint3DSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3DSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TrajPoint3DSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajPoint3DSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Trajectory3DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Trajectory3DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Trajectory3DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Trajectory3DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Trajectory3DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Trajectory3D*
Trajectory3DPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Trajectory3D*
Trajectory3DPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Trajectory3D*
Trajectory3DPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Trajectory3DPluginSupport_copy_data(
    Trajectory3D *out,
    const Trajectory3D *in);

NDDSUSERDllExport extern void 
Trajectory3DPluginSupport_destroy_data_w_params(
    Trajectory3D *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Trajectory3DPluginSupport_destroy_data_ex(
    Trajectory3D *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Trajectory3DPluginSupport_destroy_data(
    Trajectory3D *sample);

NDDSUSERDllExport extern void 
Trajectory3DPluginSupport_print_data(
    const Trajectory3D *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Trajectory3DPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Trajectory3DPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Trajectory3DPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Trajectory3DPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Trajectory3DPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory3D *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Trajectory3DPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory3D *out,
    const Trajectory3D *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Trajectory3DPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Trajectory3D *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Trajectory3DPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory3D *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory3DPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory3D **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Trajectory3DPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Trajectory3DPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Trajectory3DPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Trajectory3DPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Trajectory3D * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Trajectory3DPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Trajectory3DPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Trajectory3DPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Trajectory3D *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Trajectory3DPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory3D * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory3DPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory3D ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Trajectory3DPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory3D *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Trajectory3DPlugin_new(void);

NDDSUSERDllExport extern void
Trajectory3DPlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* Trajectory3DPlugin_1790257475_h */
