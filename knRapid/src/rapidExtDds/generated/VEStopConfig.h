
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from VEStopConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef VEStopConfig_1875958170_h
#define VEStopConfig_1875958170_h

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

class VEStopConfigTypeSupport;

class VEStopConfigDataWriter;

class VEStopConfigDataReader;

struct VEStopConfigSeq;

#define rapid_ext_VEStopConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *VEStopConfigTYPENAME;
        


#ifdef __cplusplus
    struct VEStopConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class VEStopConfigTypeSupport;
    class VEStopConfigDataWriter;
    class VEStopConfigDataReader;
#endif

#endif

            
    
class VEStopConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct VEStopConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef VEStopConfigTypeSupport TypeSupport;
    typedef VEStopConfigDataWriter DataWriter;
    typedef VEStopConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef VEStopConfigTypeSupport TypeSupport;

typedef VEStopConfigDataWriter DataWriter;

typedef VEStopConfigDataReader DataReader;

typedef VEStopConfigSeq Seq;

#endif

typedef VEStopConfig Type;

/** The evaluation interval for the trajectory sequences in microsec. Typically 0.2s. */

    DDS_LongLong  evaluationInterval;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* VEStopConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(VEStopConfigSeq, VEStopConfig);
        
NDDSUSERDllExport
RTIBool VEStopConfig_initialize(
        VEStopConfig* self);
        
NDDSUSERDllExport
RTIBool VEStopConfig_initialize_ex(
        VEStopConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool VEStopConfig_initialize_w_params(
        VEStopConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void VEStopConfig_finalize(
        VEStopConfig* self);
                        
NDDSUSERDllExport
void VEStopConfig_finalize_ex(
        VEStopConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void VEStopConfig_finalize_w_params(
        VEStopConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void VEStopConfig_finalize_optional_members(
        VEStopConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool VEStopConfig_copy(
        VEStopConfig* dst,
        const VEStopConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* VEStopConfig_1875958170_h */
