
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RangeScanConfig.idl using "rtiddsgen".
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



#include "RangeScanConfigPlugin.h"


namespace rapid{

namespace ext{


/* ------------------------------------------------------------------------
   Enum Type: RangeScanDirection
 * ------------------------------------------------------------------------- */
 
/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */


RTIBool RangeScanDirectionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanDirection *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample,
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

    if(serialize_sample) {

        if (!RTICdrStream_serializeEnum(stream, sample))
        {
            return RTI_FALSE;
        }

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool 
RangeScanDirectionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanDirection *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
 
    DDS_Enum enum_tmp; 

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(deserialize_sample) {
 
        if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
        {
            return RTI_FALSE;
        }
        switch (enum_tmp) {

            case SCAN_HORIZONTAL:
                *sample=SCAN_HORIZONTAL;
                break;
            case SCAN_VERTICAL:
                *sample=SCAN_VERTICAL;
                break;
            default:
            {
                stream->_xTypesState.unassignable = RTI_TRUE;
                return RTI_FALSE;
            }
        }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool RangeScanDirectionPlugin_skip(
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

    if(skip_sample) {

        if (!RTICdrStream_skipEnum(stream)) {
            return RTI_FALSE;
        }


    }


    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int RangeScanDirectionPlugin_get_serialized_sample_max_size(
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

    current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);


    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }


    return current_alignment - initial_alignment;
}


unsigned int RangeScanDirectionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::RangeScanDirectionPlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


unsigned int
RangeScanDirectionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RangeScanDirection * sample) 
{
    unsigned int initial_alignment = current_alignment;

    if (sample) {} /* To avoid warnings */ 

    current_alignment += ::rapid::ext::RangeScanDirectionPlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}






/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */


RTIBool RangeScanDirectionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanDirection *sample, 
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::RangeScanDirectionPlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);
}


RTIBool RangeScanDirectionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanDirection *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::RangeScanDirectionPlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}


unsigned int RangeScanDirectionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::RangeScanDirectionPlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


RTIBool 
RangeScanDirectionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanDirection *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{    
    return ::rapid::ext::RangeScanDirectionPlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}

 
/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */


