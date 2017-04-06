
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectorySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TrajectorySample_1187602883_h
#define TrajectorySample_1187602883_h

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


#include "BaseTypes.h"


namespace rapid{

namespace ext{

/**

 * SegmentType describes the type of segment that is being represented.

 */
 
typedef enum SegmentType
{
    SEG_STRAIGHT,
    SEG_ARC,
    SEG_POINTTURN,
    SEG_CLOTHOID
} SegmentType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SegmentType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SegmentTypeSeq, SegmentType);
        
NDDSUSERDllExport
RTIBool SegmentType_initialize(
        SegmentType* self);
        
NDDSUSERDllExport
RTIBool SegmentType_initialize_ex(
        SegmentType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SegmentType_initialize_w_params(
        SegmentType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SegmentType_finalize(
        SegmentType* self);
                        
NDDSUSERDllExport
void SegmentType_finalize_ex(
        SegmentType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void SegmentType_finalize_w_params(
        SegmentType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SegmentType_finalize_optional_members(
        SegmentType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool SegmentType_copy(
        SegmentType* dst,
        const SegmentType* src);


NDDSUSERDllExport
RTIBool SegmentType_getValues(SegmentTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * SingleSegment holds the info for an "atomic" segment.

 *

 */

#define rapid_ext_SingleSegment_LAST_MEMBER_ID 6
        
extern const char *SingleSegmentTYPENAME;
        


#ifdef __cplusplus
    struct SingleSegmentSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SingleSegmentTypeSupport;
    class SingleSegmentDataWriter;
    class SingleSegmentDataReader;
#endif

#endif

            
    
class SingleSegment                                        
{
public:            
#ifdef __cplusplus
    typedef struct SingleSegmentSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SingleSegmentTypeSupport TypeSupport;
    typedef SingleSegmentDataWriter DataWriter;
    typedef SingleSegmentDataReader DataReader;
#endif

#endif
    
    rapid::ext::SegmentType  type;

    DDS_Float  distance;

    DDS_Float  length;

    DDS_Float  angleOffset;

    rapid::Transform3D  start;

    rapid::Transform3D  end;

    DDS_Float  velocity;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SingleSegment_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SingleSegmentSeq, SingleSegment);
        
NDDSUSERDllExport
RTIBool SingleSegment_initialize(
        SingleSegment* self);
        
NDDSUSERDllExport
RTIBool SingleSegment_initialize_ex(
        SingleSegment* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SingleSegment_initialize_w_params(
        SingleSegment* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SingleSegment_finalize(
        SingleSegment* self);
                        
NDDSUSERDllExport
void SingleSegment_finalize_ex(
        SingleSegment* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SingleSegment_finalize_w_params(
        SingleSegment* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SingleSegment_finalize_optional_members(
        SingleSegment* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SingleSegment_copy(
        SingleSegment* dst,
        const SingleSegment* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_SegmentSequence_LAST_MEMBER_ID rapid_ext_SingleSegment_LAST_MEMBER_ID
typedef  rapid::ext::SingleSegmentSeq  SegmentSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SegmentSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(SegmentSequenceSeq, SegmentSequence);                                        
            
NDDSUSERDllExport
RTIBool SegmentSequence_initialize(
        SegmentSequence* self);
            
NDDSUSERDllExport
RTIBool SegmentSequence_initialize_ex(
        SegmentSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SegmentSequence_initialize_w_params(
        SegmentSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void SegmentSequence_finalize(
        SegmentSequence* self);
            
NDDSUSERDllExport
void SegmentSequence_finalize_ex(
        SegmentSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void SegmentSequence_finalize_w_params(
        SegmentSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SegmentSequence_finalize_optional_members(
        SegmentSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool SegmentSequence_copy(
        SegmentSequence* dst,
        const SegmentSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class TrajectorySampleTypeSupport;

class TrajectorySampleDataWriter;

class TrajectorySampleDataReader;

struct TrajectorySampleSeq;

/**

 * TrajectorySample is a message that holds the current sequence of geometric trajectory segments that the robot plans to follow.

 * The receiver will need to convert this to whatever form they need to identify potential collisions or to render it in a GUI

 */

#define rapid_ext_TrajectorySample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *TrajectorySampleTYPENAME;
        


#ifdef __cplusplus
    struct TrajectorySampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TrajectorySampleTypeSupport;
    class TrajectorySampleDataWriter;
    class TrajectorySampleDataReader;
#endif

#endif

            
    
class TrajectorySample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct TrajectorySampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TrajectorySampleTypeSupport TypeSupport;
    typedef TrajectorySampleDataWriter DataWriter;
    typedef TrajectorySampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef TrajectorySampleTypeSupport TypeSupport;

typedef TrajectorySampleDataWriter DataWriter;

typedef TrajectorySampleDataReader DataReader;

typedef TrajectorySampleSeq Seq;

#endif

typedef TrajectorySample Type;

    rapid::ext::SegmentSequence  geometricSegments;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TrajectorySample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TrajectorySampleSeq, TrajectorySample);
        
NDDSUSERDllExport
RTIBool TrajectorySample_initialize(
        TrajectorySample* self);
        
NDDSUSERDllExport
RTIBool TrajectorySample_initialize_ex(
        TrajectorySample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TrajectorySample_initialize_w_params(
        TrajectorySample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TrajectorySample_finalize(
        TrajectorySample* self);
                        
NDDSUSERDllExport
void TrajectorySample_finalize_ex(
        TrajectorySample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TrajectorySample_finalize_w_params(
        TrajectorySample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TrajectorySample_finalize_optional_members(
        TrajectorySample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TrajectorySample_copy(
        TrajectorySample* dst,
        const TrajectorySample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* TrajectorySample_1187602883_h */
