
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TextMessage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TextMessage_297220591_h
#define TextMessage_297220591_h

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

 * Importance level of the message.

 * <ul>

 *   <li>MSG_DEBUG:

 *   <li>MSG_INFO:

 *   <li>MSG_ATTENTION: Important, but not in a bad way.

 *   <li>MSG_WARN: Something potentially bad happened.

 *   <li>MSG_ERROR: Something bad definitely happened.

 *   <li>MSG_CRITICAL: Something really bad happened.

 * </ul>

 */
 
typedef enum MessageLevel
{
    MSG_DEBUG,
    MSG_INFO,
    MSG_ATTENTION,
    MSG_WARN,
    MSG_ERROR,
    MSG_CRITICAL
} MessageLevel;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MessageLevel_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MessageLevelSeq, MessageLevel);
        
NDDSUSERDllExport
RTIBool MessageLevel_initialize(
        MessageLevel* self);
        
NDDSUSERDllExport
RTIBool MessageLevel_initialize_ex(
        MessageLevel* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MessageLevel_initialize_w_params(
        MessageLevel* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MessageLevel_finalize(
        MessageLevel* self);
                        
NDDSUSERDllExport
void MessageLevel_finalize_ex(
        MessageLevel* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void MessageLevel_finalize_w_params(
        MessageLevel* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void MessageLevel_finalize_optional_members(
        MessageLevel* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool MessageLevel_copy(
        MessageLevel* dst,
        const MessageLevel* src);


NDDSUSERDllExport
RTIBool MessageLevel_getValues(MessageLevelSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * TextMessage is a message that allows RAPID application users to chat with each other or for logging-style

 * activities.

 */

#define rapid_TextMessage_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 3)
        
extern const char *TextMessageTYPENAME;
        


#ifdef __cplusplus
    struct TextMessageSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TextMessageTypeSupport;
    class TextMessageDataWriter;
    class TextMessageDataReader;
#endif

#endif

            
    
class TextMessage : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct TextMessageSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TextMessageTypeSupport TypeSupport;
    typedef TextMessageDataWriter DataWriter;
    typedef TextMessageDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef TextMessageTypeSupport TypeSupport;

typedef TextMessageDataWriter DataWriter;

typedef TextMessageDataReader DataReader;

typedef TextMessageSeq Seq;

#endif

typedef TextMessage Type;

/** Importance level of message. */

    rapid::MessageLevel  level;

/** What message is pertaining to. */

    rapid::String64  category;

/** Actual text message. */

    rapid::String2K  message;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TextMessage_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TextMessageSeq, TextMessage);
        
NDDSUSERDllExport
RTIBool TextMessage_initialize(
        TextMessage* self);
        
NDDSUSERDllExport
RTIBool TextMessage_initialize_ex(
        TextMessage* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TextMessage_initialize_w_params(
        TextMessage* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TextMessage_finalize(
        TextMessage* self);
                        
NDDSUSERDllExport
void TextMessage_finalize_ex(
        TextMessage* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TextMessage_finalize_w_params(
        TextMessage* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TextMessage_finalize_optional_members(
        TextMessage* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TextMessage_copy(
        TextMessage* dst,
        const TextMessage* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* TextMessage_297220591_h */
