
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from JointSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef JointSample_26465713_h
#define JointSample_26465713_h

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

/** Flag values for joint status sequence. */

/** Joint is enabled. */
             
static const DDS_Long JOINT_ENABLED = 0x0000;
/** Joint is disabled. */
             
static const DDS_Long JOINT_DISABLED = 0x0001;
/** Joint is unable to move. */
             
static const DDS_Long JOINT_FROZEN = 0x0003;
/** Joint has been e-stopped. */
             
static const DDS_Long JOINT_ESTOP = 0x0005;
/** Joint has had a failure. */
             
static const DDS_Long JOINT_FAILURE = 0x0100;
/** Joint is drawing too much current. */
             
static const DDS_Long JOINT_OVER_CURRENT = 0x0300;
/** Joint is exceeded position error limits. */
             
static const DDS_Long JOINT_POSITION_ERROR = 0x0500;
class JointSampleTypeSupport;

class JointSampleDataWriter;

class JointSampleDataReader;

struct JointSampleSeq;

/**

 * JointSample delivers joint data at a high frequency. Use JointConfig to deciper the configuration of

 * joints.

 */

#define rapid_JointSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 8)
        
extern const char *JointSampleTYPENAME;
        


#ifdef __cplusplus
    struct JointSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class JointSampleTypeSupport;
    class JointSampleDataWriter;
    class JointSampleDataReader;
#endif

#endif

            
    
class JointSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct JointSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef JointSampleTypeSupport TypeSupport;
    typedef JointSampleDataWriter DataWriter;
    typedef JointSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef JointSampleTypeSupport TypeSupport;

typedef JointSampleDataWriter DataWriter;

typedef JointSampleDataReader DataReader;

typedef JointSampleSeq Seq;

#endif

typedef JointSample Type;

/** Angle position (in radians) of the joint. */

    rapid::FloatSequence64  anglePos;

/** Angle velocity (in radians/sec) of the joint. */

    rapid::FloatSequence64  angleVel;

/** Angle acceleration (in radians/sec^2) of the joint. */

    rapid::FloatSequence64  angleAcc;

/** Current draw of joint motor. */

    rapid::FloatSequence64  current;

/** Torque sensed at the joint (in N-m). */

    rapid::FloatSequence64  torque;

/** Temperature of the joint (in degrees Celsius). */

    rapid::FloatSequence64  temperature;

/** Bit field representing the state of the joint. */

    rapid::LongSequence64  status;

/** A list of sequences for any parameters not otherwise included. */

    rapid::NFSeqSequence16  auxFloat;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* JointSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(JointSampleSeq, JointSample);
        
NDDSUSERDllExport
RTIBool JointSample_initialize(
        JointSample* self);
        
NDDSUSERDllExport
RTIBool JointSample_initialize_ex(
        JointSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool JointSample_initialize_w_params(
        JointSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void JointSample_finalize(
        JointSample* self);
                        
NDDSUSERDllExport
void JointSample_finalize_ex(
        JointSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void JointSample_finalize_w_params(
        JointSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void JointSample_finalize_optional_members(
        JointSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool JointSample_copy(
        JointSample* dst,
        const JointSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* JointSample_26465713_h */
