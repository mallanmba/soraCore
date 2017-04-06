
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryMeshSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GeometryMeshSamplePlugin_927071363_h
#define GeometryMeshSamplePlugin_927071363_h

#include "GeometryMeshSample.h"

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
GeometryIndexModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexMode *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
GeometryIndexModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
GeometryIndexModePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
GeometryIndexModePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GeometryIndexModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GeometryIndexModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryIndexMode * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
GeometryIndexModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexMode *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryIndexModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexMode *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GeometryIndexModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
GeometryIndexModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
GeometryIndexModePluginSupport_print_data(
    const GeometryIndexMode *sample, const char *desc, int indent_level);



#define GeometryIndexModeSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GeometryIndexModeSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GeometryIndexModeSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define GeometryIndexModeSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GeometryIndexModeSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GeometryIndexModeSequence32*
GeometryIndexModeSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GeometryIndexModeSequence32*
GeometryIndexModeSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GeometryIndexModeSequence32*
GeometryIndexModeSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GeometryIndexModeSequence32PluginSupport_copy_data(
    GeometryIndexModeSequence32 *out,
    const GeometryIndexModeSequence32 *in);

NDDSUSERDllExport extern void 
GeometryIndexModeSequence32PluginSupport_destroy_data_w_params(
    GeometryIndexModeSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GeometryIndexModeSequence32PluginSupport_destroy_data_ex(
    GeometryIndexModeSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GeometryIndexModeSequence32PluginSupport_destroy_data(
    GeometryIndexModeSequence32 *sample);

NDDSUSERDllExport extern void 
GeometryIndexModeSequence32PluginSupport_print_data(
    const GeometryIndexModeSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
GeometryIndexModeSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 *out,
    const GeometryIndexModeSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GeometryIndexModeSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexModeSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryIndexModeSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GeometryIndexModeSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GeometryIndexModeSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GeometryIndexModeSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GeometryIndexModeSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryIndexModeSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GeometryIndexModeSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GeometryIndexModeSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GeometryIndexModeSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexModeSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryIndexModeSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
GeometryIndexModeSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define IndexSequence256KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define IndexSequence256KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IndexSequence256KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define IndexSequence256KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IndexSequence256KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IndexSequence256K*
IndexSequence256KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IndexSequence256K*
IndexSequence256KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IndexSequence256K*
IndexSequence256KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IndexSequence256KPluginSupport_copy_data(
    IndexSequence256K *out,
    const IndexSequence256K *in);

NDDSUSERDllExport extern void 
IndexSequence256KPluginSupport_destroy_data_w_params(
    IndexSequence256K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IndexSequence256KPluginSupport_destroy_data_ex(
    IndexSequence256K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IndexSequence256KPluginSupport_destroy_data(
    IndexSequence256K *sample);

NDDSUSERDllExport extern void 
IndexSequence256KPluginSupport_print_data(
    const IndexSequence256K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
IndexSequence256KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K *out,
    const IndexSequence256K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IndexSequence256KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndexSequence256K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndexSequence256KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
IndexSequence256KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IndexSequence256KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IndexSequence256KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IndexSequence256KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndexSequence256K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
IndexSequence256KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IndexSequence256KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IndexSequence256KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndexSequence256K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IndexSequence256KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
IndexSequence256KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetSequence170KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence170KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence170KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence170KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence170KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence170K*
OctetSequence170KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence170K*
OctetSequence170KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence170K*
OctetSequence170KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence170KPluginSupport_copy_data(
    OctetSequence170K *out,
    const OctetSequence170K *in);

NDDSUSERDllExport extern void 
OctetSequence170KPluginSupport_destroy_data_w_params(
    OctetSequence170K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence170KPluginSupport_destroy_data_ex(
    OctetSequence170K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence170KPluginSupport_destroy_data(
    OctetSequence170K *sample);

NDDSUSERDllExport extern void 
OctetSequence170KPluginSupport_print_data(
    const OctetSequence170K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence170KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K *out,
    const OctetSequence170K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence170KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence170K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence170KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence170KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence170KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence170KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence170KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence170K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence170KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence170KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence170KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence170K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence170KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence170KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * GeometryMeshSample.
 *
 * By default, this type is struct GeometryMeshSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct GeometryMeshSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct GeometryMeshSample, the
 * following restriction applies: the key of struct
 * GeometryMeshSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct GeometryMeshSample.
*/
typedef  class GeometryMeshSample GeometryMeshSampleKeyHolder;


#define GeometryMeshSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GeometryMeshSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GeometryMeshSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define GeometryMeshSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define GeometryMeshSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define GeometryMeshSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GeometryMeshSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GeometryMeshSample*
GeometryMeshSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GeometryMeshSample*
GeometryMeshSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GeometryMeshSample*
GeometryMeshSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePluginSupport_copy_data(
    GeometryMeshSample *out,
    const GeometryMeshSample *in);

NDDSUSERDllExport extern void 
GeometryMeshSamplePluginSupport_destroy_data_w_params(
    GeometryMeshSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GeometryMeshSamplePluginSupport_destroy_data_ex(
    GeometryMeshSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GeometryMeshSamplePluginSupport_destroy_data(
    GeometryMeshSample *sample);

NDDSUSERDllExport extern void 
GeometryMeshSamplePluginSupport_print_data(
    const GeometryMeshSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern GeometryMeshSample*
GeometryMeshSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GeometryMeshSample*
GeometryMeshSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
GeometryMeshSamplePluginSupport_destroy_key_ex(
    GeometryMeshSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GeometryMeshSamplePluginSupport_destroy_key(
    GeometryMeshSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GeometryMeshSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GeometryMeshSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
GeometryMeshSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GeometryMeshSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
GeometryMeshSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *out,
    const GeometryMeshSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryMeshSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GeometryMeshSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GeometryMeshSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GeometryMeshSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GeometryMeshSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryMeshSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GeometryMeshSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GeometryMeshSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryMeshSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GeometryMeshSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSampleKeyHolder *key, 
    const GeometryMeshSample *instance);

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *instance, 
    const GeometryMeshSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GeometryMeshSample *instance);

NDDSUSERDllExport extern RTIBool 
GeometryMeshSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GeometryMeshSamplePlugin_new(void);

NDDSUSERDllExport extern void
GeometryMeshSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* GeometryMeshSamplePlugin_927071363_h */
