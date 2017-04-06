
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeState.idl using "rtiddsgen".
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



#include "NoticeStatePlugin.h"


namespace rapid{

namespace ext{

namespace traclabs{

/* --------------------------------------------------------------------------------------
 *  Type ModalityTypes
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

ModalityTypes*
ModalityTypesPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    ModalityTypes *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, ModalityTypes);

    if(sample != NULL) {
        if (!::rapid::ext::traclabs::ModalityTypes_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


ModalityTypes *
ModalityTypesPluginSupport_create_data_ex(RTIBool allocate_pointers){
    ModalityTypes *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, ModalityTypes);

    if(sample != NULL) {
        if (!::rapid::ext::traclabs::ModalityTypes_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


ModalityTypes *
ModalityTypesPluginSupport_create_data(void)
{
    return ::rapid::ext::traclabs::ModalityTypesPluginSupport_create_data_ex(RTI_TRUE);
}


void 
ModalityTypesPluginSupport_destroy_data_w_params(
    ModalityTypes *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::traclabs::ModalityTypes_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
ModalityTypesPluginSupport_destroy_data_ex(
    ModalityTypes *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::traclabs::ModalityTypes_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
ModalityTypesPluginSupport_destroy_data(
    ModalityTypes *sample) {

    ::rapid::ext::traclabs::ModalityTypesPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
ModalityTypesPluginSupport_copy_data(
    ModalityTypes *dst,
    const ModalityTypes *src)
{
    return ::rapid::ext::traclabs::ModalityTypes_copy(dst,src);
}


void 
ModalityTypesPluginSupport_print_data(
    const ModalityTypes *sample,
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


    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug(": NULL\n");    
    } else {
                
        if (rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample) != NULL) {
            RTICdrType_printArray(
                rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample), 
                rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
                sizeof(rapid::ext::traclabs::ModalityType),
                (RTICdrTypePrintFunction)rapid::ext::traclabs::ModalityTypePluginSupport_print_data,
                "", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                rapid::ext::traclabs::ModalityTypeSeq_get_discontiguous_bufferI(sample), 
                rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
                (RTICdrTypePrintFunction)rapid::ext::traclabs::ModalityTypePluginSupport_print_data,
                "", indent_level + 1);
        }
    
    }
            


}

 


RTIBool 
ModalityTypesPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes *dst,
    const ModalityTypes *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::traclabs::ModalityTypesPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
ModalityTypesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
ModalityTypesPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ModalityTypes *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
    
    if (rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample),
            rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
            (8),
            sizeof(rapid::ext::traclabs::ModalityType),
            (RTICdrStreamSerializeFunction)rapid::ext::traclabs::ModalityTypePlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::ext::traclabs::ModalityTypeSeq_get_discontiguous_bufferI(sample),
            rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
            (8),
            (RTICdrStreamSerializeFunction)rapid::ext::traclabs::ModalityTypePlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
ModalityTypesPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
        ::rapid::ext::traclabs::ModalityTypes_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    {
        RTICdrUnsignedLong sequence_length;

        if (rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::traclabs::ModalityTypeSeq_get_maximum(sample),
                sizeof(rapid::ext::traclabs::ModalityType),
                (RTICdrStreamDeserializeFunction)rapid::ext::traclabs::ModalityTypePlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::traclabs::ModalityTypeSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::traclabs::ModalityTypeSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::traclabs::ModalityTypePlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::traclabs::ModalityTypeSeq_set_length(
            sample, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 



RTIBool ModalityTypesPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipNonPrimitiveSequence(
            stream,
            &sequence_length,
            sizeof(rapid::ext::traclabs::ModalityType),
            (RTICdrStreamSkipFunction)rapid::ext::traclabs::ModalityTypePlugin_skip,
            RTI_FALSE,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }
            


    }
    

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
ModalityTypesPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (8),
        rapid::ext::traclabs::ModalityTypePlugin_get_serialized_sample_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
ModalityTypesPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        rapid::ext::traclabs::ModalityTypePlugin_get_serialized_sample_min_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

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
ModalityTypesPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ModalityTypes * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (sample) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    if (rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
            sizeof(rapid::ext::traclabs::ModalityType),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::ext::traclabs::ModalityTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment, rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
            sizeof(rapid::ext::traclabs::ModalityType),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::ext::traclabs::ModalityTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)rapid::ext::traclabs::ModalityTypeSeq_get_discontiguous_bufferI(sample),
            endpoint_data);
    }
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
ModalityTypesPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
ModalityTypesPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ModalityTypes *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample),
            rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
            (8),
            sizeof(rapid::ext::traclabs::ModalityType),
            (RTICdrStreamSerializeFunction)rapid::ext::traclabs::ModalityTypePlugin_serialize_key,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::ext::traclabs::ModalityTypeSeq_get_discontiguous_bufferI(sample),
            rapid::ext::traclabs::ModalityTypeSeq_get_length(sample),
            (8),
            (RTICdrStreamSerializeFunction)rapid::ext::traclabs::ModalityTypePlugin_serialize_key,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool ModalityTypesPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    {
        RTICdrUnsignedLong sequence_length;

        if (rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::traclabs::ModalityTypeSeq_get_maximum(sample),
                sizeof(rapid::ext::traclabs::ModalityType),
                (RTICdrStreamDeserializeFunction)rapid::ext::traclabs::ModalityTypePlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::traclabs::ModalityTypeSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::traclabs::ModalityTypeSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::traclabs::ModalityTypePlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::traclabs::ModalityTypeSeq_set_length(
            sample, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





unsigned int
ModalityTypesPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;


    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (8),
        rapid::ext::traclabs::ModalityTypePlugin_get_serialized_key_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
ModalityTypesPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ModalityTypes *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    {
        RTICdrUnsignedLong sequence_length;

        if (rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::traclabs::ModalityTypeSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::traclabs::ModalityTypeSeq_get_maximum(sample),
                sizeof(rapid::ext::traclabs::ModalityType),
                (RTICdrStreamDeserializeFunction)rapid::ext::traclabs::ModalityTypePlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::traclabs::ModalityTypeSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::traclabs::ModalityTypeSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::traclabs::ModalityTypePlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::traclabs::ModalityTypeSeq_set_length(
            sample, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */

/**

 * NoticeState represents the current state of

 * of all published notice items. The data type is keyed

 * on itemId, so each notice item represents a separate instance.

 */

/* --------------------------------------------------------------------------------------
 *  Type NoticeState
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NoticeState*
NoticeStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    NoticeState *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, NoticeState);

    if(sample != NULL) {
        if (!::rapid::ext::traclabs::NoticeState_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


NoticeState *
NoticeStatePluginSupport_create_data_ex(RTIBool allocate_pointers){
    NoticeState *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, NoticeState);

    if(sample != NULL) {
        if (!::rapid::ext::traclabs::NoticeState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


NoticeState *
NoticeStatePluginSupport_create_data(void)
{
    return ::rapid::ext::traclabs::NoticeStatePluginSupport_create_data_ex(RTI_TRUE);
}


void 
NoticeStatePluginSupport_destroy_data_w_params(
    NoticeState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::traclabs::NoticeState_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
NoticeStatePluginSupport_destroy_data_ex(
    NoticeState *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::traclabs::NoticeState_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
NoticeStatePluginSupport_destroy_data(
    NoticeState *sample) {

    ::rapid::ext::traclabs::NoticeStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
NoticeStatePluginSupport_copy_data(
    NoticeState *dst,
    const NoticeState *src)
{
    return ::rapid::ext::traclabs::NoticeState_copy(dst,src);
}


void 
NoticeStatePluginSupport_print_data(
    const NoticeState *sample,
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

/** what notice relates to (ie. ESTOP) */

