
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NavMapSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NavMapSample_769629744_h
#define NavMapSample_769629744_h

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


#include "NavMapConfig.h"


namespace rapid{

namespace ext{

/**

 * Map layer data for data samples reduced to 8 bit values. Data structure holding a vector of data

 * points. To reduce footprint, the data is sent as 8 bit values (octet). The data-structure holds an

 * offset and a scaling factor, to restore the original data samples. e.g.

 * <code>

 * double value = data * scale + offset

 * </code>

 * The density parameter allows a layer to be of lower resolution than the map itself.

 */

#define rapid_ext_OctetMapLayer_LAST_MEMBER_ID 3
        
extern const char *OctetMapLayerTYPENAME;
        


#ifdef __cplusplus
    struct OctetMapLayerSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OctetMapLayerTypeSupport;
    class OctetMapLayerDataWriter;
    class OctetMapLayerDataReader;
#endif

#endif

            
    
class OctetMapLayer                                        
{
public:            
#ifdef __cplusplus
    typedef struct OctetMapLayerSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OctetMapLayerTypeSupport TypeSupport;
    typedef OctetMapLayerDataWriter DataWriter;
    typedef OctetMapLayerDataReader DataReader;
#endif

#endif
    
/** Data value offset. */

    DDS_Double  offset;

/** Data value scale. */

    DDS_Float  scale;

/**

 * Sampling density. A full resolution layer has a density of 1, a half resolution layer has a

 * density of 2, etc. <i>Sampling density must be a power of 2</i>

 */

    DDS_Short  density;

/** Vector of 8 bit data samples. */

