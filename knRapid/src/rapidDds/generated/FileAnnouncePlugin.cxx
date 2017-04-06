
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileAnnounce.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#include <string.h>

#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

#ifndef osapi_type_h
  #include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
  #include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
  #include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
  #include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
  #include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
  #include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
  #include "cdr/cdr_stream.h"
#endif

#ifndef pres_typePlugin_h
  #include "pres/pres_typePlugin.h"
#endif



#include "FileAnnouncePlugin.h"


namespace rapid{

/* --------------------------------------------------------------------------------------
 *  Type FileAnnounce
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

FileAnnounce*
FileAnnouncePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    FileAnnounce *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, FileAnnounce);

    if(sample != NULL) {
        if (!::rapid::FileAnnounce_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


FileAnnounce *
FileAnnouncePluginSupport_create_data_ex(RTIBool allocate_pointers){
    FileAnnounce *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, FileAnnounce);

    if(sample != NULL) {
        if (!::rapid::FileAnnounce_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


FileAnnounce *
FileAnnouncePluginSupport_create_data(void)
{
    return ::rapid::FileAnnouncePluginSupport_create_data_ex(RTI_TRUE);
}


void 
FileAnnouncePluginSupport_destroy_data_w_params(
    FileAnnounce *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::FileAnnounce_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
FileAnnouncePluginSupport_destroy_data_ex(
    FileAnnounce *sample,RTIBool deallocate_pointers) {

    ::rapid::FileAnnounce_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
FileAnnouncePluginSupport_destroy_data(
    FileAnnounce *sample) {

    ::rapid::FileAnnouncePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
FileAnnouncePluginSupport_copy_data(
    FileAnnounce *dst,
    const FileAnnounce *src)
{
    return ::rapid::FileAnnounce_copy(dst,src);
}


void 
FileAnnouncePluginSupport_print_data(
    const FileAnnounce *sample,
    const char *desc,
    unsigned int indent_level)
{


    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
      RTILog_debug("%s:\n", desc);
    } else {
      RTILog_debug("\n");
    }

    if (sample == NULL) {
      RTILog_debug("NULL\n");
      return;
    }

    rapid::MessagePluginSupport_print_data((const rapid::Message*)sample,"",indent_level);

    rapid::String64PluginSupport_print_data(
        &sample->fileUuid, "fileUuid", indent_level + 1);
            

    rapid::String256PluginSupport_print_data(
        &sample->fileLocator, "fileLocator", indent_level + 1);
            

    RTICdrType_printLongLong(
        &sample->fileSize, "fileSize", indent_level + 1);
            

    rapid::KeyTypeValueSequence16PluginSupport_print_data(
        &sample->metaData, "metaData", indent_level + 1);
            


}

FileAnnounce *
FileAnnouncePluginSupport_create_key_ex(RTIBool allocate_pointers){
    FileAnnounce *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, FileAnnounceKeyHolder);

    ::rapid::FileAnnounce_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


FileAnnounce *
FileAnnouncePluginSupport_create_key(void)
{
    return  ::rapid::FileAnnouncePluginSupport_create_key_ex(RTI_TRUE);
}


void 
FileAnnouncePluginSupport_destroy_key_ex(
    FileAnnounceKeyHolder *key,RTIBool deallocate_pointers)
{
    ::rapid::FileAnnounce_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
FileAnnouncePluginSupport_destroy_key(
    FileAnnounceKeyHolder *key) {

  ::rapid::FileAnnouncePluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
FileAnnouncePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);

}


void 
FileAnnouncePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
FileAnnouncePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */


    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::rapid::FileAnnouncePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::FileAnnouncePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::rapid::FileAnnouncePluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::rapid::FileAnnouncePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::rapid::FileAnnouncePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::FileAnnouncePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::FileAnnouncePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::FileAnnouncePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
FileAnnouncePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
FileAnnouncePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *sample,
    void *handle)
{
    
    FileAnnounce_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
FileAnnouncePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *dst,
    const FileAnnounce *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::FileAnnouncePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
FileAnnouncePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
FileAnnouncePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileAnnounce *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
        if (!rapid::MessagePlugin_serialize(endpoint_data,(const rapid::Message*)sample,stream,RTI_FALSE,encapsulation_id,RTI_TRUE,endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!rapid::String64Plugin_serialize(
            endpoint_data,
            &sample->fileUuid, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256Plugin_serialize(
            endpoint_data,
            &sample->fileLocator, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeLongLong(
        stream, &sample->fileSize)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16Plugin_serialize(
            endpoint_data,
            &sample->metaData, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
FileAnnouncePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
        ::rapid::FileAnnounce_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
            if (!rapid::MessagePlugin_deserialize_sample(endpoint_data,( rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!rapid::String64Plugin_deserialize_sample(
            endpoint_data,
            &sample->fileUuid,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String256Plugin_deserialize_sample(
            endpoint_data,
            &sample->fileLocator,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeLongLong(
        stream, &sample->fileSize)) {
        goto fin;
    }

    if (!rapid::KeyTypeValueSequence16Plugin_deserialize_sample(
            endpoint_data,
            &sample->metaData,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 
 

RTIBool 
FileAnnouncePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::FileAnnouncePlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
 
}




RTIBool FileAnnouncePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {
    if (!rapid::MessagePlugin_skip(endpoint_data,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!rapid::String64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String256Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLongLong(stream)) {
        goto fin;
    }
            

    if (!rapid::KeyTypeValueSequence16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            


    }
    

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
FileAnnouncePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }

    current_alignment += rapid::MessagePlugin_get_serialized_sample_max_size(endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::String256Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getLongLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::KeyTypeValueSequence16Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
FileAnnouncePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }

    current_alignment += rapid::MessagePlugin_get_serialized_sample_min_size(endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::String256Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getLongLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::KeyTypeValueSequence16Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
FileAnnouncePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileAnnounce * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }

    current_alignment += rapid::MessagePlugin_get_serialized_sample_size(endpoint_data,RTI_FALSE,encapsulation_id,current_alignment,(const rapid::Message*)sample);

    current_alignment += rapid::String64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->fileUuid);
            

    current_alignment += rapid::String256Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->fileLocator);
            

    current_alignment += RTICdrType_getLongLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::KeyTypeValueSequence16Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->metaData);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
FileAnnouncePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
FileAnnouncePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileAnnounce *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {
        if (!rapid::MessagePlugin_serialize_key(endpoint_data, (const rapid::Message*)sample, stream, RTI_FALSE, encapsulation_id,RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!rapid::String64Plugin_serialize_key(
            endpoint_data,
            &sample->fileUuid, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool FileAnnouncePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {
        if (!rapid::MessagePlugin_deserialize_key_sample(endpoint_data,(rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!rapid::String64Plugin_deserialize_key_sample(
            endpoint_data,
            &sample->fileUuid,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool FileAnnouncePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::FileAnnouncePlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
}



unsigned int
FileAnnouncePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;



    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        
    current_alignment += rapid::MessagePlugin_get_serialized_key_max_size(
        endpoint_data,
        RTI_FALSE, encapsulation_id,
        current_alignment);

    current_alignment +=  rapid::String64Plugin_get_serialized_key_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
FileAnnouncePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {
        if (!rapid::MessagePlugin_serialized_sample_to_key(endpoint_data,
                (rapid::Message *)sample,
                stream, RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    if (!rapid::String64Plugin_serialized_sample_to_key(
            endpoint_data,
            &sample->fileUuid,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String256Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLongLong(stream)) {
        goto fin;
    }
            

    if (!rapid::KeyTypeValueSequence16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    }


    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
FileAnnouncePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounceKeyHolder *dst, 
    const FileAnnounce *src)
{  
    if (!rapid::MessagePlugin_instance_to_key(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_copy(
        &dst->fileUuid, &src->fileUuid)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
FileAnnouncePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileAnnounce *dst, const
    FileAnnounceKeyHolder *src)
{
    if (!rapid::MessagePlugin_key_to_instance(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    if (!rapid::String64_copy(
        &dst->fileUuid, &src->fileUuid)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
FileAnnouncePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileAnnounce *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!::rapid::FileAnnouncePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
FileAnnouncePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    FileAnnounce * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (FileAnnounce *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!rapid::MessagePlugin_serialized_sample_to_key(endpoint_data,
            (rapid::Message *)sample,
            stream, RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }

    if (!rapid::String64Plugin_serialized_sample_to_key(
            endpoint_data,
            &sample->fileUuid,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!::rapid::FileAnnouncePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *FileAnnouncePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ::rapid::FileAnnouncePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::FileAnnouncePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::FileAnnouncePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::FileAnnouncePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::FileAnnouncePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        FileAnnouncePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        FileAnnouncePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::FileAnnouncePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::FileAnnouncePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::FileAnnouncePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::FileAnnouncePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        FileAnnouncePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        FileAnnouncePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::FileAnnouncePlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::rapid::FileAnnouncePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::rapid::FileAnnouncePlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::rapid::FileAnnouncePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::rapid::FileAnnouncePlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::rapid::FileAnnouncePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::rapid::FileAnnouncePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        FileAnnouncePlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        FileAnnouncePlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::rapid::FileAnnouncePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::rapid::FileAnnouncePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::FileAnnounce_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        FileAnnouncePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        FileAnnouncePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::FileAnnouncePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = FileAnnounceTYPENAME;

    return plugin;
}

void
FileAnnouncePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace rapid */