    rapid::String16PluginSupport_print_data(
        &sample->itemId, "itemId", indent_level + 1);
            

/** unique for each notice */

    rapid::String16PluginSupport_print_data(
        &sample->noticeId, "noticeId", indent_level + 1);
            

    rapid::ext::traclabs::LatencyTypePluginSupport_print_data(
        &sample->latency, "latency", indent_level + 1);
            

    rapid::ext::traclabs::FocusOfAttentionTypePluginSupport_print_data(
        &sample->foa, "foa", indent_level + 1);
            

    rapid::ext::traclabs::ModalityTypesPluginSupport_print_data(
        &sample->modalities, "modalities", indent_level + 1);
            

/** how long notice should remain active, in seconds */

    RTICdrType_printLong(
        &sample->timeout, "timeout", indent_level + 1);
            

/** acknowledgement state of notice */

    rapid::ext::traclabs::NoticeAckStatePluginSupport_print_data(
        &sample->ackState, "ackState", indent_level + 1);
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    rapid::String64PluginSupport_print_data(
        &sample->ackTarget, "ackTarget", indent_level + 1);
            

    rapid::String64PluginSupport_print_data(
        &sample->subject, "subject", indent_level + 1);
            

    rapid::String128PluginSupport_print_data(
        &sample->body, "body", indent_level + 1);
            

/** extension data */

