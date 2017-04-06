
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectorySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TrajectorySamplePlugin_1187602883_h
#define TrajectorySamplePlugin_1187602883_h

#include "TrajectorySample.h"

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

/**

 * SegmentType describes the type of segment that is being represented.

 */


/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
SegmentTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SegmentType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SegmentTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SegmentType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SegmentTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
SegmentTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SegmentTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SegmentTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SegmentType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
SegmentTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SegmentType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SegmentTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SegmentType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SegmentTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
SegmentTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SegmentType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
SegmentTypePluginSupport_print_data(
    const SegmentType *sample, const char *desc, int indent_level);


/**

 * SingleSegment holds the info for an "atomic" segment.

 *

 */


#define SingleSegmentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SingleSegmentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SingleSegmentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SingleSegmentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SingleSegmentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SingleSegment*
SingleSegmentPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SingleSegment*
SingleSegmentPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SingleSegment*
SingleSegmentPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SingleSegmentPluginSupport_copy_data(
    SingleSegment *out,
    const SingleSegment *in);

NDDSUSERDllExport extern void 
SingleSegmentPluginSupport_destroy_data_w_params(
    SingleSegment *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SingleSegmentPluginSupport_destroy_data_ex(
    SingleSegment *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SingleSegmentPluginSupport_destroy_data(
    SingleSegment *sample);

NDDSUSERDllExport extern void 
SingleSegmentPluginSupport_print_data(
    const SingleSegment *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SingleSegmentPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SingleSegmentPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SingleSegmentPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SingleSegmentPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SingleSegmentPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleSegment *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SingleSegmentPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleSegment *out,
    const SingleSegment *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SingleSegmentPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SingleSegment *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SingleSegmentPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleSegment *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SingleSegmentPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SingleSegment **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SingleSegmentPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SingleSegmentPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SingleSegmentPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SingleSegmentPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SingleSegment * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SingleSegmentPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SingleSegmentPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SingleSegmentPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SingleSegment *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SingleSegmentPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SingleSegment * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SingleSegmentPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SingleSegment ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SingleSegmentPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SingleSegment *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SingleSegmentPlugin_new(void);

NDDSUSERDllExport extern void
SingleSegmentPlugin_delete(struct PRESTypePlugin *);


#define SegmentSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SegmentSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SegmentSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SegmentSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SegmentSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SegmentSequence*
SegmentSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SegmentSequence*
SegmentSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SegmentSequence*
SegmentSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SegmentSequencePluginSupport_copy_data(
    SegmentSequence *out,
    const SegmentSequence *in);

NDDSUSERDllExport extern void 
SegmentSequencePluginSupport_destroy_data_w_params(
    SegmentSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SegmentSequencePluginSupport_destroy_data_ex(
    SegmentSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SegmentSequencePluginSupport_destroy_data(
    SegmentSequence *sample);

NDDSUSERDllExport extern void 
SegmentSequencePluginSupport_print_data(
    const SegmentSequence *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
SegmentSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SegmentSequence *out,
    const SegmentSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SegmentSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SegmentSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SegmentSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SegmentSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SegmentSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SegmentSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SegmentSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SegmentSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SegmentSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SegmentSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SegmentSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SegmentSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SegmentSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SegmentSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SegmentSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
SegmentSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SegmentSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


/**

 * TrajectorySample is a message that holds the current sequence of geometric trajectory segments that the robot plans to follow.

 * The receiver will need to convert this to whatever form they need to identify potential collisions or to render it in a GUI

 */

/* The type used to store keys for instances of type struct
 * TrajectorySample.
 *
 * By default, this type is struct TrajectorySample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TrajectorySample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TrajectorySample, the
 * following restriction applies: the key of struct
 * TrajectorySample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TrajectorySample.
*/
typedef  class TrajectorySample TrajectorySampleKeyHolder;


#define TrajectorySamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TrajectorySamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TrajectorySamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TrajectorySamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TrajectorySamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TrajectorySamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TrajectorySamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TrajectorySample*
TrajectorySamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TrajectorySample*
TrajectorySamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TrajectorySample*
TrajectorySamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePluginSupport_copy_data(
    TrajectorySample *out,
    const TrajectorySample *in);

NDDSUSERDllExport extern void 
TrajectorySamplePluginSupport_destroy_data_w_params(
    TrajectorySample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TrajectorySamplePluginSupport_destroy_data_ex(
    TrajectorySample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TrajectorySamplePluginSupport_destroy_data(
    TrajectorySample *sample);

NDDSUSERDllExport extern void 
TrajectorySamplePluginSupport_print_data(
    const TrajectorySample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TrajectorySample*
TrajectorySamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TrajectorySample*
TrajectorySamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TrajectorySamplePluginSupport_destroy_key_ex(
    TrajectorySampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TrajectorySamplePluginSupport_destroy_key(
    TrajectorySampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TrajectorySamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TrajectorySamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TrajectorySamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TrajectorySamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TrajectorySamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample *out,
    const TrajectorySample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TrajectorySample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TrajectorySamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TrajectorySamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TrajectorySamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TrajectorySamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TrajectorySample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TrajectorySamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TrajectorySamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TrajectorySample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TrajectorySamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySampleKeyHolder *key, 
    const TrajectorySample *instance);

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TrajectorySample *instance, 
    const TrajectorySampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TrajectorySample *instance);

NDDSUSERDllExport extern RTIBool 
TrajectorySamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TrajectorySamplePlugin_new(void);

NDDSUSERDllExport extern void
TrajectorySamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TrajectorySamplePlugin_1187602883_h */