void RangeScanDirectionPluginSupport_print_data(
    const RangeScanDirection *sample,
    const char *description, int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILog_debug("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "RangeScanDirection", indent_level + 1);
}


/* --------------------------------------------------------------------------------------
 *  Type Transform3DSequence64
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

Transform3DSequence64*
Transform3DSequence64PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    Transform3DSequence64 *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, Transform3DSequence64);

    if(sample != NULL) {
        if (!::rapid::ext::Transform3DSequence64_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


Transform3DSequence64 *
Transform3DSequence64PluginSupport_create_data_ex(RTIBool allocate_pointers){
    Transform3DSequence64 *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, Transform3DSequence64);

    if(sample != NULL) {
        if (!::rapid::ext::Transform3DSequence64_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


Transform3DSequence64 *
Transform3DSequence64PluginSupport_create_data(void)
{
    return ::rapid::ext::Transform3DSequence64PluginSupport_create_data_ex(RTI_TRUE);
}


void 
Transform3DSequence64PluginSupport_destroy_data_w_params(
    Transform3DSequence64 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::Transform3DSequence64_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
Transform3DSequence64PluginSupport_destroy_data_ex(
    Transform3DSequence64 *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::Transform3DSequence64_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
Transform3DSequence64PluginSupport_destroy_data(
    Transform3DSequence64 *sample) {

    ::rapid::ext::Transform3DSequence64PluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
Transform3DSequence64PluginSupport_copy_data(
    Transform3DSequence64 *dst,
    const Transform3DSequence64 *src)
{
    return ::rapid::ext::Transform3DSequence64_copy(dst,src);
}


void 
Transform3DSequence64PluginSupport_print_data(
    const Transform3DSequence64 *sample,
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
                
        if (rapid::Transform3DSeq_get_contiguous_bufferI(sample) != NULL) {
            RTICdrType_printArray(
                rapid::Transform3DSeq_get_contiguous_bufferI(sample), 
                rapid::Transform3DSeq_get_length(sample),
                sizeof(rapid::Transform3D),
                (RTICdrTypePrintFunction)rapid::Transform3DPluginSupport_print_data,
                "", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                rapid::Transform3DSeq_get_discontiguous_bufferI(sample), 
                rapid::Transform3DSeq_get_length(sample),
                (RTICdrTypePrintFunction)rapid::Transform3DPluginSupport_print_data,
                "", indent_level + 1);
        }
    
    }
            


}

 


RTIBool 
Transform3DSequence64Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 *dst,
    const Transform3DSequence64 *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::Transform3DSequence64PluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
Transform3DSequence64Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
Transform3DSequence64Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Transform3DSequence64 *sample, 
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
    
    if (rapid::Transform3DSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::Transform3DSeq_get_contiguous_bufferI(sample),
            rapid::Transform3DSeq_get_length(sample),
            (64),
            sizeof(rapid::Transform3D),
            (RTICdrStreamSerializeFunction)rapid::Transform3DPlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::Transform3DSeq_get_discontiguous_bufferI(sample),
            rapid::Transform3DSeq_get_length(sample),
            (64),
            (RTICdrStreamSerializeFunction)rapid::Transform3DPlugin_serialize,
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
Transform3DSequence64Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 *sample,
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
        ::rapid::ext::Transform3DSequence64_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    {
        RTICdrUnsignedLong sequence_length;

        if (rapid::Transform3DSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::Transform3DSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::Transform3DSeq_get_maximum(sample),
                sizeof(rapid::Transform3D),
                (RTICdrStreamDeserializeFunction)rapid::Transform3DPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::Transform3DSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::Transform3DSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::Transform3DPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::Transform3DSeq_set_length(
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

 



RTIBool Transform3DSequence64Plugin_skip(
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
            sizeof(rapid::Transform3D),
            (RTICdrStreamSkipFunction)rapid::Transform3DPlugin_skip,
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
Transform3DSequence64Plugin_get_serialized_sample_max_size(
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
        current_alignment, (64),
        rapid::Transform3DPlugin_get_serialized_sample_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
Transform3DSequence64Plugin_get_serialized_sample_min_size(
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
        rapid::Transform3DPlugin_get_serialized_sample_min_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

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
Transform3DSequence64Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Transform3DSequence64 * sample) 
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


    if (rapid::Transform3DSeq_get_contiguous_bufferI(sample) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, rapid::Transform3DSeq_get_length(sample),
            sizeof(rapid::Transform3D),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::Transform3DPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            rapid::Transform3DSeq_get_contiguous_bufferI(sample),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment, rapid::Transform3DSeq_get_length(sample),
            sizeof(rapid::Transform3D),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::Transform3DPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)rapid::Transform3DSeq_get_discontiguous_bufferI(sample),
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
Transform3DSequence64Plugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
Transform3DSequence64Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Transform3DSequence64 *sample, 
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

    if (rapid::Transform3DSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::Transform3DSeq_get_contiguous_bufferI(sample),
            rapid::Transform3DSeq_get_length(sample),
            (64),
            sizeof(rapid::Transform3D),
            (RTICdrStreamSerializeFunction)rapid::Transform3DPlugin_serialize_key,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::Transform3DSeq_get_discontiguous_bufferI(sample),
            rapid::Transform3DSeq_get_length(sample),
            (64),
            (RTICdrStreamSerializeFunction)rapid::Transform3DPlugin_serialize_key,
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


RTIBool Transform3DSequence64Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 *sample, 
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

        if (rapid::Transform3DSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::Transform3DSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::Transform3DSeq_get_maximum(sample),
                sizeof(rapid::Transform3D),
                (RTICdrStreamDeserializeFunction)rapid::Transform3DPlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::Transform3DSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::Transform3DSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::Transform3DPlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::Transform3DSeq_set_length(
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
Transform3DSequence64Plugin_get_serialized_key_max_size(
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
        current_alignment, (64),
        rapid::Transform3DPlugin_get_serialized_key_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
Transform3DSequence64Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Transform3DSequence64 *sample,
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

        if (rapid::Transform3DSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::Transform3DSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::Transform3DSeq_get_maximum(sample),
                sizeof(rapid::Transform3D),
                (RTICdrStreamDeserializeFunction)rapid::Transform3DPlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::Transform3DSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::Transform3DSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::Transform3DPlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::Transform3DSeq_set_length(
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

/* --------------------------------------------------------------------------------------
 *  Type RangeScanConfig
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

RangeScanConfig*
RangeScanConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    RangeScanConfig *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, RangeScanConfig);

    if(sample != NULL) {
        if (!::rapid::ext::RangeScanConfig_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


RangeScanConfig *
RangeScanConfigPluginSupport_create_data_ex(RTIBool allocate_pointers){
    RangeScanConfig *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, RangeScanConfig);

    if(sample != NULL) {
        if (!::rapid::ext::RangeScanConfig_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


RangeScanConfig *
RangeScanConfigPluginSupport_create_data(void)
{
    return ::rapid::ext::RangeScanConfigPluginSupport_create_data_ex(RTI_TRUE);
}


void 
RangeScanConfigPluginSupport_destroy_data_w_params(
    RangeScanConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::RangeScanConfig_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
RangeScanConfigPluginSupport_destroy_data_ex(
    RangeScanConfig *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::RangeScanConfig_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
RangeScanConfigPluginSupport_destroy_data(
    RangeScanConfig *sample) {

    ::rapid::ext::RangeScanConfigPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
RangeScanConfigPluginSupport_copy_data(
    RangeScanConfig *dst,
    const RangeScanConfig *src)
{
    return ::rapid::ext::RangeScanConfig_copy(dst,src);
}


void 
RangeScanConfigPluginSupport_print_data(
    const RangeScanConfig *sample,
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

    rapid::String128PluginSupport_print_data(
        &sample->referenceFrame, "referenceFrame", indent_level + 1);
            

    rapid::ShortSequence64PluginSupport_print_data(
        &sample->scanLengths, "scanLengths", indent_level + 1);
            

    rapid::ext::RangeScanDirectionPluginSupport_print_data(
        &sample->scanDirection, "scanDirection", indent_level + 1);
            

    rapid::ShortSequence64PluginSupport_print_data(
        &sample->scanAzimuth, "scanAzimuth", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->scanAzimuthScale, "scanAzimuthScale", indent_level + 1);
            

    rapid::ShortSequence64PluginSupport_print_data(
        &sample->scanElevation, "scanElevation", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->scanElevationScale, "scanElevationScale", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->rangeScale, "rangeScale", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->intensityScale, "intensityScale", indent_level + 1);
            


}

RangeScanConfig *
RangeScanConfigPluginSupport_create_key_ex(RTIBool allocate_pointers){
    RangeScanConfig *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, RangeScanConfigKeyHolder);

    ::rapid::ext::RangeScanConfig_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


RangeScanConfig *
RangeScanConfigPluginSupport_create_key(void)
{
    return  ::rapid::ext::RangeScanConfigPluginSupport_create_key_ex(RTI_TRUE);
}


void 
RangeScanConfigPluginSupport_destroy_key_ex(
    RangeScanConfigKeyHolder *key,RTIBool deallocate_pointers)
{
    ::rapid::ext::RangeScanConfig_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
RangeScanConfigPluginSupport_destroy_key(
    RangeScanConfigKeyHolder *key) {

  ::rapid::ext::RangeScanConfigPluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
RangeScanConfigPlugin_on_participant_attached(
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
RangeScanConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
RangeScanConfigPlugin_on_endpoint_attached(
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
            ::rapid::ext::RangeScanConfigPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::ext::RangeScanConfigPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::rapid::ext::RangeScanConfigPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::rapid::ext::RangeScanConfigPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::rapid::ext::RangeScanConfigPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::ext::RangeScanConfigPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::ext::RangeScanConfigPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::ext::RangeScanConfigPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
RangeScanConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
RangeScanConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *sample,
    void *handle)
{
    
    RangeScanConfig_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
RangeScanConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *dst,
    const RangeScanConfig *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::RangeScanConfigPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
RangeScanConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
RangeScanConfigPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanConfig *sample, 
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
    if (!rapid::String128Plugin_serialize(
            endpoint_data,
            &sample->referenceFrame, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64Plugin_serialize(
            endpoint_data,
            &sample->scanLengths, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::RangeScanDirectionPlugin_serialize(
            endpoint_data,
            &sample->scanDirection, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64Plugin_serialize(
            endpoint_data,
            &sample->scanAzimuth, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->scanAzimuthScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence64Plugin_serialize(
            endpoint_data,
            &sample->scanElevation, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->scanElevationScale)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->rangeScale)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->intensityScale)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
RangeScanConfigPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *sample,
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
        ::rapid::ext::RangeScanConfig_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
            if (!rapid::MessagePlugin_deserialize_sample(endpoint_data,( rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!rapid::String128Plugin_deserialize_sample(
            endpoint_data,
            &sample->referenceFrame,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_deserialize_sample(
            endpoint_data,
            &sample->scanLengths,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::RangeScanDirectionPlugin_deserialize_sample(
            endpoint_data,
            &sample->scanDirection,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_deserialize_sample(
            endpoint_data,
            &sample->scanAzimuth,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->scanAzimuthScale)) {
        goto fin;
    }

    if (!rapid::ShortSequence64Plugin_deserialize_sample(
            endpoint_data,
            &sample->scanElevation,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->scanElevationScale)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->rangeScale)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->intensityScale)) {
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
RangeScanConfigPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::ext::RangeScanConfigPlugin_deserialize_sample( 
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




RTIBool RangeScanConfigPlugin_skip(
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
    if (!rapid::String128Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::RangeScanDirectionPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
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
RangeScanConfigPlugin_get_serialized_sample_max_size(
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

    current_alignment +=  rapid::String128Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ShortSequence64Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::RangeScanDirectionPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ShortSequence64Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ShortSequence64Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
RangeScanConfigPlugin_get_serialized_sample_min_size(
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

    current_alignment +=  rapid::String128Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ShortSequence64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::RangeScanDirectionPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ShortSequence64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ShortSequence64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

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
RangeScanConfigPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RangeScanConfig * sample) 
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

    current_alignment += rapid::String128Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->referenceFrame);
            

    current_alignment += rapid::ShortSequence64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->scanLengths);
            

    current_alignment += rapid::ext::RangeScanDirectionPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->scanDirection);
            

    current_alignment += rapid::ShortSequence64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->scanAzimuth);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::ShortSequence64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->scanElevation);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
RangeScanConfigPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
RangeScanConfigPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RangeScanConfig *sample, 
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


RTIBool RangeScanConfigPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *sample, 
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


 
RTIBool RangeScanConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::ext::RangeScanConfigPlugin_deserialize_key_sample(
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
RangeScanConfigPlugin_get_serialized_key_max_size(
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
RangeScanConfigPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *sample,
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

    if (!rapid::String128Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::RangeScanDirectionPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
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
RangeScanConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfigKeyHolder *dst, 
    const RangeScanConfig *src)
{  
    if (!rapid::MessagePlugin_instance_to_key(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
RangeScanConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RangeScanConfig *dst, const
    RangeScanConfigKeyHolder *src)
{
    if (!rapid::MessagePlugin_key_to_instance(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
RangeScanConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RangeScanConfig *instance)
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

    if (!::rapid::ext::RangeScanConfigPlugin_serialize_key(
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
RangeScanConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RangeScanConfig * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (RangeScanConfig *)
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


    if (!::rapid::ext::RangeScanConfigPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *RangeScanConfigPlugin_new(void) 
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
        ::rapid::ext::RangeScanConfigPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::ext::RangeScanConfigPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::ext::RangeScanConfigPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::ext::RangeScanConfigPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::ext::RangeScanConfigPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        RangeScanConfigPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        RangeScanConfigPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::ext::RangeScanConfigPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::ext::RangeScanConfigPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::ext::RangeScanConfigPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::ext::RangeScanConfigPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        RangeScanConfigPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        RangeScanConfigPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::ext::RangeScanConfigPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::rapid::ext::RangeScanConfigPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::rapid::ext::RangeScanConfigPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::rapid::ext::RangeScanConfigPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::rapid::ext::RangeScanConfigPlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::rapid::ext::RangeScanConfigPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::rapid::ext::RangeScanConfigPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        RangeScanConfigPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        RangeScanConfigPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::rapid::ext::RangeScanConfigPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::rapid::ext::RangeScanConfigPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::ext::RangeScanConfig_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        RangeScanConfigPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        RangeScanConfigPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::ext::RangeScanConfigPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = RangeScanConfigTYPENAME;

    return plugin;
}

void
RangeScanConfigPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace ext */

} /* namespace rapid */
