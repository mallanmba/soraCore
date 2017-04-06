
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MobilitySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MobilitySample_947072007_h
#define MobilitySample_947072007_h

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

class MobilitySampleTypeSupport;

class MobilitySampleDataWriter;

class MobilitySampleDataReader;

struct MobilitySampleSeq;

/**

 * MobilitySample defines a snapshot of the Mobility subsystem's state.

 */

#define rapid_ext_arc_MobilitySample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 7)
        
extern const char *MobilitySampleTYPENAME;
        


#ifdef __cplusplus
    struct MobilitySampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MobilitySampleTypeSupport;
    class MobilitySampleDataWriter;
    class MobilitySampleDataReader;
#endif

#endif

            
    
class MobilitySample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct MobilitySampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MobilitySampleTypeSupport TypeSupport;
    typedef MobilitySampleDataWriter DataWriter;
    typedef MobilitySampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef MobilitySampleTypeSupport TypeSupport;

typedef MobilitySampleDataWriter DataWriter;

typedef MobilitySampleDataReader DataReader;

typedef MobilitySampleSeq Seq;

#endif

typedef MobilitySample Type;

    rapid::String32  goalName;

    rapid::String128  commandFrame;

    rapid::Vec3d  xyt;

    rapid::Vec3d  xytTolerance;

    DDS_Float  hintedSpeed;

    rapid::String32  navAlgo;

/** extension values */

    rapid::KeyTypeValueSequence8  keyedValues;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MobilitySample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MobilitySampleSeq, MobilitySample);
        
NDDSUSERDllExport
RTIBool MobilitySample_initialize(
        MobilitySample* self);
        
NDDSUSERDllExport
RTIBool MobilitySample_initialize_ex(
        MobilitySample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MobilitySample_initialize_w_params(
        MobilitySample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MobilitySample_finalize(
        MobilitySample* self);
                        
NDDSUSERDllExport
void MobilitySample_finalize_ex(
        MobilitySample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MobilitySample_finalize_w_params(
        MobilitySample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MobilitySample_finalize_optional_members(
        MobilitySample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MobilitySample_copy(
        MobilitySample* dst,
        const MobilitySample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const DDS_Long GOAL_UNKNOWN_NAME = -6;             
static const DDS_Long GOAL_OUT_OF_RANGE = -5;             
static const DDS_Long GOAL_FAILURE = -4;             
static const DDS_Long GOAL_TIMEOUT = -3;             
static const DDS_Long GOAL_INTERRUPTED = -2;             
static const DDS_Long GOAL_INACTIVE = -1;             
static const DDS_Long GOAL_ACHIEVED = 0;             
static const DDS_Long GOAL_ACTIVE = 1;             
static const DDS_Long GOAL_NULL = -7;
} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* MobilitySample_947072007_h */
