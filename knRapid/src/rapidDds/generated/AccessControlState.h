
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AccessControlState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AccessControlState_1862954327_h
#define AccessControlState_1862954327_h

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

class AccessControlStateTypeSupport;

class AccessControlStateDataWriter;

class AccessControlStateDataReader;

struct AccessControlStateSeq;

/**

 * AccessControlState is a recurring message type that provides information

 * about who has control of a specified Agent and who has requested control

 * of that Agent.

 */

#define rapid_AccessControlState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *AccessControlStateTYPENAME;
        


#ifdef __cplusplus
    struct AccessControlStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AccessControlStateTypeSupport;
    class AccessControlStateDataWriter;
    class AccessControlStateDataReader;
#endif

#endif

            
    
class AccessControlState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct AccessControlStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AccessControlStateTypeSupport TypeSupport;
    typedef AccessControlStateDataWriter DataWriter;
    typedef AccessControlStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef AccessControlStateTypeSupport TypeSupport;

typedef AccessControlStateDataWriter DataWriter;

typedef AccessControlStateDataReader DataReader;

typedef AccessControlStateSeq Seq;

#endif

typedef AccessControlState Type;

/** Specifies agentId that currently controls the Agent. */

    rapid::String32  controller;

/** Specifies agentIds that have requested control of the Agent. */

    rapid::String32Sequence16  requestors;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AccessControlState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AccessControlStateSeq, AccessControlState);
        
NDDSUSERDllExport
RTIBool AccessControlState_initialize(
        AccessControlState* self);
        
NDDSUSERDllExport
RTIBool AccessControlState_initialize_ex(
        AccessControlState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool AccessControlState_initialize_w_params(
        AccessControlState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void AccessControlState_finalize(
        AccessControlState* self);
                        
NDDSUSERDllExport
void AccessControlState_finalize_ex(
        AccessControlState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void AccessControlState_finalize_w_params(
        AccessControlState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void AccessControlState_finalize_optional_members(
        AccessControlState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool AccessControlState_copy(
        AccessControlState* dst,
        const AccessControlState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* AccessControlState_1862954327_h */
