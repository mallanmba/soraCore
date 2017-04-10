
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeAck.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeAck_459267048_h
#define NoticeAck_459267048_h

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

namespace ext{

namespace traclabs{

#define rapid_ext_traclabs_NoticeAck_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *NoticeAckTYPENAME;
        


#ifdef __cplusplus
    struct NoticeAckSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NoticeAckTypeSupport;
    class NoticeAckDataWriter;
    class NoticeAckDataReader;
#endif

#endif

            
    
class NoticeAck : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct NoticeAckSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NoticeAckTypeSupport TypeSupport;
    typedef NoticeAckDataWriter DataWriter;
    typedef NoticeAckDataReader DataReader;
#endif

#endif
    
typedef NoticeAck Type;

/** noticeId of notice being acknowledged */

    rapid::String16  noticeId;

/** id of user who acknowledged the notice */

    rapid::String64  ackTarget;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NoticeAck_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NoticeAckSeq, NoticeAck);
        
NDDSUSERDllExport
RTIBool NoticeAck_initialize(
        NoticeAck* self);
        
NDDSUSERDllExport
RTIBool NoticeAck_initialize_ex(
        NoticeAck* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NoticeAck_initialize_w_params(
        NoticeAck* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NoticeAck_finalize(
        NoticeAck* self);
                        
NDDSUSERDllExport
void NoticeAck_finalize_ex(
        NoticeAck* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NoticeAck_finalize_w_params(
        NoticeAck* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NoticeAck_finalize_optional_members(
        NoticeAck* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NoticeAck_copy(
        NoticeAck* dst,
        const NoticeAck* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */


#endif /* NoticeAck_459267048_h */
