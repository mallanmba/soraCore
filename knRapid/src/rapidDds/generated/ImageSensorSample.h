
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ImageSensorSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ImageSensorSample_101220480_h
#define ImageSensorSample_101220480_h

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


#include "ImageMetadata.h"


#include "Message.h"


namespace rapid{

/** Images of size up to 1MB are supported. */


#define rapid_ImageData_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  ImageData;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ImageData_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ImageDataSeq, ImageData);                                        
            
NDDSUSERDllExport
RTIBool ImageData_initialize(
        ImageData* self);
            
NDDSUSERDllExport
RTIBool ImageData_initialize_ex(
        ImageData* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ImageData_initialize_w_params(
        ImageData* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ImageData_finalize(
        ImageData* self);
            
NDDSUSERDllExport
void ImageData_finalize_ex(
        ImageData* self,RTIBool deletePointers);

NDDSUSERDllExport
void ImageData_finalize_w_params(
        ImageData* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ImageData_finalize_optional_members(
        ImageData* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ImageData_copy(
        ImageData* dst,
        const ImageData* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class ImageSensorSampleTypeSupport;

class ImageSensorSampleDataWriter;

class ImageSensorSampleDataReader;

struct ImageSensorSampleSeq;

/** Image sensor information, plus payload. */

#define rapid_ImageSensorSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 3)
        
extern const char *ImageSensorSampleTYPENAME;
        


#ifdef __cplusplus
    struct ImageSensorSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ImageSensorSampleTypeSupport;
    class ImageSensorSampleDataWriter;
    class ImageSensorSampleDataReader;
#endif

#endif

            
    
class ImageSensorSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct ImageSensorSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ImageSensorSampleTypeSupport TypeSupport;
    typedef ImageSensorSampleDataWriter DataWriter;
    typedef ImageSensorSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef ImageSensorSampleTypeSupport TypeSupport;

typedef ImageSensorSampleDataWriter DataWriter;

typedef ImageSensorSampleDataReader DataReader;

typedef ImageSensorSampleSeq Seq;

#endif

typedef ImageSensorSample Type;

/** Metadata for this specific sensor. */

    rapid::ImageMetadata  meta;

/** MIME type, if available. */

    rapid::String32  mimeType;

/** Image data */

    rapid::ImageData  data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ImageSensorSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ImageSensorSampleSeq, ImageSensorSample);
        
NDDSUSERDllExport
RTIBool ImageSensorSample_initialize(
        ImageSensorSample* self);
        
NDDSUSERDllExport
RTIBool ImageSensorSample_initialize_ex(
        ImageSensorSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ImageSensorSample_initialize_w_params(
        ImageSensorSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ImageSensorSample_finalize(
        ImageSensorSample* self);
                        
NDDSUSERDllExport
void ImageSensorSample_finalize_ex(
        ImageSensorSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ImageSensorSample_finalize_w_params(
        ImageSensorSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ImageSensorSample_finalize_optional_members(
        ImageSensorSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ImageSensorSample_copy(
        ImageSensorSample* dst,
        const ImageSensorSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* ImageSensorSample_101220480_h */