    rapid::OctetSequence64K  data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetMapLayer_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OctetMapLayerSeq, OctetMapLayer);
        
NDDSUSERDllExport
RTIBool OctetMapLayer_initialize(
        OctetMapLayer* self);
        
NDDSUSERDllExport
RTIBool OctetMapLayer_initialize_ex(
        OctetMapLayer* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool OctetMapLayer_initialize_w_params(
        OctetMapLayer* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void OctetMapLayer_finalize(
        OctetMapLayer* self);
                        
NDDSUSERDllExport
void OctetMapLayer_finalize_ex(
        OctetMapLayer* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void OctetMapLayer_finalize_w_params(
        OctetMapLayer* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void OctetMapLayer_finalize_optional_members(
        OctetMapLayer* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool OctetMapLayer_copy(
        OctetMapLayer* dst,
        const OctetMapLayer* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * Map layer data for data samples reduced to 16 bit values. Data structure holding a vector of data

 * points. To reduce footprint, the data is sent as 16 bit values (short). The data-structure holds an

 * offset and a scaling factor, to restore the original data samples. e.g.

 * <code>

 * double value = data * scale + offset

 * </code>

 * The density parameter allows a layer to be of lower resolution than the map itself.

 */

#define rapid_ext_ShortMapLayer_LAST_MEMBER_ID 3
        
extern const char *ShortMapLayerTYPENAME;
        


#ifdef __cplusplus
    struct ShortMapLayerSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ShortMapLayerTypeSupport;
    class ShortMapLayerDataWriter;
    class ShortMapLayerDataReader;
#endif

#endif

            
    
class ShortMapLayer                                        
{
public:            
#ifdef __cplusplus
    typedef struct ShortMapLayerSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ShortMapLayerTypeSupport TypeSupport;
    typedef ShortMapLayerDataWriter DataWriter;
    typedef ShortMapLayerDataReader DataReader;
#endif

#endif
    
/** Data value offset. */

    DDS_Double  offset;

/** Data value scale. */

    DDS_Float  scale;

/**

 * Sampling density. A full resolution layer has a density of 1, a half resolution (in both

 * dimensions) layer has a density of 2, etc. <i>Sampling density must be a power of 2</i>

 */

    DDS_Short  density;

/** Vector of 16 bit data samples. */

    rapid::ShortSequence64K  data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortMapLayer_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ShortMapLayerSeq, ShortMapLayer);
        
NDDSUSERDllExport
RTIBool ShortMapLayer_initialize(
        ShortMapLayer* self);
        
NDDSUSERDllExport
RTIBool ShortMapLayer_initialize_ex(
        ShortMapLayer* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ShortMapLayer_initialize_w_params(
        ShortMapLayer* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ShortMapLayer_finalize(
        ShortMapLayer* self);
                        
NDDSUSERDllExport
void ShortMapLayer_finalize_ex(
        ShortMapLayer* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ShortMapLayer_finalize_w_params(
        ShortMapLayer* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ShortMapLayer_finalize_optional_members(
        ShortMapLayer* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ShortMapLayer_copy(
        ShortMapLayer* dst,
        const ShortMapLayer* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_ShortMapLayerSequence_LAST_MEMBER_ID rapid_ext_ShortMapLayer_LAST_MEMBER_ID
typedef  rapid::ext::ShortMapLayerSeq  ShortMapLayerSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortMapLayerSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortMapLayerSequenceSeq, ShortMapLayerSequence);                                        
            
NDDSUSERDllExport
RTIBool ShortMapLayerSequence_initialize(
        ShortMapLayerSequence* self);
            
NDDSUSERDllExport
RTIBool ShortMapLayerSequence_initialize_ex(
        ShortMapLayerSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortMapLayerSequence_initialize_w_params(
        ShortMapLayerSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortMapLayerSequence_finalize(
        ShortMapLayerSequence* self);
            
NDDSUSERDllExport
void ShortMapLayerSequence_finalize_ex(
        ShortMapLayerSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortMapLayerSequence_finalize_w_params(
        ShortMapLayerSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortMapLayerSequence_finalize_optional_members(
        ShortMapLayerSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortMapLayerSequence_copy(
        ShortMapLayerSequence* dst,
        const ShortMapLayerSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_OctetMapLayerSequence_LAST_MEMBER_ID rapid_ext_OctetMapLayer_LAST_MEMBER_ID
typedef  rapid::ext::OctetMapLayerSeq  OctetMapLayerSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetMapLayerSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetMapLayerSequenceSeq, OctetMapLayerSequence);                                        
            
NDDSUSERDllExport
RTIBool OctetMapLayerSequence_initialize(
        OctetMapLayerSequence* self);
            
NDDSUSERDllExport
RTIBool OctetMapLayerSequence_initialize_ex(
        OctetMapLayerSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetMapLayerSequence_initialize_w_params(
        OctetMapLayerSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetMapLayerSequence_finalize(
        OctetMapLayerSequence* self);
            
NDDSUSERDllExport
void OctetMapLayerSequence_finalize_ex(
        OctetMapLayerSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetMapLayerSequence_finalize_w_params(
        OctetMapLayerSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetMapLayerSequence_finalize_optional_members(
        OctetMapLayerSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetMapLayerSequence_copy(
        OctetMapLayerSequence* dst,
        const OctetMapLayerSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class NavMapSampleTypeSupport;

class NavMapSampleDataWriter;

class NavMapSampleDataReader;

struct NavMapSampleSeq;

/**

 * Telemetry data structure for transfering maps.

 */

#define rapid_ext_NavMapSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *NavMapSampleTYPENAME;
        


#ifdef __cplusplus
    struct NavMapSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NavMapSampleTypeSupport;
    class NavMapSampleDataWriter;
    class NavMapSampleDataReader;
#endif

#endif

            
    
class NavMapSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct NavMapSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NavMapSampleTypeSupport TypeSupport;
    typedef NavMapSampleDataWriter DataWriter;
    typedef NavMapSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef NavMapSampleTypeSupport TypeSupport;

typedef NavMapSampleDataWriter DataWriter;

typedef NavMapSampleDataReader DataReader;

typedef NavMapSampleSeq Seq;

#endif

typedef NavMapSample Type;

/** The x,y integer tile idenitifier. */

    DDS_Long  tileId[2];

/**

 * Location of the map in the reference frame. This is a 6 dof pose, so far all our mapping

 * algorithms only deal with rotations around the z-axis.

 */

    rapid::Transform3D  location;

    rapid::ext::ShortMapLayerSequence  shortLayers;

    rapid::ext::OctetMapLayerSequence  octetLayers;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NavMapSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NavMapSampleSeq, NavMapSample);
        
NDDSUSERDllExport
RTIBool NavMapSample_initialize(
        NavMapSample* self);
        
NDDSUSERDllExport
RTIBool NavMapSample_initialize_ex(
        NavMapSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NavMapSample_initialize_w_params(
        NavMapSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NavMapSample_finalize(
        NavMapSample* self);
                        
NDDSUSERDllExport
void NavMapSample_finalize_ex(
        NavMapSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NavMapSample_finalize_w_params(
        NavMapSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NavMapSample_finalize_optional_members(
        NavMapSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NavMapSample_copy(
        NavMapSample* dst,
        const NavMapSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* NavMapSample_769629744_h */
