
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessManagerConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ProcessManagerConfig_196766896_h
#define ProcessManagerConfig_196766896_h

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

/**

 * ProcessConfig

 */

#define rapid_ext_ProcessConfig_LAST_MEMBER_ID 12
        
extern const char *ProcessConfigTYPENAME;
        


#ifdef __cplusplus
    struct ProcessConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ProcessConfigTypeSupport;
    class ProcessConfigDataWriter;
    class ProcessConfigDataReader;
#endif

#endif

            
    
class ProcessConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct ProcessConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ProcessConfigTypeSupport TypeSupport;
    typedef ProcessConfigDataWriter DataWriter;
    typedef ProcessConfigDataReader DataReader;
#endif

#endif
    
    rapid::String64  name;

    rapid::String64  comment;

    rapid::String256Sequence64  environment;

    rapid::String256  workingDirectory;

    rapid::String32  binaryName;

    rapid::String256  commandLineParams;

    DDS_Boolean  selfTerminating;

    DDS_Boolean  startOnInit;

    DDS_Boolean  waitOnInit;

    DDS_Long  startupTimeout;

    rapid::String256  runningMatch;

    rapid::String32  aliveInterface;

/** Number of times of automatic restart on unexpected shutdown */

    DDS_Long  restartsOnFailure;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ProcessConfigSeq, ProcessConfig);
        
NDDSUSERDllExport
RTIBool ProcessConfig_initialize(
        ProcessConfig* self);
        
NDDSUSERDllExport
RTIBool ProcessConfig_initialize_ex(
        ProcessConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ProcessConfig_initialize_w_params(
        ProcessConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ProcessConfig_finalize(
        ProcessConfig* self);
                        
NDDSUSERDllExport
void ProcessConfig_finalize_ex(
        ProcessConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ProcessConfig_finalize_w_params(
        ProcessConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ProcessConfig_finalize_optional_members(
        ProcessConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ProcessConfig_copy(
        ProcessConfig* dst,
        const ProcessConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_ProcessConfigSequence_LAST_MEMBER_ID rapid_ext_ProcessConfig_LAST_MEMBER_ID
typedef  rapid::ext::ProcessConfigSeq  ProcessConfigSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessConfigSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ProcessConfigSequenceSeq, ProcessConfigSequence);                                        
            
NDDSUSERDllExport
RTIBool ProcessConfigSequence_initialize(
        ProcessConfigSequence* self);
            
NDDSUSERDllExport
RTIBool ProcessConfigSequence_initialize_ex(
        ProcessConfigSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ProcessConfigSequence_initialize_w_params(
        ProcessConfigSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ProcessConfigSequence_finalize(
        ProcessConfigSequence* self);
            
NDDSUSERDllExport
void ProcessConfigSequence_finalize_ex(
        ProcessConfigSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ProcessConfigSequence_finalize_w_params(
        ProcessConfigSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ProcessConfigSequence_finalize_optional_members(
        ProcessConfigSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ProcessConfigSequence_copy(
        ProcessConfigSequence* dst,
        const ProcessConfigSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class ProcessManagerConfigTypeSupport;

class ProcessManagerConfigDataWriter;

class ProcessManagerConfigDataReader;

struct ProcessManagerConfigSeq;

/**

 * ProcessManagerConfig

 */

#define rapid_ext_ProcessManagerConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *ProcessManagerConfigTYPENAME;
        


#ifdef __cplusplus
    struct ProcessManagerConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ProcessManagerConfigTypeSupport;
    class ProcessManagerConfigDataWriter;
    class ProcessManagerConfigDataReader;
#endif

#endif

            
    
class ProcessManagerConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct ProcessManagerConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ProcessManagerConfigTypeSupport TypeSupport;
    typedef ProcessManagerConfigDataWriter DataWriter;
    typedef ProcessManagerConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef ProcessManagerConfigTypeSupport TypeSupport;

typedef ProcessManagerConfigDataWriter DataWriter;

typedef ProcessManagerConfigDataReader DataReader;

typedef ProcessManagerConfigSeq Seq;

#endif

typedef ProcessManagerConfig Type;

    rapid::String64  configName;

    rapid::ext::ProcessConfigSequence  processes;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessManagerConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ProcessManagerConfigSeq, ProcessManagerConfig);
        
NDDSUSERDllExport
RTIBool ProcessManagerConfig_initialize(
        ProcessManagerConfig* self);
        
NDDSUSERDllExport
RTIBool ProcessManagerConfig_initialize_ex(
        ProcessManagerConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ProcessManagerConfig_initialize_w_params(
        ProcessManagerConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ProcessManagerConfig_finalize(
        ProcessManagerConfig* self);
                        
NDDSUSERDllExport
void ProcessManagerConfig_finalize_ex(
        ProcessManagerConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ProcessManagerConfig_finalize_w_params(
        ProcessManagerConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ProcessManagerConfig_finalize_optional_members(
        ProcessManagerConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ProcessManagerConfig_copy(
        ProcessManagerConfig* dst,
        const ProcessManagerConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* ProcessManagerConfig_196766896_h */
