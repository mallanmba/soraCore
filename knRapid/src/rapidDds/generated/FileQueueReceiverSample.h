
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueReceiverSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueReceiverSample_1894773302_h
#define FileQueueReceiverSample_1894773302_h

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

class FileQueueReceiverSampleTypeSupport;

class FileQueueReceiverSampleDataWriter;

class FileQueueReceiverSampleDataReader;

struct FileQueueReceiverSampleSeq;

/**

 * Holds information about a file that could be transferred to the ground from the robot.

 */

#define rapid_FileQueueReceiverSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *FileQueueReceiverSampleTYPENAME;
        


#ifdef __cplusplus
    struct FileQueueReceiverSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FileQueueReceiverSampleTypeSupport;
    class FileQueueReceiverSampleDataWriter;
    class FileQueueReceiverSampleDataReader;
#endif

#endif

            
    
class FileQueueReceiverSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct FileQueueReceiverSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FileQueueReceiverSampleTypeSupport TypeSupport;
    typedef FileQueueReceiverSampleDataWriter DataWriter;
    typedef FileQueueReceiverSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef FileQueueReceiverSampleTypeSupport TypeSupport;

typedef FileQueueReceiverSampleDataWriter DataWriter;

typedef FileQueueReceiverSampleDataReader DataReader;

typedef FileQueueReceiverSampleSeq Seq;

#endif

typedef FileQueueReceiverSample Type;

/**

 * Connection status to the file queue.

 */

    DDS_Boolean  connected;

/**

 * Number of bufferd but unprocessed chunks.

 */

    DDS_Long  bufferedChunks;

/**

 * Number of processed chunks.

 */

    DDS_Long  processedChunks;

/**

 * Number of completed files.

 */

    DDS_Long  completedFiles;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FileQueueReceiverSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FileQueueReceiverSampleSeq, FileQueueReceiverSample);
        
NDDSUSERDllExport
RTIBool FileQueueReceiverSample_initialize(
        FileQueueReceiverSample* self);
        
NDDSUSERDllExport
RTIBool FileQueueReceiverSample_initialize_ex(
        FileQueueReceiverSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FileQueueReceiverSample_initialize_w_params(
        FileQueueReceiverSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FileQueueReceiverSample_finalize(
        FileQueueReceiverSample* self);
                        
NDDSUSERDllExport
void FileQueueReceiverSample_finalize_ex(
        FileQueueReceiverSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FileQueueReceiverSample_finalize_w_params(
        FileQueueReceiverSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FileQueueReceiverSample_finalize_optional_members(
        FileQueueReceiverSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FileQueueReceiverSample_copy(
        FileQueueReceiverSample* dst,
        const FileQueueReceiverSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* FileQueueReceiverSample_1894773302_h */
