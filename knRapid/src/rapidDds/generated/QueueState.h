
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from QueueState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef QueueState_357500448_h
#define QueueState_357500448_h

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


#include "Command.h"


namespace rapid{

/**

 * <ul>

 *   <li>Q_STATUS_INIT:

 *   <li>Q_STATUS_OUTBOUND: SENT

 *   <li>Q_STATUS_LOST: SENT

 *   <li>Q_STATUS_INLINE: PENDING

 *   <li>Q_STATUS_PREEMPTED: PENDING

 *   <li>Q_STATUS_INPROCESS: ACTIVE

 *   <li>Q_STATUS_PAUSED: ACTIVE

 *   <li>Q_STATUS_CANCELED: COMPLETED

 *   <li>Q_STATUS_SUCCEEDED: COMPLETED

 *   <li>Q_STATUS_FAILED: COMPLETED

 *   <li>Q_STATUS_ALIEN_PENDING:

 *   <li>Q_STATUS_ALIEN_ACTIVE:

 *   <li>Q_STATUS_ALIEN_COMPLETED:

 *   <li>Q_STATUS_FORGOTTEN_BY_ROBOT:

 * </ul>

 */
 
typedef enum StatusType
{
    Q_STATUS_INIT,
    Q_STATUS_OUTBOUND,
    Q_STATUS_LOST,
    Q_STATUS_INLINE,
    Q_STATUS_PREEMPTED,
    Q_STATUS_INPROCESS,
    Q_STATUS_PAUSED,
    Q_STATUS_CANCELED,
    Q_STATUS_SUCCEEDED,
    Q_STATUS_FAILED,
    Q_STATUS_ALIEN_PENDING,
    Q_STATUS_ALIEN_ACTIVE,
    Q_STATUS_ALIEN_COMPLETED,
    Q_STATUS_FORGOTTEN_BY_ROBOT
} StatusType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* StatusType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StatusTypeSeq, StatusType);
        
NDDSUSERDllExport
RTIBool StatusType_initialize(
        StatusType* self);
        
