
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Message.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Message_793628358_h
#define Message_793628358_h

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


#include "Header.h"


namespace rapid{

/** Definition of message, which is the foundation of all other message types. */

#define rapid_Message_LAST_MEMBER_ID 0
        
extern const char *MessageTYPENAME;
        


#ifdef __cplusplus
    struct MessageSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MessageTypeSupport;
    class MessageDataWriter;
    class MessageDataReader;
#endif

#endif

            
    
class Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct MessageSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MessageTypeSupport TypeSupport;
    typedef MessageDataWriter DataWriter;
    typedef MessageDataReader DataReader;
#endif

#endif
    
/** The header in a message is the key for filtering in DDS. */

    rapid::Header  hdr;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Message_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MessageSeq, Message);
        
NDDSUSERDllExport
RTIBool Message_initialize(
        Message* self);
        
NDDSUSERDllExport
RTIBool Message_initialize_ex(
        Message* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Message_initialize_w_params(
        Message* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Message_finalize(
        Message* self);
                        
NDDSUSERDllExport
void Message_finalize_ex(
        Message* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Message_finalize_w_params(
        Message* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Message_finalize_optional_members(
        Message* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Message_copy(
        Message* dst,
        const Message* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* Message_793628358_h */
