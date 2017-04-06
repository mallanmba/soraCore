
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RangeScanConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RangeScanConfig_1049717493_h
#define RangeScanConfig_1049717493_h

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

namespace ext{
 
typedef enum RangeScanDirection
{
    SCAN_HORIZONTAL,
    SCAN_VERTICAL
} RangeScanDirection;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RangeScanDirection_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RangeScanDirectionSeq, RangeScanDirection);
        
NDDSUSERDllExport
RTIBool RangeScanDirection_initialize(
        RangeScanDirection* self);
        
NDDSUSERDllExport
RTIBool RangeScanDirection_initialize_ex(
        RangeScanDirection* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RangeScanDirection_initialize_w_params(
        RangeScanDirection* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RangeScanDirection_finalize(
        RangeScanDirection* self);
                        
NDDSUSERDllExport
void RangeScanDirection_finalize_ex(
        RangeScanDirection* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void RangeScanDirection_finalize_w_params(
        RangeScanDirection* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RangeScanDirection_finalize_optional_members(
        RangeScanDirection* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool RangeScanDirection_copy(
        RangeScanDirection* dst,
        const RangeScanDirection* src);


NDDSUSERDllExport
RTIBool RangeScanDirection_getValues(RangeScanDirectionSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_Transform3DSequence64_LAST_MEMBER_ID rapid_Transform3D_LAST_MEMBER_ID
typedef  rapid::Transform3DSeq  Transform3DSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Transform3DSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(Transform3DSequence64Seq, Transform3DSequence64);                                        
            
NDDSUSERDllExport
RTIBool Transform3DSequence64_initialize(
        Transform3DSequence64* self);
            
NDDSUSERDllExport
RTIBool Transform3DSequence64_initialize_ex(
        Transform3DSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Transform3DSequence64_initialize_w_params(
        Transform3DSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Transform3DSequence64_finalize(
        Transform3DSequence64* self);
            
NDDSUSERDllExport
void Transform3DSequence64_finalize_ex(
        Transform3DSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void Transform3DSequence64_finalize_w_params(
        Transform3DSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Transform3DSequence64_finalize_optional_members(
        Transform3DSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Transform3DSequence64_copy(
        Transform3DSequence64* dst,
        const Transform3DSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class RangeScanConfigTypeSupport;

class RangeScanConfigDataWriter;

class RangeScanConfigDataReader;

struct RangeScanConfigSeq;

/**  Single (or multiple) line range scan. */

#define rapid_ext_RangeScanConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 9)
        
extern const char *RangeScanConfigTYPENAME;
        


#ifdef __cplusplus
    struct RangeScanConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class RangeScanConfigTypeSupport;
    class RangeScanConfigDataWriter;
    class RangeScanConfigDataReader;
#endif

#endif

            
    
class RangeScanConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct RangeScanConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef RangeScanConfigTypeSupport TypeSupport;
    typedef RangeScanConfigDataWriter DataWriter;
    typedef RangeScanConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef RangeScanConfigTypeSupport TypeSupport;

typedef RangeScanConfigDataWriter DataWriter;

typedef RangeScanConfigDataReader DataReader;

typedef RangeScanConfigSeq Seq;

#endif

typedef RangeScanConfig Type;

/** Reference frame. */

    rapid::String128  referenceFrame;

/**

 * Descriptions of rows from the same scan-line. If instrument is a single line scanner, this is

 * unused. If instrument has multiple scan lines, this defines which samples belong to which scan

 * line. e.g. if there are 4 scan lines of 100 points each, the Sample vector would be of size 400,

 * and rowLengths = {100, 100, 100, 100}.

 */

    rapid::ShortSequence64  scanLengths;

/**

 * Specifies whether the scan lines are aligned horizontally (i.e. azimuth first)

 * or vertically (i.e. elevation first)

 */

    rapid::ext::RangeScanDirection  scanDirection;

/**

 * Horizontal shot angles of samples in a scan-line for those sensors

 * that have <b>static</b> horizontal spacing. For sensors with dynamic horizontal

 * spacing, this sequence will be empty and the corresponding member in

 * RangeScanSample will be used.

 */

    rapid::ShortSequence64  scanAzimuth;

/** Scaling factor to convert azimuth units to radians. */

    DDS_Float  scanAzimuthScale;

/**

 * Vertical shot angles of samples for those sensors that have <b>static</b>

 * vertical spacing between scan lines. For sensors with dynamic vertical

 * spacing, this sequence will be empty and the corresponding member in

 * RangeScanSample will be used.

 */

    rapid::ShortSequence64  scanElevation;

/** Scaling factor to convert elevation units to radians. */

    DDS_Float  scanElevationScale;

/** Scaling factor to convert range units to meters. */

    DDS_Float  rangeScale;

/**

 * Scaling factor to convert byte value to intensity units

 * FIXME: this is underspecified. What are intensity units?

 */

    DDS_Float  intensityScale;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RangeScanConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RangeScanConfigSeq, RangeScanConfig);
        
NDDSUSERDllExport
RTIBool RangeScanConfig_initialize(
        RangeScanConfig* self);
        
NDDSUSERDllExport
RTIBool RangeScanConfig_initialize_ex(
        RangeScanConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RangeScanConfig_initialize_w_params(
        RangeScanConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RangeScanConfig_finalize(
        RangeScanConfig* self);
                        
NDDSUSERDllExport
void RangeScanConfig_finalize_ex(
        RangeScanConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void RangeScanConfig_finalize_w_params(
        RangeScanConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void RangeScanConfig_finalize_optional_members(
        RangeScanConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool RangeScanConfig_copy(
        RangeScanConfig* dst,
        const RangeScanConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* RangeScanConfig_1049717493_h */