    rapid::ValueSequence16PluginSupport_print_data(
        &sample->values, "values", indent_level + 1);
            


}

NoticeState *
NoticeStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
    NoticeState *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, NoticeStateKeyHolder);

    ::rapid::ext::traclabs::NoticeState_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


NoticeState *
NoticeStatePluginSupport_create_key(void)
{
    return  ::rapid::ext::traclabs::NoticeStatePluginSupport_create_key_ex(RTI_TRUE);
}


void 
NoticeStatePluginSupport_destroy_key_ex(
    NoticeStateKeyHolder *key,RTIBool deallocate_pointers)
{
    ::rapid::ext::traclabs::NoticeState_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
NoticeStatePluginSupport_destroy_key(
    NoticeStateKeyHolder *key) {

  ::rapid::ext::traclabs::NoticeStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
NoticeStatePlugin_on_participant_attached(
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
NoticeStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
NoticeStatePlugin_on_endpoint_attached(
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
            ::rapid::ext::traclabs::NoticeStatePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::ext::traclabs::NoticeStatePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::rapid::ext::traclabs::NoticeStatePluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::rapid::ext::traclabs::NoticeStatePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
NoticeStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
NoticeStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *sample,
    void *handle)
{
    
    NoticeState_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
NoticeStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *dst,
    const NoticeState *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::traclabs::NoticeStatePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
NoticeStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
NoticeStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeState *sample, 
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
/** what notice relates to (ie. ESTOP) */

    if (!rapid::String16Plugin_serialize(
            endpoint_data,
            &sample->itemId, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

/** unique for each notice */

    if (!rapid::String16Plugin_serialize(
            endpoint_data,
            &sample->noticeId, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::LatencyTypePlugin_serialize(
            endpoint_data,
            &sample->latency, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::FocusOfAttentionTypePlugin_serialize(
            endpoint_data,
            &sample->foa, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::traclabs::ModalityTypesPlugin_serialize(
            endpoint_data,
            &sample->modalities, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

/** how long notice should remain active, in seconds */

    if (!RTICdrStream_serializeLong(
        stream, &sample->timeout)) {
        return RTI_FALSE;
    }
            

/** acknowledgement state of notice */

    if (!rapid::ext::traclabs::NoticeAckStatePlugin_serialize(
            endpoint_data,
            &sample->ackState, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    if (!rapid::String64Plugin_serialize(
            endpoint_data,
            &sample->ackTarget, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String64Plugin_serialize(
            endpoint_data,
            &sample->subject, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String128Plugin_serialize(
            endpoint_data,
            &sample->body, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

/** extension data */

    if (!rapid::ValueSequence16Plugin_serialize(
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
NoticeStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *sample,
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
        ::rapid::ext::traclabs::NoticeState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
            if (!rapid::MessagePlugin_deserialize_sample(endpoint_data,( rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
/** what notice relates to (ie. ESTOP) */

    if (!rapid::String16Plugin_deserialize_sample(
            endpoint_data,
            &sample->itemId,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/** unique for each notice */

    if (!rapid::String16Plugin_deserialize_sample(
            endpoint_data,
            &sample->noticeId,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::LatencyTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->latency,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::FocusOfAttentionTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->foa,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::ModalityTypesPlugin_deserialize_sample(
            endpoint_data,
            &sample->modalities,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/** how long notice should remain active, in seconds */

    if (!RTICdrStream_deserializeLong(
        stream, &sample->timeout)) {
        goto fin;
    }

/** acknowledgement state of notice */

    if (!rapid::ext::traclabs::NoticeAckStatePlugin_deserialize_sample(
            endpoint_data,
            &sample->ackState,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    if (!rapid::String64Plugin_deserialize_sample(
            endpoint_data,
            &sample->ackTarget,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String64Plugin_deserialize_sample(
            endpoint_data,
            &sample->subject,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String128Plugin_deserialize_sample(
            endpoint_data,
            &sample->body,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/** extension data */

    if (!rapid::ValueSequence16Plugin_deserialize_sample(
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
NoticeStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::ext::traclabs::NoticeStatePlugin_deserialize_sample( 
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




RTIBool NoticeStatePlugin_skip(
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
/** what notice relates to (ie. ESTOP) */

    if (!rapid::String16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/** unique for each notice */

    if (!rapid::String16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::LatencyTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::FocusOfAttentionTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::ModalityTypesPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/** how long notice should remain active, in seconds */

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

/** acknowledgement state of notice */

    if (!rapid::ext::traclabs::NoticeAckStatePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    if (!rapid::String64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String128Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

/** extension data */

    if (!rapid::ValueSequence16Plugin_skip(
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
NoticeStatePlugin_get_serialized_sample_max_size(
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

/** what notice relates to (ie. ESTOP) */

    current_alignment +=  rapid::String16Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/** unique for each notice */

    current_alignment +=  rapid::String16Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::traclabs::LatencyTypePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::traclabs::FocusOfAttentionTypePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::traclabs::ModalityTypesPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/** how long notice should remain active, in seconds */

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

/** acknowledgement state of notice */

    current_alignment +=  rapid::ext::traclabs::NoticeAckStatePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::String128Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/** extension data */

    current_alignment +=  rapid::ValueSequence16Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
NoticeStatePlugin_get_serialized_sample_min_size(
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

/** what notice relates to (ie. ESTOP) */

    current_alignment +=  rapid::String16Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/** unique for each notice */

    current_alignment +=  rapid::String16Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::traclabs::LatencyTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::traclabs::FocusOfAttentionTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::traclabs::ModalityTypesPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/** how long notice should remain active, in seconds */

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

/** acknowledgement state of notice */

    current_alignment +=  rapid::ext::traclabs::NoticeAckStatePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::String128Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

/** extension data */

    current_alignment +=  rapid::ValueSequence16Plugin_get_serialized_sample_min_size(
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
NoticeStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const NoticeState * sample) 
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

/** what notice relates to (ie. ESTOP) */

    current_alignment += rapid::String16Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->itemId);
            

/** unique for each notice */

    current_alignment += rapid::String16Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->noticeId);
            

    current_alignment += rapid::ext::traclabs::LatencyTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->latency);
            

    current_alignment += rapid::ext::traclabs::FocusOfAttentionTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->foa);
            

    current_alignment += rapid::ext::traclabs::ModalityTypesPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->modalities);
            

/** how long notice should remain active, in seconds */

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

/** acknowledgement state of notice */

    current_alignment += rapid::ext::traclabs::NoticeAckStatePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->ackState);
            

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    current_alignment += rapid::String64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->ackTarget);
            

    current_alignment += rapid::String64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->subject);
            

    current_alignment += rapid::String128Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->body);
            

/** extension data */

    current_alignment += rapid::ValueSequence16Plugin_get_serialized_sample_size(
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
NoticeStatePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
NoticeStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const NoticeState *sample, 
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
    if (!rapid::String16Plugin_serialize_key(
            endpoint_data,
            &sample->itemId, 
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


RTIBool NoticeStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *sample, 
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
    if (!rapid::String16Plugin_deserialize_key_sample(
            endpoint_data,
            &sample->itemId,
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


 
RTIBool NoticeStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::ext::traclabs::NoticeStatePlugin_deserialize_key_sample(
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
NoticeStatePlugin_get_serialized_key_max_size(
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

    current_alignment +=  rapid::String16Plugin_get_serialized_key_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
NoticeStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *sample,
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

    if (!rapid::String16Plugin_serialized_sample_to_key(
            endpoint_data,
            &sample->itemId,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::LatencyTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::FocusOfAttentionTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::ModalityTypesPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!rapid::ext::traclabs::NoticeAckStatePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::String128Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ValueSequence16Plugin_skip(
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
NoticeStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    NoticeStateKeyHolder *dst, 
    const NoticeState *src)
{  
    if (!rapid::MessagePlugin_instance_to_key(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    if (!rapid::String16_copy(
        &dst->itemId, &src->itemId)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
NoticeStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    NoticeState *dst, const
    NoticeStateKeyHolder *src)
{
    if (!rapid::MessagePlugin_key_to_instance(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    if (!rapid::String16_copy(
        &dst->itemId, &src->itemId)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
NoticeStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const NoticeState *instance)
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

    if (!::rapid::ext::traclabs::NoticeStatePlugin_serialize_key(
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
NoticeStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    NoticeState * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (NoticeState *)
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

    if (!rapid::String16Plugin_serialized_sample_to_key(
            endpoint_data,
            &sample->itemId,
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


    if (!::rapid::ext::traclabs::NoticeStatePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *NoticeStatePlugin_new(void) 
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
        ::rapid::ext::traclabs::NoticeStatePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::ext::traclabs::NoticeStatePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::ext::traclabs::NoticeStatePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::ext::traclabs::NoticeStatePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        NoticeStatePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        NoticeStatePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        NoticeStatePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        NoticeStatePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        NoticeStatePlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        NoticeStatePlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::ext::traclabs::NoticeState_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        NoticeStatePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        NoticeStatePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::ext::traclabs::NoticeStatePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = NoticeStateTYPENAME;

    return plugin;
}

void
NoticeStatePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */
