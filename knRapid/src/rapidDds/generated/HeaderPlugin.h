
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Header.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HeaderPlugin_325113614_h
#define HeaderPlugin_325113614_h

#include "Header.h"

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

/* The type used to store keys for instances of type struct
 * Header.
 *
 * By default, this type is struct Header
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct Header)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct Header, the
 * following restriction applies: the key of struct
 * Header must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct Header.
*/
typedef  class Header HeaderKeyHolder;


#define HeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define HeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define HeaderPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define HeaderPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define HeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Header*
HeaderPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Header*
HeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Header*
HeaderPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HeaderPluginSupport_copy_data(
    Header *out,
    const Header *in);

NDDSUSERDllExport extern void 
HeaderPluginSupport_destroy_data_w_params(
    Header *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HeaderPluginSupport_destroy_data_ex(
    Header *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HeaderPluginSupport_destroy_data(
    Header *sample);

NDDSUSERDllExport extern void 
HeaderPluginSupport_print_data(
    const Header *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern Header*
HeaderPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Header*
HeaderPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
HeaderPluginSupport_destroy_key_ex(
    HeaderKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HeaderPluginSupport_destroy_key(
    HeaderKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HeaderPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HeaderPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
HeaderPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HeaderPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
HeaderPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Header *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Header *out,
    const Header *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Header *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Header *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HeaderPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Header **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
HeaderPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
HeaderPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HeaderPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
HeaderPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Header * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
HeaderPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HeaderPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Header *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Header * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HeaderPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Header ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
HeaderPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Header *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HeaderPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HeaderKeyHolder *key, 
    const Header *instance);

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    Header *instance, 
    const HeaderKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const Header *instance);

NDDSUSERDllExport extern RTIBool 
HeaderPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HeaderPlugin_new(void);

NDDSUSERDllExport extern void
HeaderPlugin_delete(struct PRESTypePlugin *);

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* HeaderPlugin_325113614_h */
