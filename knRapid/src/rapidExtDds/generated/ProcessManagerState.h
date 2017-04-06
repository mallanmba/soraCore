
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessManagerState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ProcessManagerState_1150325614_h
#define ProcessManagerState_1150325614_h

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


#include "BaseTypes.h"


#include "Message.h"


namespace rapid{

namespace ext{
 
typedef enum ProcessStatus
{
    PROCESS_STATE_UNAVAIL,
    PROCESS_STATE_STARTING,
    PROCESS_STATE_RESTARTING,
    PROCESS_STATE_RUNNING,
    PROCESS_STATE_STOPPING,
    PROCESS_STATE_STOPPED,
    PROCESS_STATE_STOPPED_UNEXPECTEDLY,
    PROCESS_STATE_COMPLETED,
    PROCESS_STATE_KILLED
} ProcessStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ProcessStatusSeq, ProcessStatus);
        
NDDSUSERDllExport
RTIBool ProcessStatus_initialize(
        ProcessStatus* self);
        
NDDSUSERDllExport
RTIBool ProcessStatus_initialize_ex(
        ProcessStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ProcessStatus_initialize_w_params(
        ProcessStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ProcessStatus_finalize(
        ProcessStatus* self);
                        
NDDSUSERDllExport
void ProcessStatus_finalize_ex(
        ProcessStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ProcessStatus_finalize_w_params(
        ProcessStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ProcessStatus_finalize_optional_members(
        ProcessStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ProcessStatus_copy(
        ProcessStatus* dst,
        const ProcessStatus* src);


NDDSUSERDllExport
RTIBool ProcessStatus_getValues(ProcessStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_ProcessStatusSequence_LAST_MEMBER_ID rapid_ext_ProcessStatus_LAST_MEMBER_ID
typedef  rapid::ext::ProcessStatusSeq  ProcessStatusSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessStatusSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ProcessStatusSequenceSeq, ProcessStatusSequence);                                        
            
NDDSUSERDllExport
RTIBool ProcessStatusSequence_initialize(
        ProcessStatusSequence* self);
            
NDDSUSERDllExport
RTIBool ProcessStatusSequence_initialize_ex(
        ProcessStatusSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ProcessStatusSequence_initialize_w_params(
        ProcessStatusSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ProcessStatusSequence_finalize(
        ProcessStatusSequence* self);
            
NDDSUSERDllExport
void ProcessStatusSequence_finalize_ex(
        ProcessStatusSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ProcessStatusSequence_finalize_w_params(
        ProcessStatusSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ProcessStatusSequence_finalize_optional_members(
        ProcessStatusSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ProcessStatusSequence_copy(
        ProcessStatusSequence* dst,
        const ProcessStatusSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class ProcessManagerStateTypeSupport;

class ProcessManagerStateDataWriter;

class ProcessManagerStateDataReader;

struct ProcessManagerStateSeq;

#define rapid_ext_ProcessManagerState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *ProcessManagerStateTYPENAME;
        


#ifdef __cplusplus
    struct ProcessManagerStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ProcessManagerStateTypeSupport;
    class ProcessManagerStateDataWriter;
    class ProcessManagerStateDataReader;
#endif

#endif

            
    
class ProcessManagerState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct ProcessManagerStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ProcessManagerStateTypeSupport TypeSupport;
    typedef ProcessManagerStateDataWriter DataWriter;
    typedef ProcessManagerStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef ProcessManagerStateTypeSupport TypeSupport;

typedef ProcessManagerStateDataWriter DataWriter;

typedef ProcessManagerStateDataReader DataReader;

typedef ProcessManagerStateSeq Seq;

#endif

typedef ProcessManagerState Type;

/** status sequence corresponds with ProcessManagerConfig.processes sequence */

    rapid::ext::ProcessStatusSequence  processStatus;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessManagerState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ProcessManagerStateSeq, ProcessManagerState);
        
NDDSUSERDllExport
RTIBool ProcessManagerState_initialize(
        ProcessManagerState* self);
        
NDDSUSERDllExport
RTIBool ProcessManagerState_initialize_ex(
        ProcessManagerState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ProcessManagerState_initialize_w_params(
        ProcessManagerState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ProcessManagerState_finalize(
        ProcessManagerState* self);
                        
NDDSUSERDllExport
void ProcessManagerState_finalize_ex(
        ProcessManagerState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ProcessManagerState_finalize_w_params(
        ProcessManagerState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ProcessManagerState_finalize_optional_members(
        ProcessManagerState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ProcessManagerState_copy(
        ProcessManagerState* dst,
        const ProcessManagerState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* ProcessManagerState_1150325614_h */
