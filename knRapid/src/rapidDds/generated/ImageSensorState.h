
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageSensorState_260437485_h
#define ImageSensorState_260437485_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#include "Message.h"


#include "ImageMetadata.h"


namespace rapid{

/**

 * Holds status information for an image sensor - typically a camera, but could be a laser scanner, gpr, or any

 * sensor that can pack a data sample into a 2D array

 */

#define rapid_ImageSensorState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *ImageSensorStateTYPENAME;
        


#ifdef __cplusplus
    struct ImageSensorStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ImageSensorStateTypeSupport;
    class ImageSensorStateDataWriter;
    class ImageSensorStateDataReader;
#endif

#endif

            
    
class ImageSensorState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct ImageSensorStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ImageSensorStateTypeSupport TypeSupport;
    typedef ImageSensorStateDataWriter DataWriter;
    typedef ImageSensorStateDataReader DataReader;
#endif

#endif
    
    rapid::ImageMetadata  meta;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ImageSensorState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ImageSensorStateSeq, ImageSensorState);
        
NDDSUSERDllExport
RTIBool ImageSensorState_initialize(
        ImageSensorState* self);
        
NDDSUSERDllExport
RTIBool ImageSensorState_initialize_ex(
        ImageSensorState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ImageSensorState_initialize_w_params(
        ImageSensorState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ImageSensorState_finalize(
        ImageSensorState* self);
                        
NDDSUSERDllExport
void ImageSensorState_finalize_ex(
        ImageSensorState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ImageSensorState_finalize_w_params(
        ImageSensorState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ImageSensorState_finalize_optional_members(
        ImageSensorState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ImageSensorState_copy(
        ImageSensorState* dst,
        const ImageSensorState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* ImageSensorState_260437485_h */
