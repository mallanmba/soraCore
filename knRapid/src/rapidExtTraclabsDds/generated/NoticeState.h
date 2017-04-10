
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeState_2075659869_h
#define NoticeState_2075659869_h

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


#include "NoticeTypes.h"


#include "BaseTypes.h"


#include "Message.h"


namespace rapid{

namespace ext{

namespace traclabs{


#define rapid_ext_traclabs_ModalityTypes_LAST_MEMBER_ID rapid_ext_traclabs_ModalityType_LAST_MEMBER_ID
typedef  rapid::ext::traclabs::ModalityTypeSeq  ModalityTypes;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ModalityTypes_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ModalityTypesSeq, ModalityTypes);                                        
            
NDDSUSERDllExport
RTIBool ModalityTypes_initialize(
        ModalityTypes* self);
            
NDDSUSERDllExport
RTIBool ModalityTypes_initialize_ex(
        ModalityTypes* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ModalityTypes_initialize_w_params(
        ModalityTypes* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ModalityTypes_finalize(
        ModalityTypes* self);
            
NDDSUSERDllExport
void ModalityTypes_finalize_ex(
        ModalityTypes* self,RTIBool deletePointers);

NDDSUSERDllExport
void ModalityTypes_finalize_w_params(
        ModalityTypes* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ModalityTypes_finalize_optional_members(
        ModalityTypes* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ModalityTypes_copy(
        ModalityTypes* dst,
        const ModalityTypes* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * NoticeState represents the current state of

 * of all published notice items. The data type is keyed

 * on itemId, so each notice item represents a separate instance.

 */

#define rapid_ext_traclabs_NoticeState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 11)
        
extern const char *NoticeStateTYPENAME;
        


#ifdef __cplusplus
    struct NoticeStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NoticeStateTypeSupport;
    class NoticeStateDataWriter;
    class NoticeStateDataReader;
#endif

#endif

            
    
class NoticeState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct NoticeStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NoticeStateTypeSupport TypeSupport;
    typedef NoticeStateDataWriter DataWriter;
    typedef NoticeStateDataReader DataReader;
#endif

#endif
    
typedef NoticeState Type;

/** what notice relates to (ie. ESTOP) */

    rapid::String16  itemId;

/** unique for each notice */

    rapid::String16  noticeId;

    rapid::ext::traclabs::LatencyType  latency;

    rapid::ext::traclabs::FocusOfAttentionType  foa;

    rapid::ext::traclabs::ModalityTypes  modalities;

/** how long notice should remain active, in seconds */

    DDS_Long  timeout;

/** acknowledgement state of notice */

    rapid::ext::traclabs::NoticeAckState  ackState;

/**

 * If DONTCARE, string is empty

 * If UNACKNOWLEDGED, id of who should acknowledge notice.

 * If ACKNOWLEDGED, id of who acknowledged notice

 */

    rapid::String64  ackTarget;

    rapid::String64  subject;

    rapid::String128  body;

/** extension data */

    rapid::ValueSequence16  values;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NoticeState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NoticeStateSeq, NoticeState);
        
NDDSUSERDllExport
RTIBool NoticeState_initialize(
        NoticeState* self);
        
NDDSUSERDllExport
RTIBool NoticeState_initialize_ex(
        NoticeState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NoticeState_initialize_w_params(
        NoticeState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NoticeState_finalize(
        NoticeState* self);
                        
NDDSUSERDllExport
void NoticeState_finalize_ex(
        NoticeState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NoticeState_finalize_w_params(
        NoticeState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NoticeState_finalize_optional_members(
        NoticeState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NoticeState_copy(
        NoticeState* dst,
        const NoticeState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */


#endif /* NoticeState_2075659869_h */
