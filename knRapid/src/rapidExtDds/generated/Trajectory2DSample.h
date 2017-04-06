
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory2DSample_1975814187_h
#define Trajectory2DSample_1975814187_h

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


#define rapid_ext_RTransMetaSequence_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  RTransMetaSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RTransMetaSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(RTransMetaSequenceSeq, RTransMetaSequence);                                        
            
NDDSUSERDllExport
RTIBool RTransMetaSequence_initialize(
        RTransMetaSequence* self);
            
NDDSUSERDllExport
RTIBool RTransMetaSequence_initialize_ex(
        RTransMetaSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTransMetaSequence_initialize_w_params(
        RTransMetaSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void RTransMetaSequence_finalize(
        RTransMetaSequence* self);
            
NDDSUSERDllExport
void RTransMetaSequence_finalize_ex(
        RTransMetaSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTransMetaSequence_finalize_w_params(
        RTransMetaSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTransMetaSequence_finalize_optional_members(
        RTransMetaSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool RTransMetaSequence_copy(
        RTransMetaSequence* dst,
        const RTransMetaSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const DDS_Long TRAJ2D_META_GOOD = 0;             
static const DDS_Long TRAJ2D_META_UNKOWN = 1;             
static const DDS_Long TRAJ2D_META_OBSTACLE = 2;             
static const DDS_Long TRAJ2D_META_STOP_UNKOWN = 3;             
static const DDS_Long TRAJ2D_META_STOP_OBSTACLE = 4;             
static const DDS_Long TRAJ2D_META_STOP_PATH_DEVIATION = 5;
#define rapid_ext_RTrans2DMeta_LAST_MEMBER_ID 3
        
extern const char *RTrans2DMetaTYPENAME;
        


#ifdef __cplusplus
    struct RTrans2DMetaSeq;

#ifndef NDDS_STANDALONE_TYPE
    class RTrans2DMetaTypeSupport;
    class RTrans2DMetaDataWriter;
    class RTrans2DMetaDataReader;
#endif

#endif

            
    
class RTrans2DMeta                                        
{
public:            
#ifdef __cplusplus
    typedef struct RTrans2DMetaSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef RTrans2DMetaTypeSupport TypeSupport;
    typedef RTrans2DMetaDataWriter DataWriter;
    typedef RTrans2DMetaDataReader DataReader;
#endif

#endif
    
    DDS_Float  x;

    DDS_Float  y;

    DDS_Float  theta;

    rapid::ext::RTransMetaSequence  meta;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RTrans2DMeta_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RTrans2DMetaSeq, RTrans2DMeta);
        
NDDSUSERDllExport
RTIBool RTrans2DMeta_initialize(
        RTrans2DMeta* self);
        
NDDSUSERDllExport
RTIBool RTrans2DMeta_initialize_ex(
        RTrans2DMeta* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RTrans2DMeta_initialize_w_params(
        RTrans2DMeta* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RTrans2DMeta_finalize(
        RTrans2DMeta* self);
                        
NDDSUSERDllExport
void RTrans2DMeta_finalize_ex(
        RTrans2DMeta* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void RTrans2DMeta_finalize_w_params(
        RTrans2DMeta* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void RTrans2DMeta_finalize_optional_members(
        RTrans2DMeta* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool RTrans2DMeta_copy(
        RTrans2DMeta* dst,
        const RTrans2DMeta* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_RTrans2DSequence_LAST_MEMBER_ID rapid_ext_RTrans2DMeta_LAST_MEMBER_ID
typedef  rapid::ext::RTrans2DMetaSeq  RTrans2DSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RTrans2DSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(RTrans2DSequenceSeq, RTrans2DSequence);                                        
            
NDDSUSERDllExport
RTIBool RTrans2DSequence_initialize(
        RTrans2DSequence* self);
            
NDDSUSERDllExport
RTIBool RTrans2DSequence_initialize_ex(
        RTrans2DSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTrans2DSequence_initialize_w_params(
        RTrans2DSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void RTrans2DSequence_finalize(
        RTrans2DSequence* self);
            
NDDSUSERDllExport
void RTrans2DSequence_finalize_ex(
        RTrans2DSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTrans2DSequence_finalize_w_params(
        RTrans2DSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTrans2DSequence_finalize_optional_members(
        RTrans2DSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool RTrans2DSequence_copy(
        RTrans2DSequence* dst,
        const RTrans2DSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class Trajectory2DSampleTypeSupport;

class Trajectory2DSampleDataWriter;

class Trajectory2DSampleDataReader;

struct Trajectory2DSampleSeq;

#define rapid_ext_Trajectory2DSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *Trajectory2DSampleTYPENAME;
        


#ifdef __cplusplus
    struct Trajectory2DSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Trajectory2DSampleTypeSupport;
    class Trajectory2DSampleDataWriter;
    class Trajectory2DSampleDataReader;
#endif

#endif

            
    
class Trajectory2DSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct Trajectory2DSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Trajectory2DSampleTypeSupport TypeSupport;
    typedef Trajectory2DSampleDataWriter DataWriter;
    typedef Trajectory2DSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef Trajectory2DSampleTypeSupport TypeSupport;

typedef Trajectory2DSampleDataWriter DataWriter;

typedef Trajectory2DSampleDataReader DataReader;

typedef Trajectory2DSampleSeq Seq;

#endif

typedef Trajectory2DSample Type;

/** origin of the trajectory */

    rapid::Transform3D  origin;

/** The trajectory of the robot relative to the provided pose, sampled at regular time steps, as specified by samplingInterval. */

    rapid::ext::RTrans2DSequence  trajectory;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Trajectory2DSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Trajectory2DSampleSeq, Trajectory2DSample);
        
NDDSUSERDllExport
RTIBool Trajectory2DSample_initialize(
        Trajectory2DSample* self);
        
NDDSUSERDllExport
RTIBool Trajectory2DSample_initialize_ex(
        Trajectory2DSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Trajectory2DSample_initialize_w_params(
        Trajectory2DSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Trajectory2DSample_finalize(
        Trajectory2DSample* self);
                        
NDDSUSERDllExport
void Trajectory2DSample_finalize_ex(
        Trajectory2DSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Trajectory2DSample_finalize_w_params(
        Trajectory2DSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Trajectory2DSample_finalize_optional_members(
        Trajectory2DSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Trajectory2DSample_copy(
        Trajectory2DSample* dst,
        const Trajectory2DSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* Trajectory2DSample_1975814187_h */
