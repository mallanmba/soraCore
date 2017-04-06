
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryMeshSample.idl using "rtiddsgen".
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



#include "GeometryMeshSamplePlugin.h"


namespace rapid{

namespace ext{

namespace arc{


/* ------------------------------------------------------------------------
   Enum Type: GeometryIndexMode
 * ------------------------------------------------------------------------- */
 
/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */


RTIBool GeometryIndexModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexMode *sample,
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
GeometryIndexModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexMode *sample,
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

            case GIM_TRIANGLES:
                *sample=GIM_TRIANGLES;
                break;
            case GIM_TRISTRIP:
                *sample=GIM_TRISTRIP;
                break;
            case GIM_TRIFAN:
                *sample=GIM_TRIFAN;
                break;
            case GIM_QUADS:
                *sample=GIM_QUADS;
                break;
            case GIM_LINES:
                *sample=GIM_LINES;
                break;
            case GIM_LINE_STRIP:
                *sample=GIM_LINE_STRIP;
                break;
            case GIM_LINE_LOOP:
                *sample=GIM_LINE_LOOP;
                break;
            case GIM_POINTS:
                *sample=GIM_POINTS;
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


RTIBool GeometryIndexModePlugin_skip(
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


unsigned int GeometryIndexModePlugin_get_serialized_sample_max_size(
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


unsigned int GeometryIndexModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::arc::GeometryIndexModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


unsigned int
GeometryIndexModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryIndexMode * sample) 
{
    unsigned int initial_alignment = current_alignment;

    if (sample) {} /* To avoid warnings */ 

    current_alignment += ::rapid::ext::arc::GeometryIndexModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}






/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */


RTIBool GeometryIndexModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::arc::GeometryIndexModePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);
}


RTIBool GeometryIndexModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::arc::GeometryIndexModePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}


unsigned int GeometryIndexModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::arc::GeometryIndexModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


RTIBool 
GeometryIndexModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{    
    return ::rapid::ext::arc::GeometryIndexModePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}

 
/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */


void GeometryIndexModePluginSupport_print_data(
    const GeometryIndexMode *sample,
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

    RTICdrType_printEnum((RTICdrEnum *)sample, "GeometryIndexMode", indent_level + 1);
}


/* --------------------------------------------------------------------------------------
 *  Type GeometryIndexModeSequence32
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

GeometryIndexModeSequence32*
GeometryIndexModeSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    GeometryIndexModeSequence32 *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, GeometryIndexModeSequence32);

    if(sample != NULL) {
        if (!::rapid::ext::arc::GeometryIndexModeSequence32_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


GeometryIndexModeSequence32 *
GeometryIndexModeSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers){
    GeometryIndexModeSequence32 *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, GeometryIndexModeSequence32);

    if(sample != NULL) {
        if (!::rapid::ext::arc::GeometryIndexModeSequence32_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


GeometryIndexModeSequence32 *
GeometryIndexModeSequence32PluginSupport_create_data(void)
{
    return ::rapid::ext::arc::GeometryIndexModeSequence32PluginSupport_create_data_ex(RTI_TRUE);
}


void 
GeometryIndexModeSequence32PluginSupport_destroy_data_w_params(
    GeometryIndexModeSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::GeometryIndexModeSequence32_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
GeometryIndexModeSequence32PluginSupport_destroy_data_ex(
    GeometryIndexModeSequence32 *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::GeometryIndexModeSequence32_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
GeometryIndexModeSequence32PluginSupport_destroy_data(
    GeometryIndexModeSequence32 *sample) {

    ::rapid::ext::arc::GeometryIndexModeSequence32PluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
GeometryIndexModeSequence32PluginSupport_copy_data(
    GeometryIndexModeSequence32 *dst,
    const GeometryIndexModeSequence32 *src)
{
    return ::rapid::ext::arc::GeometryIndexModeSequence32_copy(dst,src);
}


void 
GeometryIndexModeSequence32PluginSupport_print_data(
    const GeometryIndexModeSequence32 *sample,
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
                
        if (rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample) != NULL) {
            RTICdrType_printArray(
                rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample), 
                rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
                sizeof(rapid::ext::arc::GeometryIndexMode),
                (RTICdrTypePrintFunction)rapid::ext::arc::GeometryIndexModePluginSupport_print_data,
                "", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                rapid::ext::arc::GeometryIndexModeSeq_get_discontiguous_bufferI(sample), 
                rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
                (RTICdrTypePrintFunction)rapid::ext::arc::GeometryIndexModePluginSupport_print_data,
                "", indent_level + 1);
        }
    
    }
            


}

 


RTIBool 
GeometryIndexModeSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 *dst,
    const GeometryIndexModeSequence32 *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::GeometryIndexModeSequence32PluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
GeometryIndexModeSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
GeometryIndexModeSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexModeSequence32 *sample, 
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
    
    if (rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample),
            rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
            (32),
            sizeof(rapid::ext::arc::GeometryIndexMode),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::GeometryIndexModePlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::ext::arc::GeometryIndexModeSeq_get_discontiguous_bufferI(sample),
            rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
            (32),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::GeometryIndexModePlugin_serialize,
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
GeometryIndexModeSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 *sample,
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
        ::rapid::ext::arc::GeometryIndexModeSequence32_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    {
        RTICdrUnsignedLong sequence_length;

        if (rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::GeometryIndexModeSeq_get_maximum(sample),
                sizeof(rapid::ext::arc::GeometryIndexMode),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::GeometryIndexModePlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::arc::GeometryIndexModeSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::GeometryIndexModeSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::GeometryIndexModePlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::arc::GeometryIndexModeSeq_set_length(
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

 



RTIBool GeometryIndexModeSequence32Plugin_skip(
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
            sizeof(rapid::ext::arc::GeometryIndexMode),
            (RTICdrStreamSkipFunction)rapid::ext::arc::GeometryIndexModePlugin_skip,
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
GeometryIndexModeSequence32Plugin_get_serialized_sample_max_size(
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
        current_alignment, (32),
        rapid::ext::arc::GeometryIndexModePlugin_get_serialized_sample_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
GeometryIndexModeSequence32Plugin_get_serialized_sample_min_size(
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
        rapid::ext::arc::GeometryIndexModePlugin_get_serialized_sample_min_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

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
GeometryIndexModeSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryIndexModeSequence32 * sample) 
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


    if (rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
            sizeof(rapid::ext::arc::GeometryIndexMode),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::ext::arc::GeometryIndexModePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment, rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
            sizeof(rapid::ext::arc::GeometryIndexMode),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::ext::arc::GeometryIndexModePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)rapid::ext::arc::GeometryIndexModeSeq_get_discontiguous_bufferI(sample),
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
GeometryIndexModeSequence32Plugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
GeometryIndexModeSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryIndexModeSequence32 *sample, 
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

    if (rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample),
            rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
            (32),
            sizeof(rapid::ext::arc::GeometryIndexMode),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::GeometryIndexModePlugin_serialize_key,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::ext::arc::GeometryIndexModeSeq_get_discontiguous_bufferI(sample),
            rapid::ext::arc::GeometryIndexModeSeq_get_length(sample),
            (32),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::GeometryIndexModePlugin_serialize_key,
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


RTIBool GeometryIndexModeSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 *sample, 
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

        if (rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::GeometryIndexModeSeq_get_maximum(sample),
                sizeof(rapid::ext::arc::GeometryIndexMode),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::GeometryIndexModePlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::arc::GeometryIndexModeSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::GeometryIndexModeSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::GeometryIndexModePlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::arc::GeometryIndexModeSeq_set_length(
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
GeometryIndexModeSequence32Plugin_get_serialized_key_max_size(
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
        current_alignment, (32),
        rapid::ext::arc::GeometryIndexModePlugin_get_serialized_key_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
GeometryIndexModeSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryIndexModeSequence32 *sample,
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

        if (rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::arc::GeometryIndexModeSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::GeometryIndexModeSeq_get_maximum(sample),
                sizeof(rapid::ext::arc::GeometryIndexMode),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::GeometryIndexModePlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::arc::GeometryIndexModeSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::GeometryIndexModeSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::GeometryIndexModePlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::arc::GeometryIndexModeSeq_set_length(
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
 *  Type IndexSequence256K
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

IndexSequence256K*
IndexSequence256KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    IndexSequence256K *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, IndexSequence256K);

    if(sample != NULL) {
        if (!::rapid::ext::arc::IndexSequence256K_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


IndexSequence256K *
IndexSequence256KPluginSupport_create_data_ex(RTIBool allocate_pointers){
    IndexSequence256K *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, IndexSequence256K);

    if(sample != NULL) {
        if (!::rapid::ext::arc::IndexSequence256K_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


IndexSequence256K *
IndexSequence256KPluginSupport_create_data(void)
{
    return ::rapid::ext::arc::IndexSequence256KPluginSupport_create_data_ex(RTI_TRUE);
}


void 
IndexSequence256KPluginSupport_destroy_data_w_params(
    IndexSequence256K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::IndexSequence256K_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
IndexSequence256KPluginSupport_destroy_data_ex(
    IndexSequence256K *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::IndexSequence256K_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
IndexSequence256KPluginSupport_destroy_data(
    IndexSequence256K *sample) {

    ::rapid::ext::arc::IndexSequence256KPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
IndexSequence256KPluginSupport_copy_data(
    IndexSequence256K *dst,
    const IndexSequence256K *src)
{
    return ::rapid::ext::arc::IndexSequence256K_copy(dst,src);
}


void 
IndexSequence256KPluginSupport_print_data(
    const IndexSequence256K *sample,
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
    
        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(sample) != NULL) {
            RTICdrType_printArray(
                DDS_UnsignedShortSeq_get_contiguous_bufferI(sample),
                DDS_UnsignedShortSeq_get_length(sample),
                RTI_CDR_UNSIGNED_SHORT_SIZE,
                (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
                "", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                DDS_UnsignedShortSeq_get_discontiguous_bufferI(sample),
                DDS_UnsignedShortSeq_get_length(sample),
               (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
               "", indent_level + 1);
        }
    
    }
            


}

 


RTIBool 
IndexSequence256KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K *dst,
    const IndexSequence256K *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::IndexSequence256KPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
IndexSequence256KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
IndexSequence256KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const IndexSequence256K *sample, 
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
    
    if (DDS_UnsignedShortSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_UnsignedShortSeq_get_contiguous_bufferI(sample),
            DDS_UnsignedShortSeq_get_length(sample),
            (262144),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(sample),
            DDS_UnsignedShortSeq_get_length(sample),
            (262144),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
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
IndexSequence256KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K *sample,
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
        ::rapid::ext::arc::IndexSequence256K_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    {
        RTICdrUnsignedLong sequence_length;

        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_UnsignedShortSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(sample),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(sample),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            }
        }
        if (!DDS_UnsignedShortSeq_set_length(sample, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 



RTIBool IndexSequence256KPlugin_skip(
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

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
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
IndexSequence256KPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (262144), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
IndexSequence256KPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0, RTI_CDR_UNSIGNED_SHORT_TYPE);
            

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
IndexSequence256KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const IndexSequence256K * sample) 
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


    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        current_alignment, 
        DDS_UnsignedShortSeq_get_length(sample),
        RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
IndexSequence256KPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
IndexSequence256KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const IndexSequence256K *sample, 
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

    if (DDS_UnsignedShortSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_UnsignedShortSeq_get_contiguous_bufferI(sample),
            DDS_UnsignedShortSeq_get_length(sample),
            (262144),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(sample),
            DDS_UnsignedShortSeq_get_length(sample),
            (262144),
            RTI_CDR_UNSIGNED_SHORT_TYPE)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool IndexSequence256KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K *sample, 
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

        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_UnsignedShortSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(sample),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(sample),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            }
        }
        if (!DDS_UnsignedShortSeq_set_length(sample, sequence_length)) {
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
IndexSequence256KPlugin_get_serialized_key_max_size(
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
        

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (262144), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
IndexSequence256KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    IndexSequence256K *sample,
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

        if (DDS_UnsignedShortSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_UnsignedShortSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(sample),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_UnsignedShortSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                DDS_UnsignedShortSeq_get_maximum(sample),
                RTI_CDR_UNSIGNED_SHORT_TYPE)) {
                return RTI_FALSE;
            }
        }
        if (!DDS_UnsignedShortSeq_set_length(sample, sequence_length)) {
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
 *  Type OctetSequence170K
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

OctetSequence170K*
OctetSequence170KPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    OctetSequence170K *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, OctetSequence170K);

    if(sample != NULL) {
        if (!::rapid::ext::arc::OctetSequence170K_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


OctetSequence170K *
OctetSequence170KPluginSupport_create_data_ex(RTIBool allocate_pointers){
    OctetSequence170K *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, OctetSequence170K);

    if(sample != NULL) {
        if (!::rapid::ext::arc::OctetSequence170K_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


OctetSequence170K *
OctetSequence170KPluginSupport_create_data(void)
{
    return ::rapid::ext::arc::OctetSequence170KPluginSupport_create_data_ex(RTI_TRUE);
}


void 
OctetSequence170KPluginSupport_destroy_data_w_params(
    OctetSequence170K *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::OctetSequence170K_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
OctetSequence170KPluginSupport_destroy_data_ex(
    OctetSequence170K *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::OctetSequence170K_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
OctetSequence170KPluginSupport_destroy_data(
    OctetSequence170K *sample) {

    ::rapid::ext::arc::OctetSequence170KPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
OctetSequence170KPluginSupport_copy_data(
    OctetSequence170K *dst,
    const OctetSequence170K *src)
{
    return ::rapid::ext::arc::OctetSequence170K_copy(dst,src);
}


void 
OctetSequence170KPluginSupport_print_data(
    const OctetSequence170K *sample,
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
    
        if (DDS_OctetSeq_get_contiguous_bufferI(sample) != NULL) {
            RTICdrType_printArray(
                DDS_OctetSeq_get_contiguous_bufferI(sample),
                DDS_OctetSeq_get_length(sample),
                RTI_CDR_OCTET_SIZE,
                (RTICdrTypePrintFunction)RTICdrType_printOctet,
                "", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                DDS_OctetSeq_get_discontiguous_bufferI(sample),
                DDS_OctetSeq_get_length(sample),
               (RTICdrTypePrintFunction)RTICdrType_printOctet,
               "", indent_level + 1);
        }
    
    }
            


}

 


RTIBool 
OctetSequence170KPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K *dst,
    const OctetSequence170K *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::OctetSequence170KPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
OctetSequence170KPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
OctetSequence170KPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence170K *sample, 
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
    
    if (DDS_OctetSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_OctetSeq_get_contiguous_bufferI(sample),
            DDS_OctetSeq_get_length(sample),
            (174760),
            RTI_CDR_OCTET_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_OctetSeq_get_discontiguous_bufferI(sample),
            DDS_OctetSeq_get_length(sample),
            (174760),
            RTI_CDR_OCTET_TYPE)) {
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
OctetSequence170KPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K *sample,
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
        ::rapid::ext::arc::OctetSequence170K_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    {
        RTICdrUnsignedLong sequence_length;

        if (DDS_OctetSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_OctetSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                DDS_OctetSeq_get_maximum(sample),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_OctetSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                DDS_OctetSeq_get_maximum(sample),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            }
        }
        if (!DDS_OctetSeq_set_length(sample, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 



RTIBool OctetSequence170KPlugin_skip(
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

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_OCTET_TYPE)) {
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
OctetSequence170KPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (174760), RTI_CDR_OCTET_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
OctetSequence170KPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0, RTI_CDR_OCTET_TYPE);
            

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
OctetSequence170KPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OctetSequence170K * sample) 
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


    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        current_alignment, 
        DDS_OctetSeq_get_length(sample),
        RTI_CDR_OCTET_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
OctetSequence170KPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
OctetSequence170KPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OctetSequence170K *sample, 
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

    if (DDS_OctetSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_OctetSeq_get_contiguous_bufferI(sample),
            DDS_OctetSeq_get_length(sample),
            (174760),
            RTI_CDR_OCTET_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_OctetSeq_get_discontiguous_bufferI(sample),
            DDS_OctetSeq_get_length(sample),
            (174760),
            RTI_CDR_OCTET_TYPE)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool OctetSequence170KPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K *sample, 
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

        if (DDS_OctetSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_OctetSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                DDS_OctetSeq_get_maximum(sample),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_OctetSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                DDS_OctetSeq_get_maximum(sample),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            }
        }
        if (!DDS_OctetSeq_set_length(sample, sequence_length)) {
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
OctetSequence170KPlugin_get_serialized_key_max_size(
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
        

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (174760), RTI_CDR_OCTET_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
OctetSequence170KPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OctetSequence170K *sample,
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

        if (DDS_OctetSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_OctetSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                DDS_OctetSeq_get_maximum(sample),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_OctetSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                DDS_OctetSeq_get_maximum(sample),
                RTI_CDR_OCTET_TYPE)) {
                return RTI_FALSE;
            }
        }
        if (!DDS_OctetSeq_set_length(sample, sequence_length)) {
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
 *  Type GeometryMeshSample
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

GeometryMeshSample*
GeometryMeshSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    GeometryMeshSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, GeometryMeshSample);

    if(sample != NULL) {
        if (!::rapid::ext::arc::GeometryMeshSample_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


GeometryMeshSample *
GeometryMeshSamplePluginSupport_create_data_ex(RTIBool allocate_pointers){
    GeometryMeshSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, GeometryMeshSample);

    if(sample != NULL) {
        if (!::rapid::ext::arc::GeometryMeshSample_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


GeometryMeshSample *
GeometryMeshSamplePluginSupport_create_data(void)
{
    return ::rapid::ext::arc::GeometryMeshSamplePluginSupport_create_data_ex(RTI_TRUE);
}


void 
GeometryMeshSamplePluginSupport_destroy_data_w_params(
    GeometryMeshSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::GeometryMeshSample_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
GeometryMeshSamplePluginSupport_destroy_data_ex(
    GeometryMeshSample *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::GeometryMeshSample_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
GeometryMeshSamplePluginSupport_destroy_data(
    GeometryMeshSample *sample) {

    ::rapid::ext::arc::GeometryMeshSamplePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
GeometryMeshSamplePluginSupport_copy_data(
    GeometryMeshSample *dst,
    const GeometryMeshSample *src)
{
    return ::rapid::ext::arc::GeometryMeshSample_copy(dst,src);
}


void 
GeometryMeshSamplePluginSupport_print_data(
    const GeometryMeshSample *sample,
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

    RTICdrType_printLong(
        &sample->geometryId, "geometryId", indent_level + 1);
            

    rapid::ext::arc::GeometryIndexModeSequence32PluginSupport_print_data(
        &sample->indexModes, "indexModes", indent_level + 1);
            

    rapid::LongSequence32PluginSupport_print_data(
        &sample->indexLengths, "indexLengths", indent_level + 1);
            

    rapid::ext::arc::IndexSequence256KPluginSupport_print_data(
        &sample->indexData, "indexData", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->vertexScale, "vertexScale", indent_level + 1);
            

    rapid::ShortSequence128KPluginSupport_print_data(
        &sample->vertexData, "vertexData", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->normalScale, "normalScale", indent_level + 1);
            

    rapid::OctetSequence128KPluginSupport_print_data(
        &sample->normalData, "normalData", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->colorScale, "colorScale", indent_level + 1);
            

    rapid::ext::arc::OctetSequence170KPluginSupport_print_data(
        &sample->colorData, "colorData", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->texCoord0Scale, "texCoord0Scale", indent_level + 1);
            

    rapid::ShortSequence96KPluginSupport_print_data(
        &sample->texCoord0Data, "texCoord0Data", indent_level + 1);
            


}

GeometryMeshSample *
GeometryMeshSamplePluginSupport_create_key_ex(RTIBool allocate_pointers){
    GeometryMeshSample *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, GeometryMeshSampleKeyHolder);

    ::rapid::ext::arc::GeometryMeshSample_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


GeometryMeshSample *
GeometryMeshSamplePluginSupport_create_key(void)
{
    return  ::rapid::ext::arc::GeometryMeshSamplePluginSupport_create_key_ex(RTI_TRUE);
}


void 
GeometryMeshSamplePluginSupport_destroy_key_ex(
    GeometryMeshSampleKeyHolder *key,RTIBool deallocate_pointers)
{
    ::rapid::ext::arc::GeometryMeshSample_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
GeometryMeshSamplePluginSupport_destroy_key(
    GeometryMeshSampleKeyHolder *key) {

  ::rapid::ext::arc::GeometryMeshSamplePluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
GeometryMeshSamplePlugin_on_participant_attached(
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
GeometryMeshSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
GeometryMeshSamplePlugin_on_endpoint_attached(
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
            ::rapid::ext::arc::GeometryMeshSamplePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::ext::arc::GeometryMeshSamplePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::rapid::ext::arc::GeometryMeshSamplePluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::rapid::ext::arc::GeometryMeshSamplePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
GeometryMeshSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
GeometryMeshSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *sample,
    void *handle)
{
    
    GeometryMeshSample_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
GeometryMeshSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *dst,
    const GeometryMeshSample *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::GeometryMeshSamplePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
GeometryMeshSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
GeometryMeshSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryMeshSample *sample, 
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
    if (!RTICdrStream_serializeLong(
        stream, &sample->geometryId)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::GeometryIndexModeSequence32Plugin_serialize(
            endpoint_data,
            &sample->indexModes, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence32Plugin_serialize(
            endpoint_data,
            &sample->indexLengths, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::IndexSequence256KPlugin_serialize(
            endpoint_data,
            &sample->indexData, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->vertexScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence128KPlugin_serialize(
            endpoint_data,
            &sample->vertexData, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->normalScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OctetSequence128KPlugin_serialize(
            endpoint_data,
            &sample->normalData, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->colorScale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::OctetSequence170KPlugin_serialize(
            endpoint_data,
            &sample->colorData, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->texCoord0Scale)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ShortSequence96KPlugin_serialize(
            endpoint_data,
            &sample->texCoord0Data, 
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
GeometryMeshSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *sample,
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
        ::rapid::ext::arc::GeometryMeshSample_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
            if (!rapid::MessagePlugin_deserialize_sample(endpoint_data,( rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!RTICdrStream_deserializeLong(
        stream, &sample->geometryId)) {
        goto fin;
    }

    if (!rapid::ext::arc::GeometryIndexModeSequence32Plugin_deserialize_sample(
            endpoint_data,
            &sample->indexModes,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::LongSequence32Plugin_deserialize_sample(
            endpoint_data,
            &sample->indexLengths,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::IndexSequence256KPlugin_deserialize_sample(
            endpoint_data,
            &sample->indexData,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->vertexScale)) {
        goto fin;
    }

    if (!rapid::ShortSequence128KPlugin_deserialize_sample(
            endpoint_data,
            &sample->vertexData,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->normalScale)) {
        goto fin;
    }

    if (!rapid::OctetSequence128KPlugin_deserialize_sample(
            endpoint_data,
            &sample->normalData,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->colorScale)) {
        goto fin;
    }

    if (!rapid::ext::arc::OctetSequence170KPlugin_deserialize_sample(
            endpoint_data,
            &sample->colorData,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->texCoord0Scale)) {
        goto fin;
    }

    if (!rapid::ShortSequence96KPlugin_deserialize_sample(
            endpoint_data,
            &sample->texCoord0Data,
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
GeometryMeshSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::ext::arc::GeometryMeshSamplePlugin_deserialize_sample( 
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




RTIBool GeometryMeshSamplePlugin_skip(
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
    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::GeometryIndexModeSequence32Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::LongSequence32Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::IndexSequence256KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence128KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::OctetSequence128KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::OctetSequence170KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence96KPlugin_skip(
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
GeometryMeshSamplePlugin_get_serialized_sample_max_size(
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

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ext::arc::GeometryIndexModeSequence32Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::LongSequence32Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::arc::IndexSequence256KPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ShortSequence128KPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::OctetSequence128KPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ext::arc::OctetSequence170KPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ShortSequence96KPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
GeometryMeshSamplePlugin_get_serialized_sample_min_size(
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

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ext::arc::GeometryIndexModeSequence32Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::LongSequence32Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::arc::IndexSequence256KPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ShortSequence128KPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::OctetSequence128KPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ext::arc::OctetSequence170KPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ShortSequence96KPlugin_get_serialized_sample_min_size(
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
GeometryMeshSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GeometryMeshSample * sample) 
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

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::ext::arc::GeometryIndexModeSequence32Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->indexModes);
            

    current_alignment += rapid::LongSequence32Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->indexLengths);
            

    current_alignment += rapid::ext::arc::IndexSequence256KPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->indexData);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::ShortSequence128KPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->vertexData);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::OctetSequence128KPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->normalData);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::ext::arc::OctetSequence170KPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->colorData);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::ShortSequence96KPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->texCoord0Data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
GeometryMeshSamplePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
GeometryMeshSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GeometryMeshSample *sample, 
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
    if (!RTICdrStream_serializeLong(
        stream, &sample->geometryId)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool GeometryMeshSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *sample, 
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
    if (!RTICdrStream_deserializeLong(
        stream, &sample->geometryId)) {
        return RTI_FALSE;
    }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool GeometryMeshSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::ext::arc::GeometryMeshSamplePlugin_deserialize_key_sample(
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
GeometryMeshSamplePlugin_get_serialized_key_max_size(
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

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
GeometryMeshSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *sample,
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

    if (!RTICdrStream_deserializeLong(
        stream, &sample->geometryId)) {
        return RTI_FALSE;
    }

    if (!rapid::ext::arc::GeometryIndexModeSequence32Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::LongSequence32Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::IndexSequence256KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence128KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::OctetSequence128KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::OctetSequence170KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ShortSequence96KPlugin_skip(
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
GeometryMeshSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSampleKeyHolder *dst, 
    const GeometryMeshSample *src)
{  
    if (!rapid::MessagePlugin_instance_to_key(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong(
        &dst->geometryId, &src->geometryId)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
GeometryMeshSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GeometryMeshSample *dst, const
    GeometryMeshSampleKeyHolder *src)
{
    if (!rapid::MessagePlugin_key_to_instance(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong(
        &dst->geometryId, &src->geometryId)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
GeometryMeshSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GeometryMeshSample *instance)
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

    if (!::rapid::ext::arc::GeometryMeshSamplePlugin_serialize_key(
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
GeometryMeshSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    GeometryMeshSample * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (GeometryMeshSample *)
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

    if (!RTICdrStream_deserializeLong(
        stream, &sample->geometryId)) {
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


    if (!::rapid::ext::arc::GeometryMeshSamplePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *GeometryMeshSamplePlugin_new(void) 
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
        ::rapid::ext::arc::GeometryMeshSamplePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        GeometryMeshSamplePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        GeometryMeshSamplePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        GeometryMeshSamplePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        GeometryMeshSamplePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        GeometryMeshSamplePlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        GeometryMeshSamplePlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::ext::arc::GeometryMeshSample_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        GeometryMeshSamplePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        GeometryMeshSamplePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::ext::arc::GeometryMeshSamplePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = GeometryMeshSampleTYPENAME;

    return plugin;
}

void
GeometryMeshSamplePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */
