
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageMetadata.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageMetadata_1779228579_h
#define ImageMetadata_1779228579_h

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


#include "BaseTypes.h"


namespace rapid{
             
static const rapid::String32 IMG_V_FOV_KEY = "IMG_V_FOV";             
static const rapid::String32 IMG_H_FOV_KEY = "IMG_H_FOV";
/**

 * Holds status information for an image sensor - typically a camera, but could be a laser scanner, gpr, or

 * any sensor that can pack a data sample into a 2D array.

 */

#define rapid_ImageMetadata_LAST_MEMBER_ID 7
        
extern const char *ImageMetadataTYPENAME;
        


#ifdef __cplusplus
    struct ImageMetadataSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ImageMetadataTypeSupport;
    class ImageMetadataDataWriter;
    class ImageMetadataDataReader;
#endif

#endif

            
    
class ImageMetadata                                        
{
public:            
#ifdef __cplusplus
    typedef struct ImageMetadataSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ImageMetadataTypeSupport TypeSupport;
    typedef ImageMetadataDataWriter DataWriter;
    typedef ImageMetadataDataReader DataReader;
#endif

#endif
    
/** Unique identifier for sensor. */

    rapid::String32  sensorName;

/** Sensor type, e.g. Camera, LaserScanner. */

    rapid::String32  sensorType;

/**

 * 3D transform which defines the zero position of the sensor with respect to the Agent's origin.

 * May be deprecated in future because the framestore service should handle this.

 */

    rapid::Transform3D  offset;

/** Native width (columns) of data sample. */

    DDS_Long  width;

/** Native height (rows) of data sample. */

    DDS_Long  height;

    rapid::NamedFloatRangeValueSequence16  rangeSettings;

/** One of the values here is the MIME type if available. */

    rapid::NamedOptionSetValueSequence16  optionSettings;

/** Extra sequence for native or Agent-specific information. */

    rapid::KeyTypeValueSequence16  extras;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ImageMetadata_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ImageMetadataSeq, ImageMetadata);
        
NDDSUSERDllExport
RTIBool ImageMetadata_initialize(
        ImageMetadata* self);
        
NDDSUSERDllExport
RTIBool ImageMetadata_initialize_ex(
        ImageMetadata* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ImageMetadata_initialize_w_params(
        ImageMetadata* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ImageMetadata_finalize(
        ImageMetadata* self);
                        
NDDSUSERDllExport
void ImageMetadata_finalize_ex(
        ImageMetadata* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ImageMetadata_finalize_w_params(
        ImageMetadata* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ImageMetadata_finalize_optional_members(
        ImageMetadata* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ImageMetadata_copy(
        ImageMetadata* dst,
        const ImageMetadata* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* ImageMetadata_1779228579_h */
