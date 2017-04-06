
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Ack.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Ack_492777816_h
#define Ack_492777816_h

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

/**

 * Status of the command paired with this Ack.

 * <ul>

 *   <li>ACK_QUEUED: Sent by Sequencer when queueing Tasks.

 *   <li>ACK_EXECUTING: Command has been started by the Bridge.

 *   <li>ACK_REQUEUED: Only sent when a command in the ActiveQueue and a PAUSE is sent;

 *                     command is REQUEUED in the PendingQueue preempting the next command

 *                     in the PendingQueue

 *   <li>ACK_COMPLETED: Sent when command is done.

 * </ul>

 */
 
typedef enum AckStatus
{
    ACK_QUEUED,
    ACK_EXECUTING,
    ACK_REQUEUED,
    ACK_COMPLETED
} AckStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AckStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AckStatusSeq, AckStatus);
        
NDDSUSERDllExport
RTIBool AckStatus_initialize(
        AckStatus* self);
        
NDDSUSERDllExport
RTIBool AckStatus_initialize_ex(
        AckStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool AckStatus_initialize_w_params(
        AckStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void AckStatus_finalize(
        AckStatus* self);
                        
NDDSUSERDllExport
void AckStatus_finalize_ex(
        AckStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void AckStatus_finalize_w_params(
        AckStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void AckStatus_finalize_optional_members(
        AckStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool AckStatus_copy(
        AckStatus* dst,
        const AckStatus* src);


NDDSUSERDllExport
RTIBool AckStatus_getValues(AckStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * This status is sent along when it has completed

 * <ul>

 *   <li>ACK_COMPLETED_NOT: Task has not completed yet.

 *   <li>ACK_COMPLETED_OK: Successful completion.

 *   <li>ACK_COMPLETED_BAD_SYNTAX: Command not recognized, bad parameters, etc.

 *   <li>ACK_COMPLETED_EXEC_FAILED: Failed to complete.

 *   <li>ACK_COMPLETED_CANCELED: Canceled from queue.

 * </ul>

 */
 
typedef enum AckCompletedStatus
{
    ACK_COMPLETED_NOT,
    ACK_COMPLETED_OK,
    ACK_COMPLETED_BAD_SYNTAX,
    ACK_COMPLETED_EXEC_FAILED,
    ACK_COMPLETED_CANCELED
} AckCompletedStatus;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AckCompletedStatus_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AckCompletedStatusSeq, AckCompletedStatus);
        
NDDSUSERDllExport
RTIBool AckCompletedStatus_initialize(
        AckCompletedStatus* self);
        
NDDSUSERDllExport
RTIBool AckCompletedStatus_initialize_ex(
        AckCompletedStatus* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool AckCompletedStatus_initialize_w_params(
        AckCompletedStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void AckCompletedStatus_finalize(
        AckCompletedStatus* self);
                        
NDDSUSERDllExport
void AckCompletedStatus_finalize_ex(
        AckCompletedStatus* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void AckCompletedStatus_finalize_w_params(
        AckCompletedStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void AckCompletedStatus_finalize_optional_members(
        AckCompletedStatus* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool AckCompletedStatus_copy(
        AckCompletedStatus* dst,
        const AckCompletedStatus* src);


NDDSUSERDllExport
RTIBool AckCompletedStatus_getValues(AckCompletedStatusSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class AckTypeSupport;

class AckDataWriter;

class AckDataReader;

struct AckSeq;

/**

 * Ack is a Message that sends an acknowledgement of commands received.

 */

#define rapid_Ack_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *AckTYPENAME;
        


#ifdef __cplusplus
    struct AckSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AckTypeSupport;
    class AckDataWriter;
    class AckDataReader;
#endif

#endif

            
    
class Ack : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct AckSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AckTypeSupport TypeSupport;
    typedef AckDataWriter DataWriter;
    typedef AckDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef AckTypeSupport TypeSupport;

typedef AckDataWriter DataWriter;

typedef AckDataReader DataReader;

typedef AckSeq Seq;

#endif

typedef Ack Type;

/** Command identifier of command being acknowledged. */

    rapid::String64  cmdId;

/** @see AckStatus. */

    rapid::AckStatus  status;

/** Details how the task completed. */

    rapid::AckCompletedStatus  completedStatus;

/** Message details any exceptions made during Ack transition. Analogous to exception message string. */

    rapid::String128  message;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Ack_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AckSeq, Ack);
        
NDDSUSERDllExport
RTIBool Ack_initialize(
        Ack* self);
        
NDDSUSERDllExport
RTIBool Ack_initialize_ex(
        Ack* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Ack_initialize_w_params(
        Ack* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Ack_finalize(
        Ack* self);
                        
NDDSUSERDllExport
void Ack_finalize_ex(
        Ack* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Ack_finalize_w_params(
        Ack* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Ack_finalize_optional_members(
        Ack* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Ack_copy(
        Ack* dst,
        const Ack* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* Ack_492777816_h */
