
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PointCloudSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PointCloudSample_1945903382_h
#define PointCloudSample_1945903382_h

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
             
static const DDS_Long POINTCLOUD_SAMPLE_MAX_POINTS = 16384;
/**

 * PointSample describes the position and attributes of a point in the cloud. Note: Attributes are included

 * in this struct because we get them for free on the wire due to word alignment.

 */

#define rapid_PointSample_LAST_MEMBER_ID 1
        
extern const char *PointSampleTYPENAME;
        


#ifdef __cplusplus
    struct PointSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class PointSampleTypeSupport;
    class PointSampleDataWriter;
    class PointSampleDataReader;
#endif

#endif

            
    
class PointSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct PointSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef PointSampleTypeSupport TypeSupport;
    typedef PointSampleDataWriter DataWriter;
    typedef PointSampleDataReader DataReader;
#endif

#endif
    
/**

 * Position relative to the cloud origin, in arbitrary point units. Reference PointSampleConfig

 * to determine the meaning of the elements in this vector. These are signed short values so

 * in order to exploit the full 16 bits of resolution, data should be scaled to

 * a range of -32768 to 32767. If 15 bits of resolution is adequate, data can be scaled to a

 * range of 0 to 32767 for computational efficiency on the sending side.

 * @see PointSampleXyzMode

 */

    DDS_Short  xyz[3];

/**

 * Particle attributes (e.g., intensity).

 * @see PointSampleAttributeMode

 */

    DDS_Octet  attributes[2];

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PointSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PointSampleSeq, PointSample);
        
NDDSUSERDllExport
RTIBool PointSample_initialize(
        PointSample* self);
        
NDDSUSERDllExport
RTIBool PointSample_initialize_ex(
        PointSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PointSample_initialize_w_params(
        PointSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PointSample_finalize(
        PointSample* self);
                        
NDDSUSERDllExport
void PointSample_finalize_ex(
        PointSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void PointSample_finalize_w_params(
        PointSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void PointSample_finalize_optional_members(
        PointSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool PointSample_copy(
        PointSample* dst,
        const PointSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_PointSampleSequence_LAST_MEMBER_ID rapid_PointSample_LAST_MEMBER_ID
typedef  rapid::PointSampleSeq  PointSampleSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PointSampleSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(PointSampleSequenceSeq, PointSampleSequence);                                        
            
NDDSUSERDllExport
RTIBool PointSampleSequence_initialize(
        PointSampleSequence* self);
            
NDDSUSERDllExport
RTIBool PointSampleSequence_initialize_ex(
        PointSampleSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool PointSampleSequence_initialize_w_params(
        PointSampleSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void PointSampleSequence_finalize(
        PointSampleSequence* self);
            
NDDSUSERDllExport
void PointSampleSequence_finalize_ex(
        PointSampleSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void PointSampleSequence_finalize_w_params(
        PointSampleSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void PointSampleSequence_finalize_optional_members(
        PointSampleSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool PointSampleSequence_copy(
        PointSampleSequence* dst,
        const PointSampleSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class PointCloudSampleTypeSupport;

class PointCloudSampleDataWriter;

class PointCloudSampleDataReader;

struct PointCloudSampleSeq;

/** PointCloudSample message sends data in point cloud format. */

#define rapid_PointCloudSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *PointCloudSampleTYPENAME;
        


#ifdef __cplusplus
    struct PointCloudSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class PointCloudSampleTypeSupport;
    class PointCloudSampleDataWriter;
    class PointCloudSampleDataReader;
#endif

#endif

            
    
class PointCloudSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct PointCloudSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef PointCloudSampleTypeSupport TypeSupport;
    typedef PointCloudSampleDataWriter DataWriter;
    typedef PointCloudSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef PointCloudSampleTypeSupport TypeSupport;

typedef PointCloudSampleDataWriter DataWriter;

typedef PointCloudSampleDataReader DataReader;

typedef PointCloudSampleSeq Seq;

#endif

typedef PointCloudSample Type;

/** Origin of points (i.e., offset from frame 0,0,0 in meters). */

    rapid::Vec3d  origin;

/**

 * Per-element scale factor to convert point units to a meaningful value. Following conversion,

 * spatial coordinates should be in METERS and angular values should be in RADIANS.

 */

    rapid::Vec3d  xyzScale;

/** Sequence of points. */

    rapid::PointSampleSequence  points;

/**

 * Descriptions of rows from the same scan-line. If all points belong to the same point cloud,

 *

 * <code>

 * rowLengths.length() == 0 (or rowLengths.length()==1 && rowLengths[0] == samples.length() )

 * </code>

 *

 * Otherwise,

 *

 * <code>

 * SUM(rowLengths) == samples.length().

 * </code>

 */

    rapid::ShortSequence128  rowLengths;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PointCloudSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PointCloudSampleSeq, PointCloudSample);
        
NDDSUSERDllExport
RTIBool PointCloudSample_initialize(
        PointCloudSample* self);
        
NDDSUSERDllExport
RTIBool PointCloudSample_initialize_ex(
        PointCloudSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PointCloudSample_initialize_w_params(
        PointCloudSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PointCloudSample_finalize(
        PointCloudSample* self);
                        
NDDSUSERDllExport
void PointCloudSample_finalize_ex(
        PointCloudSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void PointCloudSample_finalize_w_params(
        PointCloudSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void PointCloudSample_finalize_optional_members(
        PointCloudSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool PointCloudSample_copy(
        PointCloudSample* dst,
        const PointCloudSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* PointCloudSample_1945903382_h */
