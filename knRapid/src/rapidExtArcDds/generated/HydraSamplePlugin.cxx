
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraSample.idl using "rtiddsgen".
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



#include "HydraSamplePlugin.h"


namespace rapid{

namespace ext{

namespace arc{

/* --------------------------------------------------------------------------------------
 *  Type HydraSample
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

HydraSample*
HydraSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    HydraSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, HydraSample);

    if(sample != NULL) {
        if (!::rapid::ext::arc::HydraSample_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


HydraSample *
HydraSamplePluginSupport_create_data_ex(RTIBool allocate_pointers){
    HydraSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, HydraSample);

    if(sample != NULL) {
        if (!::rapid::ext::arc::HydraSample_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


HydraSample *
HydraSamplePluginSupport_create_data(void)
{
    return ::rapid::ext::arc::HydraSamplePluginSupport_create_data_ex(RTI_TRUE);
}


void 
HydraSamplePluginSupport_destroy_data_w_params(
    HydraSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::HydraSample_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
HydraSamplePluginSupport_destroy_data_ex(
    HydraSample *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::HydraSample_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
HydraSamplePluginSupport_destroy_data(
    HydraSample *sample) {

    ::rapid::ext::arc::HydraSamplePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
HydraSamplePluginSupport_copy_data(
    HydraSample *dst,
    const HydraSample *src)
{
    return ::rapid::ext::arc::HydraSample_copy(dst,src);
}


void 
HydraSamplePluginSupport_print_data(
    const HydraSample *sample,
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

    RTICdrType_printUnsignedShort(
        &sample->soh, "soh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->sns, "sns", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->cds, "cds", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->cmr, "cmr", indent_level + 1);
            

    if (&sample->sn == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("sn: NULL\n");    
    } else {
    
        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->sn) != NULL) {
            RTICdrType_printArray(
                DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->sn),
                DDS_UnsignedShortSeq_get_length(&sample->sn),
                RTI_CDR_UNSIGNED_SHORT_SIZE,
                (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
                "sn", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->sn),
                DDS_UnsignedShortSeq_get_length(&sample->sn),
               (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
               "sn", indent_level + 1);
        }
    
    }
            

    if (&sample->cd == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("cd: NULL\n");    
    } else {
    
        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->cd) != NULL) {
            RTICdrType_printArray(
                DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->cd),
                DDS_UnsignedShortSeq_get_length(&sample->cd),
                RTI_CDR_UNSIGNED_SHORT_SIZE,
                (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
                "cd", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->cd),
                DDS_UnsignedShortSeq_get_length(&sample->cd),
               (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
               "cd", indent_level + 1);
        }
    
    }
            

    if (&sample->reading == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("reading: NULL\n");    
    } else {
    
        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->reading) != NULL) {
            RTICdrType_printArray(
                DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->reading),
                DDS_UnsignedShortSeq_get_length(&sample->reading),
                RTI_CDR_UNSIGNED_SHORT_SIZE,
                (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
                "reading", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->reading),
                DDS_UnsignedShortSeq_get_length(&sample->reading),
               (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
               "reading", indent_level + 1);
        }
    
    }
            

    rapid::ValueSequence32PluginSupport_print_data(
        &sample->values, "values", indent_level + 1);
            


}

HydraSample *
HydraSamplePluginSupport_create_key_ex(RTIBool allocate_pointers){
    HydraSample *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, HydraSampleKeyHolder);

    ::rapid::ext::arc::HydraSample_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


HydraSample *
HydraSamplePluginSupport_create_key(void)
{
    return  ::rapid::ext::arc::HydraSamplePluginSupport_create_key_ex(RTI_TRUE);
}


void 
HydraSamplePluginSupport_destroy_key_ex(
    HydraSampleKeyHolder *key,RTIBool deallocate_pointers)
{
    ::rapid::ext::arc::HydraSample_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
HydraSamplePluginSupport_destroy_key(
    HydraSampleKeyHolder *key) {

  ::rapid::ext::arc::HydraSamplePluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
HydraSamplePlugin_on_participant_attached(
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
HydraSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
HydraSamplePlugin_on_endpoint_attached(
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
            ::rapid::ext::arc::HydraSamplePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::ext::arc::HydraSamplePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::rapid::ext::arc::HydraSamplePluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::rapid::ext::arc::HydraSamplePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::rapid::ext::arc::HydraSamplePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::ext::arc::HydraSamplePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::ext::arc::HydraSamplePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::ext::arc::HydraSamplePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
HydraSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
HydraSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *sample,
    void *handle)
{
    
    HydraSample_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
HydraSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *dst,
    const HydraSample *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::HydraSamplePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
HydraSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
HydraSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const HydraSample *sample, 
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
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->soh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->sns)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->cds)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->cmr)) {
        return RTI_FALSE;
    }
            

    if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->sn) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->sn),
            DDS_UnsignedShortSeq_get_length(&sample->sn),
            (32),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->sn),
            DDS_UnsignedShortSeq_get_length(&sample->sn),
            (32),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    }
            

    if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->cd) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->cd),
            DDS_UnsignedShortSeq_get_length(&sample->cd),
            (32),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->cd),
            DDS_UnsignedShortSeq_get_length(&sample->cd),
            (32),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    }
            

    if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->reading) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->reading),
            DDS_UnsignedShortSeq_get_length(&sample->reading),
            (89),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->reading),
            DDS_UnsignedShortSeq_get_length(&sample->reading),
            (89),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    }
            

    if (!rapid::ValueSequence32Plugin_serialize(
            endpoint_data,
            &sample->values, 
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
HydraSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *sample,
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
        ::rapid::ext::arc::HydraSample_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
            if (!rapid::MessagePlugin_deserialize_sample(endpoint_data,( rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->soh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->sns)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->cds)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->cmr)) {
        goto fin;
    }

    {
        RTICdrUnsignedLong sequence_length;

        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->sn) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->sn),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(&sample->sn),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->sn),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(&sample->sn),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                goto fin;
            }
        }
        if (!DDS_UnsignedShortSeq_set_length(&sample->sn, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->cd) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->cd),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(&sample->cd),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->cd),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(&sample->cd),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                goto fin;
            }
        }
        if (!DDS_UnsignedShortSeq_set_length(&sample->cd, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->reading) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_UnsignedShortSeq_get_contiguous_bufferI(&sample->reading),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(&sample->reading),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(&sample->reading),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(&sample->reading),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                goto fin;
            }
        }
        if (!DDS_UnsignedShortSeq_set_length(&sample->reading, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    if (!rapid::ValueSequence32Plugin_deserialize_sample(
            endpoint_data,
            &sample->values,
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
HydraSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::ext::arc::HydraSamplePlugin_deserialize_sample( 
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




RTIBool HydraSamplePlugin_skip(
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
    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            goto fin;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            goto fin;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            goto fin;
        }
    }
            

    if (!rapid::ValueSequence32Plugin_skip(
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
HydraSamplePlugin_get_serialized_sample_max_size(
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

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (89), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  rapid::ValueSequence32Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
HydraSamplePlugin_get_serialized_sample_min_size(
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

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0, RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0, RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0, RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  rapid::ValueSequence32Plugin_get_serialized_sample_min_size(
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
HydraSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const HydraSample * sample) 
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

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        current_alignment, 
        DDS_UnsignedShortSeq_get_length(&sample->sn),
        RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        current_alignment, 
        DDS_UnsignedShortSeq_get_length(&sample->cd),
        RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        current_alignment, 
        DDS_UnsignedShortSeq_get_length(&sample->reading),
        RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment += rapid::ValueSequence32Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->values);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
HydraSamplePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
HydraSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const HydraSample *sample, 
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
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool HydraSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *sample, 
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
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool HydraSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::ext::arc::HydraSamplePlugin_deserialize_key_sample(
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
HydraSamplePlugin_get_serialized_key_max_size(
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

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
HydraSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *sample,
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            goto fin;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            goto fin;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            goto fin;
        }
    }
            

    if (!rapid::ValueSequence32Plugin_skip(
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
HydraSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraSampleKeyHolder *dst, 
    const HydraSample *src)
{  
    if (!rapid::MessagePlugin_instance_to_key(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
HydraSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *dst, const
    HydraSampleKeyHolder *src)
{
    if (!rapid::MessagePlugin_key_to_instance(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
HydraSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const HydraSample *instance)
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

    if (!::rapid::ext::arc::HydraSamplePlugin_serialize_key(
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
HydraSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    HydraSample * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (HydraSample *)
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


    if (!::rapid::ext::arc::HydraSamplePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *HydraSamplePlugin_new(void) 
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
        ::rapid::ext::arc::HydraSamplePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::ext::arc::HydraSamplePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::ext::arc::HydraSamplePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::ext::arc::HydraSamplePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::ext::arc::HydraSamplePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        HydraSamplePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        HydraSamplePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::ext::arc::HydraSamplePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::ext::arc::HydraSamplePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::ext::arc::HydraSamplePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::ext::arc::HydraSamplePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        HydraSamplePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        HydraSamplePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::ext::arc::HydraSamplePlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::rapid::ext::arc::HydraSamplePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::rapid::ext::arc::HydraSamplePlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::rapid::ext::arc::HydraSamplePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::rapid::ext::arc::HydraSamplePlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::rapid::ext::arc::HydraSamplePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::rapid::ext::arc::HydraSamplePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        HydraSamplePlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        HydraSamplePlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::rapid::ext::arc::HydraSamplePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::rapid::ext::arc::HydraSamplePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::ext::arc::HydraSample_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        HydraSamplePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        HydraSamplePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::ext::arc::HydraSamplePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = HydraSampleTYPENAME;

    return plugin;
}

void
HydraSamplePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */
