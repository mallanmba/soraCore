
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueSample_1725042530_h
#define FileQueueSample_1725042530_h

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

class FileQueueSampleTypeSupport;

class FileQueueSampleDataWriter;

class FileQueueSampleDataReader;

struct FileQueueSampleSeq;

/**

 * Holds information about a file that could be transferred to the ground from the robot.

 */

#define rapid_FileQueueSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *FileQueueSampleTYPENAME;
        


#ifdef __cplusplus
    struct FileQueueSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FileQueueSampleTypeSupport;
    class FileQueueSampleDataWriter;
    class FileQueueSampleDataReader;
#endif

#endif

            
    
class FileQueueSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct FileQueueSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FileQueueSampleTypeSupport TypeSupport;
    typedef FileQueueSampleDataWriter DataWriter;
    typedef FileQueueSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef FileQueueSampleTypeSupport TypeSupport;

typedef FileQueueSampleDataWriter DataWriter;

typedef FileQueueSampleDataReader DataReader;

typedef FileQueueSampleSeq Seq;

#endif

typedef FileQueueSample Type;

/** The unique identifier for this file. */

    rapid::String64  fileUuid;

/** Bucket number of sliced file. */

    DDS_Long  chunkId;

/** Total number of chunks to transfer. */

    DDS_Long  numChunks;

/**

 * Bit bucket with the binary data chunk. Max size of the bucket is 128KByte. For samples with

 * chunkId < numChunks - 1, chunkData.length() == 131072.

 */

    rapid::OctetSequence1K  chunkData;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FileQueueSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FileQueueSampleSeq, FileQueueSample);
        
NDDSUSERDllExport
RTIBool FileQueueSample_initialize(
        FileQueueSample* self);
        
NDDSUSERDllExport
RTIBool FileQueueSample_initialize_ex(
        FileQueueSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FileQueueSample_initialize_w_params(
        FileQueueSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FileQueueSample_finalize(
        FileQueueSample* self);
                        
NDDSUSERDllExport
void FileQueueSample_finalize_ex(
        FileQueueSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FileQueueSample_finalize_w_params(
        FileQueueSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FileQueueSample_finalize_optional_members(
        FileQueueSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FileQueueSample_copy(
        FileQueueSample* dst,
        const FileQueueSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* FileQueueSample_1725042530_h */
