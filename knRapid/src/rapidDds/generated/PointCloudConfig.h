
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PointCloudConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PointCloudConfig_1660714053_h
#define PointCloudConfig_1660714053_h

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


namespace rapid{

/**

 * PointSampleXyzMode denotes whether the values represent:

 * <ul>

 *   <li>PS_XYZ: x, y, z

 *   <li>PS_XYt: x, y, theta

 *   <li>PD_Rae: range, azimuth, elevation

 * </ul>

 */
 
typedef enum PointSampleXyzMode
{
    PS_XYZ,
    PS_XYt,
    PS_Rae
} PointSampleXyzMode;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PointSampleXyzMode_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PointSampleXyzModeSeq, PointSampleXyzMode);
        
NDDSUSERDllExport
RTIBool PointSampleXyzMode_initialize(
        PointSampleXyzMode* self);
        
NDDSUSERDllExport
RTIBool PointSampleXyzMode_initialize_ex(
        PointSampleXyzMode* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PointSampleXyzMode_initialize_w_params(
        PointSampleXyzMode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PointSampleXyzMode_finalize(
        PointSampleXyzMode* self);
                        
NDDSUSERDllExport
void PointSampleXyzMode_finalize_ex(
        PointSampleXyzMode* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void PointSampleXyzMode_finalize_w_params(
        PointSampleXyzMode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void PointSampleXyzMode_finalize_optional_members(
        PointSampleXyzMode* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool PointSampleXyzMode_copy(
        PointSampleXyzMode* dst,
        const PointSampleXyzMode* src);


NDDSUSERDllExport
RTIBool PointSampleXyzMode_getValues(PointSampleXyzModeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * PointSampleAttributeMode denotes the type of data contained in the attribute bytes.

 * <ul>

 *   <li>PS_UNUSED

 *   <li>PS_INTENSITY: intensity of return. unsigned byte (0-255)

 *   <li>PS_LAYER: for multi-layer scanners. unsigned byte (0-255)

 *   <li>PS_ECHO: echo # for multiple returns. unsigned byte (0-255)

 *   <li>PS_LAYER4_ECHO4: first 4 bits are layer (0-15), second 4 bits are echo (0-15)

 *   <li>PS_PULSE: pulse index. unsigned byte (0-255)

 *   <li>PS_RGB332: RGB packed into single byte

 *   <li>PS_RGB565: Assumes both attribute bytes are used for 16 bit color.

 *                  1st byte: upper 3 bits are first 3 bits of green, lower 5 bits are red

 *                  2nd byte: upper 3 bits are second 3 bits of green, lower 5 bits are blue

 * </ul>

 */
 
typedef enum PointSampleAttributeMode
{
    PS_UNUSED,
    PS_INTENSITY,
    PS_LAYER,
    PS_ECHO,
    PS_LAYER4_ECHO4,
    PS_PULSE,
    PS_RGB332,
    PS_RGB565
} PointSampleAttributeMode;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PointSampleAttributeMode_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PointSampleAttributeModeSeq, PointSampleAttributeMode);
        
NDDSUSERDllExport
RTIBool PointSampleAttributeMode_initialize(
        PointSampleAttributeMode* self);
        
NDDSUSERDllExport
RTIBool PointSampleAttributeMode_initialize_ex(
        PointSampleAttributeMode* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PointSampleAttributeMode_initialize_w_params(
        PointSampleAttributeMode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PointSampleAttributeMode_finalize(
        PointSampleAttributeMode* self);
                        
NDDSUSERDllExport
void PointSampleAttributeMode_finalize_ex(
        PointSampleAttributeMode* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void PointSampleAttributeMode_finalize_w_params(
        PointSampleAttributeMode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void PointSampleAttributeMode_finalize_optional_members(
        PointSampleAttributeMode* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool PointSampleAttributeMode_copy(
        PointSampleAttributeMode* dst,
        const PointSampleAttributeMode* src);


NDDSUSERDllExport
RTIBool PointSampleAttributeMode_getValues(PointSampleAttributeModeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class PointCloudConfigTypeSupport;

class PointCloudConfigDataWriter;

class PointCloudConfigDataReader;

struct PointCloudConfigSeq;

/** PointCloudConfig message sets up the configuration of a PointCloudSample message for a specific Agent. */

#define rapid_PointCloudConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *PointCloudConfigTYPENAME;
        


#ifdef __cplusplus
    struct PointCloudConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class PointCloudConfigTypeSupport;
    class PointCloudConfigDataWriter;
    class PointCloudConfigDataReader;
#endif

#endif

            
    
class PointCloudConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct PointCloudConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef PointCloudConfigTypeSupport TypeSupport;
    typedef PointCloudConfigDataWriter DataWriter;
    typedef PointCloudConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef PointCloudConfigTypeSupport TypeSupport;

typedef PointCloudConfigDataWriter DataWriter;

typedef PointCloudConfigDataReader DataReader;

typedef PointCloudConfigSeq Seq;

#endif

typedef PointCloudConfig Type;

/** Reference frame of the point cloud. Should exist in FrameStore. */

    rapid::String128  referenceFrame;

/** Interpretation of xyz array. */

    rapid::PointSampleXyzMode  xyzMode;

/** Interpretation of each attribute. */

    rapid::PointSampleAttributeMode  attributesMode[2];

/** Additional attributes. */

    rapid::KeyTypeValueSequence16  attributes;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PointCloudConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PointCloudConfigSeq, PointCloudConfig);
        
NDDSUSERDllExport
RTIBool PointCloudConfig_initialize(
        PointCloudConfig* self);
        
NDDSUSERDllExport
RTIBool PointCloudConfig_initialize_ex(
        PointCloudConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PointCloudConfig_initialize_w_params(
        PointCloudConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PointCloudConfig_finalize(
        PointCloudConfig* self);
                        
NDDSUSERDllExport
void PointCloudConfig_finalize_ex(
        PointCloudConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void PointCloudConfig_finalize_w_params(
        PointCloudConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void PointCloudConfig_finalize_optional_members(
        PointCloudConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool PointCloudConfig_copy(
        PointCloudConfig* dst,
        const PointCloudConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* PointCloudConfig_1660714053_h */
