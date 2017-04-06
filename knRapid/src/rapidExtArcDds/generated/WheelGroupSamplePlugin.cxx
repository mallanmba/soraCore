
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from WheelGroupSample.idl using "rtiddsgen".
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



#include "WheelGroupSamplePlugin.h"


namespace rapid{

namespace ext{

namespace arc{


/* ------------------------------------------------------------------------
   Enum Type: CtrlMode
 * ------------------------------------------------------------------------- */
 
/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */


RTIBool CtrlModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CtrlMode *sample,
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
CtrlModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CtrlMode *sample,
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

            case CTRL_POSITION:
                *sample=CTRL_POSITION;
                break;
            case CTRL_TRAPECOID:
                *sample=CTRL_TRAPECOID;
                break;
            case CTRL_TRAJECTORY:
                *sample=CTRL_TRAJECTORY;
                break;
            case CTRL_HOLD:
                *sample=CTRL_HOLD;
                break;
            case CTRL_OFF:
                *sample=CTRL_OFF;
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


RTIBool CtrlModePlugin_skip(
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


unsigned int CtrlModePlugin_get_serialized_sample_max_size(
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


unsigned int CtrlModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::arc::CtrlModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


unsigned int
CtrlModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CtrlMode * sample) 
{
    unsigned int initial_alignment = current_alignment;

    if (sample) {} /* To avoid warnings */ 

    current_alignment += ::rapid::ext::arc::CtrlModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}






/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */


RTIBool CtrlModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CtrlMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::arc::CtrlModePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);
}


RTIBool CtrlModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CtrlMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::arc::CtrlModePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}


unsigned int CtrlModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::arc::CtrlModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


RTIBool 
CtrlModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CtrlMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{    
    return ::rapid::ext::arc::CtrlModePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}

 
/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */


void CtrlModePluginSupport_print_data(
    const CtrlMode *sample,
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

    RTICdrType_printEnum((RTICdrEnum *)sample, "CtrlMode", indent_level + 1);
}



/* ------------------------------------------------------------------------
   Enum Type: PositionMode
 * ------------------------------------------------------------------------- */
 
/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */


RTIBool PositionModePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PositionMode *sample,
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
PositionModePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionMode *sample,
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

            case POS_ABS:
                *sample=POS_ABS;
                break;
            case POS_REL:
                *sample=POS_REL;
                break;
            case POS_NA:
                *sample=POS_NA;
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


RTIBool PositionModePlugin_skip(
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


unsigned int PositionModePlugin_get_serialized_sample_max_size(
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


unsigned int PositionModePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::arc::PositionModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


unsigned int
PositionModePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PositionMode * sample) 
{
    unsigned int initial_alignment = current_alignment;

    if (sample) {} /* To avoid warnings */ 

    current_alignment += ::rapid::ext::arc::PositionModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}






/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */


RTIBool PositionModePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PositionMode *sample, 
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::arc::PositionModePlugin_serialize(
            endpoint_data, sample, stream, 
            serialize_encapsulation, encapsulation_id, 
            serialize_key, endpoint_plugin_qos);
}


RTIBool PositionModePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PositionMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{   
    return ::rapid::ext::arc::PositionModePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}


unsigned int PositionModePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += ::rapid::ext::arc::PositionModePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}


RTIBool 
PositionModePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PositionMode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{    
    return ::rapid::ext::arc::PositionModePlugin_deserialize_sample(
            endpoint_data, sample, stream, deserialize_encapsulation, 
            deserialize_key, endpoint_plugin_qos);
}

 
/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */


void PositionModePluginSupport_print_data(
    const PositionMode *sample,
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

    RTICdrType_printEnum((RTICdrEnum *)sample, "PositionMode", indent_level + 1);
}


