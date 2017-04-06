
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef DlpSamplePlugin_1024894760_h
#define DlpSamplePlugin_1024894760_h

#include "DlpSample.h"

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


#define DlpChannelSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpChannelSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpChannelSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DlpChannelSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpChannelSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpChannelSample*
DlpChannelSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpChannelSample*
DlpChannelSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpChannelSample*
DlpChannelSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePluginSupport_copy_data(
    DlpChannelSample *out,
    const DlpChannelSample *in);

NDDSUSERDllExport extern void 
DlpChannelSamplePluginSupport_destroy_data_w_params(
    DlpChannelSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpChannelSamplePluginSupport_destroy_data_ex(
    DlpChannelSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpChannelSamplePluginSupport_destroy_data(
    DlpChannelSample *sample);

NDDSUSERDllExport extern void 
DlpChannelSamplePluginSupport_print_data(
    const DlpChannelSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DlpChannelSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DlpChannelSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DlpChannelSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DlpChannelSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DlpChannelSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelSample *out,
    const DlpChannelSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpChannelSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpChannelSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpChannelSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpChannelSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpChannelSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpChannelSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpChannelSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpChannelSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpChannelSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpChannelSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DlpChannelSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpChannelSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DlpChannelSamplePlugin_new(void);

NDDSUSERDllExport extern void
DlpChannelSamplePlugin_delete(struct PRESTypePlugin *);


#define DlpBoardSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpBoardSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpBoardSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DlpBoardSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpBoardSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpBoardSample*
DlpBoardSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpBoardSample*
DlpBoardSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpBoardSample*
DlpBoardSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePluginSupport_copy_data(
    DlpBoardSample *out,
    const DlpBoardSample *in);

NDDSUSERDllExport extern void 
DlpBoardSamplePluginSupport_destroy_data_w_params(
    DlpBoardSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpBoardSamplePluginSupport_destroy_data_ex(
    DlpBoardSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpBoardSamplePluginSupport_destroy_data(
    DlpBoardSample *sample);

NDDSUSERDllExport extern void 
DlpBoardSamplePluginSupport_print_data(
    const DlpBoardSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DlpBoardSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DlpBoardSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DlpBoardSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DlpBoardSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DlpBoardSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSample *out,
    const DlpBoardSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpBoardSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpBoardSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpBoardSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpBoardSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpBoardSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpBoardSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpBoardSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpBoardSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DlpBoardSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DlpBoardSamplePlugin_new(void);

NDDSUSERDllExport extern void
DlpBoardSamplePlugin_delete(struct PRESTypePlugin *);


#define DlpBoardSampleSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpBoardSampleSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpBoardSampleSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DlpBoardSampleSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpBoardSampleSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpBoardSampleSequence32*
DlpBoardSampleSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpBoardSampleSequence32*
DlpBoardSampleSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpBoardSampleSequence32*
DlpBoardSampleSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpBoardSampleSequence32PluginSupport_copy_data(
    DlpBoardSampleSequence32 *out,
    const DlpBoardSampleSequence32 *in);

NDDSUSERDllExport extern void 
DlpBoardSampleSequence32PluginSupport_destroy_data_w_params(
    DlpBoardSampleSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpBoardSampleSequence32PluginSupport_destroy_data_ex(
    DlpBoardSampleSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpBoardSampleSequence32PluginSupport_destroy_data(
    DlpBoardSampleSequence32 *sample);

NDDSUSERDllExport extern void 
DlpBoardSampleSequence32PluginSupport_print_data(
    const DlpBoardSampleSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DlpBoardSampleSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSampleSequence32 *out,
    const DlpBoardSampleSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpBoardSampleSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardSampleSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardSampleSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSampleSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpBoardSampleSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpBoardSampleSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpBoardSampleSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpBoardSampleSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpBoardSampleSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpBoardSampleSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpBoardSampleSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpBoardSampleSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpBoardSampleSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpBoardSampleSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSampleSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DlpBoardSampleSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpBoardSampleSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * DlpSample.
 *
 * By default, this type is struct DlpSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct DlpSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct DlpSample, the
 * following restriction applies: the key of struct
 * DlpSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct DlpSample.
*/
typedef  class DlpSample DlpSampleKeyHolder;


#define DlpSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DlpSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DlpSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define DlpSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define DlpSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define DlpSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DlpSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DlpSample*
DlpSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DlpSample*
DlpSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpSample*
DlpSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DlpSamplePluginSupport_copy_data(
    DlpSample *out,
    const DlpSample *in);

NDDSUSERDllExport extern void 
DlpSamplePluginSupport_destroy_data_w_params(
    DlpSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DlpSamplePluginSupport_destroy_data_ex(
    DlpSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpSamplePluginSupport_destroy_data(
    DlpSample *sample);

NDDSUSERDllExport extern void 
DlpSamplePluginSupport_print_data(
    const DlpSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern DlpSample*
DlpSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DlpSample*
DlpSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
DlpSamplePluginSupport_destroy_key_ex(
    DlpSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DlpSamplePluginSupport_destroy_key(
    DlpSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DlpSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DlpSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DlpSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DlpSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DlpSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample *out,
    const DlpSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DlpSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DlpSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DlpSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DlpSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DlpSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DlpSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DlpSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DlpSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DlpSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DlpSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DlpSampleKeyHolder *key, 
    const DlpSample *instance);

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    DlpSample *instance, 
    const DlpSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const DlpSample *instance);

NDDSUSERDllExport extern RTIBool 
DlpSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DlpSamplePlugin_new(void);

NDDSUSERDllExport extern void
DlpSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* DlpSamplePlugin_1024894760_h */
