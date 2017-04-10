
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from NoticeTypes.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef NoticeTypes_403467081_h
#define NoticeTypes_403467081_h

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


namespace rapid{

namespace ext{

namespace traclabs{
 
typedef enum LatencyType
{
    LATENCY_DONTCARE,
    LATENCY_IMMEDIATE,
    LATENCY_DEFERRED,
    LATENCY_ARCHIVE
} LatencyType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LatencyType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(LatencyTypeSeq, LatencyType);
        
NDDSUSERDllExport
RTIBool LatencyType_initialize(
        LatencyType* self);
        
NDDSUSERDllExport
RTIBool LatencyType_initialize_ex(
        LatencyType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool LatencyType_initialize_w_params(
        LatencyType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void LatencyType_finalize(
        LatencyType* self);
                        
NDDSUSERDllExport
void LatencyType_finalize_ex(
        LatencyType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void LatencyType_finalize_w_params(
        LatencyType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LatencyType_finalize_optional_members(
        LatencyType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool LatencyType_copy(
        LatencyType* dst,
        const LatencyType* src);


NDDSUSERDllExport
RTIBool LatencyType_getValues(LatencyTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum FocusOfAttentionType
{
    FA_DONTCARE,
    FA_PRIMARY,
    FA_SECONDARY,
    FA_NOSHIFT
} FocusOfAttentionType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FocusOfAttentionType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FocusOfAttentionTypeSeq, FocusOfAttentionType);
        
NDDSUSERDllExport
RTIBool FocusOfAttentionType_initialize(
        FocusOfAttentionType* self);
        
NDDSUSERDllExport
RTIBool FocusOfAttentionType_initialize_ex(
        FocusOfAttentionType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FocusOfAttentionType_initialize_w_params(
        FocusOfAttentionType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FocusOfAttentionType_finalize(
        FocusOfAttentionType* self);
                        
NDDSUSERDllExport
void FocusOfAttentionType_finalize_ex(
        FocusOfAttentionType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void FocusOfAttentionType_finalize_w_params(
        FocusOfAttentionType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FocusOfAttentionType_finalize_optional_members(
        FocusOfAttentionType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool FocusOfAttentionType_copy(
        FocusOfAttentionType* dst,
        const FocusOfAttentionType* src);


NDDSUSERDllExport
RTIBool FocusOfAttentionType_getValues(FocusOfAttentionTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum ModalityType
{
    MODALITY_DONTCARE,
    MODALITY_3DNOTICE,
    MODALITY_3DAVATAR,
    MODALITY_WEBGUI,
    MODALITY_EMAIL,
    MODALITY_DISPLAY,
    MODALITY_DISPLAYQUEUE,
    MODALITY_PERSONALARCHIVE,
    MODALITY_SPEECH,
    MODALITY_STATUSBAR
} ModalityType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ModalityType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ModalityTypeSeq, ModalityType);
        
NDDSUSERDllExport
RTIBool ModalityType_initialize(
        ModalityType* self);
        
NDDSUSERDllExport
RTIBool ModalityType_initialize_ex(
        ModalityType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ModalityType_initialize_w_params(
        ModalityType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ModalityType_finalize(
        ModalityType* self);
                        
NDDSUSERDllExport
void ModalityType_finalize_ex(
        ModalityType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ModalityType_finalize_w_params(
        ModalityType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ModalityType_finalize_optional_members(
        ModalityType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool ModalityType_copy(
        ModalityType* dst,
        const ModalityType* src);


NDDSUSERDllExport
RTIBool ModalityType_getValues(ModalityTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum NoticeAckState
{
    NAS_DONTCARE,
    NAS_UNACKNOWLEDGED,
    NAS_ACKNOWLEDGED
} NoticeAckState;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NoticeAckState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NoticeAckStateSeq, NoticeAckState);
        
NDDSUSERDllExport
RTIBool NoticeAckState_initialize(
        NoticeAckState* self);
        
NDDSUSERDllExport
RTIBool NoticeAckState_initialize_ex(
        NoticeAckState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NoticeAckState_initialize_w_params(
        NoticeAckState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NoticeAckState_finalize(
        NoticeAckState* self);
                        
NDDSUSERDllExport
void NoticeAckState_finalize_ex(
        NoticeAckState* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void NoticeAckState_finalize_w_params(
        NoticeAckState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NoticeAckState_finalize_optional_members(
        NoticeAckState* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool NoticeAckState_copy(
        NoticeAckState* dst,
        const NoticeAckState* src);


NDDSUSERDllExport
RTIBool NoticeAckState_getValues(NoticeAckStateSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace traclabs */

} /* namespace ext */

} /* namespace rapid */


#endif /* NoticeTypes_403467081_h */
