
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessIoSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ProcessIoSample_1382961988_h
#define ProcessIoSample_1382961988_h

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
 
typedef enum ProcessIoStream
{
    PROCESS_STDIN,
    PROCESS_STDOUT,
    PROCESS_STDERR
} ProcessIoStream;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessIoStream_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ProcessIoStreamSeq, ProcessIoStream);
        
NDDSUSERDllExport
RTIBool ProcessIoStream_initialize(
        ProcessIoStream* self);
        
NDDSUSERDllExport
RTIBool ProcessIoStream_initialize_ex(
        ProcessIoStream* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ProcessIoStream_initialize_w_params(
        ProcessIoStream* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ProcessIoStream_finalize(
        ProcessIoStream* self);
                        
NDDSUSERDllExport
void ProcessIoStream_finalize_ex(
        ProcessIoStream* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ProcessIoStream_finalize_w_params(
        ProcessIoStream* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ProcessIoStream_finalize_optional_members(
        ProcessIoStream* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ProcessIoStream_copy(
        ProcessIoStream* dst,
        const ProcessIoStream* src);


NDDSUSERDllExport
RTIBool ProcessIoStream_getValues(ProcessIoStreamSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class ProcessIoSampleTypeSupport;

class ProcessIoSampleDataWriter;

class ProcessIoSampleDataReader;

struct ProcessIoSampleSeq;

#define rapid_ext_ProcessIoSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *ProcessIoSampleTYPENAME;
        


#ifdef __cplusplus
    struct ProcessIoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ProcessIoSampleTypeSupport;
    class ProcessIoSampleDataWriter;
    class ProcessIoSampleDataReader;
#endif

#endif

            
    
class ProcessIoSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct ProcessIoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ProcessIoSampleTypeSupport TypeSupport;
    typedef ProcessIoSampleDataWriter DataWriter;
    typedef ProcessIoSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef ProcessIoSampleTypeSupport TypeSupport;

typedef ProcessIoSampleDataWriter DataWriter;

typedef ProcessIoSampleDataReader DataReader;

typedef ProcessIoSampleSeq Seq;

#endif

typedef ProcessIoSample Type;

    DDS_Long  processIdx;

    rapid::ext::ProcessIoStream  stream;

    DDS_Long  lineNumber;

    rapid::String1K  line;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ProcessIoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ProcessIoSampleSeq, ProcessIoSample);
        
NDDSUSERDllExport
RTIBool ProcessIoSample_initialize(
        ProcessIoSample* self);
        
NDDSUSERDllExport
RTIBool ProcessIoSample_initialize_ex(
        ProcessIoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ProcessIoSample_initialize_w_params(
        ProcessIoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ProcessIoSample_finalize(
        ProcessIoSample* self);
                        
NDDSUSERDllExport
void ProcessIoSample_finalize_ex(
        ProcessIoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ProcessIoSample_finalize_w_params(
        ProcessIoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ProcessIoSample_finalize_optional_members(
        ProcessIoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ProcessIoSample_copy(
        ProcessIoSample* dst,
        const ProcessIoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* ProcessIoSample_1382961988_h */
