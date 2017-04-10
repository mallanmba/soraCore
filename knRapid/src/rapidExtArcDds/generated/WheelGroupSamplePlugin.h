
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from WheelGroupSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef WheelGroupSamplePlugin_498487715_h
#define WheelGroupSamplePlugin_498487715_h

#include "WheelGroupSample.h"

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


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
CtrlModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CtrlMode *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CtrlModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CtrlMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CtrlModePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
CtrlModePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CtrlModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CtrlModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CtrlMode * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
CtrlModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CtrlMode *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CtrlModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CtrlMode *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CtrlModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
CtrlModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CtrlMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
CtrlModePluginSupport_print_data(
    const CtrlMode *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
PositionModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PositionMode *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PositionModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PositionModePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
PositionModePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PositionModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PositionModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PositionMode * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
PositionModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PositionMode *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PositionModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionMode *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PositionModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
PositionModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
PositionModePluginSupport_print_data(
    const PositionMode *sample, const char *desc, int indent_level);



#define MotorProfilePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MotorProfilePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MotorProfilePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MotorProfilePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MotorProfilePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MotorProfile*
MotorProfilePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MotorProfile*
MotorProfilePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MotorProfile*
MotorProfilePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MotorProfilePluginSupport_copy_data(
    MotorProfile *out,
    const MotorProfile *in);

NDDSUSERDllExport extern void 
MotorProfilePluginSupport_destroy_data_w_params(
    MotorProfile *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MotorProfilePluginSupport_destroy_data_ex(
    MotorProfile *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MotorProfilePluginSupport_destroy_data(
    MotorProfile *sample);

NDDSUSERDllExport extern void 
MotorProfilePluginSupport_print_data(
    const MotorProfile *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MotorProfilePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MotorProfilePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MotorProfilePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MotorProfilePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MotorProfilePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MotorProfilePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *out,
    const MotorProfile *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MotorProfilePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MotorProfile *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MotorProfilePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MotorProfilePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MotorProfilePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MotorProfilePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MotorProfilePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MotorProfilePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MotorProfile * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MotorProfilePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MotorProfilePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MotorProfilePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MotorProfile *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MotorProfilePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MotorProfilePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MotorProfilePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MotorProfilePlugin_new(void);

NDDSUSERDllExport extern void
MotorProfilePlugin_delete(struct PRESTypePlugin *);


#define MotorStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MotorStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MotorStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MotorStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MotorStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MotorState*
MotorStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MotorState*
MotorStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MotorState*
MotorStatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MotorStatePluginSupport_copy_data(
    MotorState *out,
    const MotorState *in);

NDDSUSERDllExport extern void 
MotorStatePluginSupport_destroy_data_w_params(
    MotorState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MotorStatePluginSupport_destroy_data_ex(
    MotorState *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MotorStatePluginSupport_destroy_data(
    MotorState *sample);

NDDSUSERDllExport extern void 
MotorStatePluginSupport_print_data(
    const MotorState *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MotorStatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MotorStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MotorStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MotorStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MotorStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MotorStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *out,
    const MotorState *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MotorStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MotorState *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MotorStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MotorStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MotorState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MotorStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MotorStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MotorStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MotorStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MotorState * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MotorStatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MotorStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MotorStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MotorState *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MotorStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MotorStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorState ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MotorStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MotorStatePlugin_new(void);

NDDSUSERDllExport extern void
MotorStatePlugin_delete(struct PRESTypePlugin *);


#define MotorStateSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MotorStateSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MotorStateSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MotorStateSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MotorStateSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MotorStateSequence32*
MotorStateSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MotorStateSequence32*
MotorStateSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MotorStateSequence32*
MotorStateSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MotorStateSequence32PluginSupport_copy_data(
    MotorStateSequence32 *out,
    const MotorStateSequence32 *in);

NDDSUSERDllExport extern void 
MotorStateSequence32PluginSupport_destroy_data_w_params(
    MotorStateSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MotorStateSequence32PluginSupport_destroy_data_ex(
    MotorStateSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MotorStateSequence32PluginSupport_destroy_data(
    MotorStateSequence32 *sample);

NDDSUSERDllExport extern void 
MotorStateSequence32PluginSupport_print_data(
    const MotorStateSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
MotorStateSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 *out,
    const MotorStateSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MotorStateSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MotorStateSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MotorStateSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MotorStateSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MotorStateSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MotorStateSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MotorStateSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MotorStateSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MotorStateSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MotorStateSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MotorStateSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MotorStateSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MotorStateSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
MotorStateSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * WheelGroupSample.
 *
 * By default, this type is struct WheelGroupSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct WheelGroupSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct WheelGroupSample, the
 * following restriction applies: the key of struct
 * WheelGroupSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct WheelGroupSample.
*/
typedef  class WheelGroupSample WheelGroupSampleKeyHolder;


#define WheelGroupSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define WheelGroupSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define WheelGroupSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define WheelGroupSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define WheelGroupSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define WheelGroupSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define WheelGroupSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern WheelGroupSample*
WheelGroupSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern WheelGroupSample*
WheelGroupSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern WheelGroupSample*
WheelGroupSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePluginSupport_copy_data(
    WheelGroupSample *out,
    const WheelGroupSample *in);

NDDSUSERDllExport extern void 
WheelGroupSamplePluginSupport_destroy_data_w_params(
    WheelGroupSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
WheelGroupSamplePluginSupport_destroy_data_ex(
    WheelGroupSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
WheelGroupSamplePluginSupport_destroy_data(
    WheelGroupSample *sample);

NDDSUSERDllExport extern void 
WheelGroupSamplePluginSupport_print_data(
    const WheelGroupSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern WheelGroupSample*
WheelGroupSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern WheelGroupSample*
WheelGroupSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
WheelGroupSamplePluginSupport_destroy_key_ex(
    WheelGroupSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
WheelGroupSamplePluginSupport_destroy_key(
    WheelGroupSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
WheelGroupSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
WheelGroupSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
WheelGroupSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
WheelGroupSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
WheelGroupSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *out,
    const WheelGroupSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WheelGroupSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
WheelGroupSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
WheelGroupSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
WheelGroupSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
WheelGroupSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WheelGroupSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
WheelGroupSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
WheelGroupSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WheelGroupSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
WheelGroupSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSampleKeyHolder *key, 
    const WheelGroupSample *instance);

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *instance, 
    const WheelGroupSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const WheelGroupSample *instance);

NDDSUSERDllExport extern RTIBool 
WheelGroupSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
WheelGroupSamplePlugin_new(void);

NDDSUSERDllExport extern void
WheelGroupSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* WheelGroupSamplePlugin_498487715_h */
