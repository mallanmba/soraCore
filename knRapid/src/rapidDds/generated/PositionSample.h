
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PositionSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PositionSample_1835754899_h
#define PositionSample_1835754899_h

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

class PositionSampleTypeSupport;

class PositionSampleDataWriter;

class PositionSampleDataReader;

struct PositionSampleSeq;

/**

 * PositionSample message delivers the position of the Agent. Corresponding PositionConfig sets up the

 * coordinate frame and specifies how the Transform3D.rot field is to be interpreted for pose and velocity.

 */

#define rapid_PositionSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 3)
        
extern const char *PositionSampleTYPENAME;
        


#ifdef __cplusplus
    struct PositionSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class PositionSampleTypeSupport;
    class PositionSampleDataWriter;
    class PositionSampleDataReader;
#endif

#endif

            
    
class PositionSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct PositionSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef PositionSampleTypeSupport TypeSupport;
    typedef PositionSampleDataWriter DataWriter;
    typedef PositionSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef PositionSampleTypeSupport TypeSupport;

typedef PositionSampleDataWriter DataWriter;

typedef PositionSampleDataReader DataReader;

typedef PositionSampleSeq Seq;

#endif

typedef PositionSample Type;

/** 3D pose of the agent. PositionConfig.poseEncoding specifies how to interpret the rotation. */

    rapid::Transform3D  pose;

/** 3D velocity of the agent. PositionConfig.velocityEncoding specifies how to interpret the rotation. */

    rapid::Transform3D  velocity;

/** Any Agent-specific information needed. */

    rapid::ValueSequence64  values;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PositionSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PositionSampleSeq, PositionSample);
        
NDDSUSERDllExport
RTIBool PositionSample_initialize(
        PositionSample* self);
        
NDDSUSERDllExport
RTIBool PositionSample_initialize_ex(
        PositionSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PositionSample_initialize_w_params(
        PositionSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PositionSample_finalize(
        PositionSample* self);
                        
NDDSUSERDllExport
void PositionSample_finalize_ex(
        PositionSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void PositionSample_finalize_w_params(
        PositionSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void PositionSample_finalize_optional_members(
        PositionSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool PositionSample_copy(
        PositionSample* dst,
        const PositionSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* PositionSample_1835754899_h */