NDDSUSERDllExport
RTIBool StatusType_initialize_ex(
        StatusType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool StatusType_initialize_w_params(
        StatusType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void StatusType_finalize(
        StatusType* self);
                        
NDDSUSERDllExport
void StatusType_finalize_ex(
        StatusType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void StatusType_finalize_w_params(
        StatusType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void StatusType_finalize_optional_members(
        StatusType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool StatusType_copy(
        StatusType* dst,
        const StatusType* src);


NDDSUSERDllExport
RTIBool StatusType_getValues(StatusTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * ResultType describes the result of a command on the completed queue.

 * <ul>

 *   <li>Q_RESULT_INIT:

 *   <li>Q_RESULT_SUCCEEDED:

 *   <li>Q_RESULT_FAILED:

 * </ul>

 */
 
typedef enum ResultType
{
    Q_RESULT_INIT,
    Q_RESULT_SUCCEEDED,
    Q_RESULT_FAILED
} ResultType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ResultType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ResultTypeSeq, ResultType);
        
NDDSUSERDllExport
RTIBool ResultType_initialize(
        ResultType* self);
        
NDDSUSERDllExport
RTIBool ResultType_initialize_ex(
        ResultType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ResultType_initialize_w_params(
        ResultType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ResultType_finalize(
        ResultType* self);
                        
NDDSUSERDllExport
void ResultType_finalize_ex(
        ResultType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ResultType_finalize_w_params(
        ResultType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ResultType_finalize_optional_members(
        ResultType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ResultType_copy(
        ResultType* dst,
        const ResultType* src);


NDDSUSERDllExport
RTIBool ResultType_getValues(ResultTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** CommandRecord holds a command, its status and its result. */

#define rapid_CommandRecord_LAST_MEMBER_ID 2
        
extern const char *CommandRecordTYPENAME;
        


#ifdef __cplusplus
    struct CommandRecordSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CommandRecordTypeSupport;
    class CommandRecordDataWriter;
    class CommandRecordDataReader;
#endif

#endif

            
    
class CommandRecord                                        
{
public:            
#ifdef __cplusplus
    typedef struct CommandRecordSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CommandRecordTypeSupport TypeSupport;
    typedef CommandRecordDataWriter DataWriter;
    typedef CommandRecordDataReader DataReader;
#endif

#endif
    
    rapid::Command  cmd;

    rapid::ResultType  trResult;

    rapid::StatusType  trStatus;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CommandRecord_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CommandRecordSeq, CommandRecord);
        
NDDSUSERDllExport
RTIBool CommandRecord_initialize(
        CommandRecord* self);
        
NDDSUSERDllExport
RTIBool CommandRecord_initialize_ex(
        CommandRecord* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CommandRecord_initialize_w_params(
        CommandRecord* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CommandRecord_finalize(
        CommandRecord* self);
                        
NDDSUSERDllExport
void CommandRecord_finalize_ex(
        CommandRecord* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CommandRecord_finalize_w_params(
        CommandRecord* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CommandRecord_finalize_optional_members(
        CommandRecord* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CommandRecord_copy(
        CommandRecord* dst,
        const CommandRecord* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** SingleQueue holds a sequence of CommandRecords. Maximum length for a SingleQueue is 64. */

#define rapid_SingleQueue_LAST_MEMBER_ID 0
        
extern const char *SingleQueueTYPENAME;
        


#ifdef __cplusplus
    struct SingleQueueSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SingleQueueTypeSupport;
    class SingleQueueDataWriter;
    class SingleQueueDataReader;
#endif

#endif

            
    
class SingleQueue                                        
{
public:            
#ifdef __cplusplus
    typedef struct SingleQueueSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SingleQueueTypeSupport TypeSupport;
    typedef SingleQueueDataWriter DataWriter;
    typedef SingleQueueDataReader DataReader;
#endif

#endif
    
     rapid::CommandRecordSeq  queue;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SingleQueue_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SingleQueueSeq, SingleQueue);
        
NDDSUSERDllExport
RTIBool SingleQueue_initialize(
        SingleQueue* self);
        
NDDSUSERDllExport
RTIBool SingleQueue_initialize_ex(
        SingleQueue* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SingleQueue_initialize_w_params(
        SingleQueue* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SingleQueue_finalize(
        SingleQueue* self);
                        
NDDSUSERDllExport
void SingleQueue_finalize_ex(
        SingleQueue* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SingleQueue_finalize_w_params(
        SingleQueue* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SingleQueue_finalize_optional_members(
        SingleQueue* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SingleQueue_copy(
        SingleQueue* dst,
        const SingleQueue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class QueueStateTypeSupport;

class QueueStateDataWriter;

class QueueStateDataReader;

struct QueueStateSeq;

/**

 * QueueState is a message that holds single queues of pending, active, completed and sent commands. This

 * is primarily used with a Sequencer that handles the queueing of commands.

 */

#define rapid_QueueState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *QueueStateTYPENAME;
        


#ifdef __cplusplus
    struct QueueStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class QueueStateTypeSupport;
    class QueueStateDataWriter;
    class QueueStateDataReader;
#endif

#endif

            
    
class QueueState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct QueueStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef QueueStateTypeSupport TypeSupport;
    typedef QueueStateDataWriter DataWriter;
    typedef QueueStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef QueueStateTypeSupport TypeSupport;

typedef QueueStateDataWriter DataWriter;

typedef QueueStateDataReader DataReader;

typedef QueueStateSeq Seq;

#endif

typedef QueueState Type;

    rapid::SingleQueue  pending;

    rapid::SingleQueue  active;

    rapid::SingleQueue  completed;

    rapid::SingleQueue  sent;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* QueueState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(QueueStateSeq, QueueState);
        
NDDSUSERDllExport
RTIBool QueueState_initialize(
        QueueState* self);
        
NDDSUSERDllExport
RTIBool QueueState_initialize_ex(
        QueueState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool QueueState_initialize_w_params(
        QueueState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void QueueState_finalize(
        QueueState* self);
                        
NDDSUSERDllExport
void QueueState_finalize_ex(
        QueueState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void QueueState_finalize_w_params(
        QueueState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void QueueState_finalize_optional_members(
        QueueState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool QueueState_copy(
        QueueState* dst,
        const QueueState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* QueueState_357500448_h */
