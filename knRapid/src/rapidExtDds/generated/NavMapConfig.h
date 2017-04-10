
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NavMapConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NavMapConfig_1457985733_h
#define NavMapConfig_1457985733_h

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
             
static const DDS_Long NAVMAP_NUM_SHORT_LAYERS = 1;             
static const DDS_Long NAVMAP_NUM_OCTET_LAYERS = 4;

#define rapid_ext_ShortMapLayerNameSequence_LAST_MEMBER_ID rapid_String32_LAST_MEMBER_ID
typedef  rapid::String32Seq  ShortMapLayerNameSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortMapLayerNameSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortMapLayerNameSequenceSeq, ShortMapLayerNameSequence);                                        
            
NDDSUSERDllExport
RTIBool ShortMapLayerNameSequence_initialize(
        ShortMapLayerNameSequence* self);
            
NDDSUSERDllExport
RTIBool ShortMapLayerNameSequence_initialize_ex(
        ShortMapLayerNameSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortMapLayerNameSequence_initialize_w_params(
        ShortMapLayerNameSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortMapLayerNameSequence_finalize(
        ShortMapLayerNameSequence* self);
            
NDDSUSERDllExport
void ShortMapLayerNameSequence_finalize_ex(
        ShortMapLayerNameSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortMapLayerNameSequence_finalize_w_params(
        ShortMapLayerNameSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortMapLayerNameSequence_finalize_optional_members(
        ShortMapLayerNameSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortMapLayerNameSequence_copy(
        ShortMapLayerNameSequence* dst,
        const ShortMapLayerNameSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_OctetMapLayerNameSequence_LAST_MEMBER_ID rapid_String32_LAST_MEMBER_ID
typedef  rapid::String32Seq  OctetMapLayerNameSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetMapLayerNameSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetMapLayerNameSequenceSeq, OctetMapLayerNameSequence);                                        
            
NDDSUSERDllExport
RTIBool OctetMapLayerNameSequence_initialize(
        OctetMapLayerNameSequence* self);
            
NDDSUSERDllExport
RTIBool OctetMapLayerNameSequence_initialize_ex(
        OctetMapLayerNameSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetMapLayerNameSequence_initialize_w_params(
        OctetMapLayerNameSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetMapLayerNameSequence_finalize(
        OctetMapLayerNameSequence* self);
            
NDDSUSERDllExport
void OctetMapLayerNameSequence_finalize_ex(
        OctetMapLayerNameSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetMapLayerNameSequence_finalize_w_params(
        OctetMapLayerNameSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetMapLayerNameSequence_finalize_optional_members(
        OctetMapLayerNameSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetMapLayerNameSequence_copy(
        OctetMapLayerNameSequence* dst,
        const OctetMapLayerNameSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** Map layer of height fields (DEM). */
             
static const rapid::String32 NAVMAP_HEIGHT = "height";
/**

 * Map layer with traversability assessments. Goodness is derived value from roughness, slope &

 * vehicle parameters.

 */
             
static const rapid::String32 NAVMAP_GOODNESS = "goodness";
/** Roughness of terrain. */
             
static const rapid::String32 NAVMAP_ROUGHNESS = "roughness";
/** Map layer with confidence values for the associated traversability asessment. */
             
static const rapid::String32 NAVMAP_CERTAINTY = "certainty";
/** Map layer with cell normal vectors. Two or three entries per pixel, packed layout. */
             
static const rapid::String32 NAVMAP_NORMALS = "normals";
class NavMapConfigTypeSupport;

class NavMapConfigDataWriter;

class NavMapConfigDataReader;

struct NavMapConfigSeq;

/** Telemetry data structure for transfering maps */

#define rapid_ext_NavMapConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 6)
        
extern const char *NavMapConfigTYPENAME;
        


#ifdef __cplusplus
    struct NavMapConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NavMapConfigTypeSupport;
    class NavMapConfigDataWriter;
    class NavMapConfigDataReader;
#endif

#endif

            
    
class NavMapConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct NavMapConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NavMapConfigTypeSupport TypeSupport;
    typedef NavMapConfigDataWriter DataWriter;
    typedef NavMapConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef NavMapConfigTypeSupport TypeSupport;

typedef NavMapConfigDataWriter DataWriter;

typedef NavMapConfigDataReader DataReader;

typedef NavMapConfigSeq Seq;

#endif

typedef NavMapConfig Type;

/** Reference frame. */

    rapid::String128  referenceFrame;

/** Offset from the center of rotation to the lower left corner of the map. */

    DDS_Float  offset[2];

/** Size of a cell (in the reference frame coordinate system). */

    DDS_Float  cellSize[2];

/** Number of cells in x & y. */

    DDS_Short  numCells[2];

    rapid::ext::ShortMapLayerNameSequence  shortLayerNames;

    rapid::ext::OctetMapLayerNameSequence  octetLayerNames;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NavMapConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NavMapConfigSeq, NavMapConfig);
        
NDDSUSERDllExport
RTIBool NavMapConfig_initialize(
        NavMapConfig* self);
        
NDDSUSERDllExport
RTIBool NavMapConfig_initialize_ex(
        NavMapConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NavMapConfig_initialize_w_params(
        NavMapConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NavMapConfig_finalize(
        NavMapConfig* self);
                        
NDDSUSERDllExport
void NavMapConfig_finalize_ex(
        NavMapConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NavMapConfig_finalize_w_params(
        NavMapConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NavMapConfig_finalize_optional_members(
        NavMapConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NavMapConfig_copy(
        NavMapConfig* dst,
        const NavMapConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* NavMapConfig_1457985733_h */
