
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RosMarkerArraySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RosMarkerArraySample_1253988555_h
#define RosMarkerArraySample_1253988555_h

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
 
typedef enum ShapeType
{
    ARROW = 0,
    CUBE = 1,
    SPHERE = 2,
    CYLINDER = 3,
    LINE_STRIP = 4,
    LINE_LIST = 5,
    CUBE_LIST = 6,
    SPHERE_LIST = 7,
    POINTS = 8,
    TEXT_VIEW_FACING = 9,
    MESH_RESOURCE = 10,
    TRIANGLE_LIST = 11
} ShapeType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShapeType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ShapeTypeSeq, ShapeType);
        
NDDSUSERDllExport
RTIBool ShapeType_initialize(
        ShapeType* self);
        
NDDSUSERDllExport
RTIBool ShapeType_initialize_ex(
        ShapeType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ShapeType_initialize_w_params(
        ShapeType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ShapeType_finalize(
        ShapeType* self);
                        
NDDSUSERDllExport
void ShapeType_finalize_ex(
        ShapeType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ShapeType_finalize_w_params(
        ShapeType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShapeType_finalize_optional_members(
        ShapeType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ShapeType_copy(
        ShapeType* dst,
        const ShapeType* src);


NDDSUSERDllExport
RTIBool ShapeType_getValues(ShapeTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum Action
{
    ADD = 0,
    DELETE = 2,
    DELETEALL = 3
} Action;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Action_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ActionSeq, Action);
        
NDDSUSERDllExport
RTIBool Action_initialize(
        Action* self);
        
NDDSUSERDllExport
RTIBool Action_initialize_ex(
        Action* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Action_initialize_w_params(
        Action* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Action_finalize(
        Action* self);
                        
NDDSUSERDllExport
void Action_finalize_ex(
        Action* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Action_finalize_w_params(
        Action* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Action_finalize_optional_members(
        Action* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool Action_copy(
        Action* dst,
        const Action* src);


NDDSUSERDllExport
RTIBool Action_getValues(ActionSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_PointSequence1K_LAST_MEMBER_ID rapid_Vec3f_LAST_MEMBER_ID
typedef  rapid::Vec3fSeq  PointSequence1K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PointSequence1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(PointSequence1KSeq, PointSequence1K);                                        
            
NDDSUSERDllExport
RTIBool PointSequence1K_initialize(
        PointSequence1K* self);
            
NDDSUSERDllExport
RTIBool PointSequence1K_initialize_ex(
        PointSequence1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool PointSequence1K_initialize_w_params(
        PointSequence1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void PointSequence1K_finalize(
        PointSequence1K* self);
            
NDDSUSERDllExport
void PointSequence1K_finalize_ex(
        PointSequence1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void PointSequence1K_finalize_w_params(
        PointSequence1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void PointSequence1K_finalize_optional_members(
        PointSequence1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool PointSequence1K_copy(
        PointSequence1K* dst,
        const PointSequence1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_ColorSequence1K_LAST_MEMBER_ID rapid_Color4f_LAST_MEMBER_ID
typedef  rapid::Color4fSeq  ColorSequence1K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ColorSequence1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ColorSequence1KSeq, ColorSequence1K);                                        
            
NDDSUSERDllExport
RTIBool ColorSequence1K_initialize(
        ColorSequence1K* self);
            
NDDSUSERDllExport
RTIBool ColorSequence1K_initialize_ex(
        ColorSequence1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ColorSequence1K_initialize_w_params(
        ColorSequence1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ColorSequence1K_finalize(
        ColorSequence1K* self);
            
NDDSUSERDllExport
void ColorSequence1K_finalize_ex(
        ColorSequence1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ColorSequence1K_finalize_w_params(
        ColorSequence1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ColorSequence1K_finalize_optional_members(
        ColorSequence1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ColorSequence1K_copy(
        ColorSequence1K* dst,
        const ColorSequence1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


 /** Direct copy of ROS type */

#define rapid_ext_arc_Marker_LAST_MEMBER_ID 13
        
extern const char *MarkerTYPENAME;
        


#ifdef __cplusplus
    struct MarkerSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MarkerTypeSupport;
    class MarkerDataWriter;
    class MarkerDataReader;
#endif

#endif

            
    
class Marker                                        
{
public:            
#ifdef __cplusplus
    typedef struct MarkerSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MarkerTypeSupport TypeSupport;
    typedef MarkerDataWriter DataWriter;
    typedef MarkerDataReader DataReader;
#endif

#endif
    
/** Namespace to place this object in... used in conjunction with id to create a unique name for the object */

    rapid::String32  ns;

/** object ID useful in conjunction with the namespace for manipulating and deleting the object later */

    DDS_Long  id;

/** Type of object */

    rapid::ext::arc::ShapeType  type;

/** 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects */

    rapid::ext::arc::Action  action;

/** Pose of the object */

    rapid::Transform3D  pose;

/** Scale of the object 1,1,1 means default (usually 1 meter square) */

    rapid::Vec3f  scale;

/** RGBA color [0.0-1.0] */

    rapid::Color4f  color;

/** NS How long (in nanoseconds) the object should last before being automatically deleted.  0 means forever */

    DDS_LongLong  lifetime;

/** If this marker should be frame-locked, i.e. retransformed into its frame every timestep */

    DDS_Boolean  frame_locked;

/** Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...) */

    rapid::ext::arc::PointSequence1K  points;



    rapid::ext::arc::ColorSequence1K  colors;

/**  NOTE: only used for text markers */

    rapid::String32  text;

/**  NOTE: only used for MESH_RESOURCE markers */

    rapid::String32  mesh_resource;

    DDS_Boolean  mesh_use_embedded_materials;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Marker_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MarkerSeq, Marker);
        
NDDSUSERDllExport
RTIBool Marker_initialize(
        Marker* self);
        
NDDSUSERDllExport
RTIBool Marker_initialize_ex(
        Marker* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Marker_initialize_w_params(
        Marker* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Marker_finalize(
        Marker* self);
                        
NDDSUSERDllExport
void Marker_finalize_ex(
        Marker* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Marker_finalize_w_params(
        Marker* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Marker_finalize_optional_members(
        Marker* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Marker_copy(
        Marker* dst,
        const Marker* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_MarkerArraySequence8_LAST_MEMBER_ID rapid_ext_arc_Marker_LAST_MEMBER_ID
typedef  rapid::ext::arc::MarkerSeq  MarkerArraySequence8;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MarkerArraySequence8_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(MarkerArraySequence8Seq, MarkerArraySequence8);                                        
            
NDDSUSERDllExport
RTIBool MarkerArraySequence8_initialize(
        MarkerArraySequence8* self);
            
NDDSUSERDllExport
RTIBool MarkerArraySequence8_initialize_ex(
        MarkerArraySequence8* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool MarkerArraySequence8_initialize_w_params(
        MarkerArraySequence8* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void MarkerArraySequence8_finalize(
        MarkerArraySequence8* self);
            
NDDSUSERDllExport
void MarkerArraySequence8_finalize_ex(
        MarkerArraySequence8* self,RTIBool deletePointers);

NDDSUSERDllExport
void MarkerArraySequence8_finalize_w_params(
        MarkerArraySequence8* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void MarkerArraySequence8_finalize_optional_members(
        MarkerArraySequence8* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool MarkerArraySequence8_copy(
        MarkerArraySequence8* dst,
        const MarkerArraySequence8* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class  RosMarkerArraySampleTypeSupport;

class  RosMarkerArraySampleDataWriter;

class  RosMarkerArraySampleDataReader;

struct RosMarkerArraySampleSeq;

/**

 * MarkerArraySample

 */

#define rapid_ext_arc_RosMarkerArraySample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *RosMarkerArraySampleTYPENAME;
        


#ifdef __cplusplus
    struct RosMarkerArraySampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class RosMarkerArraySampleTypeSupport;
    class RosMarkerArraySampleDataWriter;
    class RosMarkerArraySampleDataReader;
#endif

#endif

            
    
class RosMarkerArraySample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct RosMarkerArraySampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef RosMarkerArraySampleTypeSupport TypeSupport;
    typedef RosMarkerArraySampleDataWriter DataWriter;
    typedef RosMarkerArraySampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef RosMarkerArraySampleTypeSupport TypeSupport;

typedef RosMarkerArraySampleDataWriter DataWriter;

typedef RosMarkerArraySampleDataReader DataReader;

typedef RosMarkerArraySampleSeq Seq;

#endif

typedef RosMarkerArraySample Type;

    rapid::ext::arc::MarkerArraySequence8  marker_array;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RosMarkerArraySample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RosMarkerArraySampleSeq, RosMarkerArraySample);
        
NDDSUSERDllExport
RTIBool RosMarkerArraySample_initialize(
        RosMarkerArraySample* self);
        
NDDSUSERDllExport
RTIBool RosMarkerArraySample_initialize_ex(
        RosMarkerArraySample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RosMarkerArraySample_initialize_w_params(
        RosMarkerArraySample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RosMarkerArraySample_finalize(
        RosMarkerArraySample* self);
                        
NDDSUSERDllExport
void RosMarkerArraySample_finalize_ex(
        RosMarkerArraySample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void RosMarkerArraySample_finalize_w_params(
        RosMarkerArraySample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void RosMarkerArraySample_finalize_optional_members(
        RosMarkerArraySample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool RosMarkerArraySample_copy(
        RosMarkerArraySample* dst,
        const RosMarkerArraySample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* RosMarkerArraySample_1253988555_h */
