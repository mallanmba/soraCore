
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from JointConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef JointConfig_714822731_h
#define JointConfig_714822731_h

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

 * JointDef defines the frame and DOF for a specific Agent's joints.

 */

#define rapid_JointDef_LAST_MEMBER_ID 1
        
extern const char *JointDefTYPENAME;
        


#ifdef __cplusplus
    struct JointDefSeq;

#ifndef NDDS_STANDALONE_TYPE
    class JointDefTypeSupport;
    class JointDefDataWriter;
    class JointDefDataReader;
#endif

#endif

            
    
class JointDef                                        
{
public:            
#ifdef __cplusplus
    typedef struct JointDefSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef JointDefTypeSupport TypeSupport;
    typedef JointDefDataWriter DataWriter;
    typedef JointDefDataReader DataReader;
#endif

#endif
    
/**

 * Name of frame that joint reports its position in - should match a frame in FrameStore.

 */

    rapid::String128  frameName;

/**

 * Defines the axis of rotation or motion. Note: This will change in the near future.

 */

    rapid::String64  dof;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* JointDef_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(JointDefSeq, JointDef);
        
NDDSUSERDllExport
RTIBool JointDef_initialize(
        JointDef* self);
        
NDDSUSERDllExport
RTIBool JointDef_initialize_ex(
        JointDef* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool JointDef_initialize_w_params(
        JointDef* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void JointDef_finalize(
        JointDef* self);
                        
NDDSUSERDllExport
void JointDef_finalize_ex(
        JointDef* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void JointDef_finalize_w_params(
        JointDef* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void JointDef_finalize_optional_members(
        JointDef* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool JointDef_copy(
        JointDef* dst,
        const JointDef* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_JointDefSequence_LAST_MEMBER_ID rapid_JointDef_LAST_MEMBER_ID
typedef  rapid::JointDefSeq  JointDefSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* JointDefSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(JointDefSequenceSeq, JointDefSequence);                                        
            
NDDSUSERDllExport
RTIBool JointDefSequence_initialize(
        JointDefSequence* self);
            
NDDSUSERDllExport
RTIBool JointDefSequence_initialize_ex(
        JointDefSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool JointDefSequence_initialize_w_params(
        JointDefSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void JointDefSequence_finalize(
        JointDefSequence* self);
            
NDDSUSERDllExport
void JointDefSequence_finalize_ex(
        JointDefSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void JointDefSequence_finalize_w_params(
        JointDefSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void JointDefSequence_finalize_optional_members(
        JointDefSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool JointDefSequence_copy(
        JointDefSequence* dst,
        const JointDefSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class JointConfigTypeSupport;

class JointConfigDataWriter;

class JointConfigDataReader;

struct JointConfigSeq;

/**

 * Joint configuration of a kinematic chain. Gives configuration of joint data for a specific Agent. Joint

 * data is delivered using JointSample.

 */

#define rapid_JointConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *JointConfigTYPENAME;
        


#ifdef __cplusplus
    struct JointConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class JointConfigTypeSupport;
    class JointConfigDataWriter;
    class JointConfigDataReader;
#endif

#endif

            
    
class JointConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct JointConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef JointConfigTypeSupport TypeSupport;
    typedef JointConfigDataWriter DataWriter;
    typedef JointConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef JointConfigTypeSupport TypeSupport;

typedef JointConfigDataWriter DataWriter;

typedef JointConfigDataReader DataReader;

typedef JointConfigSeq Seq;

#endif

typedef JointConfig Type;

/**

 * Name of the joint group.

 */

    rapid::String32  jointGroupName;

/**

 * JointDefs for each joint.

 */

    rapid::JointDefSequence  jointDefinitions;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* JointConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(JointConfigSeq, JointConfig);
        
NDDSUSERDllExport
RTIBool JointConfig_initialize(
        JointConfig* self);
        
NDDSUSERDllExport
RTIBool JointConfig_initialize_ex(
        JointConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool JointConfig_initialize_w_params(
        JointConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void JointConfig_finalize(
        JointConfig* self);
                        
NDDSUSERDllExport
void JointConfig_finalize_ex(
        JointConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void JointConfig_finalize_w_params(
        JointConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void JointConfig_finalize_optional_members(
        JointConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool JointConfig_copy(
        JointConfig* dst,
        const JointConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* JointConfig_714822731_h */
