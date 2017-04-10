
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from VEStopState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef VEStopState_1271843965_h
#define VEStopState_1271843965_h

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

class VEStopStateTypeSupport;

class VEStopStateDataWriter;

class VEStopStateDataReader;

struct VEStopStateSeq;

#define rapid_ext_VEStopState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *VEStopStateTYPENAME;
        


#ifdef __cplusplus
    struct VEStopStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class VEStopStateTypeSupport;
    class VEStopStateDataWriter;
    class VEStopStateDataReader;
#endif

#endif

            
    
class VEStopState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct VEStopStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef VEStopStateTypeSupport TypeSupport;
    typedef VEStopStateDataWriter DataWriter;
    typedef VEStopStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef VEStopStateTypeSupport TypeSupport;

typedef VEStopStateDataWriter DataWriter;

typedef VEStopStateDataReader DataReader;

typedef VEStopStateSeq Seq;

#endif

typedef VEStopState Type;

    DDS_Boolean  active;

    DDS_Boolean  advisoryOnly;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* VEStopState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(VEStopStateSeq, VEStopState);
        
NDDSUSERDllExport
RTIBool VEStopState_initialize(
        VEStopState* self);
        
NDDSUSERDllExport
RTIBool VEStopState_initialize_ex(
        VEStopState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool VEStopState_initialize_w_params(
        VEStopState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void VEStopState_finalize(
        VEStopState* self);
                        
NDDSUSERDllExport
void VEStopState_finalize_ex(
        VEStopState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void VEStopState_finalize_w_params(
        VEStopState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void VEStopState_finalize_optional_members(
        VEStopState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool VEStopState_copy(
        VEStopState* dst,
        const VEStopState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* VEStopState_1271843965_h */
