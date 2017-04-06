
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueEntryState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueEntryState_181250757_h
#define FileQueueEntryState_181250757_h

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

/**

 * <ul>

 *   <li>RAPID_FILE_PREFETCH_PENDING:

 *   <li>RAPID_FILE_PREFETCHING:

 *   <li>RAPID_FILE_PENDING:

 *   <li>RAPID_FILE_ACTIVE:

 *   <li>RAPID_FILE_PAUSED:

 *   <li>RAPID_FILE_DONE:

 *   <li>RAPID_FILE_CANCELED:

 *   <li>RAPID_FILE_ERROR:

 * </ul>

 */
 
typedef enum FileTransferStatus
{
    RAPID_FILE_PREFETCH_PENDING,
    RAPID_FILE_PREFETCHING,
    RAPID_FILE_PENDING,
    RAPID_FILE_ACTIVE,
    RAPID_FILE_PAUSED,
    RAPID_FILE_DONE,
    RAPID_FILE_CANCELED,
    RAPID_FILE_ERROR
} FileTransferStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FileTransferStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FileTransferStatusSeq, FileTransferStatus);
        
NDDSUSERDllExport
RTIBool FileTransferStatus_initialize(
        FileTransferStatus* self);
        
NDDSUSERDllExport
RTIBool FileTransferStatus_initialize_ex(
        FileTransferStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FileTransferStatus_initialize_w_params(
        FileTransferStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FileTransferStatus_finalize(
        FileTransferStatus* self);
                        
NDDSUSERDllExport
void FileTransferStatus_finalize_ex(
        FileTransferStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void FileTransferStatus_finalize_w_params(
        FileTransferStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FileTransferStatus_finalize_optional_members(
        FileTransferStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool FileTransferStatus_copy(
        FileTransferStatus* dst,
        const FileTransferStatus* src);


NDDSUSERDllExport
RTIBool FileTransferStatus_getValues(FileTransferStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class FileQueueEntryStateTypeSupport;

class FileQueueEntryStateDataWriter;

class FileQueueEntryStateDataReader;

struct FileQueueEntryStateSeq;

/** Holds information about a file that could be transferred to the ground from the robot. */

#define rapid_FileQueueEntryState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 7)
        
extern const char *FileQueueEntryStateTYPENAME;
        


#ifdef __cplusplus
    struct FileQueueEntryStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FileQueueEntryStateTypeSupport;
    class FileQueueEntryStateDataWriter;
    class FileQueueEntryStateDataReader;
#endif

#endif

            
    
class FileQueueEntryState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct FileQueueEntryStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FileQueueEntryStateTypeSupport TypeSupport;
    typedef FileQueueEntryStateDataWriter DataWriter;
    typedef FileQueueEntryStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef FileQueueEntryStateTypeSupport TypeSupport;

typedef FileQueueEntryStateDataWriter DataWriter;

typedef FileQueueEntryStateDataReader DataReader;

typedef FileQueueEntryStateSeq Seq;

#endif

typedef FileQueueEntryState Type;

/** The unique identifier for this file. */

    rapid::String64  fileUuid;

/** Status of file in queue. */

    rapid::FileTransferStatus  status;

/** Number of chunks already sent. */

    DDS_Long  chunksSent;

/** Total number of chunks to transfer. */

    DDS_Long  numChunks;

    DDS_LongLong  submissionTime;

    DDS_Float  priority;

    DDS_Short  channelId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FileQueueEntryState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FileQueueEntryStateSeq, FileQueueEntryState);
        
NDDSUSERDllExport
RTIBool FileQueueEntryState_initialize(
        FileQueueEntryState* self);
        
NDDSUSERDllExport
RTIBool FileQueueEntryState_initialize_ex(
        FileQueueEntryState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FileQueueEntryState_initialize_w_params(
        FileQueueEntryState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FileQueueEntryState_finalize(
        FileQueueEntryState* self);
                        
NDDSUSERDllExport
void FileQueueEntryState_finalize_ex(
        FileQueueEntryState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FileQueueEntryState_finalize_w_params(
        FileQueueEntryState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FileQueueEntryState_finalize_optional_members(
        FileQueueEntryState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FileQueueEntryState_copy(
        FileQueueEntryState* dst,
        const FileQueueEntryState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* FileQueueEntryState_181250757_h */
