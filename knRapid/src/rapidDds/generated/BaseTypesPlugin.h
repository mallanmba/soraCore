
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BaseTypes.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BaseTypesPlugin_1127121220_h
#define BaseTypesPlugin_1127121220_h

#include "BaseTypes.h"



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


#define OctetSequence1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence1K*
OctetSequence1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence1K*
OctetSequence1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence1K*
OctetSequence1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence1KPluginSupport_copy_data(
    OctetSequence1K *out,
    const OctetSequence1K *in);

NDDSUSERDllExport extern void 
OctetSequence1KPluginSupport_destroy_data_w_params(
    OctetSequence1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence1KPluginSupport_destroy_data_ex(
    OctetSequence1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence1KPluginSupport_destroy_data(
    OctetSequence1K *sample);

NDDSUSERDllExport extern void 
OctetSequence1KPluginSupport_print_data(
    const OctetSequence1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence1K *out,
    const OctetSequence1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetSequence2KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence2KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence2KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence2KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence2KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence2K*
OctetSequence2KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence2K*
OctetSequence2KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence2K*
OctetSequence2KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence2KPluginSupport_copy_data(
    OctetSequence2K *out,
    const OctetSequence2K *in);

NDDSUSERDllExport extern void 
OctetSequence2KPluginSupport_destroy_data_w_params(
    OctetSequence2K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence2KPluginSupport_destroy_data_ex(
    OctetSequence2K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence2KPluginSupport_destroy_data(
    OctetSequence2K *sample);

NDDSUSERDllExport extern void 
OctetSequence2KPluginSupport_print_data(
    const OctetSequence2K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence2KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence2K *out,
    const OctetSequence2K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence2KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence2K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence2KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence2K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence2KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence2KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence2KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence2KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence2K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence2KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence2KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence2KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence2K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence2KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence2K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence2KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence2K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetSequence4KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence4KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence4KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence4KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence4KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence4K*
OctetSequence4KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence4K*
OctetSequence4KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence4K*
OctetSequence4KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence4KPluginSupport_copy_data(
    OctetSequence4K *out,
    const OctetSequence4K *in);

NDDSUSERDllExport extern void 
OctetSequence4KPluginSupport_destroy_data_w_params(
    OctetSequence4K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence4KPluginSupport_destroy_data_ex(
    OctetSequence4K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence4KPluginSupport_destroy_data(
    OctetSequence4K *sample);

NDDSUSERDllExport extern void 
OctetSequence4KPluginSupport_print_data(
    const OctetSequence4K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence4KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence4K *out,
    const OctetSequence4K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence4KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence4K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence4KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence4K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence4KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence4KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence4KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence4KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence4K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence4KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence4KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence4KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence4K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence4KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence4K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence4KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence4K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetSequence16KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence16KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence16KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence16KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence16KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence16K*
OctetSequence16KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence16K*
OctetSequence16KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence16K*
OctetSequence16KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence16KPluginSupport_copy_data(
    OctetSequence16K *out,
    const OctetSequence16K *in);

NDDSUSERDllExport extern void 
OctetSequence16KPluginSupport_destroy_data_w_params(
    OctetSequence16K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence16KPluginSupport_destroy_data_ex(
    OctetSequence16K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence16KPluginSupport_destroy_data(
    OctetSequence16K *sample);

NDDSUSERDllExport extern void 
OctetSequence16KPluginSupport_print_data(
    const OctetSequence16K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence16KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence16K *out,
    const OctetSequence16K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence16KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence16K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence16KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence16K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence16KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence16KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence16KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence16KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence16K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence16KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence16KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence16KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence16K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence16KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence16K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence16KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence16K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetSequence32KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence32KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence32KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence32KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence32KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence32K*
OctetSequence32KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence32K*
OctetSequence32KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence32K*
OctetSequence32KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence32KPluginSupport_copy_data(
    OctetSequence32K *out,
    const OctetSequence32K *in);

NDDSUSERDllExport extern void 
OctetSequence32KPluginSupport_destroy_data_w_params(
    OctetSequence32K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence32KPluginSupport_destroy_data_ex(
    OctetSequence32K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence32KPluginSupport_destroy_data(
    OctetSequence32K *sample);

NDDSUSERDllExport extern void 
OctetSequence32KPluginSupport_print_data(
    const OctetSequence32K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence32KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence32K *out,
    const OctetSequence32K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence32KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence32K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence32KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence32K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence32KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence32KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence32KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence32KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence32K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence32KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence32KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence32KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence32K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence32KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence32K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence32KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence32K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetSequence64KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence64KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence64KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence64KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence64KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence64K*
OctetSequence64KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence64K*
OctetSequence64KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence64K*
OctetSequence64KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence64KPluginSupport_copy_data(
    OctetSequence64K *out,
    const OctetSequence64K *in);

NDDSUSERDllExport extern void 
OctetSequence64KPluginSupport_destroy_data_w_params(
    OctetSequence64K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence64KPluginSupport_destroy_data_ex(
    OctetSequence64K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence64KPluginSupport_destroy_data(
    OctetSequence64K *sample);

NDDSUSERDllExport extern void 
OctetSequence64KPluginSupport_print_data(
    const OctetSequence64K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence64KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence64K *out,
    const OctetSequence64K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence64KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence64K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence64KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence64K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence64KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence64KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence64KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence64KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence64K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence64KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence64KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence64KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence64K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence64KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence64K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence64KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence64K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define OctetSequence128KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OctetSequence128KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OctetSequence128KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OctetSequence128KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OctetSequence128KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OctetSequence128K*
OctetSequence128KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OctetSequence128K*
OctetSequence128KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OctetSequence128K*
OctetSequence128KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OctetSequence128KPluginSupport_copy_data(
    OctetSequence128K *out,
    const OctetSequence128K *in);

NDDSUSERDllExport extern void 
OctetSequence128KPluginSupport_destroy_data_w_params(
    OctetSequence128K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OctetSequence128KPluginSupport_destroy_data_ex(
    OctetSequence128K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OctetSequence128KPluginSupport_destroy_data(
    OctetSequence128K *sample);

NDDSUSERDllExport extern void 
OctetSequence128KPluginSupport_print_data(
    const OctetSequence128K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
OctetSequence128KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence128K *out,
    const OctetSequence128K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OctetSequence128KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence128K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence128KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence128K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OctetSequence128KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OctetSequence128KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OctetSequence128KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OctetSequence128KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence128K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OctetSequence128KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OctetSequence128KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OctetSequence128KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence128K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OctetSequence128KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence128K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
OctetSequence128KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence128K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence32*
ShortSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence32*
ShortSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence32*
ShortSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence32PluginSupport_copy_data(
    ShortSequence32 *out,
    const ShortSequence32 *in);

NDDSUSERDllExport extern void 
ShortSequence32PluginSupport_destroy_data_w_params(
    ShortSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence32PluginSupport_destroy_data_ex(
    ShortSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence32PluginSupport_destroy_data(
    ShortSequence32 *sample);

NDDSUSERDllExport extern void 
ShortSequence32PluginSupport_print_data(
    const ShortSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32 *out,
    const ShortSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence64*
ShortSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence64*
ShortSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence64*
ShortSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence64PluginSupport_copy_data(
    ShortSequence64 *out,
    const ShortSequence64 *in);

NDDSUSERDllExport extern void 
ShortSequence64PluginSupport_destroy_data_w_params(
    ShortSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence64PluginSupport_destroy_data_ex(
    ShortSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence64PluginSupport_destroy_data(
    ShortSequence64 *sample);

NDDSUSERDllExport extern void 
ShortSequence64PluginSupport_print_data(
    const ShortSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64 *out,
    const ShortSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence128*
ShortSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence128*
ShortSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence128*
ShortSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence128PluginSupport_copy_data(
    ShortSequence128 *out,
    const ShortSequence128 *in);

NDDSUSERDllExport extern void 
ShortSequence128PluginSupport_destroy_data_w_params(
    ShortSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence128PluginSupport_destroy_data_ex(
    ShortSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence128PluginSupport_destroy_data(
    ShortSequence128 *sample);

NDDSUSERDllExport extern void 
ShortSequence128PluginSupport_print_data(
    const ShortSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128 *out,
    const ShortSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence1K*
ShortSequence1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence1K*
ShortSequence1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence1K*
ShortSequence1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence1KPluginSupport_copy_data(
    ShortSequence1K *out,
    const ShortSequence1K *in);

NDDSUSERDllExport extern void 
ShortSequence1KPluginSupport_destroy_data_w_params(
    ShortSequence1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence1KPluginSupport_destroy_data_ex(
    ShortSequence1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence1KPluginSupport_destroy_data(
    ShortSequence1K *sample);

NDDSUSERDllExport extern void 
ShortSequence1KPluginSupport_print_data(
    const ShortSequence1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence1K *out,
    const ShortSequence1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence2KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence2KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence2KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence2KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence2KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence2K*
ShortSequence2KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence2K*
ShortSequence2KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence2K*
ShortSequence2KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence2KPluginSupport_copy_data(
    ShortSequence2K *out,
    const ShortSequence2K *in);

NDDSUSERDllExport extern void 
ShortSequence2KPluginSupport_destroy_data_w_params(
    ShortSequence2K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence2KPluginSupport_destroy_data_ex(
    ShortSequence2K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence2KPluginSupport_destroy_data(
    ShortSequence2K *sample);

NDDSUSERDllExport extern void 
ShortSequence2KPluginSupport_print_data(
    const ShortSequence2K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence2KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence2K *out,
    const ShortSequence2K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence2KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence2K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence2KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence2K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence2KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence2KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence2KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence2KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence2K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence2KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence2KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence2KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence2K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence2KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence2K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence2KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence2K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence4KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence4KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence4KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence4KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence4KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence4K*
ShortSequence4KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence4K*
ShortSequence4KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence4K*
ShortSequence4KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence4KPluginSupport_copy_data(
    ShortSequence4K *out,
    const ShortSequence4K *in);

NDDSUSERDllExport extern void 
ShortSequence4KPluginSupport_destroy_data_w_params(
    ShortSequence4K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence4KPluginSupport_destroy_data_ex(
    ShortSequence4K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence4KPluginSupport_destroy_data(
    ShortSequence4K *sample);

NDDSUSERDllExport extern void 
ShortSequence4KPluginSupport_print_data(
    const ShortSequence4K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence4KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence4K *out,
    const ShortSequence4K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence4KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence4K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence4KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence4K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence4KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence4KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence4KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence4KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence4K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence4KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence4KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence4KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence4K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence4KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence4K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence4KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence4K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence32KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence32KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence32KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence32KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence32KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence32K*
ShortSequence32KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence32K*
ShortSequence32KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence32K*
ShortSequence32KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence32KPluginSupport_copy_data(
    ShortSequence32K *out,
    const ShortSequence32K *in);

NDDSUSERDllExport extern void 
ShortSequence32KPluginSupport_destroy_data_w_params(
    ShortSequence32K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence32KPluginSupport_destroy_data_ex(
    ShortSequence32K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence32KPluginSupport_destroy_data(
    ShortSequence32K *sample);

NDDSUSERDllExport extern void 
ShortSequence32KPluginSupport_print_data(
    const ShortSequence32K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence32KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32K *out,
    const ShortSequence32K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence32KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence32K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence32KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence32KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence32KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence32KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence32KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence32K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence32KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence32KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence32KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence32K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence32KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence32KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence32K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence64KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence64KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence64KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence64KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence64KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence64K*
ShortSequence64KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence64K*
ShortSequence64KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence64K*
ShortSequence64KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence64KPluginSupport_copy_data(
    ShortSequence64K *out,
    const ShortSequence64K *in);

NDDSUSERDllExport extern void 
ShortSequence64KPluginSupport_destroy_data_w_params(
    ShortSequence64K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence64KPluginSupport_destroy_data_ex(
    ShortSequence64K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence64KPluginSupport_destroy_data(
    ShortSequence64K *sample);

NDDSUSERDllExport extern void 
ShortSequence64KPluginSupport_print_data(
    const ShortSequence64K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence64KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64K *out,
    const ShortSequence64K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence64KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence64K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence64KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence64KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence64KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence64KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence64KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence64K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence64KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence64KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence64KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence64K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence64KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence64KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence64K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence96KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence96KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence96KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence96KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence96KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence96K*
ShortSequence96KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence96K*
ShortSequence96KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence96K*
ShortSequence96KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence96KPluginSupport_copy_data(
    ShortSequence96K *out,
    const ShortSequence96K *in);

NDDSUSERDllExport extern void 
ShortSequence96KPluginSupport_destroy_data_w_params(
    ShortSequence96K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence96KPluginSupport_destroy_data_ex(
    ShortSequence96K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence96KPluginSupport_destroy_data(
    ShortSequence96K *sample);

NDDSUSERDllExport extern void 
ShortSequence96KPluginSupport_print_data(
    const ShortSequence96K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence96KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence96K *out,
    const ShortSequence96K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence96KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence96K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence96KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence96K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence96KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence96KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence96KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence96KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence96K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence96KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence96KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence96KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence96K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence96KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence96K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence96KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence96K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ShortSequence128KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ShortSequence128KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ShortSequence128KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ShortSequence128KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ShortSequence128KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ShortSequence128K*
ShortSequence128KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ShortSequence128K*
ShortSequence128KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ShortSequence128K*
ShortSequence128KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ShortSequence128KPluginSupport_copy_data(
    ShortSequence128K *out,
    const ShortSequence128K *in);

NDDSUSERDllExport extern void 
ShortSequence128KPluginSupport_destroy_data_w_params(
    ShortSequence128K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ShortSequence128KPluginSupport_destroy_data_ex(
    ShortSequence128K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ShortSequence128KPluginSupport_destroy_data(
    ShortSequence128K *sample);

NDDSUSERDllExport extern void 
ShortSequence128KPluginSupport_print_data(
    const ShortSequence128K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ShortSequence128KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128K *out,
    const ShortSequence128K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ShortSequence128KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence128K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence128KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ShortSequence128KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ShortSequence128KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ShortSequence128KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ShortSequence128KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ShortSequence128K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ShortSequence128KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ShortSequence128KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ShortSequence128KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ShortSequence128K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ShortSequence128KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ShortSequence128KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ShortSequence128K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongSequence32*
LongSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongSequence32*
LongSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongSequence32*
LongSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongSequence32PluginSupport_copy_data(
    LongSequence32 *out,
    const LongSequence32 *in);

NDDSUSERDllExport extern void 
LongSequence32PluginSupport_destroy_data_w_params(
    LongSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongSequence32PluginSupport_destroy_data_ex(
    LongSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongSequence32PluginSupport_destroy_data(
    LongSequence32 *sample);

NDDSUSERDllExport extern void 
LongSequence32PluginSupport_print_data(
    const LongSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence32 *out,
    const LongSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongSequence64*
LongSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongSequence64*
LongSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongSequence64*
LongSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongSequence64PluginSupport_copy_data(
    LongSequence64 *out,
    const LongSequence64 *in);

NDDSUSERDllExport extern void 
LongSequence64PluginSupport_destroy_data_w_params(
    LongSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongSequence64PluginSupport_destroy_data_ex(
    LongSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongSequence64PluginSupport_destroy_data(
    LongSequence64 *sample);

NDDSUSERDllExport extern void 
LongSequence64PluginSupport_print_data(
    const LongSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence64 *out,
    const LongSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongSequence128*
LongSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongSequence128*
LongSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongSequence128*
LongSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongSequence128PluginSupport_copy_data(
    LongSequence128 *out,
    const LongSequence128 *in);

NDDSUSERDllExport extern void 
LongSequence128PluginSupport_destroy_data_w_params(
    LongSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongSequence128PluginSupport_destroy_data_ex(
    LongSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongSequence128PluginSupport_destroy_data(
    LongSequence128 *sample);

NDDSUSERDllExport extern void 
LongSequence128PluginSupport_print_data(
    const LongSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence128 *out,
    const LongSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongSequence256Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongSequence256Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongSequence256Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongSequence256Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongSequence256Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongSequence256*
LongSequence256PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongSequence256*
LongSequence256PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongSequence256*
LongSequence256PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongSequence256PluginSupport_copy_data(
    LongSequence256 *out,
    const LongSequence256 *in);

NDDSUSERDllExport extern void 
LongSequence256PluginSupport_destroy_data_w_params(
    LongSequence256 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongSequence256PluginSupport_destroy_data_ex(
    LongSequence256 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongSequence256PluginSupport_destroy_data(
    LongSequence256 *sample);

NDDSUSERDllExport extern void 
LongSequence256PluginSupport_print_data(
    const LongSequence256 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongSequence256Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence256 *out,
    const LongSequence256 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongSequence256Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence256 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence256Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence256 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongSequence256Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongSequence256Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongSequence256Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongSequence256Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongSequence256 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongSequence256Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongSequence256Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongSequence256Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence256 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence256Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence256 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongSequence256Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence256 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongSequence512Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongSequence512Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongSequence512Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongSequence512Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongSequence512Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongSequence512*
LongSequence512PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongSequence512*
LongSequence512PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongSequence512*
LongSequence512PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongSequence512PluginSupport_copy_data(
    LongSequence512 *out,
    const LongSequence512 *in);

NDDSUSERDllExport extern void 
LongSequence512PluginSupport_destroy_data_w_params(
    LongSequence512 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongSequence512PluginSupport_destroy_data_ex(
    LongSequence512 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongSequence512PluginSupport_destroy_data(
    LongSequence512 *sample);

NDDSUSERDllExport extern void 
LongSequence512PluginSupport_print_data(
    const LongSequence512 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongSequence512Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence512 *out,
    const LongSequence512 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongSequence512Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence512 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence512Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence512 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongSequence512Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongSequence512Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongSequence512Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongSequence512Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongSequence512 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongSequence512Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongSequence512Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongSequence512Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence512 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence512Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence512 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongSequence512Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence512 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongSequence1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongSequence1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongSequence1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongSequence1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongSequence1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongSequence1K*
LongSequence1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongSequence1K*
LongSequence1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongSequence1K*
LongSequence1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongSequence1KPluginSupport_copy_data(
    LongSequence1K *out,
    const LongSequence1K *in);

NDDSUSERDllExport extern void 
LongSequence1KPluginSupport_destroy_data_w_params(
    LongSequence1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongSequence1KPluginSupport_destroy_data_ex(
    LongSequence1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongSequence1KPluginSupport_destroy_data(
    LongSequence1K *sample);

NDDSUSERDllExport extern void 
LongSequence1KPluginSupport_print_data(
    const LongSequence1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongSequence1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence1K *out,
    const LongSequence1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongSequence1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongSequence1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongSequence1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongSequence1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongSequence1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongSequence1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongSequence1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongSequence1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongSequence1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongSequence1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongSequence2KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongSequence2KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongSequence2KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongSequence2KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongSequence2KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongSequence2K*
LongSequence2KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongSequence2K*
LongSequence2KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongSequence2K*
LongSequence2KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongSequence2KPluginSupport_copy_data(
    LongSequence2K *out,
    const LongSequence2K *in);

NDDSUSERDllExport extern void 
LongSequence2KPluginSupport_destroy_data_w_params(
    LongSequence2K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongSequence2KPluginSupport_destroy_data_ex(
    LongSequence2K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongSequence2KPluginSupport_destroy_data(
    LongSequence2K *sample);

NDDSUSERDllExport extern void 
LongSequence2KPluginSupport_print_data(
    const LongSequence2K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongSequence2KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence2K *out,
    const LongSequence2K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongSequence2KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence2K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence2KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence2K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongSequence2KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongSequence2KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongSequence2KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongSequence2KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongSequence2K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongSequence2KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongSequence2KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongSequence2KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongSequence2K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongSequence2KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence2K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongSequence2KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongSequence2K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongLongSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongLongSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongLongSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongLongSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongLongSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongLongSequence32*
LongLongSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongLongSequence32*
LongLongSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongLongSequence32*
LongLongSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongLongSequence32PluginSupport_copy_data(
    LongLongSequence32 *out,
    const LongLongSequence32 *in);

NDDSUSERDllExport extern void 
LongLongSequence32PluginSupport_destroy_data_w_params(
    LongLongSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongLongSequence32PluginSupport_destroy_data_ex(
    LongLongSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongLongSequence32PluginSupport_destroy_data(
    LongLongSequence32 *sample);

NDDSUSERDllExport extern void 
LongLongSequence32PluginSupport_print_data(
    const LongLongSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongLongSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence32 *out,
    const LongLongSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongLongSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongLongSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongLongSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongLongSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongLongSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongLongSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongLongSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongLongSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongLongSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongLongSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongLongSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongLongSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongLongSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongLongSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongLongSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongLongSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongLongSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongLongSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongLongSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongLongSequence64*
LongLongSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongLongSequence64*
LongLongSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongLongSequence64*
LongLongSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongLongSequence64PluginSupport_copy_data(
    LongLongSequence64 *out,
    const LongLongSequence64 *in);

NDDSUSERDllExport extern void 
LongLongSequence64PluginSupport_destroy_data_w_params(
    LongLongSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongLongSequence64PluginSupport_destroy_data_ex(
    LongLongSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongLongSequence64PluginSupport_destroy_data(
    LongLongSequence64 *sample);

NDDSUSERDllExport extern void 
LongLongSequence64PluginSupport_print_data(
    const LongLongSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongLongSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence64 *out,
    const LongLongSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongLongSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongLongSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongLongSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongLongSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongLongSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongLongSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongLongSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongLongSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongLongSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongLongSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongLongSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongLongSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongLongSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongLongSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define LongLongSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define LongLongSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define LongLongSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define LongLongSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define LongLongSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern LongLongSequence128*
LongLongSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern LongLongSequence128*
LongLongSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern LongLongSequence128*
LongLongSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
LongLongSequence128PluginSupport_copy_data(
    LongLongSequence128 *out,
    const LongLongSequence128 *in);

NDDSUSERDllExport extern void 
LongLongSequence128PluginSupport_destroy_data_w_params(
    LongLongSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
LongLongSequence128PluginSupport_destroy_data_ex(
    LongLongSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
LongLongSequence128PluginSupport_destroy_data(
    LongLongSequence128 *sample);

NDDSUSERDllExport extern void 
LongLongSequence128PluginSupport_print_data(
    const LongLongSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
LongLongSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence128 *out,
    const LongLongSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
LongLongSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const LongLongSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongLongSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
LongLongSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
LongLongSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
LongLongSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
LongLongSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const LongLongSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
LongLongSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
LongLongSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
LongLongSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const LongLongSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
LongLongSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
LongLongSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    LongLongSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FloatSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatSequence32*
FloatSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatSequence32*
FloatSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatSequence32*
FloatSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatSequence32PluginSupport_copy_data(
    FloatSequence32 *out,
    const FloatSequence32 *in);

NDDSUSERDllExport extern void 
FloatSequence32PluginSupport_destroy_data_w_params(
    FloatSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatSequence32PluginSupport_destroy_data_ex(
    FloatSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatSequence32PluginSupport_destroy_data(
    FloatSequence32 *sample);

NDDSUSERDllExport extern void 
FloatSequence32PluginSupport_print_data(
    const FloatSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FloatSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence32 *out,
    const FloatSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FloatSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FloatSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatSequence64*
FloatSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatSequence64*
FloatSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatSequence64*
FloatSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatSequence64PluginSupport_copy_data(
    FloatSequence64 *out,
    const FloatSequence64 *in);

NDDSUSERDllExport extern void 
FloatSequence64PluginSupport_destroy_data_w_params(
    FloatSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatSequence64PluginSupport_destroy_data_ex(
    FloatSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatSequence64PluginSupport_destroy_data(
    FloatSequence64 *sample);

NDDSUSERDllExport extern void 
FloatSequence64PluginSupport_print_data(
    const FloatSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FloatSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence64 *out,
    const FloatSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FloatSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FloatSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatSequence128*
FloatSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatSequence128*
FloatSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatSequence128*
FloatSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatSequence128PluginSupport_copy_data(
    FloatSequence128 *out,
    const FloatSequence128 *in);

NDDSUSERDllExport extern void 
FloatSequence128PluginSupport_destroy_data_w_params(
    FloatSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatSequence128PluginSupport_destroy_data_ex(
    FloatSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatSequence128PluginSupport_destroy_data(
    FloatSequence128 *sample);

NDDSUSERDllExport extern void 
FloatSequence128PluginSupport_print_data(
    const FloatSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FloatSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence128 *out,
    const FloatSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FloatSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FloatSequence256Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatSequence256Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatSequence256Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatSequence256Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatSequence256Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatSequence256*
FloatSequence256PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatSequence256*
FloatSequence256PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatSequence256*
FloatSequence256PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatSequence256PluginSupport_copy_data(
    FloatSequence256 *out,
    const FloatSequence256 *in);

NDDSUSERDllExport extern void 
FloatSequence256PluginSupport_destroy_data_w_params(
    FloatSequence256 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatSequence256PluginSupport_destroy_data_ex(
    FloatSequence256 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatSequence256PluginSupport_destroy_data(
    FloatSequence256 *sample);

NDDSUSERDllExport extern void 
FloatSequence256PluginSupport_print_data(
    const FloatSequence256 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FloatSequence256Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence256 *out,
    const FloatSequence256 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatSequence256Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence256 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence256Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence256 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatSequence256Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatSequence256Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatSequence256Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatSequence256Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatSequence256 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatSequence256Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatSequence256Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatSequence256Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence256 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence256Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence256 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FloatSequence256Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence256 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FloatSequence512Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatSequence512Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatSequence512Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatSequence512Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatSequence512Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatSequence512*
FloatSequence512PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatSequence512*
FloatSequence512PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatSequence512*
FloatSequence512PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatSequence512PluginSupport_copy_data(
    FloatSequence512 *out,
    const FloatSequence512 *in);

NDDSUSERDllExport extern void 
FloatSequence512PluginSupport_destroy_data_w_params(
    FloatSequence512 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatSequence512PluginSupport_destroy_data_ex(
    FloatSequence512 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatSequence512PluginSupport_destroy_data(
    FloatSequence512 *sample);

NDDSUSERDllExport extern void 
FloatSequence512PluginSupport_print_data(
    const FloatSequence512 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FloatSequence512Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence512 *out,
    const FloatSequence512 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatSequence512Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence512 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence512Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence512 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatSequence512Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatSequence512Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatSequence512Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatSequence512Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatSequence512 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatSequence512Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatSequence512Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatSequence512Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence512 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence512Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence512 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FloatSequence512Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence512 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FloatSequence1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatSequence1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatSequence1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatSequence1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatSequence1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatSequence1K*
FloatSequence1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatSequence1K*
FloatSequence1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatSequence1K*
FloatSequence1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatSequence1KPluginSupport_copy_data(
    FloatSequence1K *out,
    const FloatSequence1K *in);

NDDSUSERDllExport extern void 
FloatSequence1KPluginSupport_destroy_data_w_params(
    FloatSequence1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatSequence1KPluginSupport_destroy_data_ex(
    FloatSequence1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatSequence1KPluginSupport_destroy_data(
    FloatSequence1K *sample);

NDDSUSERDllExport extern void 
FloatSequence1KPluginSupport_print_data(
    const FloatSequence1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
FloatSequence1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence1K *out,
    const FloatSequence1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatSequence1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatSequence1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatSequence1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatSequence1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatSequence1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatSequence1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatSequence1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatSequence1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatSequence1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatSequence1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatSequence1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FloatSequence1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define DoubleSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DoubleSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoubleSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DoubleSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoubleSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoubleSequence32*
DoubleSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoubleSequence32*
DoubleSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoubleSequence32*
DoubleSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoubleSequence32PluginSupport_copy_data(
    DoubleSequence32 *out,
    const DoubleSequence32 *in);

NDDSUSERDllExport extern void 
DoubleSequence32PluginSupport_destroy_data_w_params(
    DoubleSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoubleSequence32PluginSupport_destroy_data_ex(
    DoubleSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoubleSequence32PluginSupport_destroy_data(
    DoubleSequence32 *sample);

NDDSUSERDllExport extern void 
DoubleSequence32PluginSupport_print_data(
    const DoubleSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DoubleSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence32 *out,
    const DoubleSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DoubleSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DoubleSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DoubleSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoubleSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DoubleSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DoubleSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoubleSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoubleSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoubleSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DoubleSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define DoubleSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DoubleSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoubleSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DoubleSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoubleSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoubleSequence64*
DoubleSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoubleSequence64*
DoubleSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoubleSequence64*
DoubleSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoubleSequence64PluginSupport_copy_data(
    DoubleSequence64 *out,
    const DoubleSequence64 *in);

NDDSUSERDllExport extern void 
DoubleSequence64PluginSupport_destroy_data_w_params(
    DoubleSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoubleSequence64PluginSupport_destroy_data_ex(
    DoubleSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoubleSequence64PluginSupport_destroy_data(
    DoubleSequence64 *sample);

NDDSUSERDllExport extern void 
DoubleSequence64PluginSupport_print_data(
    const DoubleSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DoubleSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence64 *out,
    const DoubleSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DoubleSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DoubleSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DoubleSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoubleSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DoubleSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DoubleSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoubleSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoubleSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoubleSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DoubleSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define DoubleSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DoubleSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoubleSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DoubleSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoubleSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoubleSequence128*
DoubleSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoubleSequence128*
DoubleSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoubleSequence128*
DoubleSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoubleSequence128PluginSupport_copy_data(
    DoubleSequence128 *out,
    const DoubleSequence128 *in);

NDDSUSERDllExport extern void 
DoubleSequence128PluginSupport_destroy_data_w_params(
    DoubleSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoubleSequence128PluginSupport_destroy_data_ex(
    DoubleSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoubleSequence128PluginSupport_destroy_data(
    DoubleSequence128 *sample);

NDDSUSERDllExport extern void 
DoubleSequence128PluginSupport_print_data(
    const DoubleSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DoubleSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence128 *out,
    const DoubleSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DoubleSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DoubleSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DoubleSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoubleSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DoubleSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DoubleSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoubleSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoubleSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoubleSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DoubleSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define DoubleSequence256Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DoubleSequence256Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoubleSequence256Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DoubleSequence256Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoubleSequence256Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoubleSequence256*
DoubleSequence256PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoubleSequence256*
DoubleSequence256PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoubleSequence256*
DoubleSequence256PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoubleSequence256PluginSupport_copy_data(
    DoubleSequence256 *out,
    const DoubleSequence256 *in);

NDDSUSERDllExport extern void 
DoubleSequence256PluginSupport_destroy_data_w_params(
    DoubleSequence256 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoubleSequence256PluginSupport_destroy_data_ex(
    DoubleSequence256 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoubleSequence256PluginSupport_destroy_data(
    DoubleSequence256 *sample);

NDDSUSERDllExport extern void 
DoubleSequence256PluginSupport_print_data(
    const DoubleSequence256 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DoubleSequence256Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence256 *out,
    const DoubleSequence256 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DoubleSequence256Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence256 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence256Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence256 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DoubleSequence256Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DoubleSequence256Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoubleSequence256Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DoubleSequence256Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DoubleSequence256 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoubleSequence256Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoubleSequence256Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoubleSequence256Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence256 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence256Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence256 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DoubleSequence256Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence256 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define DoubleSequence512Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DoubleSequence512Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoubleSequence512Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DoubleSequence512Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoubleSequence512Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoubleSequence512*
DoubleSequence512PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoubleSequence512*
DoubleSequence512PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoubleSequence512*
DoubleSequence512PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoubleSequence512PluginSupport_copy_data(
    DoubleSequence512 *out,
    const DoubleSequence512 *in);

NDDSUSERDllExport extern void 
DoubleSequence512PluginSupport_destroy_data_w_params(
    DoubleSequence512 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoubleSequence512PluginSupport_destroy_data_ex(
    DoubleSequence512 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoubleSequence512PluginSupport_destroy_data(
    DoubleSequence512 *sample);

NDDSUSERDllExport extern void 
DoubleSequence512PluginSupport_print_data(
    const DoubleSequence512 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DoubleSequence512Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence512 *out,
    const DoubleSequence512 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DoubleSequence512Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence512 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence512Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence512 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DoubleSequence512Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DoubleSequence512Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoubleSequence512Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DoubleSequence512Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DoubleSequence512 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoubleSequence512Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoubleSequence512Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoubleSequence512Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence512 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence512Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence512 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DoubleSequence512Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence512 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define DoubleSequence1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DoubleSequence1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DoubleSequence1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DoubleSequence1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DoubleSequence1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DoubleSequence1K*
DoubleSequence1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DoubleSequence1K*
DoubleSequence1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DoubleSequence1K*
DoubleSequence1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DoubleSequence1KPluginSupport_copy_data(
    DoubleSequence1K *out,
    const DoubleSequence1K *in);

NDDSUSERDllExport extern void 
DoubleSequence1KPluginSupport_destroy_data_w_params(
    DoubleSequence1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DoubleSequence1KPluginSupport_destroy_data_ex(
    DoubleSequence1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DoubleSequence1KPluginSupport_destroy_data(
    DoubleSequence1K *sample);

NDDSUSERDllExport extern void 
DoubleSequence1KPluginSupport_print_data(
    const DoubleSequence1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
DoubleSequence1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence1K *out,
    const DoubleSequence1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DoubleSequence1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DoubleSequence1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DoubleSequence1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DoubleSequence1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DoubleSequence1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DoubleSequence1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DoubleSequence1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DoubleSequence1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DoubleSequence1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DoubleSequence1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DoubleSequence1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DoubleSequence1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DoubleSequence1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String16*
String16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String16*
String16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String16*
String16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String16PluginSupport_copy_data(
    String16 *out,
    const String16 *in);

NDDSUSERDllExport extern void 
String16PluginSupport_destroy_data_w_params(
    String16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String16PluginSupport_destroy_data_ex(
    String16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String16PluginSupport_destroy_data(
    String16 *sample);

NDDSUSERDllExport extern void 
String16PluginSupport_print_data(
    const String16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16 *out,
    const String16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String32*
String32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String32*
String32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String32*
String32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String32PluginSupport_copy_data(
    String32 *out,
    const String32 *in);

NDDSUSERDllExport extern void 
String32PluginSupport_destroy_data_w_params(
    String32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String32PluginSupport_destroy_data_ex(
    String32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String32PluginSupport_destroy_data(
    String32 *sample);

NDDSUSERDllExport extern void 
String32PluginSupport_print_data(
    const String32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32 *out,
    const String32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String64*
String64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String64*
String64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String64*
String64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String64PluginSupport_copy_data(
    String64 *out,
    const String64 *in);

NDDSUSERDllExport extern void 
String64PluginSupport_destroy_data_w_params(
    String64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String64PluginSupport_destroy_data_ex(
    String64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String64PluginSupport_destroy_data(
    String64 *sample);

NDDSUSERDllExport extern void 
String64PluginSupport_print_data(
    const String64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String64 *out,
    const String64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String128*
String128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String128*
String128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String128*
String128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String128PluginSupport_copy_data(
    String128 *out,
    const String128 *in);

NDDSUSERDllExport extern void 
String128PluginSupport_destroy_data_w_params(
    String128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String128PluginSupport_destroy_data_ex(
    String128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String128PluginSupport_destroy_data(
    String128 *sample);

NDDSUSERDllExport extern void 
String128PluginSupport_print_data(
    const String128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128 *out,
    const String128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String256Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String256Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String256Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String256Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String256Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String256*
String256PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String256*
String256PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String256*
String256PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String256PluginSupport_copy_data(
    String256 *out,
    const String256 *in);

NDDSUSERDllExport extern void 
String256PluginSupport_destroy_data_w_params(
    String256 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String256PluginSupport_destroy_data_ex(
    String256 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String256PluginSupport_destroy_data(
    String256 *sample);

NDDSUSERDllExport extern void 
String256PluginSupport_print_data(
    const String256 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String256Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String256 *out,
    const String256 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String256Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String256 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String256Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String256 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String256Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String256Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String256Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String256Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String256 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String256Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String256Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String256Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String256 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String256Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String256 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String256Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String256 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String1KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String1KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String1KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String1KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String1KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String1K*
String1KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String1K*
String1KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String1K*
String1KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String1KPluginSupport_copy_data(
    String1K *out,
    const String1K *in);

NDDSUSERDllExport extern void 
String1KPluginSupport_destroy_data_w_params(
    String1K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String1KPluginSupport_destroy_data_ex(
    String1K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String1KPluginSupport_destroy_data(
    String1K *sample);

NDDSUSERDllExport extern void 
String1KPluginSupport_print_data(
    const String1K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String1KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String1K *out,
    const String1K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String1KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String1K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String1KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String1K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String1KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String1KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String1KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String1KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String1K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String1KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String1KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String1KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String1K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String1KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String1K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String1KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String1K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String2KPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String2KPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String2KPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String2KPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String2KPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String2K*
String2KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String2K*
String2KPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String2K*
String2KPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String2KPluginSupport_copy_data(
    String2K *out,
    const String2K *in);

NDDSUSERDllExport extern void 
String2KPluginSupport_destroy_data_w_params(
    String2K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String2KPluginSupport_destroy_data_ex(
    String2K *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String2KPluginSupport_destroy_data(
    String2K *sample);

NDDSUSERDllExport extern void 
String2KPluginSupport_print_data(
    const String2K *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String2KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String2K *out,
    const String2K *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String2KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String2K *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String2KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String2K *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String2KPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String2KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String2KPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String2KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String2K * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String2KPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String2KPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String2KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String2K *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String2KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String2K * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String2KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String2K *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String16Sequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String16Sequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String16Sequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String16Sequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String16Sequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String16Sequence16*
String16Sequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String16Sequence16*
String16Sequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String16Sequence16*
String16Sequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String16Sequence16PluginSupport_copy_data(
    String16Sequence16 *out,
    const String16Sequence16 *in);

NDDSUSERDllExport extern void 
String16Sequence16PluginSupport_destroy_data_w_params(
    String16Sequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String16Sequence16PluginSupport_destroy_data_ex(
    String16Sequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String16Sequence16PluginSupport_destroy_data(
    String16Sequence16 *sample);

NDDSUSERDllExport extern void 
String16Sequence16PluginSupport_print_data(
    const String16Sequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String16Sequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence16 *out,
    const String16Sequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String16Sequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String16Sequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String16Sequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String16Sequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String16Sequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String16Sequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String16Sequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String16Sequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String16Sequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String16Sequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String16Sequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String16Sequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String16Sequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String16Sequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String32Sequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String32Sequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String32Sequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String32Sequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String32Sequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String32Sequence16*
String32Sequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String32Sequence16*
String32Sequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String32Sequence16*
String32Sequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String32Sequence16PluginSupport_copy_data(
    String32Sequence16 *out,
    const String32Sequence16 *in);

NDDSUSERDllExport extern void 
String32Sequence16PluginSupport_destroy_data_w_params(
    String32Sequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String32Sequence16PluginSupport_destroy_data_ex(
    String32Sequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String32Sequence16PluginSupport_destroy_data(
    String32Sequence16 *sample);

NDDSUSERDllExport extern void 
String32Sequence16PluginSupport_print_data(
    const String32Sequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String32Sequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence16 *out,
    const String32Sequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String32Sequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String32Sequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Sequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String32Sequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String32Sequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String32Sequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String32Sequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String32Sequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String32Sequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String32Sequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String32Sequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String32Sequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Sequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String32Sequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String128Sequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String128Sequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String128Sequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String128Sequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String128Sequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String128Sequence16*
String128Sequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String128Sequence16*
String128Sequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String128Sequence16*
String128Sequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String128Sequence16PluginSupport_copy_data(
    String128Sequence16 *out,
    const String128Sequence16 *in);

NDDSUSERDllExport extern void 
String128Sequence16PluginSupport_destroy_data_w_params(
    String128Sequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String128Sequence16PluginSupport_destroy_data_ex(
    String128Sequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String128Sequence16PluginSupport_destroy_data(
    String128Sequence16 *sample);

NDDSUSERDllExport extern void 
String128Sequence16PluginSupport_print_data(
    const String128Sequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String128Sequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence16 *out,
    const String128Sequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String128Sequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String128Sequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Sequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String128Sequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String128Sequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String128Sequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String128Sequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String128Sequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String128Sequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String128Sequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String128Sequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String128Sequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Sequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String128Sequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String16Sequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String16Sequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String16Sequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String16Sequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String16Sequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String16Sequence32*
String16Sequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String16Sequence32*
String16Sequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String16Sequence32*
String16Sequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String16Sequence32PluginSupport_copy_data(
    String16Sequence32 *out,
    const String16Sequence32 *in);

NDDSUSERDllExport extern void 
String16Sequence32PluginSupport_destroy_data_w_params(
    String16Sequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String16Sequence32PluginSupport_destroy_data_ex(
    String16Sequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String16Sequence32PluginSupport_destroy_data(
    String16Sequence32 *sample);

NDDSUSERDllExport extern void 
String16Sequence32PluginSupport_print_data(
    const String16Sequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String16Sequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence32 *out,
    const String16Sequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String16Sequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String16Sequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String16Sequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String16Sequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String16Sequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String16Sequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String16Sequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String16Sequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String16Sequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String16Sequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String16Sequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String16Sequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String16Sequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String16Sequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String16Sequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String32Sequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String32Sequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String32Sequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String32Sequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String32Sequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String32Sequence32*
String32Sequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String32Sequence32*
String32Sequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String32Sequence32*
String32Sequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String32Sequence32PluginSupport_copy_data(
    String32Sequence32 *out,
    const String32Sequence32 *in);

NDDSUSERDllExport extern void 
String32Sequence32PluginSupport_destroy_data_w_params(
    String32Sequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String32Sequence32PluginSupport_destroy_data_ex(
    String32Sequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String32Sequence32PluginSupport_destroy_data(
    String32Sequence32 *sample);

NDDSUSERDllExport extern void 
String32Sequence32PluginSupport_print_data(
    const String32Sequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String32Sequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence32 *out,
    const String32Sequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String32Sequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String32Sequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Sequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String32Sequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String32Sequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String32Sequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String32Sequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String32Sequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String32Sequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String32Sequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String32Sequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String32Sequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Sequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String32Sequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String128Sequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String128Sequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String128Sequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String128Sequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String128Sequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String128Sequence32*
String128Sequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String128Sequence32*
String128Sequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String128Sequence32*
String128Sequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String128Sequence32PluginSupport_copy_data(
    String128Sequence32 *out,
    const String128Sequence32 *in);

NDDSUSERDllExport extern void 
String128Sequence32PluginSupport_destroy_data_w_params(
    String128Sequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String128Sequence32PluginSupport_destroy_data_ex(
    String128Sequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String128Sequence32PluginSupport_destroy_data(
    String128Sequence32 *sample);

NDDSUSERDllExport extern void 
String128Sequence32PluginSupport_print_data(
    const String128Sequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String128Sequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence32 *out,
    const String128Sequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String128Sequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String128Sequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Sequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String128Sequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String128Sequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String128Sequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String128Sequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String128Sequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String128Sequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String128Sequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String128Sequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String128Sequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Sequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String128Sequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String128Sequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String128Sequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String128Sequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String128Sequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String128Sequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String128Sequence64*
String128Sequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String128Sequence64*
String128Sequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String128Sequence64*
String128Sequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String128Sequence64PluginSupport_copy_data(
    String128Sequence64 *out,
    const String128Sequence64 *in);

NDDSUSERDllExport extern void 
String128Sequence64PluginSupport_destroy_data_w_params(
    String128Sequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String128Sequence64PluginSupport_destroy_data_ex(
    String128Sequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String128Sequence64PluginSupport_destroy_data(
    String128Sequence64 *sample);

NDDSUSERDllExport extern void 
String128Sequence64PluginSupport_print_data(
    const String128Sequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String128Sequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence64 *out,
    const String128Sequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String128Sequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String128Sequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Sequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String128Sequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String128Sequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String128Sequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String128Sequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String128Sequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String128Sequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String128Sequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String128Sequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String128Sequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String128Sequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String128Sequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String128Sequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String256Sequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String256Sequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String256Sequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String256Sequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String256Sequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String256Sequence64*
String256Sequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String256Sequence64*
String256Sequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String256Sequence64*
String256Sequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String256Sequence64PluginSupport_copy_data(
    String256Sequence64 *out,
    const String256Sequence64 *in);

NDDSUSERDllExport extern void 
String256Sequence64PluginSupport_destroy_data_w_params(
    String256Sequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String256Sequence64PluginSupport_destroy_data_ex(
    String256Sequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String256Sequence64PluginSupport_destroy_data(
    String256Sequence64 *sample);

NDDSUSERDllExport extern void 
String256Sequence64PluginSupport_print_data(
    const String256Sequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String256Sequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String256Sequence64 *out,
    const String256Sequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String256Sequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String256Sequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String256Sequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String256Sequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String256Sequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String256Sequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String256Sequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String256Sequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String256Sequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String256Sequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String256Sequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String256Sequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String256Sequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String256Sequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String256Sequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String256Sequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String256Sequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define String32Sequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define String32Sequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define String32Sequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define String32Sequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define String32Sequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern String32Sequence128*
String32Sequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern String32Sequence128*
String32Sequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern String32Sequence128*
String32Sequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
String32Sequence128PluginSupport_copy_data(
    String32Sequence128 *out,
    const String32Sequence128 *in);

NDDSUSERDllExport extern void 
String32Sequence128PluginSupport_destroy_data_w_params(
    String32Sequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
String32Sequence128PluginSupport_destroy_data_ex(
    String32Sequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
String32Sequence128PluginSupport_destroy_data(
    String32Sequence128 *sample);

NDDSUSERDllExport extern void 
String32Sequence128PluginSupport_print_data(
    const String32Sequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
String32Sequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence128 *out,
    const String32Sequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
String32Sequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const String32Sequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Sequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
String32Sequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
String32Sequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
String32Sequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
String32Sequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const String32Sequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
String32Sequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
String32Sequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
String32Sequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const String32Sequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
String32Sequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
String32Sequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    String32Sequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Vec2dPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Vec2dPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Vec2dPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Vec2dPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Vec2dPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Vec2d*
Vec2dPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Vec2d*
Vec2dPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Vec2d*
Vec2dPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Vec2dPluginSupport_copy_data(
    Vec2d *out,
    const Vec2d *in);

NDDSUSERDllExport extern void 
Vec2dPluginSupport_destroy_data_w_params(
    Vec2d *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Vec2dPluginSupport_destroy_data_ex(
    Vec2d *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Vec2dPluginSupport_destroy_data(
    Vec2d *sample);

NDDSUSERDllExport extern void 
Vec2dPluginSupport_print_data(
    const Vec2d *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Vec2dPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec2d *out,
    const Vec2d *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Vec2dPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Vec2d *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec2dPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec2d *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Vec2dPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Vec2dPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Vec2dPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Vec2dPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Vec2d * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Vec2dPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Vec2dPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Vec2dPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Vec2d *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec2dPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec2d * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Vec2dPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Vec2d *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Vec3dPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Vec3dPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Vec3dPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Vec3dPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Vec3dPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Vec3d*
Vec3dPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Vec3d*
Vec3dPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Vec3d*
Vec3dPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Vec3dPluginSupport_copy_data(
    Vec3d *out,
    const Vec3d *in);

NDDSUSERDllExport extern void 
Vec3dPluginSupport_destroy_data_w_params(
    Vec3d *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Vec3dPluginSupport_destroy_data_ex(
    Vec3d *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Vec3dPluginSupport_destroy_data(
    Vec3d *sample);

NDDSUSERDllExport extern void 
Vec3dPluginSupport_print_data(
    const Vec3d *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Vec3dPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec3d *out,
    const Vec3d *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Vec3dPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Vec3d *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec3dPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec3d *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Vec3dPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Vec3dPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Vec3dPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Vec3dPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Vec3d * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Vec3dPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Vec3dPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Vec3dPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Vec3d *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec3dPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec3d * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Vec3dPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Vec3d *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Vec2fPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Vec2fPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Vec2fPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Vec2fPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Vec2fPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Vec2f*
Vec2fPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Vec2f*
Vec2fPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Vec2f*
Vec2fPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Vec2fPluginSupport_copy_data(
    Vec2f *out,
    const Vec2f *in);

NDDSUSERDllExport extern void 
Vec2fPluginSupport_destroy_data_w_params(
    Vec2f *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Vec2fPluginSupport_destroy_data_ex(
    Vec2f *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Vec2fPluginSupport_destroy_data(
    Vec2f *sample);

NDDSUSERDllExport extern void 
Vec2fPluginSupport_print_data(
    const Vec2f *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Vec2fPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec2f *out,
    const Vec2f *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Vec2fPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Vec2f *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec2fPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec2f *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Vec2fPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Vec2fPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Vec2fPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Vec2fPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Vec2f * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Vec2fPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Vec2fPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Vec2fPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Vec2f *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec2fPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec2f * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Vec2fPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Vec2f *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Vec3fPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Vec3fPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Vec3fPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Vec3fPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Vec3fPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Vec3f*
Vec3fPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Vec3f*
Vec3fPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Vec3f*
Vec3fPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Vec3fPluginSupport_copy_data(
    Vec3f *out,
    const Vec3f *in);

NDDSUSERDllExport extern void 
Vec3fPluginSupport_destroy_data_w_params(
    Vec3f *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Vec3fPluginSupport_destroy_data_ex(
    Vec3f *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Vec3fPluginSupport_destroy_data(
    Vec3f *sample);

NDDSUSERDllExport extern void 
Vec3fPluginSupport_print_data(
    const Vec3f *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Vec3fPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec3f *out,
    const Vec3f *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Vec3fPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Vec3f *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec3fPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec3f *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Vec3fPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Vec3fPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Vec3fPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Vec3fPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Vec3f * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Vec3fPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Vec3fPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Vec3fPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Vec3f *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Vec3fPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Vec3f * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Vec3fPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Vec3f *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Mat33fPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Mat33fPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Mat33fPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Mat33fPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Mat33fPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Mat33f*
Mat33fPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Mat33f*
Mat33fPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Mat33f*
Mat33fPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Mat33fPluginSupport_copy_data(
    Mat33f *out,
    const Mat33f *in);

NDDSUSERDllExport extern void 
Mat33fPluginSupport_destroy_data_w_params(
    Mat33f *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Mat33fPluginSupport_destroy_data_ex(
    Mat33f *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Mat33fPluginSupport_destroy_data(
    Mat33f *sample);

NDDSUSERDllExport extern void 
Mat33fPluginSupport_print_data(
    const Mat33f *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Mat33fPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Mat33f *out,
    const Mat33f *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Mat33fPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Mat33f *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Mat33fPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Mat33f *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Mat33fPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Mat33fPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Mat33fPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Mat33fPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Mat33f * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Mat33fPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Mat33fPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Mat33fPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Mat33f *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Mat33fPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Mat33f * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Mat33fPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Mat33f *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Color4fPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Color4fPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Color4fPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Color4fPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Color4fPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Color4f*
Color4fPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Color4f*
Color4fPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Color4f*
Color4fPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Color4fPluginSupport_copy_data(
    Color4f *out,
    const Color4f *in);

NDDSUSERDllExport extern void 
Color4fPluginSupport_destroy_data_w_params(
    Color4f *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Color4fPluginSupport_destroy_data_ex(
    Color4f *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Color4fPluginSupport_destroy_data(
    Color4f *sample);

NDDSUSERDllExport extern void 
Color4fPluginSupport_print_data(
    const Color4f *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Color4fPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Color4f *out,
    const Color4f *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Color4fPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Color4f *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Color4fPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Color4f *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Color4fPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Color4fPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Color4fPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Color4fPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Color4f * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Color4fPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Color4fPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Color4fPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Color4f *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Color4fPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Color4f * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Color4fPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Color4f *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Color3fPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Color3fPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Color3fPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Color3fPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Color3fPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Color3f*
Color3fPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Color3f*
Color3fPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Color3f*
Color3fPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Color3fPluginSupport_copy_data(
    Color3f *out,
    const Color3f *in);

NDDSUSERDllExport extern void 
Color3fPluginSupport_destroy_data_w_params(
    Color3f *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Color3fPluginSupport_destroy_data_ex(
    Color3f *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Color3fPluginSupport_destroy_data(
    Color3f *sample);

NDDSUSERDllExport extern void 
Color3fPluginSupport_print_data(
    const Color3f *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Color3fPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Color3f *out,
    const Color3f *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Color3fPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Color3f *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Color3fPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Color3f *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Color3fPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Color3fPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Color3fPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Color3fPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Color3f * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Color3fPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Color3fPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Color3fPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Color3f *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Color3fPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Color3f * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
Color3fPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Color3f *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
RotationEncodingPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RotationEncoding *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RotationEncodingPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RotationEncoding *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RotationEncodingPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
RotationEncodingPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RotationEncodingPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RotationEncodingPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RotationEncoding * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
RotationEncodingPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RotationEncoding *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RotationEncodingPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RotationEncoding *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RotationEncodingPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
RotationEncodingPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RotationEncoding *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RotationEncodingPluginSupport_print_data(
    const RotationEncoding *sample, const char *desc, int indent_level);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
DataTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DataType *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DataTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DataType *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DataTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
DataTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DataTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DataTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DataType * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
DataTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DataType *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DataTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DataType *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DataTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
DataTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DataType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
DataTypePluginSupport_print_data(
    const DataType *sample, const char *desc, int indent_level);



#define ParameterUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ParameterUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ParameterUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ParameterUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ParameterUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ParameterUnion*
ParameterUnionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ParameterUnion*
ParameterUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ParameterUnion*
ParameterUnionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ParameterUnionPluginSupport_copy_data(
    ParameterUnion *out,
    const ParameterUnion *in);

NDDSUSERDllExport extern void 
ParameterUnionPluginSupport_destroy_data_w_params(
    ParameterUnion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ParameterUnionPluginSupport_destroy_data_ex(
    ParameterUnion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ParameterUnionPluginSupport_destroy_data(
    ParameterUnion *sample);

NDDSUSERDllExport extern void 
ParameterUnionPluginSupport_print_data(
    const ParameterUnion *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ParameterUnionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ParameterUnionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ParameterUnionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ParameterUnionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ParameterUnionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterUnion *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ParameterUnionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterUnion *out,
    const ParameterUnion *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ParameterUnionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ParameterUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ParameterUnionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterUnion *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ParameterUnionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ParameterUnion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ParameterUnionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ParameterUnionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ParameterUnionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ParameterUnionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ParameterUnion * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ParameterUnionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ParameterUnionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ParameterUnionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ParameterUnion *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ParameterUnionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterUnion * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ParameterUnionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ParameterUnion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ParameterUnionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ParameterUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ParameterUnionPlugin_new(void);

NDDSUSERDllExport extern void
ParameterUnionPlugin_delete(struct PRESTypePlugin *);


#define ParameterSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ParameterSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ParameterSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ParameterSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ParameterSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ParameterSequence16*
ParameterSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ParameterSequence16*
ParameterSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ParameterSequence16*
ParameterSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ParameterSequence16PluginSupport_copy_data(
    ParameterSequence16 *out,
    const ParameterSequence16 *in);

NDDSUSERDllExport extern void 
ParameterSequence16PluginSupport_destroy_data_w_params(
    ParameterSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ParameterSequence16PluginSupport_destroy_data_ex(
    ParameterSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ParameterSequence16PluginSupport_destroy_data(
    ParameterSequence16 *sample);

NDDSUSERDllExport extern void 
ParameterSequence16PluginSupport_print_data(
    const ParameterSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ParameterSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence16 *out,
    const ParameterSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ParameterSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ParameterSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ParameterSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ParameterSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ParameterSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ParameterSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ParameterSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ParameterSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ParameterSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ParameterSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ParameterSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ParameterSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ParameterSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ParameterSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ParameterSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ParameterSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ParameterSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ParameterSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ParameterSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ParameterSequence64*
ParameterSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ParameterSequence64*
ParameterSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ParameterSequence64*
ParameterSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ParameterSequence64PluginSupport_copy_data(
    ParameterSequence64 *out,
    const ParameterSequence64 *in);

NDDSUSERDllExport extern void 
ParameterSequence64PluginSupport_destroy_data_w_params(
    ParameterSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ParameterSequence64PluginSupport_destroy_data_ex(
    ParameterSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ParameterSequence64PluginSupport_destroy_data(
    ParameterSequence64 *sample);

NDDSUSERDllExport extern void 
ParameterSequence64PluginSupport_print_data(
    const ParameterSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ParameterSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence64 *out,
    const ParameterSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ParameterSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ParameterSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ParameterSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ParameterSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ParameterSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ParameterSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ParameterSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ParameterSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ParameterSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ParameterSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ParameterSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ParameterSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ParameterSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ParameterSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ParameterSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypePairPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypePairPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypePairPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypePairPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypePairPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypePair*
KeyTypePairPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypePair*
KeyTypePairPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypePair*
KeyTypePairPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypePairPluginSupport_copy_data(
    KeyTypePair *out,
    const KeyTypePair *in);

NDDSUSERDllExport extern void 
KeyTypePairPluginSupport_destroy_data_w_params(
    KeyTypePair *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypePairPluginSupport_destroy_data_ex(
    KeyTypePair *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypePairPluginSupport_destroy_data(
    KeyTypePair *sample);

NDDSUSERDllExport extern void 
KeyTypePairPluginSupport_print_data(
    const KeyTypePair *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
KeyTypePairPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
KeyTypePairPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
KeyTypePairPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
KeyTypePairPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
KeyTypePairPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypePair *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
KeyTypePairPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypePair *out,
    const KeyTypePair *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypePairPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypePair *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypePairPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypePair *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
KeyTypePairPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypePair **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypePairPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypePairPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypePairPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypePairPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypePair * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypePairPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypePairPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypePairPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypePair *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypePairPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypePair * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
KeyTypePairPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypePair ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
KeyTypePairPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypePair *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
KeyTypePairPlugin_new(void);

NDDSUSERDllExport extern void
KeyTypePairPlugin_delete(struct PRESTypePlugin *);


#define KeyTypeSequence4Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeSequence4Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeSequence4Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeSequence4Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeSequence4Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeSequence4*
KeyTypeSequence4PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeSequence4*
KeyTypeSequence4PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeSequence4*
KeyTypeSequence4PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence4PluginSupport_copy_data(
    KeyTypeSequence4 *out,
    const KeyTypeSequence4 *in);

NDDSUSERDllExport extern void 
KeyTypeSequence4PluginSupport_destroy_data_w_params(
    KeyTypeSequence4 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeSequence4PluginSupport_destroy_data_ex(
    KeyTypeSequence4 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeSequence4PluginSupport_destroy_data(
    KeyTypeSequence4 *sample);

NDDSUSERDllExport extern void 
KeyTypeSequence4PluginSupport_print_data(
    const KeyTypeSequence4 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence4Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence4 *out,
    const KeyTypeSequence4 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence4Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeSequence4 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence4Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence4 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeSequence4Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence4Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence4Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeSequence4Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeSequence4 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeSequence4Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence4Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence4Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeSequence4 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence4Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence4 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeSequence4Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence4 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypeSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeSequence16*
KeyTypeSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeSequence16*
KeyTypeSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeSequence16*
KeyTypeSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence16PluginSupport_copy_data(
    KeyTypeSequence16 *out,
    const KeyTypeSequence16 *in);

NDDSUSERDllExport extern void 
KeyTypeSequence16PluginSupport_destroy_data_w_params(
    KeyTypeSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeSequence16PluginSupport_destroy_data_ex(
    KeyTypeSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeSequence16PluginSupport_destroy_data(
    KeyTypeSequence16 *sample);

NDDSUSERDllExport extern void 
KeyTypeSequence16PluginSupport_print_data(
    const KeyTypeSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence16 *out,
    const KeyTypeSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypeSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeSequence64*
KeyTypeSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeSequence64*
KeyTypeSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeSequence64*
KeyTypeSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence64PluginSupport_copy_data(
    KeyTypeSequence64 *out,
    const KeyTypeSequence64 *in);

NDDSUSERDllExport extern void 
KeyTypeSequence64PluginSupport_destroy_data_w_params(
    KeyTypeSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeSequence64PluginSupport_destroy_data_ex(
    KeyTypeSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeSequence64PluginSupport_destroy_data(
    KeyTypeSequence64 *sample);

NDDSUSERDllExport extern void 
KeyTypeSequence64PluginSupport_print_data(
    const KeyTypeSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence64 *out,
    const KeyTypeSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypeValueTriplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeValueTriplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeValueTriplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeValueTriplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeValueTriplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeValueTriple*
KeyTypeValueTriplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeValueTriple*
KeyTypeValueTriplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeValueTriple*
KeyTypeValueTriplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePluginSupport_copy_data(
    KeyTypeValueTriple *out,
    const KeyTypeValueTriple *in);

NDDSUSERDllExport extern void 
KeyTypeValueTriplePluginSupport_destroy_data_w_params(
    KeyTypeValueTriple *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeValueTriplePluginSupport_destroy_data_ex(
    KeyTypeValueTriple *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeValueTriplePluginSupport_destroy_data(
    KeyTypeValueTriple *sample);

NDDSUSERDllExport extern void 
KeyTypeValueTriplePluginSupport_print_data(
    const KeyTypeValueTriple *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
KeyTypeValueTriplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
KeyTypeValueTriplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
KeyTypeValueTriplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
KeyTypeValueTriplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
KeyTypeValueTriplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueTriple *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueTriple *out,
    const KeyTypeValueTriple *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueTriple *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueTriple *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueTriple **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeValueTriplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueTriplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueTriplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeValueTriplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeValueTriple * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeValueTriplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueTriplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueTriple *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueTriple * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
KeyTypeValueTriplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueTriple ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
KeyTypeValueTriplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueTriple *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
KeyTypeValueTriplePlugin_new(void);

NDDSUSERDllExport extern void
KeyTypeValueTriplePlugin_delete(struct PRESTypePlugin *);


#define KeyTypeValueSequence8Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeValueSequence8Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeValueSequence8Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeValueSequence8Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeValueSequence8Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeValueSequence8*
KeyTypeValueSequence8PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeValueSequence8*
KeyTypeValueSequence8PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeValueSequence8*
KeyTypeValueSequence8PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence8PluginSupport_copy_data(
    KeyTypeValueSequence8 *out,
    const KeyTypeValueSequence8 *in);

NDDSUSERDllExport extern void 
KeyTypeValueSequence8PluginSupport_destroy_data_w_params(
    KeyTypeValueSequence8 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeValueSequence8PluginSupport_destroy_data_ex(
    KeyTypeValueSequence8 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeValueSequence8PluginSupport_destroy_data(
    KeyTypeValueSequence8 *sample);

NDDSUSERDllExport extern void 
KeyTypeValueSequence8PluginSupport_print_data(
    const KeyTypeValueSequence8 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence8Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence8 *out,
    const KeyTypeValueSequence8 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence8Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence8 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence8Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence8 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence8Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence8Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence8Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeValueSequence8Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeValueSequence8 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeValueSequence8Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence8Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence8Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence8 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence8Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence8 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence8Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence8 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypeValueSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeValueSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeValueSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeValueSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeValueSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeValueSequence16*
KeyTypeValueSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeValueSequence16*
KeyTypeValueSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeValueSequence16*
KeyTypeValueSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence16PluginSupport_copy_data(
    KeyTypeValueSequence16 *out,
    const KeyTypeValueSequence16 *in);

NDDSUSERDllExport extern void 
KeyTypeValueSequence16PluginSupport_destroy_data_w_params(
    KeyTypeValueSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeValueSequence16PluginSupport_destroy_data_ex(
    KeyTypeValueSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeValueSequence16PluginSupport_destroy_data(
    KeyTypeValueSequence16 *sample);

NDDSUSERDllExport extern void 
KeyTypeValueSequence16PluginSupport_print_data(
    const KeyTypeValueSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence16 *out,
    const KeyTypeValueSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeValueSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeValueSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeValueSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypeValueSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeValueSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeValueSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeValueSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeValueSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeValueSequence32*
KeyTypeValueSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeValueSequence32*
KeyTypeValueSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeValueSequence32*
KeyTypeValueSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence32PluginSupport_copy_data(
    KeyTypeValueSequence32 *out,
    const KeyTypeValueSequence32 *in);

NDDSUSERDllExport extern void 
KeyTypeValueSequence32PluginSupport_destroy_data_w_params(
    KeyTypeValueSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeValueSequence32PluginSupport_destroy_data_ex(
    KeyTypeValueSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeValueSequence32PluginSupport_destroy_data(
    KeyTypeValueSequence32 *sample);

NDDSUSERDllExport extern void 
KeyTypeValueSequence32PluginSupport_print_data(
    const KeyTypeValueSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence32 *out,
    const KeyTypeValueSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeValueSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeValueSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeValueSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypeValueSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeValueSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeValueSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeValueSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeValueSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeValueSequence64*
KeyTypeValueSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeValueSequence64*
KeyTypeValueSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeValueSequence64*
KeyTypeValueSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence64PluginSupport_copy_data(
    KeyTypeValueSequence64 *out,
    const KeyTypeValueSequence64 *in);

NDDSUSERDllExport extern void 
KeyTypeValueSequence64PluginSupport_destroy_data_w_params(
    KeyTypeValueSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeValueSequence64PluginSupport_destroy_data_ex(
    KeyTypeValueSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeValueSequence64PluginSupport_destroy_data(
    KeyTypeValueSequence64 *sample);

NDDSUSERDllExport extern void 
KeyTypeValueSequence64PluginSupport_print_data(
    const KeyTypeValueSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence64 *out,
    const KeyTypeValueSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeValueSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeValueSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeValueSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define KeyTypeValueSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define KeyTypeValueSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define KeyTypeValueSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define KeyTypeValueSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define KeyTypeValueSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern KeyTypeValueSequence128*
KeyTypeValueSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern KeyTypeValueSequence128*
KeyTypeValueSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern KeyTypeValueSequence128*
KeyTypeValueSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence128PluginSupport_copy_data(
    KeyTypeValueSequence128 *out,
    const KeyTypeValueSequence128 *in);

NDDSUSERDllExport extern void 
KeyTypeValueSequence128PluginSupport_destroy_data_w_params(
    KeyTypeValueSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
KeyTypeValueSequence128PluginSupport_destroy_data_ex(
    KeyTypeValueSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
KeyTypeValueSequence128PluginSupport_destroy_data(
    KeyTypeValueSequence128 *sample);

NDDSUSERDllExport extern void 
KeyTypeValueSequence128PluginSupport_print_data(
    const KeyTypeValueSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence128 *out,
    const KeyTypeValueSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
KeyTypeValueSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const KeyTypeValueSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
KeyTypeValueSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
KeyTypeValueSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const KeyTypeValueSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
KeyTypeValueSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
KeyTypeValueSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    KeyTypeValueSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ValueSequence8Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ValueSequence8Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ValueSequence8Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ValueSequence8Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ValueSequence8Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ValueSequence8*
ValueSequence8PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ValueSequence8*
ValueSequence8PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ValueSequence8*
ValueSequence8PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ValueSequence8PluginSupport_copy_data(
    ValueSequence8 *out,
    const ValueSequence8 *in);

NDDSUSERDllExport extern void 
ValueSequence8PluginSupport_destroy_data_w_params(
    ValueSequence8 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ValueSequence8PluginSupport_destroy_data_ex(
    ValueSequence8 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ValueSequence8PluginSupport_destroy_data(
    ValueSequence8 *sample);

NDDSUSERDllExport extern void 
ValueSequence8PluginSupport_print_data(
    const ValueSequence8 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ValueSequence8Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence8 *out,
    const ValueSequence8 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ValueSequence8Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence8 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence8Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence8 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ValueSequence8Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ValueSequence8Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ValueSequence8Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ValueSequence8Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ValueSequence8 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ValueSequence8Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ValueSequence8Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ValueSequence8Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence8 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence8Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence8 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ValueSequence8Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence8 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ValueSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ValueSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ValueSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ValueSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ValueSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ValueSequence16*
ValueSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ValueSequence16*
ValueSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ValueSequence16*
ValueSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ValueSequence16PluginSupport_copy_data(
    ValueSequence16 *out,
    const ValueSequence16 *in);

NDDSUSERDllExport extern void 
ValueSequence16PluginSupport_destroy_data_w_params(
    ValueSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ValueSequence16PluginSupport_destroy_data_ex(
    ValueSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ValueSequence16PluginSupport_destroy_data(
    ValueSequence16 *sample);

NDDSUSERDllExport extern void 
ValueSequence16PluginSupport_print_data(
    const ValueSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ValueSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence16 *out,
    const ValueSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ValueSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ValueSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ValueSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ValueSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ValueSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ValueSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ValueSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ValueSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ValueSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ValueSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ValueSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ValueSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ValueSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ValueSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ValueSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ValueSequence32*
ValueSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ValueSequence32*
ValueSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ValueSequence32*
ValueSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ValueSequence32PluginSupport_copy_data(
    ValueSequence32 *out,
    const ValueSequence32 *in);

NDDSUSERDllExport extern void 
ValueSequence32PluginSupport_destroy_data_w_params(
    ValueSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ValueSequence32PluginSupport_destroy_data_ex(
    ValueSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ValueSequence32PluginSupport_destroy_data(
    ValueSequence32 *sample);

NDDSUSERDllExport extern void 
ValueSequence32PluginSupport_print_data(
    const ValueSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ValueSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence32 *out,
    const ValueSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ValueSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ValueSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ValueSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ValueSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ValueSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ValueSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ValueSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ValueSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ValueSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ValueSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ValueSequence64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ValueSequence64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ValueSequence64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ValueSequence64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ValueSequence64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ValueSequence64*
ValueSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ValueSequence64*
ValueSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ValueSequence64*
ValueSequence64PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ValueSequence64PluginSupport_copy_data(
    ValueSequence64 *out,
    const ValueSequence64 *in);

NDDSUSERDllExport extern void 
ValueSequence64PluginSupport_destroy_data_w_params(
    ValueSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ValueSequence64PluginSupport_destroy_data_ex(
    ValueSequence64 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ValueSequence64PluginSupport_destroy_data(
    ValueSequence64 *sample);

NDDSUSERDllExport extern void 
ValueSequence64PluginSupport_print_data(
    const ValueSequence64 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ValueSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence64 *out,
    const ValueSequence64 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ValueSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence64 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ValueSequence64Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ValueSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ValueSequence64Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ValueSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ValueSequence64 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ValueSequence64Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ValueSequence64Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ValueSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence64 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence64 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ValueSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence64 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ValueSequence128Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ValueSequence128Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ValueSequence128Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ValueSequence128Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ValueSequence128Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ValueSequence128*
ValueSequence128PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ValueSequence128*
ValueSequence128PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ValueSequence128*
ValueSequence128PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ValueSequence128PluginSupport_copy_data(
    ValueSequence128 *out,
    const ValueSequence128 *in);

NDDSUSERDllExport extern void 
ValueSequence128PluginSupport_destroy_data_w_params(
    ValueSequence128 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ValueSequence128PluginSupport_destroy_data_ex(
    ValueSequence128 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ValueSequence128PluginSupport_destroy_data(
    ValueSequence128 *sample);

NDDSUSERDllExport extern void 
ValueSequence128PluginSupport_print_data(
    const ValueSequence128 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ValueSequence128Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence128 *out,
    const ValueSequence128 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ValueSequence128Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence128Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence128 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ValueSequence128Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ValueSequence128Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ValueSequence128Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ValueSequence128Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ValueSequence128 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ValueSequence128Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ValueSequence128Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ValueSequence128Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ValueSequence128 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ValueSequence128Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence128 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
ValueSequence128Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ValueSequence128 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Transform3DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Transform3DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Transform3DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Transform3DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Transform3DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Transform3D*
Transform3DPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Transform3D*
Transform3DPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Transform3D*
Transform3DPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Transform3DPluginSupport_copy_data(
    Transform3D *out,
    const Transform3D *in);

NDDSUSERDllExport extern void 
Transform3DPluginSupport_destroy_data_w_params(
    Transform3D *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Transform3DPluginSupport_destroy_data_ex(
    Transform3D *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Transform3DPluginSupport_destroy_data(
    Transform3D *sample);

NDDSUSERDllExport extern void 
Transform3DPluginSupport_print_data(
    const Transform3D *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Transform3DPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Transform3DPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Transform3DPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Transform3DPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Transform3DPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3D *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Transform3DPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3D *out,
    const Transform3D *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Transform3DPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Transform3D *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Transform3DPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3D *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Transform3DPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Transform3D **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Transform3DPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Transform3DPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Transform3DPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Transform3DPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Transform3D * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Transform3DPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Transform3DPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Transform3DPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Transform3D *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Transform3DPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3D * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Transform3DPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Transform3D ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Transform3DPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Transform3D *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Transform3DPlugin_new(void);

NDDSUSERDllExport extern void
Transform3DPlugin_delete(struct PRESTypePlugin *);


#define NamedFloatSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedFloatSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedFloatSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedFloatSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedFloatSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedFloatSequence*
NamedFloatSequencePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedFloatSequence*
NamedFloatSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedFloatSequence*
NamedFloatSequencePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePluginSupport_copy_data(
    NamedFloatSequence *out,
    const NamedFloatSequence *in);

NDDSUSERDllExport extern void 
NamedFloatSequencePluginSupport_destroy_data_w_params(
    NamedFloatSequence *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedFloatSequencePluginSupport_destroy_data_ex(
    NamedFloatSequence *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedFloatSequencePluginSupport_destroy_data(
    NamedFloatSequence *sample);

NDDSUSERDllExport extern void 
NamedFloatSequencePluginSupport_print_data(
    const NamedFloatSequence *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NamedFloatSequencePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NamedFloatSequencePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NamedFloatSequencePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NamedFloatSequencePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NamedFloatSequencePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatSequence *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatSequence *out,
    const NamedFloatSequence *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatSequence *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatSequence **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedFloatSequencePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedFloatSequencePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedFloatSequencePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedFloatSequencePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedFloatSequence * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedFloatSequencePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedFloatSequencePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatSequence *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatSequence * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedFloatSequencePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatSequence ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NamedFloatSequencePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatSequence *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NamedFloatSequencePlugin_new(void);

NDDSUSERDllExport extern void
NamedFloatSequencePlugin_delete(struct PRESTypePlugin *);


#define NFSeqSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NFSeqSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NFSeqSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NFSeqSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NFSeqSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NFSeqSequence16*
NFSeqSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NFSeqSequence16*
NFSeqSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NFSeqSequence16*
NFSeqSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence16PluginSupport_copy_data(
    NFSeqSequence16 *out,
    const NFSeqSequence16 *in);

NDDSUSERDllExport extern void 
NFSeqSequence16PluginSupport_destroy_data_w_params(
    NFSeqSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NFSeqSequence16PluginSupport_destroy_data_ex(
    NFSeqSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NFSeqSequence16PluginSupport_destroy_data(
    NFSeqSequence16 *sample);

NDDSUSERDllExport extern void 
NFSeqSequence16PluginSupport_print_data(
    const NFSeqSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NFSeqSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence16 *out,
    const NFSeqSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NFSeqSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NFSeqSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NFSeqSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NFSeqSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NFSeqSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NFSeqSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NFSeqSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NFSeqSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NFSeqSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NFSeqSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NFSeqSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define NFSeqSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NFSeqSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NFSeqSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NFSeqSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NFSeqSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NFSeqSequence32*
NFSeqSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NFSeqSequence32*
NFSeqSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NFSeqSequence32*
NFSeqSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence32PluginSupport_copy_data(
    NFSeqSequence32 *out,
    const NFSeqSequence32 *in);

NDDSUSERDllExport extern void 
NFSeqSequence32PluginSupport_destroy_data_w_params(
    NFSeqSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NFSeqSequence32PluginSupport_destroy_data_ex(
    NFSeqSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NFSeqSequence32PluginSupport_destroy_data(
    NFSeqSequence32 *sample);

NDDSUSERDllExport extern void 
NFSeqSequence32PluginSupport_print_data(
    const NFSeqSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NFSeqSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence32 *out,
    const NFSeqSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NFSeqSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NFSeqSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NFSeqSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NFSeqSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NFSeqSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NFSeqSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NFSeqSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NFSeqSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NFSeqSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NFSeqSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NFSeqSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NFSeqSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NFSeqSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define FloatRangePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatRangePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatRangePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatRangePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatRangePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatRange*
FloatRangePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatRange*
FloatRangePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatRange*
FloatRangePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatRangePluginSupport_copy_data(
    FloatRange *out,
    const FloatRange *in);

NDDSUSERDllExport extern void 
FloatRangePluginSupport_destroy_data_w_params(
    FloatRange *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatRangePluginSupport_destroy_data_ex(
    FloatRange *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatRangePluginSupport_destroy_data(
    FloatRange *sample);

NDDSUSERDllExport extern void 
FloatRangePluginSupport_print_data(
    const FloatRange *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FloatRangePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FloatRangePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FloatRangePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FloatRangePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FloatRangePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRange *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FloatRangePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRange *out,
    const FloatRange *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatRangePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatRange *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatRangePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRange *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FloatRangePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FloatRange **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatRangePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatRangePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatRangePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatRangePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatRange * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatRangePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatRangePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatRangePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatRange *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatRangePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRange * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FloatRangePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatRange ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FloatRangePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatRange *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FloatRangePlugin_new(void);

NDDSUSERDllExport extern void
FloatRangePlugin_delete(struct PRESTypePlugin *);


#define FloatRangeValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define FloatRangeValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FloatRangeValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define FloatRangeValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FloatRangeValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FloatRangeValue*
FloatRangeValuePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern FloatRangeValue*
FloatRangeValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FloatRangeValue*
FloatRangeValuePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FloatRangeValuePluginSupport_copy_data(
    FloatRangeValue *out,
    const FloatRangeValue *in);

NDDSUSERDllExport extern void 
FloatRangeValuePluginSupport_destroy_data_w_params(
    FloatRangeValue *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
FloatRangeValuePluginSupport_destroy_data_ex(
    FloatRangeValue *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FloatRangeValuePluginSupport_destroy_data(
    FloatRangeValue *sample);

NDDSUSERDllExport extern void 
FloatRangeValuePluginSupport_print_data(
    const FloatRangeValue *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FloatRangeValuePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FloatRangeValuePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FloatRangeValuePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FloatRangeValuePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
FloatRangeValuePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRangeValue *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
FloatRangeValuePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRangeValue *out,
    const FloatRangeValue *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FloatRangeValuePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FloatRangeValue *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatRangeValuePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRangeValue *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FloatRangeValuePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FloatRangeValue **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
FloatRangeValuePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FloatRangeValuePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FloatRangeValuePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FloatRangeValuePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FloatRangeValue * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FloatRangeValuePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FloatRangeValuePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FloatRangeValuePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FloatRangeValue *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FloatRangeValuePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FloatRangeValue * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FloatRangeValuePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatRangeValue ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FloatRangeValuePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FloatRangeValue *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FloatRangeValuePlugin_new(void);

NDDSUSERDllExport extern void
FloatRangeValuePlugin_delete(struct PRESTypePlugin *);


#define OptionSetValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define OptionSetValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OptionSetValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define OptionSetValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OptionSetValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OptionSetValue*
OptionSetValuePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern OptionSetValue*
OptionSetValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OptionSetValue*
OptionSetValuePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OptionSetValuePluginSupport_copy_data(
    OptionSetValue *out,
    const OptionSetValue *in);

NDDSUSERDllExport extern void 
OptionSetValuePluginSupport_destroy_data_w_params(
    OptionSetValue *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
OptionSetValuePluginSupport_destroy_data_ex(
    OptionSetValue *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OptionSetValuePluginSupport_destroy_data(
    OptionSetValue *sample);

NDDSUSERDllExport extern void 
OptionSetValuePluginSupport_print_data(
    const OptionSetValue *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OptionSetValuePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OptionSetValuePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OptionSetValuePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OptionSetValuePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
OptionSetValuePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    OptionSetValue *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
OptionSetValuePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OptionSetValue *out,
    const OptionSetValue *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OptionSetValuePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OptionSetValue *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OptionSetValuePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OptionSetValue *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OptionSetValuePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OptionSetValue **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OptionSetValuePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OptionSetValuePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OptionSetValuePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OptionSetValuePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OptionSetValue * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OptionSetValuePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OptionSetValuePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OptionSetValuePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OptionSetValue *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OptionSetValuePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OptionSetValue * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OptionSetValuePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OptionSetValue ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OptionSetValuePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OptionSetValue *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OptionSetValuePlugin_new(void);

NDDSUSERDllExport extern void
OptionSetValuePlugin_delete(struct PRESTypePlugin *);


#define NamedFloatRangeValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedFloatRangeValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedFloatRangeValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedFloatRangeValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedFloatRangeValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedFloatRangeValue*
NamedFloatRangeValuePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedFloatRangeValue*
NamedFloatRangeValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedFloatRangeValue*
NamedFloatRangeValuePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePluginSupport_copy_data(
    NamedFloatRangeValue *out,
    const NamedFloatRangeValue *in);

NDDSUSERDllExport extern void 
NamedFloatRangeValuePluginSupport_destroy_data_w_params(
    NamedFloatRangeValue *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedFloatRangeValuePluginSupport_destroy_data_ex(
    NamedFloatRangeValue *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedFloatRangeValuePluginSupport_destroy_data(
    NamedFloatRangeValue *sample);

NDDSUSERDllExport extern void 
NamedFloatRangeValuePluginSupport_print_data(
    const NamedFloatRangeValue *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NamedFloatRangeValuePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NamedFloatRangeValuePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NamedFloatRangeValuePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NamedFloatRangeValuePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NamedFloatRangeValuePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValue *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValue *out,
    const NamedFloatRangeValue *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatRangeValue *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValue *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValue **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedFloatRangeValuePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValuePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValuePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedFloatRangeValuePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedFloatRangeValue * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedFloatRangeValuePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValuePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatRangeValue *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValue * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValuePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValue ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NamedFloatRangeValuePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValue *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NamedFloatRangeValuePlugin_new(void);

NDDSUSERDllExport extern void
NamedFloatRangeValuePlugin_delete(struct PRESTypePlugin *);


#define NamedFloatRangeValueSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedFloatRangeValueSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedFloatRangeValueSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedFloatRangeValueSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedFloatRangeValueSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedFloatRangeValueSequence16*
NamedFloatRangeValueSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedFloatRangeValueSequence16*
NamedFloatRangeValueSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedFloatRangeValueSequence16*
NamedFloatRangeValueSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence16PluginSupport_copy_data(
    NamedFloatRangeValueSequence16 *out,
    const NamedFloatRangeValueSequence16 *in);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence16PluginSupport_destroy_data_w_params(
    NamedFloatRangeValueSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence16PluginSupport_destroy_data_ex(
    NamedFloatRangeValueSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence16PluginSupport_destroy_data(
    NamedFloatRangeValueSequence16 *sample);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence16PluginSupport_print_data(
    const NamedFloatRangeValueSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence16 *out,
    const NamedFloatRangeValueSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatRangeValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedFloatRangeValueSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValueSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValueSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedFloatRangeValueSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedFloatRangeValueSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedFloatRangeValueSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValueSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatRangeValueSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NamedFloatRangeValueSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define NamedFloatRangeValueSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedFloatRangeValueSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedFloatRangeValueSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedFloatRangeValueSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedFloatRangeValueSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedFloatRangeValueSequence32*
NamedFloatRangeValueSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedFloatRangeValueSequence32*
NamedFloatRangeValueSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedFloatRangeValueSequence32*
NamedFloatRangeValueSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence32PluginSupport_copy_data(
    NamedFloatRangeValueSequence32 *out,
    const NamedFloatRangeValueSequence32 *in);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence32PluginSupport_destroy_data_w_params(
    NamedFloatRangeValueSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence32PluginSupport_destroy_data_ex(
    NamedFloatRangeValueSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence32PluginSupport_destroy_data(
    NamedFloatRangeValueSequence32 *sample);

NDDSUSERDllExport extern void 
NamedFloatRangeValueSequence32PluginSupport_print_data(
    const NamedFloatRangeValueSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence32 *out,
    const NamedFloatRangeValueSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatRangeValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedFloatRangeValueSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValueSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValueSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedFloatRangeValueSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedFloatRangeValueSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedFloatRangeValueSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedFloatRangeValueSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedFloatRangeValueSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedFloatRangeValueSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NamedFloatRangeValueSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedFloatRangeValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define NamedOptionSetValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedOptionSetValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedOptionSetValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedOptionSetValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedOptionSetValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedOptionSetValue*
NamedOptionSetValuePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedOptionSetValue*
NamedOptionSetValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedOptionSetValue*
NamedOptionSetValuePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePluginSupport_copy_data(
    NamedOptionSetValue *out,
    const NamedOptionSetValue *in);

NDDSUSERDllExport extern void 
NamedOptionSetValuePluginSupport_destroy_data_w_params(
    NamedOptionSetValue *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedOptionSetValuePluginSupport_destroy_data_ex(
    NamedOptionSetValue *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedOptionSetValuePluginSupport_destroy_data(
    NamedOptionSetValue *sample);

NDDSUSERDllExport extern void 
NamedOptionSetValuePluginSupport_print_data(
    const NamedOptionSetValue *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
NamedOptionSetValuePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
NamedOptionSetValuePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
NamedOptionSetValuePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
NamedOptionSetValuePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
NamedOptionSetValuePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValue *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValue *out,
    const NamedOptionSetValue *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedOptionSetValue *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValue *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValue **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedOptionSetValuePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValuePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValuePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedOptionSetValuePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedOptionSetValue * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedOptionSetValuePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValuePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedOptionSetValue *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValue * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
NamedOptionSetValuePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValue ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
NamedOptionSetValuePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValue *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
NamedOptionSetValuePlugin_new(void);

NDDSUSERDllExport extern void
NamedOptionSetValuePlugin_delete(struct PRESTypePlugin *);


#define NamedOptionSetValueSequence16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedOptionSetValueSequence16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedOptionSetValueSequence16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedOptionSetValueSequence16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedOptionSetValueSequence16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedOptionSetValueSequence16*
NamedOptionSetValueSequence16PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedOptionSetValueSequence16*
NamedOptionSetValueSequence16PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedOptionSetValueSequence16*
NamedOptionSetValueSequence16PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence16PluginSupport_copy_data(
    NamedOptionSetValueSequence16 *out,
    const NamedOptionSetValueSequence16 *in);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence16PluginSupport_destroy_data_w_params(
    NamedOptionSetValueSequence16 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence16PluginSupport_destroy_data_ex(
    NamedOptionSetValueSequence16 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence16PluginSupport_destroy_data(
    NamedOptionSetValueSequence16 *sample);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence16PluginSupport_print_data(
    const NamedOptionSetValueSequence16 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence16Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence16 *out,
    const NamedOptionSetValueSequence16 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence16Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedOptionSetValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence16Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence16 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedOptionSetValueSequence16Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValueSequence16Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValueSequence16Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedOptionSetValueSequence16Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedOptionSetValueSequence16 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedOptionSetValueSequence16Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValueSequence16Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence16Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedOptionSetValueSequence16 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence16Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence16 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NamedOptionSetValueSequence16Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence16 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define NamedOptionSetValueSequence32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define NamedOptionSetValueSequence32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define NamedOptionSetValueSequence32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define NamedOptionSetValueSequence32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define NamedOptionSetValueSequence32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern NamedOptionSetValueSequence32*
NamedOptionSetValueSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern NamedOptionSetValueSequence32*
NamedOptionSetValueSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern NamedOptionSetValueSequence32*
NamedOptionSetValueSequence32PluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence32PluginSupport_copy_data(
    NamedOptionSetValueSequence32 *out,
    const NamedOptionSetValueSequence32 *in);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence32PluginSupport_destroy_data_w_params(
    NamedOptionSetValueSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence32PluginSupport_destroy_data_ex(
    NamedOptionSetValueSequence32 *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence32PluginSupport_destroy_data(
    NamedOptionSetValueSequence32 *sample);

NDDSUSERDllExport extern void 
NamedOptionSetValueSequence32PluginSupport_print_data(
    const NamedOptionSetValueSequence32 *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence32 *out,
    const NamedOptionSetValueSequence32 *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NamedOptionSetValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence32 *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
NamedOptionSetValueSequence32Plugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValueSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValueSequence32Plugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
NamedOptionSetValueSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NamedOptionSetValueSequence32 * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
NamedOptionSetValueSequence32Plugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
NamedOptionSetValueSequence32Plugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NamedOptionSetValueSequence32 *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
NamedOptionSetValueSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence32 * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
NamedOptionSetValueSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NamedOptionSetValueSequence32 *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* BaseTypesPlugin_1127121220_h */
