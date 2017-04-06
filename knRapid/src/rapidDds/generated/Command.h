
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Command.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Command_205486740_h
#define Command_205486740_h

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

 * QueueAction

 * <ul>

 *   <li> BYPASS: the cmd is acted upon immediately.

 *   <li> APPEND: the cmd is appended to the tail of the Pending queue. This is the normal operation for commanding.

 *   <li> DELETE: the cmd with the ID specified in targetCmdID is removed from the queue.

 *   <li> INSERT: the cmd is inserted immediately following the cmd with the ID specified in targetCmdID.

 *		      If targetCmdID is "head", then the cmd is inserted at the head of the queue.

 *   <li> REPLACE: cmd replaces the ID specified in targetCmdID. This cmd will have a new ID

 * <ul>

 */
 
typedef enum QueueAction
{
    QUEUE_BYPASS,
    QUEUE_APPEND,
    QUEUE_DELETE,
    QUEUE_INSERT,
    QUEUE_REPLACE
} QueueAction;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* QueueAction_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(QueueActionSeq, QueueAction);
        
NDDSUSERDllExport
RTIBool QueueAction_initialize(
        QueueAction* self);
        
NDDSUSERDllExport
RTIBool QueueAction_initialize_ex(
        QueueAction* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool QueueAction_initialize_w_params(
        QueueAction* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void QueueAction_finalize(
        QueueAction* self);
                        
NDDSUSERDllExport
void QueueAction_finalize_ex(
        QueueAction* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void QueueAction_finalize_w_params(
        QueueAction* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void QueueAction_finalize_optional_members(
        QueueAction* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool QueueAction_copy(
        QueueAction* dst,
        const QueueAction* src);


NDDSUSERDllExport
RTIBool QueueAction_getValues(QueueActionSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class CommandTypeSupport;

class CommandDataWriter;

class CommandDataReader;

struct CommandSeq;

/**

 * Command is a message used to send directives to an Agent.

 */

#define rapid_Command_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 7)
        
extern const char *CommandTYPENAME;
        


#ifdef __cplusplus
    struct CommandSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CommandTypeSupport;
    class CommandDataWriter;
    class CommandDataReader;
#endif

#endif

            
    
class Command : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct CommandSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CommandTypeSupport TypeSupport;
    typedef CommandDataWriter DataWriter;
    typedef CommandDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef CommandTypeSupport TypeSupport;

typedef CommandDataWriter DataWriter;

typedef CommandDataReader DataReader;

typedef CommandSeq Seq;

#endif

typedef Command Type;

/** Name of command being sent. Should get this from list of possible commands in CommandConfig. */

    rapid::String64  cmdName;

/** Unique identifier for command, = username+timestamp. */

    rapid::String64  cmdId;

/** Source that generated the command. */

    rapid::String32  cmdSrc;

/** Subsystem name if command is being sent to subsystem of an Agent. */

    rapid::String32  subsysName;

/** Value of the arguments for this particular command. */

    rapid::ParameterSequence16  arguments;

/** For queue manipulation. Normally "QUEUE_APPEND". */

    rapid::QueueAction  cmdAction;

/**

 * targetCmdId:

 * <ul>

 *   <li> if QUEUE_BYPASS, targetCmdId is not used

 *   <li> if QUEUE_APPEND, targetCmdId is not used

 *   <li> if QUEUE_DELETE, targetCmdId identifies the cmdId of the cmd to be removed

 *   <li> if QUEUE_INSERT, targetCmdId identifies the cmdId of the cmd immediately preceding the target slot. If "head", then the head of the queue.

 *   <li> if QUEUE_REPLACE, targetCmdId identifies the cmdId of the cmd to be replaced

 * <ul>

 */

    rapid::String64  targetCmdId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Command_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CommandSeq, Command);
        
NDDSUSERDllExport
RTIBool Command_initialize(
        Command* self);
        
NDDSUSERDllExport
RTIBool Command_initialize_ex(
        Command* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Command_initialize_w_params(
        Command* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Command_finalize(
        Command* self);
                        
NDDSUSERDllExport
void Command_finalize_ex(
        Command* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Command_finalize_w_params(
        Command* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Command_finalize_optional_members(
        Command* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Command_copy(
        Command* dst,
        const Command* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* Command_205486740_h */
