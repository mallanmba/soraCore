
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SystemInfoSamplePlugin_1849709991_h
#define SystemInfoSamplePlugin_1849709991_h

#include "SystemInfoSample.h"

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


#define BatteryInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatteryInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryInfoSample*
BatteryInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryInfoSample*
BatteryInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryInfoSample*
BatteryInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePluginSupport_copy_data(
    BatteryInfoSample *out,
    const BatteryInfoSample *in);

NDDSUSERDllExport extern void 
BatteryInfoSamplePluginSupport_destroy_data_w_params(
    BatteryInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryInfoSamplePluginSupport_destroy_data_ex(
    BatteryInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryInfoSamplePluginSupport_destroy_data(
    BatteryInfoSample *sample);

NDDSUSERDllExport extern void 
BatteryInfoSamplePluginSupport_print_data(
    const BatteryInfoSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BatteryInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BatteryInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BatteryInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BatteryInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
BatteryInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSample *out,
    const BatteryInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BatteryInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BatteryInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BatteryInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
BatteryInfoSamplePlugin_delete(struct PRESTypePlugin *);


#define BatteryInfoSampleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define BatteryInfoSampleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BatteryInfoSampleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define BatteryInfoSampleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BatteryInfoSampleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BatteryInfoSampleSequence*
BatteryInfoSampleSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern BatteryInfoSampleSequence*
BatteryInfoSampleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BatteryInfoSampleSequence*
BatteryInfoSampleSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSampleSequencePluginSupport_copy_data(
    BatteryInfoSampleSequence *out,
    const BatteryInfoSampleSequence *in);

NDDSUSERDllExport extern void 
BatteryInfoSampleSequencePluginSupport_destroy_data_w_params(
    BatteryInfoSampleSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
BatteryInfoSampleSequencePluginSupport_destroy_data_ex(
    BatteryInfoSampleSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BatteryInfoSampleSequencePluginSupport_destroy_data(
    BatteryInfoSampleSequence *sample);

NDDSUSERDllExport extern void 
BatteryInfoSampleSequencePluginSupport_print_data(
    const BatteryInfoSampleSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
BatteryInfoSampleSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSampleSequence *out,
    const BatteryInfoSampleSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BatteryInfoSampleSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSampleSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSampleSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BatteryInfoSampleSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BatteryInfoSampleSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BatteryInfoSampleSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BatteryInfoSampleSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BatteryInfoSampleSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BatteryInfoSampleSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BatteryInfoSampleSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSampleSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BatteryInfoSampleSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BatteryInfoSampleSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSampleSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
BatteryInfoSampleSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BatteryInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define CpuInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CpuInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CpuInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CpuInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CpuInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CpuInfoSample*
CpuInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CpuInfoSample*
CpuInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CpuInfoSample*
CpuInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePluginSupport_copy_data(
    CpuInfoSample *out,
    const CpuInfoSample *in);

NDDSUSERDllExport extern void 
CpuInfoSamplePluginSupport_destroy_data_w_params(
    CpuInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CpuInfoSamplePluginSupport_destroy_data_ex(
    CpuInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CpuInfoSamplePluginSupport_destroy_data(
    CpuInfoSample *sample);

NDDSUSERDllExport extern void 
CpuInfoSamplePluginSupport_print_data(
    const CpuInfoSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CpuInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CpuInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CpuInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CpuInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CpuInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSample *out,
    const CpuInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CpuInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CpuInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CpuInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CpuInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CpuInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CpuInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CpuInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CpuInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CpuInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CpuInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CpuInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CpuInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
CpuInfoSamplePlugin_delete(struct PRESTypePlugin *);


#define CpuInfoSampleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CpuInfoSampleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CpuInfoSampleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CpuInfoSampleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CpuInfoSampleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CpuInfoSampleSequence*
CpuInfoSampleSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CpuInfoSampleSequence*
CpuInfoSampleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CpuInfoSampleSequence*
CpuInfoSampleSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CpuInfoSampleSequencePluginSupport_copy_data(
    CpuInfoSampleSequence *out,
    const CpuInfoSampleSequence *in);

NDDSUSERDllExport extern void 
CpuInfoSampleSequencePluginSupport_destroy_data_w_params(
    CpuInfoSampleSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CpuInfoSampleSequencePluginSupport_destroy_data_ex(
    CpuInfoSampleSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CpuInfoSampleSequencePluginSupport_destroy_data(
    CpuInfoSampleSequence *sample);

NDDSUSERDllExport extern void 
CpuInfoSampleSequencePluginSupport_print_data(
    const CpuInfoSampleSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
CpuInfoSampleSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSampleSequence *out,
    const CpuInfoSampleSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CpuInfoSampleSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CpuInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CpuInfoSampleSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSampleSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CpuInfoSampleSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CpuInfoSampleSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CpuInfoSampleSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CpuInfoSampleSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CpuInfoSampleSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CpuInfoSampleSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CpuInfoSampleSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CpuInfoSampleSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CpuInfoSampleSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CpuInfoSampleSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSampleSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
CpuInfoSampleSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CpuInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FilesystemInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FilesystemInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FilesystemInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FilesystemInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FilesystemInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FilesystemInfoSample*
FilesystemInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FilesystemInfoSample*
FilesystemInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FilesystemInfoSample*
FilesystemInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePluginSupport_copy_data(
    FilesystemInfoSample *out,
    const FilesystemInfoSample *in);

NDDSUSERDllExport extern void 
FilesystemInfoSamplePluginSupport_destroy_data_w_params(
    FilesystemInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FilesystemInfoSamplePluginSupport_destroy_data_ex(
    FilesystemInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FilesystemInfoSamplePluginSupport_destroy_data(
    FilesystemInfoSample *sample);

NDDSUSERDllExport extern void 
FilesystemInfoSamplePluginSupport_print_data(
    const FilesystemInfoSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FilesystemInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FilesystemInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FilesystemInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FilesystemInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FilesystemInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSample *out,
    const FilesystemInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FilesystemInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FilesystemInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FilesystemInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FilesystemInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FilesystemInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FilesystemInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FilesystemInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
FilesystemInfoSamplePlugin_delete(struct PRESTypePlugin *);


#define FilesystemInfoSampleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FilesystemInfoSampleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FilesystemInfoSampleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FilesystemInfoSampleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FilesystemInfoSampleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FilesystemInfoSampleSequence*
FilesystemInfoSampleSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FilesystemInfoSampleSequence*
FilesystemInfoSampleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FilesystemInfoSampleSequence*
FilesystemInfoSampleSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSampleSequencePluginSupport_copy_data(
    FilesystemInfoSampleSequence *out,
    const FilesystemInfoSampleSequence *in);

NDDSUSERDllExport extern void 
FilesystemInfoSampleSequencePluginSupport_destroy_data_w_params(
    FilesystemInfoSampleSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FilesystemInfoSampleSequencePluginSupport_destroy_data_ex(
    FilesystemInfoSampleSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FilesystemInfoSampleSequencePluginSupport_destroy_data(
    FilesystemInfoSampleSequence *sample);

NDDSUSERDllExport extern void 
FilesystemInfoSampleSequencePluginSupport_print_data(
    const FilesystemInfoSampleSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSampleSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSampleSequence *out,
    const FilesystemInfoSampleSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSampleSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSampleSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSampleSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FilesystemInfoSampleSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoSampleSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoSampleSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FilesystemInfoSampleSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FilesystemInfoSampleSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FilesystemInfoSampleSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FilesystemInfoSampleSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSampleSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FilesystemInfoSampleSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FilesystemInfoSampleSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSampleSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FilesystemInfoSampleSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FilesystemInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define MemoryInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MemoryInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MemoryInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MemoryInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MemoryInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MemoryInfoSample*
MemoryInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MemoryInfoSample*
MemoryInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MemoryInfoSample*
MemoryInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePluginSupport_copy_data(
    MemoryInfoSample *out,
    const MemoryInfoSample *in);

NDDSUSERDllExport extern void 
MemoryInfoSamplePluginSupport_destroy_data_w_params(
    MemoryInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MemoryInfoSamplePluginSupport_destroy_data_ex(
    MemoryInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MemoryInfoSamplePluginSupport_destroy_data(
    MemoryInfoSample *sample);

NDDSUSERDllExport extern void 
MemoryInfoSamplePluginSupport_print_data(
    const MemoryInfoSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MemoryInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MemoryInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MemoryInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MemoryInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MemoryInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoSample *out,
    const MemoryInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MemoryInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MemoryInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MemoryInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MemoryInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MemoryInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MemoryInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MemoryInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MemoryInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MemoryInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MemoryInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MemoryInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MemoryInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MemoryInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
MemoryInfoSamplePlugin_delete(struct PRESTypePlugin *);


#define ThermalInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ThermalInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ThermalInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ThermalInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ThermalInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ThermalInfoSample*
ThermalInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ThermalInfoSample*
ThermalInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ThermalInfoSample*
ThermalInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePluginSupport_copy_data(
    ThermalInfoSample *out,
    const ThermalInfoSample *in);

NDDSUSERDllExport extern void 
ThermalInfoSamplePluginSupport_destroy_data_w_params(
    ThermalInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ThermalInfoSamplePluginSupport_destroy_data_ex(
    ThermalInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ThermalInfoSamplePluginSupport_destroy_data(
    ThermalInfoSample *sample);

NDDSUSERDllExport extern void 
ThermalInfoSamplePluginSupport_print_data(
    const ThermalInfoSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ThermalInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ThermalInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ThermalInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ThermalInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ThermalInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSample *out,
    const ThermalInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ThermalInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ThermalInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ThermalInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ThermalInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ThermalInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ThermalInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ThermalInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ThermalInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ThermalInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ThermalInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
ThermalInfoSamplePlugin_delete(struct PRESTypePlugin *);


#define ThermalInfoSampleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ThermalInfoSampleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ThermalInfoSampleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ThermalInfoSampleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ThermalInfoSampleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ThermalInfoSampleSequence*
ThermalInfoSampleSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ThermalInfoSampleSequence*
ThermalInfoSampleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ThermalInfoSampleSequence*
ThermalInfoSampleSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSampleSequencePluginSupport_copy_data(
    ThermalInfoSampleSequence *out,
    const ThermalInfoSampleSequence *in);

NDDSUSERDllExport extern void 
ThermalInfoSampleSequencePluginSupport_destroy_data_w_params(
    ThermalInfoSampleSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ThermalInfoSampleSequencePluginSupport_destroy_data_ex(
    ThermalInfoSampleSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ThermalInfoSampleSequencePluginSupport_destroy_data(
    ThermalInfoSampleSequence *sample);

NDDSUSERDllExport extern void 
ThermalInfoSampleSequencePluginSupport_print_data(
    const ThermalInfoSampleSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ThermalInfoSampleSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSampleSequence *out,
    const ThermalInfoSampleSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ThermalInfoSampleSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSampleSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSampleSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ThermalInfoSampleSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ThermalInfoSampleSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ThermalInfoSampleSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ThermalInfoSampleSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ThermalInfoSampleSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ThermalInfoSampleSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ThermalInfoSampleSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSampleSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ThermalInfoSampleSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ThermalInfoSampleSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSampleSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ThermalInfoSampleSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ThermalInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define NetTrafficInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NetTrafficInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NetTrafficInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NetTrafficInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NetTrafficInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NetTrafficInfoSample*
NetTrafficInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NetTrafficInfoSample*
NetTrafficInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NetTrafficInfoSample*
NetTrafficInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePluginSupport_copy_data(
    NetTrafficInfoSample *out,
    const NetTrafficInfoSample *in);

NDDSUSERDllExport extern void 
NetTrafficInfoSamplePluginSupport_destroy_data_w_params(
    NetTrafficInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NetTrafficInfoSamplePluginSupport_destroy_data_ex(
    NetTrafficInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NetTrafficInfoSamplePluginSupport_destroy_data(
    NetTrafficInfoSample *sample);

NDDSUSERDllExport extern void 
NetTrafficInfoSamplePluginSupport_print_data(
    const NetTrafficInfoSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NetTrafficInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NetTrafficInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NetTrafficInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NetTrafficInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NetTrafficInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSample *out,
    const NetTrafficInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NetTrafficInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NetTrafficInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NetTrafficInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NetTrafficInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NetTrafficInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NetTrafficInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
NetTrafficInfoSamplePlugin_delete(struct PRESTypePlugin *);


#define NetTrafficInfoSampleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NetTrafficInfoSampleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NetTrafficInfoSampleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NetTrafficInfoSampleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NetTrafficInfoSampleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NetTrafficInfoSampleSequence*
NetTrafficInfoSampleSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NetTrafficInfoSampleSequence*
NetTrafficInfoSampleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NetTrafficInfoSampleSequence*
NetTrafficInfoSampleSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSampleSequencePluginSupport_copy_data(
    NetTrafficInfoSampleSequence *out,
    const NetTrafficInfoSampleSequence *in);

NDDSUSERDllExport extern void 
NetTrafficInfoSampleSequencePluginSupport_destroy_data_w_params(
    NetTrafficInfoSampleSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NetTrafficInfoSampleSequencePluginSupport_destroy_data_ex(
    NetTrafficInfoSampleSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NetTrafficInfoSampleSequencePluginSupport_destroy_data(
    NetTrafficInfoSampleSequence *sample);

NDDSUSERDllExport extern void 
NetTrafficInfoSampleSequencePluginSupport_print_data(
    const NetTrafficInfoSampleSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSampleSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSampleSequence *out,
    const NetTrafficInfoSampleSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSampleSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSampleSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSampleSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NetTrafficInfoSampleSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoSampleSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoSampleSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NetTrafficInfoSampleSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NetTrafficInfoSampleSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NetTrafficInfoSampleSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NetTrafficInfoSampleSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSampleSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NetTrafficInfoSampleSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NetTrafficInfoSampleSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSampleSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NetTrafficInfoSampleSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NetTrafficInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define WifiInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define WifiInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define WifiInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define WifiInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define WifiInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern WifiInfoSample*
WifiInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern WifiInfoSample*
WifiInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern WifiInfoSample*
WifiInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePluginSupport_copy_data(
    WifiInfoSample *out,
    const WifiInfoSample *in);

NDDSUSERDllExport extern void 
WifiInfoSamplePluginSupport_destroy_data_w_params(
    WifiInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
WifiInfoSamplePluginSupport_destroy_data_ex(
    WifiInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
WifiInfoSamplePluginSupport_destroy_data(
    WifiInfoSample *sample);

NDDSUSERDllExport extern void 
WifiInfoSamplePluginSupport_print_data(
    const WifiInfoSample *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
WifiInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
WifiInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
WifiInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
WifiInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
WifiInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSample *out,
    const WifiInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
WifiInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
WifiInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
WifiInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
WifiInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WifiInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
WifiInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
WifiInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WifiInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
WifiInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
WifiInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
WifiInfoSamplePlugin_delete(struct PRESTypePlugin *);


#define WifiInfoSampleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define WifiInfoSampleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define WifiInfoSampleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define WifiInfoSampleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define WifiInfoSampleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern WifiInfoSampleSequence*
WifiInfoSampleSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern WifiInfoSampleSequence*
WifiInfoSampleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern WifiInfoSampleSequence*
WifiInfoSampleSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
WifiInfoSampleSequencePluginSupport_copy_data(
    WifiInfoSampleSequence *out,
    const WifiInfoSampleSequence *in);

NDDSUSERDllExport extern void 
WifiInfoSampleSequencePluginSupport_destroy_data_w_params(
    WifiInfoSampleSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
WifiInfoSampleSequencePluginSupport_destroy_data_ex(
    WifiInfoSampleSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
WifiInfoSampleSequencePluginSupport_destroy_data(
    WifiInfoSampleSequence *sample);

NDDSUSERDllExport extern void 
WifiInfoSampleSequencePluginSupport_print_data(
    const WifiInfoSampleSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
WifiInfoSampleSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSampleSequence *out,
    const WifiInfoSampleSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
WifiInfoSampleSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoSampleSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSampleSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
WifiInfoSampleSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
WifiInfoSampleSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
WifiInfoSampleSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
WifiInfoSampleSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WifiInfoSampleSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
WifiInfoSampleSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
WifiInfoSampleSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
WifiInfoSampleSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WifiInfoSampleSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WifiInfoSampleSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSampleSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
WifiInfoSampleSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WifiInfoSampleSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * SystemInfoSample.
 *
 * By default, this type is struct SystemInfoSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SystemInfoSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SystemInfoSample, the
 * following restriction applies: the key of struct
 * SystemInfoSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SystemInfoSample.
*/
typedef  class SystemInfoSample SystemInfoSampleKeyHolder;


#define SystemInfoSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SystemInfoSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SystemInfoSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SystemInfoSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SystemInfoSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SystemInfoSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SystemInfoSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SystemInfoSample*
SystemInfoSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SystemInfoSample*
SystemInfoSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SystemInfoSample*
SystemInfoSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePluginSupport_copy_data(
    SystemInfoSample *out,
    const SystemInfoSample *in);

NDDSUSERDllExport extern void 
SystemInfoSamplePluginSupport_destroy_data_w_params(
    SystemInfoSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SystemInfoSamplePluginSupport_destroy_data_ex(
    SystemInfoSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SystemInfoSamplePluginSupport_destroy_data(
    SystemInfoSample *sample);

NDDSUSERDllExport extern void 
SystemInfoSamplePluginSupport_print_data(
    const SystemInfoSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SystemInfoSample*
SystemInfoSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SystemInfoSample*
SystemInfoSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SystemInfoSamplePluginSupport_destroy_key_ex(
    SystemInfoSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SystemInfoSamplePluginSupport_destroy_key(
    SystemInfoSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SystemInfoSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SystemInfoSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SystemInfoSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SystemInfoSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SystemInfoSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample *out,
    const SystemInfoSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SystemInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SystemInfoSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SystemInfoSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SystemInfoSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SystemInfoSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SystemInfoSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SystemInfoSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SystemInfoSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SystemInfoSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SystemInfoSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSampleKeyHolder *key, 
    const SystemInfoSample *instance);

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SystemInfoSample *instance, 
    const SystemInfoSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SystemInfoSample *instance);

NDDSUSERDllExport extern RTIBool 
SystemInfoSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SystemInfoSamplePlugin_new(void);

NDDSUSERDllExport extern void
SystemInfoSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SystemInfoSamplePlugin_1849709991_h */
