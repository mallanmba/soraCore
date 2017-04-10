
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TrajectoryConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TrajectoryConfig_1875959215_h
#define TrajectoryConfig_1875959215_h

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

class TrajectoryConfigTypeSupport;

class TrajectoryConfigDataWriter;

class TrajectoryConfigDataReader;

struct TrajectoryConfigSeq;

/**

 * TrajectoryConfig is a message that tells the receiver what frame the TrajectorySample messages will be in.

 */

#define rapid_ext_TrajectoryConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *TrajectoryConfigTYPENAME;
        


#ifdef __cplusplus
    struct TrajectoryConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TrajectoryConfigTypeSupport;
    class TrajectoryConfigDataWriter;
    class TrajectoryConfigDataReader;
#endif

#endif

            
    
class TrajectoryConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct TrajectoryConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TrajectoryConfigTypeSupport TypeSupport;
    typedef TrajectoryConfigDataWriter DataWriter;
    typedef TrajectoryConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef TrajectoryConfigTypeSupport TypeSupport;

typedef TrajectoryConfigDataWriter DataWriter;

typedef TrajectoryConfigDataReader DataReader;

typedef TrajectoryConfigSeq Seq;

#endif

typedef TrajectoryConfig Type;

/** Denotes the frame the pose is given in. This frame should exist in the frame store. */

    rapid::String128  referenceFrame;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TrajectoryConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TrajectoryConfigSeq, TrajectoryConfig);
        
NDDSUSERDllExport
RTIBool TrajectoryConfig_initialize(
        TrajectoryConfig* self);
        
NDDSUSERDllExport
RTIBool TrajectoryConfig_initialize_ex(
        TrajectoryConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TrajectoryConfig_initialize_w_params(
        TrajectoryConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TrajectoryConfig_finalize(
        TrajectoryConfig* self);
                        
NDDSUSERDllExport
void TrajectoryConfig_finalize_ex(
        TrajectoryConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TrajectoryConfig_finalize_w_params(
        TrajectoryConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TrajectoryConfig_finalize_optional_members(
        TrajectoryConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TrajectoryConfig_copy(
        TrajectoryConfig* dst,
        const TrajectoryConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* TrajectoryConfig_1875959215_h */
