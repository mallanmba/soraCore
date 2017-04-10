
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory2DSamplePlugin_1975814187_h
#define Trajectory2DSamplePlugin_1975814187_h

#include "Trajectory2DSample.h"

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


#define RTransMetaSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RTransMetaSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTransMetaSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define RTransMetaSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTransMetaSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTransMetaSequence*
RTransMetaSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTransMetaSequence*
RTransMetaSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTransMetaSequence*
RTransMetaSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTransMetaSequencePluginSupport_copy_data(
    RTransMetaSequence *out,
    const RTransMetaSequence *in);

NDDSUSERDllExport extern void 
RTransMetaSequencePluginSupport_destroy_data_w_params(
    RTransMetaSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTransMetaSequencePluginSupport_destroy_data_ex(
    RTransMetaSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTransMetaSequencePluginSupport_destroy_data(
    RTransMetaSequence *sample);

NDDSUSERDllExport extern void 
RTransMetaSequencePluginSupport_print_data(
    const RTransMetaSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
RTransMetaSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTransMetaSequence *out,
    const RTransMetaSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RTransMetaSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RTransMetaSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTransMetaSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTransMetaSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RTransMetaSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RTransMetaSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTransMetaSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RTransMetaSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RTransMetaSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTransMetaSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTransMetaSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTransMetaSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RTransMetaSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTransMetaSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTransMetaSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
RTransMetaSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTransMetaSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define RTrans2DMetaPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RTrans2DMetaPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTrans2DMetaPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define RTrans2DMetaPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTrans2DMetaPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTrans2DMeta*
RTrans2DMetaPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTrans2DMeta*
RTrans2DMetaPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTrans2DMeta*
RTrans2DMetaPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPluginSupport_copy_data(
    RTrans2DMeta *out,
    const RTrans2DMeta *in);

NDDSUSERDllExport extern void 
RTrans2DMetaPluginSupport_destroy_data_w_params(
    RTrans2DMeta *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTrans2DMetaPluginSupport_destroy_data_ex(
    RTrans2DMeta *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTrans2DMetaPluginSupport_destroy_data(
    RTrans2DMeta *sample);

NDDSUSERDllExport extern void 
RTrans2DMetaPluginSupport_print_data(
    const RTrans2DMeta *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RTrans2DMetaPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RTrans2DMetaPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
RTrans2DMetaPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RTrans2DMetaPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
RTrans2DMetaPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DMeta *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DMeta *out,
    const RTrans2DMeta *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RTrans2DMeta *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DMeta *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DMeta **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RTrans2DMetaPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RTrans2DMetaPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTrans2DMetaPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RTrans2DMetaPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RTrans2DMeta * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTrans2DMetaPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTrans2DMetaPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RTrans2DMeta *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DMeta * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RTrans2DMetaPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DMeta ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RTrans2DMetaPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DMeta *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RTrans2DMetaPlugin_new(void);

NDDSUSERDllExport extern void
RTrans2DMetaPlugin_delete(struct PRESTypePlugin *);


#define RTrans2DSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RTrans2DSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTrans2DSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define RTrans2DSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTrans2DSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTrans2DSequence*
RTrans2DSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTrans2DSequence*
RTrans2DSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTrans2DSequence*
RTrans2DSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTrans2DSequencePluginSupport_copy_data(
    RTrans2DSequence *out,
    const RTrans2DSequence *in);

NDDSUSERDllExport extern void 
RTrans2DSequencePluginSupport_destroy_data_w_params(
    RTrans2DSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTrans2DSequencePluginSupport_destroy_data_ex(
    RTrans2DSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTrans2DSequencePluginSupport_destroy_data(
    RTrans2DSequence *sample);

NDDSUSERDllExport extern void 
RTrans2DSequencePluginSupport_print_data(
    const RTrans2DSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
RTrans2DSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DSequence *out,
    const RTrans2DSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RTrans2DSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RTrans2DSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTrans2DSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RTrans2DSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RTrans2DSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTrans2DSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RTrans2DSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RTrans2DSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTrans2DSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTrans2DSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTrans2DSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RTrans2DSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTrans2DSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
RTrans2DSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTrans2DSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/* The type used to store keys for instances of type struct
 * Trajectory2DSample.
 *
 * By default, this type is struct Trajectory2DSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Trajectory2DSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Trajectory2DSample, the
 * following restriction applies: the key of struct
 * Trajectory2DSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Trajectory2DSample.
*/
typedef  class Trajectory2DSample Trajectory2DSampleKeyHolder;


#define Trajectory2DSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Trajectory2DSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Trajectory2DSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define Trajectory2DSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define Trajectory2DSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define Trajectory2DSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Trajectory2DSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Trajectory2DSample*
Trajectory2DSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Trajectory2DSample*
Trajectory2DSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Trajectory2DSample*
Trajectory2DSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePluginSupport_copy_data(
    Trajectory2DSample *out,
    const Trajectory2DSample *in);

NDDSUSERDllExport extern void 
Trajectory2DSamplePluginSupport_destroy_data_w_params(
    Trajectory2DSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Trajectory2DSamplePluginSupport_destroy_data_ex(
    Trajectory2DSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Trajectory2DSamplePluginSupport_destroy_data(
    Trajectory2DSample *sample);

NDDSUSERDllExport extern void 
Trajectory2DSamplePluginSupport_print_data(
    const Trajectory2DSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Trajectory2DSample*
Trajectory2DSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Trajectory2DSample*
Trajectory2DSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
Trajectory2DSamplePluginSupport_destroy_key_ex(
    Trajectory2DSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Trajectory2DSamplePluginSupport_destroy_key(
    Trajectory2DSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Trajectory2DSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Trajectory2DSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Trajectory2DSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Trajectory2DSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Trajectory2DSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample *out,
    const Trajectory2DSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Trajectory2DSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Trajectory2DSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Trajectory2DSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Trajectory2DSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Trajectory2DSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Trajectory2DSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Trajectory2DSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Trajectory2DSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Trajectory2DSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Trajectory2DSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSampleKeyHolder *key, 
    const Trajectory2DSample *instance);

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Trajectory2DSample *instance, 
    const Trajectory2DSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Trajectory2DSample *instance);

NDDSUSERDllExport extern RTIBool 
Trajectory2DSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Trajectory2DSamplePlugin_new(void);

NDDSUSERDllExport extern void
Trajectory2DSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* Trajectory2DSamplePlugin_1975814187_h */
