
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryMeshSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GeometryMeshSample_927071363_h
#define GeometryMeshSample_927071363_h

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

namespace arc{
 
typedef enum GeometryIndexMode
{
    GIM_TRIANGLES,
    GIM_TRISTRIP,
    GIM_TRIFAN,
    GIM_QUADS,
    GIM_LINES,
    GIM_LINE_STRIP,
    GIM_LINE_LOOP,
    GIM_POINTS
} GeometryIndexMode;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GeometryIndexMode_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GeometryIndexModeSeq, GeometryIndexMode);
        
NDDSUSERDllExport
RTIBool GeometryIndexMode_initialize(
        GeometryIndexMode* self);
        
NDDSUSERDllExport
RTIBool GeometryIndexMode_initialize_ex(
        GeometryIndexMode* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GeometryIndexMode_initialize_w_params(
        GeometryIndexMode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GeometryIndexMode_finalize(
        GeometryIndexMode* self);
                        
NDDSUSERDllExport
void GeometryIndexMode_finalize_ex(
        GeometryIndexMode* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void GeometryIndexMode_finalize_w_params(
        GeometryIndexMode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void GeometryIndexMode_finalize_optional_members(
        GeometryIndexMode* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool GeometryIndexMode_copy(
        GeometryIndexMode* dst,
        const GeometryIndexMode* src);


NDDSUSERDllExport
RTIBool GeometryIndexMode_getValues(GeometryIndexModeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_GeometryIndexModeSequence32_LAST_MEMBER_ID rapid_ext_arc_GeometryIndexMode_LAST_MEMBER_ID
typedef  rapid::ext::arc::GeometryIndexModeSeq  GeometryIndexModeSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GeometryIndexModeSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(GeometryIndexModeSequence32Seq, GeometryIndexModeSequence32);                                        
            
NDDSUSERDllExport
RTIBool GeometryIndexModeSequence32_initialize(
        GeometryIndexModeSequence32* self);
            
NDDSUSERDllExport
RTIBool GeometryIndexModeSequence32_initialize_ex(
        GeometryIndexModeSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool GeometryIndexModeSequence32_initialize_w_params(
        GeometryIndexModeSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void GeometryIndexModeSequence32_finalize(
        GeometryIndexModeSequence32* self);
            
NDDSUSERDllExport
void GeometryIndexModeSequence32_finalize_ex(
        GeometryIndexModeSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void GeometryIndexModeSequence32_finalize_w_params(
        GeometryIndexModeSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void GeometryIndexModeSequence32_finalize_optional_members(
        GeometryIndexModeSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool GeometryIndexModeSequence32_copy(
        GeometryIndexModeSequence32* dst,
        const GeometryIndexModeSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_IndexSequence256K_LAST_MEMBER_ID unsignedshort_LAST_MEMBER_ID
typedef  DDS_UnsignedShortSeq  IndexSequence256K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* IndexSequence256K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(IndexSequence256KSeq, IndexSequence256K);                                        
            
NDDSUSERDllExport
RTIBool IndexSequence256K_initialize(
        IndexSequence256K* self);
            
NDDSUSERDllExport
RTIBool IndexSequence256K_initialize_ex(
        IndexSequence256K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool IndexSequence256K_initialize_w_params(
        IndexSequence256K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void IndexSequence256K_finalize(
        IndexSequence256K* self);
            
NDDSUSERDllExport
void IndexSequence256K_finalize_ex(
        IndexSequence256K* self,RTIBool deletePointers);

NDDSUSERDllExport
void IndexSequence256K_finalize_w_params(
        IndexSequence256K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void IndexSequence256K_finalize_optional_members(
        IndexSequence256K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool IndexSequence256K_copy(
        IndexSequence256K* dst,
        const IndexSequence256K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_OctetSequence170K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence170K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence170K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence170KSeq, OctetSequence170K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence170K_initialize(
        OctetSequence170K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence170K_initialize_ex(
        OctetSequence170K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence170K_initialize_w_params(
        OctetSequence170K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence170K_finalize(
        OctetSequence170K* self);
            
NDDSUSERDllExport
void OctetSequence170K_finalize_ex(
        OctetSequence170K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence170K_finalize_w_params(
        OctetSequence170K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence170K_finalize_optional_members(
        OctetSequence170K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence170K_copy(
        OctetSequence170K* dst,
        const OctetSequence170K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class GeometryMeshSampleTypeSupport;

class GeometryMeshSampleDataWriter;

class GeometryMeshSampleDataReader;

struct GeometryMeshSampleSeq;

/**

 * Telemetry data structure for transfering meshes.

 */

#define rapid_ext_arc_GeometryMeshSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 12)
        
extern const char *GeometryMeshSampleTYPENAME;
        


#ifdef __cplusplus
    struct GeometryMeshSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GeometryMeshSampleTypeSupport;
    class GeometryMeshSampleDataWriter;
    class GeometryMeshSampleDataReader;
#endif

#endif

            
    
class GeometryMeshSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct GeometryMeshSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GeometryMeshSampleTypeSupport TypeSupport;
    typedef GeometryMeshSampleDataWriter DataWriter;
    typedef GeometryMeshSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef GeometryMeshSampleTypeSupport TypeSupport;

typedef GeometryMeshSampleDataWriter DataWriter;

typedef GeometryMeshSampleDataReader DataReader;

typedef GeometryMeshSampleSeq Seq;

#endif

typedef GeometryMeshSample Type;

/** Mesh identifier that can be used to identify multiple mesh instances. */

    DDS_Long  geometryId;

    rapid::ext::arc::GeometryIndexModeSequence32  indexModes;

    rapid::LongSequence32  indexLengths;

    rapid::ext::arc::IndexSequence256K  indexData;

    DDS_Float  vertexScale;

    rapid::ShortSequence128K  vertexData;

    DDS_Float  normalScale;

    rapid::OctetSequence128K  normalData;

    DDS_Float  colorScale;

    rapid::ext::arc::OctetSequence170K  colorData;

    DDS_Float  texCoord0Scale;

    rapid::ShortSequence96K  texCoord0Data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GeometryMeshSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GeometryMeshSampleSeq, GeometryMeshSample);
        
NDDSUSERDllExport
RTIBool GeometryMeshSample_initialize(
        GeometryMeshSample* self);
        
NDDSUSERDllExport
RTIBool GeometryMeshSample_initialize_ex(
        GeometryMeshSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GeometryMeshSample_initialize_w_params(
        GeometryMeshSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GeometryMeshSample_finalize(
        GeometryMeshSample* self);
                        
NDDSUSERDllExport
void GeometryMeshSample_finalize_ex(
        GeometryMeshSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GeometryMeshSample_finalize_w_params(
        GeometryMeshSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GeometryMeshSample_finalize_optional_members(
        GeometryMeshSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GeometryMeshSample_copy(
        GeometryMeshSample* dst,
        const GeometryMeshSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* GeometryMeshSample_927071363_h */
