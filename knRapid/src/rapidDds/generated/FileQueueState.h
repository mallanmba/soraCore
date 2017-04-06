
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueState_1566277297_h
#define FileQueueState_1566277297_h

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

 * ChannelStatus is used to indicate whether a RAPID File Queue (part of the RAPID File Transfer Service)

 * is currently capable of transferring files (Active) or is temporarily refraining from transferring files

 * (Paused).

 * <ul>

 *   <li>FILE_QUEUE_CHANNEL_ACTIVE: Capable of transferring files.

 *   <li>FILE_QUEUE_CHANNEL_PAUSED: Temporarily refraining from transferring files.

 * </ul>

 */
 
typedef enum ChannelStatus
{
    FILE_QUEUE_CHANNEL_ACTIVE,
    FILE_QUEUE_CHANNEL_PAUSED
} ChannelStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ChannelStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ChannelStatusSeq, ChannelStatus);
        
NDDSUSERDllExport
RTIBool ChannelStatus_initialize(
        ChannelStatus* self);
        
NDDSUSERDllExport
RTIBool ChannelStatus_initialize_ex(
        ChannelStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ChannelStatus_initialize_w_params(
        ChannelStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ChannelStatus_finalize(
        ChannelStatus* self);
                        
NDDSUSERDllExport
void ChannelStatus_finalize_ex(
        ChannelStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ChannelStatus_finalize_w_params(
        ChannelStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ChannelStatus_finalize_optional_members(
        ChannelStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ChannelStatus_copy(
        ChannelStatus* dst,
        const ChannelStatus* src);


NDDSUSERDllExport
RTIBool ChannelStatus_getValues(ChannelStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ChannelState_LAST_MEMBER_ID 2
        
extern const char *ChannelStateTYPENAME;
        


#ifdef __cplusplus
    struct ChannelStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ChannelStateTypeSupport;
    class ChannelStateDataWriter;
    class ChannelStateDataReader;
#endif

#endif

            
    
class ChannelState                                        
{
public:            
#ifdef __cplusplus
    typedef struct ChannelStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ChannelStateTypeSupport TypeSupport;
    typedef ChannelStateDataWriter DataWriter;
    typedef ChannelStateDataReader DataReader;
#endif

#endif
    
/** Status of file in queue. */

    rapid::ChannelStatus  status;

/** Size of queued data volume. */

    DDS_LongLong  queuedDataVolume;

/** Number of queued files */

    DDS_Short  queuedFiles;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ChannelState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ChannelStateSeq, ChannelState);
        
NDDSUSERDllExport
RTIBool ChannelState_initialize(
        ChannelState* self);
        
NDDSUSERDllExport
RTIBool ChannelState_initialize_ex(
        ChannelState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ChannelState_initialize_w_params(
        ChannelState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ChannelState_finalize(
        ChannelState* self);
                        
NDDSUSERDllExport
void ChannelState_finalize_ex(
        ChannelState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ChannelState_finalize_w_params(
        ChannelState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ChannelState_finalize_optional_members(
        ChannelState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ChannelState_copy(
        ChannelState* dst,
        const ChannelState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ChannelStateSequence_LAST_MEMBER_ID rapid_ChannelState_LAST_MEMBER_ID
typedef  rapid::ChannelStateSeq  ChannelStateSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ChannelStateSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ChannelStateSequenceSeq, ChannelStateSequence);                                        
            
NDDSUSERDllExport
RTIBool ChannelStateSequence_initialize(
        ChannelStateSequence* self);
            
NDDSUSERDllExport
RTIBool ChannelStateSequence_initialize_ex(
        ChannelStateSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ChannelStateSequence_initialize_w_params(
        ChannelStateSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ChannelStateSequence_finalize(
        ChannelStateSequence* self);
            
NDDSUSERDllExport
void ChannelStateSequence_finalize_ex(
        ChannelStateSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ChannelStateSequence_finalize_w_params(
        ChannelStateSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ChannelStateSequence_finalize_optional_members(
        ChannelStateSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ChannelStateSequence_copy(
        ChannelStateSequence* dst,
        const ChannelStateSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class FileQueueStateTypeSupport;

class FileQueueStateDataWriter;

class FileQueueStateDataReader;

struct FileQueueStateSeq;

/**

 * Holds information about a file that could be transferred to the ground from the robot.

 */

#define rapid_FileQueueState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *FileQueueStateTYPENAME;
        


#ifdef __cplusplus
    struct FileQueueStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FileQueueStateTypeSupport;
    class FileQueueStateDataWriter;
    class FileQueueStateDataReader;
#endif

#endif

            
    
class FileQueueState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct FileQueueStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FileQueueStateTypeSupport TypeSupport;
    typedef FileQueueStateDataWriter DataWriter;
    typedef FileQueueStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef FileQueueStateTypeSupport TypeSupport;

typedef FileQueueStateDataWriter DataWriter;

typedef FileQueueStateDataReader DataReader;

typedef FileQueueStateSeq Seq;

#endif

typedef FileQueueState Type;

/**

 * Connection status of the file queue. The queue will not send data as long as there is no reader

 * connected.

 */

    DDS_Boolean  connected;

    DDS_Long  bandwidth;

    DDS_Long  prefetchBandwidth;

/** The state of the individual channels. */

    rapid::ChannelStateSequence  channels;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FileQueueState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FileQueueStateSeq, FileQueueState);
        
NDDSUSERDllExport
RTIBool FileQueueState_initialize(
        FileQueueState* self);
        
NDDSUSERDllExport
RTIBool FileQueueState_initialize_ex(
        FileQueueState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FileQueueState_initialize_w_params(
        FileQueueState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FileQueueState_finalize(
        FileQueueState* self);
                        
NDDSUSERDllExport
void FileQueueState_finalize_ex(
        FileQueueState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FileQueueState_finalize_w_params(
        FileQueueState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FileQueueState_finalize_optional_members(
        FileQueueState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FileQueueState_copy(
        FileQueueState* dst,
        const FileQueueState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* FileQueueState_1566277297_h */