/* --------------------------------------------------------------------------------------
 *  Type MotorProfile
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

MotorProfile*
MotorProfilePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    MotorProfile *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, MotorProfile);

    if(sample != NULL) {
        if (!::rapid::ext::arc::MotorProfile_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


MotorProfile *
MotorProfilePluginSupport_create_data_ex(RTIBool allocate_pointers){
    MotorProfile *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, MotorProfile);

    if(sample != NULL) {
        if (!::rapid::ext::arc::MotorProfile_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


MotorProfile *
MotorProfilePluginSupport_create_data(void)
{
    return ::rapid::ext::arc::MotorProfilePluginSupport_create_data_ex(RTI_TRUE);
}


void 
MotorProfilePluginSupport_destroy_data_w_params(
    MotorProfile *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::MotorProfile_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
MotorProfilePluginSupport_destroy_data_ex(
    MotorProfile *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::MotorProfile_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
MotorProfilePluginSupport_destroy_data(
    MotorProfile *sample) {

    ::rapid::ext::arc::MotorProfilePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
MotorProfilePluginSupport_copy_data(
    MotorProfile *dst,
    const MotorProfile *src)
{
    return ::rapid::ext::arc::MotorProfile_copy(dst,src);
}


void 
MotorProfilePluginSupport_print_data(
    const MotorProfile *sample,
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


    rapid::ext::arc::CtrlModePluginSupport_print_data(
        &sample->ctrlMode, "ctrlMode", indent_level + 1);
            

    rapid::ext::arc::PositionModePluginSupport_print_data(
        &sample->posMode, "posMode", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->position, "position", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->speed, "speed", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->acc, "acc", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
MotorProfilePlugin_on_participant_attached(
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
MotorProfilePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
MotorProfilePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::rapid::ext::arc::MotorProfilePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::ext::arc::MotorProfilePluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
MotorProfilePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
MotorProfilePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *sample,
    void *handle)
{
    
    MotorProfile_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
MotorProfilePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *dst,
    const MotorProfile *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::MotorProfilePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
MotorProfilePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
MotorProfilePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MotorProfile *sample, 
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
    
    if (!rapid::ext::arc::CtrlModePlugin_serialize(
            endpoint_data,
            &sample->ctrlMode, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::PositionModePlugin_serialize(
            endpoint_data,
            &sample->posMode, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->position)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->speed)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->acc)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
MotorProfilePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

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
        ::rapid::ext::arc::MotorProfile_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!rapid::ext::arc::CtrlModePlugin_deserialize_sample(
            endpoint_data,
            &sample->ctrlMode,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::PositionModePlugin_deserialize_sample(
            endpoint_data,
            &sample->posMode,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->position)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->speed)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->acc)) {
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
MotorProfilePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::ext::arc::MotorProfilePlugin_deserialize_sample( 
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




RTIBool MotorProfilePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!rapid::ext::arc::CtrlModePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::PositionModePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
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
MotorProfilePlugin_get_serialized_sample_max_size(
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


    current_alignment +=  rapid::ext::arc::CtrlModePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::arc::PositionModePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
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
MotorProfilePlugin_get_serialized_sample_min_size(
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


    current_alignment +=  rapid::ext::arc::CtrlModePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::ext::arc::PositionModePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
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
MotorProfilePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MotorProfile * sample) 
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


    current_alignment += rapid::ext::arc::CtrlModePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->ctrlMode);
            

    current_alignment += rapid::ext::arc::PositionModePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->posMode);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
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
MotorProfilePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
MotorProfilePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MotorProfile *sample, 
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

        if (!::rapid::ext::arc::MotorProfilePlugin_serialize(
                endpoint_data,
                sample,
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


RTIBool MotorProfilePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *sample, 
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

        if (!::rapid::ext::arc::MotorProfilePlugin_deserialize_sample(
                endpoint_data, sample, stream,
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


 
RTIBool MotorProfilePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::ext::arc::MotorProfilePlugin_deserialize_key_sample(
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
MotorProfilePlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
MotorProfilePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorProfile *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::rapid::ext::arc::MotorProfilePlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *MotorProfilePlugin_new(void) 
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
        ::rapid::ext::arc::MotorProfilePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::ext::arc::MotorProfilePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::ext::arc::MotorProfilePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::ext::arc::MotorProfilePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::ext::arc::MotorProfilePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        MotorProfilePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        MotorProfilePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::ext::arc::MotorProfilePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::ext::arc::MotorProfilePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        MotorProfilePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        MotorProfilePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::ext::arc::MotorProfilePlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::ext::arc::MotorProfile_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        MotorProfilePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        MotorProfilePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = MotorProfileTYPENAME;

    return plugin;
}

void
MotorProfilePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type MotorState
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

MotorState*
MotorStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    MotorState *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, MotorState);

    if(sample != NULL) {
        if (!::rapid::ext::arc::MotorState_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


MotorState *
MotorStatePluginSupport_create_data_ex(RTIBool allocate_pointers){
    MotorState *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, MotorState);

    if(sample != NULL) {
        if (!::rapid::ext::arc::MotorState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


MotorState *
MotorStatePluginSupport_create_data(void)
{
    return ::rapid::ext::arc::MotorStatePluginSupport_create_data_ex(RTI_TRUE);
}


void 
MotorStatePluginSupport_destroy_data_w_params(
    MotorState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::MotorState_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
MotorStatePluginSupport_destroy_data_ex(
    MotorState *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::MotorState_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
MotorStatePluginSupport_destroy_data(
    MotorState *sample) {

    ::rapid::ext::arc::MotorStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
MotorStatePluginSupport_copy_data(
    MotorState *dst,
    const MotorState *src)
{
    return ::rapid::ext::arc::MotorState_copy(dst,src);
}


void 
MotorStatePluginSupport_print_data(
    const MotorState *sample,
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


    rapid::ext::arc::MotorProfilePluginSupport_print_data(
        &sample->cmd, "cmd", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->position, "position", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->speed, "speed", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
MotorStatePlugin_on_participant_attached(
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
MotorStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
MotorStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::rapid::ext::arc::MotorStatePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::ext::arc::MotorStatePluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::ext::arc::MotorStatePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::ext::arc::MotorStatePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::ext::arc::MotorStatePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
MotorStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
MotorStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *sample,
    void *handle)
{
    
    MotorState_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
MotorStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *dst,
    const MotorState *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::MotorStatePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
MotorStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
MotorStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MotorState *sample, 
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
    
    if (!rapid::ext::arc::MotorProfilePlugin_serialize(
            endpoint_data,
            &sample->cmd, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->position)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->speed)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
MotorStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

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
        ::rapid::ext::arc::MotorState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!rapid::ext::arc::MotorProfilePlugin_deserialize_sample(
            endpoint_data,
            &sample->cmd,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->position)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->speed)) {
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
MotorStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MotorState **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::ext::arc::MotorStatePlugin_deserialize_sample( 
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




RTIBool MotorStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!rapid::ext::arc::MotorProfilePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
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
MotorStatePlugin_get_serialized_sample_max_size(
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


    current_alignment +=  rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
MotorStatePlugin_get_serialized_sample_min_size(
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


    current_alignment +=  rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
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
MotorStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MotorState * sample) 
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


    current_alignment += rapid::ext::arc::MotorProfilePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->cmd);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
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
MotorStatePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
MotorStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MotorState *sample, 
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

        if (!::rapid::ext::arc::MotorStatePlugin_serialize(
                endpoint_data,
                sample,
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


RTIBool MotorStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *sample, 
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

        if (!::rapid::ext::arc::MotorStatePlugin_deserialize_sample(
                endpoint_data, sample, stream,
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


 
RTIBool MotorStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::ext::arc::MotorStatePlugin_deserialize_key_sample(
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
MotorStatePlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::rapid::ext::arc::MotorStatePlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
MotorStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::rapid::ext::arc::MotorStatePlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *MotorStatePlugin_new(void) 
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
        ::rapid::ext::arc::MotorStatePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::ext::arc::MotorStatePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::ext::arc::MotorStatePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::ext::arc::MotorStatePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::ext::arc::MotorStatePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        MotorStatePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        MotorStatePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::ext::arc::MotorStatePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::ext::arc::MotorStatePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::ext::arc::MotorStatePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::ext::arc::MotorStatePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        MotorStatePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        MotorStatePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::ext::arc::MotorStatePlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::ext::arc::MotorState_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        MotorStatePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        MotorStatePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::ext::arc::MotorStatePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = MotorStateTYPENAME;

    return plugin;
}

void
MotorStatePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type MotorStateSequence32
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

MotorStateSequence32*
MotorStateSequence32PluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    MotorStateSequence32 *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, MotorStateSequence32);

    if(sample != NULL) {
        if (!::rapid::ext::arc::MotorStateSequence32_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


MotorStateSequence32 *
MotorStateSequence32PluginSupport_create_data_ex(RTIBool allocate_pointers){
    MotorStateSequence32 *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, MotorStateSequence32);

    if(sample != NULL) {
        if (!::rapid::ext::arc::MotorStateSequence32_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


MotorStateSequence32 *
MotorStateSequence32PluginSupport_create_data(void)
{
    return ::rapid::ext::arc::MotorStateSequence32PluginSupport_create_data_ex(RTI_TRUE);
}


void 
MotorStateSequence32PluginSupport_destroy_data_w_params(
    MotorStateSequence32 *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::MotorStateSequence32_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
MotorStateSequence32PluginSupport_destroy_data_ex(
    MotorStateSequence32 *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::MotorStateSequence32_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
MotorStateSequence32PluginSupport_destroy_data(
    MotorStateSequence32 *sample) {

    ::rapid::ext::arc::MotorStateSequence32PluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
MotorStateSequence32PluginSupport_copy_data(
    MotorStateSequence32 *dst,
    const MotorStateSequence32 *src)
{
    return ::rapid::ext::arc::MotorStateSequence32_copy(dst,src);
}


void 
MotorStateSequence32PluginSupport_print_data(
    const MotorStateSequence32 *sample,
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
                
        if (rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample) != NULL) {
            RTICdrType_printArray(
                rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample), 
                rapid::ext::arc::MotorStateSeq_get_length(sample),
                sizeof(rapid::ext::arc::MotorState),
                (RTICdrTypePrintFunction)rapid::ext::arc::MotorStatePluginSupport_print_data,
                "", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                rapid::ext::arc::MotorStateSeq_get_discontiguous_bufferI(sample), 
                rapid::ext::arc::MotorStateSeq_get_length(sample),
                (RTICdrTypePrintFunction)rapid::ext::arc::MotorStatePluginSupport_print_data,
                "", indent_level + 1);
        }
    
    }
            


}

 


RTIBool 
MotorStateSequence32Plugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 *dst,
    const MotorStateSequence32 *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::MotorStateSequence32PluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
MotorStateSequence32Plugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
MotorStateSequence32Plugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MotorStateSequence32 *sample, 
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
    
    if (rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample),
            rapid::ext::arc::MotorStateSeq_get_length(sample),
            (32),
            sizeof(rapid::ext::arc::MotorState),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::MotorStatePlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::ext::arc::MotorStateSeq_get_discontiguous_bufferI(sample),
            rapid::ext::arc::MotorStateSeq_get_length(sample),
            (32),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::MotorStatePlugin_serialize,
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
MotorStateSequence32Plugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 *sample,
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
        ::rapid::ext::arc::MotorStateSequence32_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    {
        RTICdrUnsignedLong sequence_length;

        if (rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::MotorStateSeq_get_maximum(sample),
                sizeof(rapid::ext::arc::MotorState),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::MotorStatePlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::arc::MotorStateSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::MotorStateSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::MotorStatePlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::arc::MotorStateSeq_set_length(
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

 



RTIBool MotorStateSequence32Plugin_skip(
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
            sizeof(rapid::ext::arc::MotorState),
            (RTICdrStreamSkipFunction)rapid::ext::arc::MotorStatePlugin_skip,
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
MotorStateSequence32Plugin_get_serialized_sample_max_size(
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
        rapid::ext::arc::MotorStatePlugin_get_serialized_sample_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
MotorStateSequence32Plugin_get_serialized_sample_min_size(
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
        rapid::ext::arc::MotorStatePlugin_get_serialized_sample_min_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

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
MotorStateSequence32Plugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MotorStateSequence32 * sample) 
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


    if (rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, rapid::ext::arc::MotorStateSeq_get_length(sample),
            sizeof(rapid::ext::arc::MotorState),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::ext::arc::MotorStatePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment, rapid::ext::arc::MotorStateSeq_get_length(sample),
            sizeof(rapid::ext::arc::MotorState),
            (RTICdrTypeGetSerializedSampleSizeFunction)rapid::ext::arc::MotorStatePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)rapid::ext::arc::MotorStateSeq_get_discontiguous_bufferI(sample),
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
MotorStateSequence32Plugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
MotorStateSequence32Plugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MotorStateSequence32 *sample, 
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

    if (rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample),
            rapid::ext::arc::MotorStateSeq_get_length(sample),
            (32),
            sizeof(rapid::ext::arc::MotorState),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::MotorStatePlugin_serialize_key,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)rapid::ext::arc::MotorStateSeq_get_discontiguous_bufferI(sample),
            rapid::ext::arc::MotorStateSeq_get_length(sample),
            (32),
            (RTICdrStreamSerializeFunction)rapid::ext::arc::MotorStatePlugin_serialize_key,
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


RTIBool MotorStateSequence32Plugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 *sample, 
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

        if (rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::MotorStateSeq_get_maximum(sample),
                sizeof(rapid::ext::arc::MotorState),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::MotorStatePlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::arc::MotorStateSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::MotorStateSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::MotorStatePlugin_deserialize_key_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::arc::MotorStateSeq_set_length(
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
MotorStateSequence32Plugin_get_serialized_key_max_size(
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
        rapid::ext::arc::MotorStatePlugin_get_serialized_key_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
MotorStateSequence32Plugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MotorStateSequence32 *sample,
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

        if (rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                rapid::ext::arc::MotorStateSeq_get_contiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::MotorStateSeq_get_maximum(sample),
                sizeof(rapid::ext::arc::MotorState),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::MotorStatePlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)rapid::ext::arc::MotorStateSeq_get_discontiguous_bufferI(sample),
                &sequence_length,
                rapid::ext::arc::MotorStateSeq_get_maximum(sample),
                (RTICdrStreamDeserializeFunction)rapid::ext::arc::MotorStatePlugin_serialized_sample_to_key,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }
        if (!rapid::ext::arc::MotorStateSeq_set_length(
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
 *  Type WheelGroupSample
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

WheelGroupSample*
WheelGroupSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    WheelGroupSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, WheelGroupSample);

    if(sample != NULL) {
        if (!::rapid::ext::arc::WheelGroupSample_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


WheelGroupSample *
WheelGroupSamplePluginSupport_create_data_ex(RTIBool allocate_pointers){
    WheelGroupSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, WheelGroupSample);

    if(sample != NULL) {
        if (!::rapid::ext::arc::WheelGroupSample_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


WheelGroupSample *
WheelGroupSamplePluginSupport_create_data(void)
{
    return ::rapid::ext::arc::WheelGroupSamplePluginSupport_create_data_ex(RTI_TRUE);
}


void 
WheelGroupSamplePluginSupport_destroy_data_w_params(
    WheelGroupSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::ext::arc::WheelGroupSample_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
WheelGroupSamplePluginSupport_destroy_data_ex(
    WheelGroupSample *sample,RTIBool deallocate_pointers) {

    ::rapid::ext::arc::WheelGroupSample_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
WheelGroupSamplePluginSupport_destroy_data(
    WheelGroupSample *sample) {

    ::rapid::ext::arc::WheelGroupSamplePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
WheelGroupSamplePluginSupport_copy_data(
    WheelGroupSample *dst,
    const WheelGroupSample *src)
{
    return ::rapid::ext::arc::WheelGroupSample_copy(dst,src);
}


void 
WheelGroupSamplePluginSupport_print_data(
    const WheelGroupSample *sample,
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

    RTICdrType_printLongLong(
        &sample->targetTime, "targetTime", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->curvature, "curvature", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->curvatureRate, "curvatureRate", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->speed, "speed", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->crabAngle, "crabAngle", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->crabRate, "crabRate", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->targetCurvature, "targetCurvature", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->targetCurvatureRate, "targetCurvatureRate", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->targetCrabRate, "targetCrabRate", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->targetSpeed, "targetSpeed", indent_level + 1);
            

    RTICdrType_printFloat(
        &sample->targetCrabAngle, "targetCrabAngle", indent_level + 1);
            

    rapid::ext::arc::MotorStateSequence32PluginSupport_print_data(
        &sample->motors, "motors", indent_level + 1);
            

    rapid::LongSequence32PluginSupport_print_data(
        &sample->motorStatus, "motorStatus", indent_level + 1);
            

    rapid::FloatSequence32PluginSupport_print_data(
        &sample->currents, "currents", indent_level + 1);
            

    rapid::FloatSequence32PluginSupport_print_data(
        &sample->temperatures, "temperatures", indent_level + 1);
            


}

WheelGroupSample *
WheelGroupSamplePluginSupport_create_key_ex(RTIBool allocate_pointers){
    WheelGroupSample *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, WheelGroupSampleKeyHolder);

    ::rapid::ext::arc::WheelGroupSample_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


WheelGroupSample *
WheelGroupSamplePluginSupport_create_key(void)
{
    return  ::rapid::ext::arc::WheelGroupSamplePluginSupport_create_key_ex(RTI_TRUE);
}


void 
WheelGroupSamplePluginSupport_destroy_key_ex(
    WheelGroupSampleKeyHolder *key,RTIBool deallocate_pointers)
{
    ::rapid::ext::arc::WheelGroupSample_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
WheelGroupSamplePluginSupport_destroy_key(
    WheelGroupSampleKeyHolder *key) {

  ::rapid::ext::arc::WheelGroupSamplePluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
WheelGroupSamplePlugin_on_participant_attached(
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
WheelGroupSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
WheelGroupSamplePlugin_on_endpoint_attached(
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
            ::rapid::ext::arc::WheelGroupSamplePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::ext::arc::WheelGroupSamplePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::rapid::ext::arc::WheelGroupSamplePluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::rapid::ext::arc::WheelGroupSamplePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
WheelGroupSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
WheelGroupSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *sample,
    void *handle)
{
    
    WheelGroupSample_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
WheelGroupSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *dst,
    const WheelGroupSample *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::ext::arc::WheelGroupSamplePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
WheelGroupSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
WheelGroupSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WheelGroupSample *sample, 
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
    if (!RTICdrStream_serializeLongLong(
        stream, &sample->targetTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->curvature)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->curvatureRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->speed)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->crabAngle)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->crabRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->targetCurvature)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->targetCurvatureRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->targetCrabRate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->targetSpeed)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeFloat(
        stream, &sample->targetCrabAngle)) {
        return RTI_FALSE;
    }
            

    if (!rapid::ext::arc::MotorStateSequence32Plugin_serialize(
            endpoint_data,
            &sample->motors, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::LongSequence32Plugin_serialize(
            endpoint_data,
            &sample->motorStatus, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence32Plugin_serialize(
            endpoint_data,
            &sample->currents, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!rapid::FloatSequence32Plugin_serialize(
            endpoint_data,
            &sample->temperatures, 
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
WheelGroupSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *sample,
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
        ::rapid::ext::arc::WheelGroupSample_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
            if (!rapid::MessagePlugin_deserialize_sample(endpoint_data,( rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!RTICdrStream_deserializeLongLong(
        stream, &sample->targetTime)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->curvature)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->curvatureRate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->speed)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->crabAngle)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->crabRate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->targetCurvature)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->targetCurvatureRate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->targetCrabRate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->targetSpeed)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeFloat(
        stream, &sample->targetCrabAngle)) {
        goto fin;
    }

    if (!rapid::ext::arc::MotorStateSequence32Plugin_deserialize_sample(
            endpoint_data,
            &sample->motors,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::LongSequence32Plugin_deserialize_sample(
            endpoint_data,
            &sample->motorStatus,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::FloatSequence32Plugin_deserialize_sample(
            endpoint_data,
            &sample->currents,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::FloatSequence32Plugin_deserialize_sample(
            endpoint_data,
            &sample->temperatures,
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
WheelGroupSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::ext::arc::WheelGroupSamplePlugin_deserialize_sample( 
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




RTIBool WheelGroupSamplePlugin_skip(
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
    if (!RTICdrStream_skipLongLong(stream)) {
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
            

    if (!RTICdrStream_skipFloat(stream)) {
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
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::MotorStateSequence32Plugin_skip(
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
            

    if (!rapid::FloatSequence32Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::FloatSequence32Plugin_skip(
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
WheelGroupSamplePlugin_get_serialized_sample_max_size(
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

    current_alignment +=  RTICdrType_getLongLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ext::arc::MotorStateSequence32Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::LongSequence32Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::FloatSequence32Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::FloatSequence32Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
WheelGroupSamplePlugin_get_serialized_sample_min_size(
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

    current_alignment +=  RTICdrType_getLongLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::ext::arc::MotorStateSequence32Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::LongSequence32Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::FloatSequence32Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  rapid::FloatSequence32Plugin_get_serialized_sample_min_size(
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
WheelGroupSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WheelGroupSample * sample) 
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

    current_alignment += RTICdrType_getLongLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::ext::arc::MotorStateSequence32Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->motors);
            

    current_alignment += rapid::LongSequence32Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->motorStatus);
            

    current_alignment += rapid::FloatSequence32Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->currents);
            

    current_alignment += rapid::FloatSequence32Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->temperatures);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
WheelGroupSamplePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
WheelGroupSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WheelGroupSample *sample, 
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


RTIBool WheelGroupSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *sample, 
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


 
RTIBool WheelGroupSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::ext::arc::WheelGroupSamplePlugin_deserialize_key_sample(
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
WheelGroupSamplePlugin_get_serialized_key_max_size(
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
WheelGroupSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *sample,
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

    if (!RTICdrStream_skipLongLong(stream)) {
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
            

    if (!RTICdrStream_skipFloat(stream)) {
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
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipFloat(stream)) {
        goto fin;
    }
            

    if (!rapid::ext::arc::MotorStateSequence32Plugin_skip(
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
            

    if (!rapid::FloatSequence32Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!rapid::FloatSequence32Plugin_skip(
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
WheelGroupSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSampleKeyHolder *dst, 
    const WheelGroupSample *src)
{  
    if (!rapid::MessagePlugin_instance_to_key(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
WheelGroupSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    WheelGroupSample *dst, const
    WheelGroupSampleKeyHolder *src)
{
    if (!rapid::MessagePlugin_key_to_instance(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
WheelGroupSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const WheelGroupSample *instance)
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

    if (!::rapid::ext::arc::WheelGroupSamplePlugin_serialize_key(
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
WheelGroupSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    WheelGroupSample * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (WheelGroupSample *)
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


    if (!::rapid::ext::arc::WheelGroupSamplePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *WheelGroupSamplePlugin_new(void) 
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
        ::rapid::ext::arc::WheelGroupSamplePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::ext::arc::WheelGroupSamplePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::ext::arc::WheelGroupSamplePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::ext::arc::WheelGroupSamplePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        WheelGroupSamplePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        WheelGroupSamplePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        WheelGroupSamplePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        WheelGroupSamplePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        WheelGroupSamplePlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        WheelGroupSamplePlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::ext::arc::WheelGroupSample_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        WheelGroupSamplePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        WheelGroupSamplePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::ext::arc::WheelGroupSamplePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = WheelGroupSampleTYPENAME;

    return plugin;
}

void
WheelGroupSamplePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */
