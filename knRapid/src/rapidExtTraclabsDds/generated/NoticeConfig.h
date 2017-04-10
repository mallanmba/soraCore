
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeConfig_1024433843_h
#define NoticeConfig_1024433843_h

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


#include "Message.h"


namespace rapid{

namespace ext{

namespace traclabs{

/**

 * Notice item description

 */

#define rapid_ext_traclabs_NoticeItem_LAST_MEMBER_ID 1
        
extern const char *NoticeItemTYPENAME;
        


#ifdef __cplusplus
    struct NoticeItemSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NoticeItemTypeSupport;
    class NoticeItemDataWriter;
    class NoticeItemDataReader;
#endif

#endif

            
    
class NoticeItem                                        
{
public:            
#ifdef __cplusplus
    typedef struct NoticeItemSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NoticeItemTypeSupport TypeSupport;
    typedef NoticeItemDataWriter DataWriter;
    typedef NoticeItemDataReader DataReader;
#endif

#endif
    
    rapid::String16  itemId;

    rapid::String64  itemDescription;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NoticeItem_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NoticeItemSeq, NoticeItem);
        
NDDSUSERDllExport
RTIBool NoticeItem_initialize(
        NoticeItem* self);
        
NDDSUSERDllExport
RTIBool NoticeItem_initialize_ex(
        NoticeItem* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NoticeItem_initialize_w_params(
        NoticeItem* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NoticeItem_finalize(
        NoticeItem* self);
                        
NDDSUSERDllExport
void NoticeItem_finalize_ex(
        NoticeItem* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NoticeItem_finalize_w_params(
        NoticeItem* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NoticeItem_finalize_optional_members(
        NoticeItem* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NoticeItem_copy(
        NoticeItem* dst,
        const NoticeItem* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_traclabs_NoticeItemSequence_LAST_MEMBER_ID rapid_ext_traclabs_NoticeItem_LAST_MEMBER_ID
typedef  rapid::ext::traclabs::NoticeItemSeq  NoticeItemSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NoticeItemSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NoticeItemSequenceSeq, NoticeItemSequence);                                        
            
NDDSUSERDllExport
RTIBool NoticeItemSequence_initialize(
        NoticeItemSequence* self);
            
NDDSUSERDllExport
RTIBool NoticeItemSequence_initialize_ex(
        NoticeItemSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NoticeItemSequence_initialize_w_params(
        NoticeItemSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NoticeItemSequence_finalize(
        NoticeItemSequence* self);
            
NDDSUSERDllExport
void NoticeItemSequence_finalize_ex(
        NoticeItemSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void NoticeItemSequence_finalize_w_params(
        NoticeItemSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NoticeItemSequence_finalize_optional_members(
        NoticeItemSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NoticeItemSequence_copy(
        NoticeItemSequence* dst,
        const NoticeItemSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * NoticeConfig describes the possible notice items

 * and value keys for extension data

 */

#define rapid_ext_traclabs_NoticeConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *NoticeConfigTYPENAME;
        


#ifdef __cplusplus
    struct NoticeConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NoticeConfigTypeSupport;
    class NoticeConfigDataWriter;
    class NoticeConfigDataReader;
#endif

#endif

            
    
class NoticeConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct NoticeConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NoticeConfigTypeSupport TypeSupport;
    typedef NoticeConfigDataWriter DataWriter;
    typedef NoticeConfigDataReader DataReader;
#endif

#endif
    
typedef NoticeConfig Type;

    rapid::ext::traclabs::NoticeItemSequence  items;

/** extension metadata */

    rapid::KeyTypeValueSequence16  valueKeys;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NoticeConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NoticeConfigSeq, NoticeConfig);
        
NDDSUSERDllExport
RTIBool NoticeConfig_initialize(
        NoticeConfig* self);
        
NDDSUSERDllExport
RTIBool NoticeConfig_initialize_ex(
        NoticeConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NoticeConfig_initialize_w_params(
        NoticeConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NoticeConfig_finalize(
        NoticeConfig* self);
                        
NDDSUSERDllExport
void NoticeConfig_finalize_ex(
        NoticeConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NoticeConfig_finalize_w_params(
        NoticeConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NoticeConfig_finalize_optional_members(
        NoticeConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NoticeConfig_copy(
        NoticeConfig* dst,
        const NoticeConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */


#endif /* NoticeConfig_1024433843_h */
