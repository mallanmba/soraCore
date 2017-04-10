
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RosMarkerArraySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RosMarkerArraySamplePlugin_1253988555_h
#define RosMarkerArraySamplePlugin_1253988555_h

#include "RosMarkerArraySample.h"

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
ShapeTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShapeType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ShapeTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShapeType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ShapeTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ShapeTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShapeTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShapeTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShapeType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ShapeTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShapeType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShapeTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShapeType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShapeTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ShapeTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShapeType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ShapeTypePluginSupport_print_data(
    const ShapeType *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
ActionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Action *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ActionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Action *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ActionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
ActionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ActionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ActionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Action * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
ActionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Action *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ActionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Action *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ActionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
ActionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Action *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ActionPluginSupport_print_data(
    const Action *sample, const char *desc, int indent_level);



#define PointSequence1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PointSequence1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PointSequence1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define PointSequence1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PointSequence1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PointSequence1K*
PointSequence1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PointSequence1K*
PointSequence1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PointSequence1K*
PointSequence1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PointSequence1KPluginSupport_copy_data(
    PointSequence1K *out,
    const PointSequence1K *in);

NDDSUSERDllExport extern void 
PointSequence1KPluginSupport_destroy_data_w_params(
    PointSequence1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PointSequence1KPluginSupport_destroy_data_ex(
    PointSequence1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PointSequence1KPluginSupport_destroy_data(
    PointSequence1K *sample);

NDDSUSERDllExport extern void 
PointSequence1KPluginSupport_print_data(
    const PointSequence1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
PointSequence1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSequence1K *out,
    const PointSequence1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PointSequence1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PointSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSequence1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSequence1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PointSequence1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PointSequence1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PointSequence1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PointSequence1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PointSequence1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PointSequence1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PointSequence1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PointSequence1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PointSequence1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PointSequence1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PointSequence1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
PointSequence1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PointSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ColorSequence1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ColorSequence1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ColorSequence1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ColorSequence1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ColorSequence1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ColorSequence1K*
ColorSequence1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ColorSequence1K*
ColorSequence1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ColorSequence1K*
ColorSequence1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ColorSequence1KPluginSupport_copy_data(
    ColorSequence1K *out,
    const ColorSequence1K *in);

NDDSUSERDllExport extern void 
ColorSequence1KPluginSupport_destroy_data_w_params(
    ColorSequence1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ColorSequence1KPluginSupport_destroy_data_ex(
    ColorSequence1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ColorSequence1KPluginSupport_destroy_data(
    ColorSequence1K *sample);

NDDSUSERDllExport extern void 
ColorSequence1KPluginSupport_print_data(
    const ColorSequence1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ColorSequence1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ColorSequence1K *out,
    const ColorSequence1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ColorSequence1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ColorSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ColorSequence1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ColorSequence1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ColorSequence1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ColorSequence1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ColorSequence1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ColorSequence1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ColorSequence1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ColorSequence1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ColorSequence1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ColorSequence1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ColorSequence1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ColorSequence1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ColorSequence1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ColorSequence1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ColorSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define MarkerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MarkerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MarkerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MarkerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MarkerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Marker*
MarkerPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Marker*
MarkerPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Marker*
MarkerPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MarkerPluginSupport_copy_data(
    Marker *out,
    const Marker *in);

NDDSUSERDllExport extern void 
MarkerPluginSupport_destroy_data_w_params(
    Marker *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MarkerPluginSupport_destroy_data_ex(
    Marker *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MarkerPluginSupport_destroy_data(
    Marker *sample);

NDDSUSERDllExport extern void 
MarkerPluginSupport_print_data(
    const Marker *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MarkerPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MarkerPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MarkerPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MarkerPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MarkerPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Marker *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MarkerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Marker *out,
    const Marker *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MarkerPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Marker *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MarkerPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Marker *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MarkerPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Marker **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MarkerPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MarkerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MarkerPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MarkerPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Marker * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MarkerPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MarkerPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MarkerPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Marker *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MarkerPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Marker * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MarkerPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Marker ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MarkerPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Marker *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MarkerPlugin_new(void);

NDDSUSERDllExport extern void
MarkerPlugin_delete(struct PRESTypePlugin *);


#define MarkerArraySequence8Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MarkerArraySequence8Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MarkerArraySequence8Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MarkerArraySequence8Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MarkerArraySequence8Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MarkerArraySequence8*
MarkerArraySequence8PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MarkerArraySequence8*
MarkerArraySequence8PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MarkerArraySequence8*
MarkerArraySequence8PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MarkerArraySequence8PluginSupport_copy_data(
    MarkerArraySequence8 *out,
    const MarkerArraySequence8 *in);

NDDSUSERDllExport extern void 
MarkerArraySequence8PluginSupport_destroy_data_w_params(
    MarkerArraySequence8 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MarkerArraySequence8PluginSupport_destroy_data_ex(
    MarkerArraySequence8 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MarkerArraySequence8PluginSupport_destroy_data(
    MarkerArraySequence8 *sample);

NDDSUSERDllExport extern void 
MarkerArraySequence8PluginSupport_print_data(
    const MarkerArraySequence8 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
MarkerArraySequence8Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MarkerArraySequence8 *out,
    const MarkerArraySequence8 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MarkerArraySequence8Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MarkerArraySequence8 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MarkerArraySequence8Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MarkerArraySequence8 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MarkerArraySequence8Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MarkerArraySequence8Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MarkerArraySequence8Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MarkerArraySequence8Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MarkerArraySequence8 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MarkerArraySequence8Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MarkerArraySequence8Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MarkerArraySequence8Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MarkerArraySequence8 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MarkerArraySequence8Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MarkerArraySequence8 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
MarkerArraySequence8Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MarkerArraySequence8 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * RosMarkerArraySample.
 *
 * By default, this type is struct RosMarkerArraySample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct RosMarkerArraySample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct RosMarkerArraySample, the
 * following restriction applies: the key of struct
 * RosMarkerArraySample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct RosMarkerArraySample.
*/
typedef  class RosMarkerArraySample RosMarkerArraySampleKeyHolder;


#define RosMarkerArraySamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RosMarkerArraySamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RosMarkerArraySamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define RosMarkerArraySamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RosMarkerArraySamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define RosMarkerArraySamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RosMarkerArraySamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RosMarkerArraySample*
RosMarkerArraySamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RosMarkerArraySample*
RosMarkerArraySamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RosMarkerArraySample*
RosMarkerArraySamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePluginSupport_copy_data(
    RosMarkerArraySample *out,
    const RosMarkerArraySample *in);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePluginSupport_destroy_data_w_params(
    RosMarkerArraySample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePluginSupport_destroy_data_ex(
    RosMarkerArraySample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePluginSupport_destroy_data(
    RosMarkerArraySample *sample);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePluginSupport_print_data(
    const RosMarkerArraySample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern RosMarkerArraySample*
RosMarkerArraySamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RosMarkerArraySample*
RosMarkerArraySamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePluginSupport_destroy_key_ex(
    RosMarkerArraySampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePluginSupport_destroy_key(
    RosMarkerArraySampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RosMarkerArraySamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
RosMarkerArraySamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RosMarkerArraySamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
RosMarkerArraySamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample *out,
    const RosMarkerArraySample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RosMarkerArraySample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RosMarkerArraySamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RosMarkerArraySamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RosMarkerArraySamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RosMarkerArraySamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RosMarkerArraySample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RosMarkerArraySamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RosMarkerArraySamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RosMarkerArraySample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RosMarkerArraySamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySampleKeyHolder *key, 
    const RosMarkerArraySample *instance);

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RosMarkerArraySample *instance, 
    const RosMarkerArraySampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RosMarkerArraySample *instance);

NDDSUSERDllExport extern RTIBool 
RosMarkerArraySamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RosMarkerArraySamplePlugin_new(void);

NDDSUSERDllExport extern void
RosMarkerArraySamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* RosMarkerArraySamplePlugin_1253988555_h */
