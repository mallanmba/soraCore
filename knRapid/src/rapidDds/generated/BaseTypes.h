
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BaseTypes.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BaseTypes_1127121220_h
#define BaseTypes_1127121220_h

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


#define rapid_OctetSequence1K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence1K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence1KSeq, OctetSequence1K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence1K_initialize(
        OctetSequence1K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence1K_initialize_ex(
        OctetSequence1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence1K_initialize_w_params(
        OctetSequence1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence1K_finalize(
        OctetSequence1K* self);
            
NDDSUSERDllExport
void OctetSequence1K_finalize_ex(
        OctetSequence1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence1K_finalize_w_params(
        OctetSequence1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence1K_finalize_optional_members(
        OctetSequence1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence1K_copy(
        OctetSequence1K* dst,
        const OctetSequence1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_OctetSequence2K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence2K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence2K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence2KSeq, OctetSequence2K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence2K_initialize(
        OctetSequence2K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence2K_initialize_ex(
        OctetSequence2K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence2K_initialize_w_params(
        OctetSequence2K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence2K_finalize(
        OctetSequence2K* self);
            
NDDSUSERDllExport
void OctetSequence2K_finalize_ex(
        OctetSequence2K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence2K_finalize_w_params(
        OctetSequence2K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence2K_finalize_optional_members(
        OctetSequence2K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence2K_copy(
        OctetSequence2K* dst,
        const OctetSequence2K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_OctetSequence4K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence4K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence4K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence4KSeq, OctetSequence4K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence4K_initialize(
        OctetSequence4K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence4K_initialize_ex(
        OctetSequence4K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence4K_initialize_w_params(
        OctetSequence4K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence4K_finalize(
        OctetSequence4K* self);
            
NDDSUSERDllExport
void OctetSequence4K_finalize_ex(
        OctetSequence4K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence4K_finalize_w_params(
        OctetSequence4K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence4K_finalize_optional_members(
        OctetSequence4K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence4K_copy(
        OctetSequence4K* dst,
        const OctetSequence4K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_OctetSequence16K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence16K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence16K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence16KSeq, OctetSequence16K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence16K_initialize(
        OctetSequence16K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence16K_initialize_ex(
        OctetSequence16K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence16K_initialize_w_params(
        OctetSequence16K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence16K_finalize(
        OctetSequence16K* self);
            
NDDSUSERDllExport
void OctetSequence16K_finalize_ex(
        OctetSequence16K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence16K_finalize_w_params(
        OctetSequence16K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence16K_finalize_optional_members(
        OctetSequence16K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence16K_copy(
        OctetSequence16K* dst,
        const OctetSequence16K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_OctetSequence32K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence32K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence32K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence32KSeq, OctetSequence32K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence32K_initialize(
        OctetSequence32K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence32K_initialize_ex(
        OctetSequence32K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence32K_initialize_w_params(
        OctetSequence32K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence32K_finalize(
        OctetSequence32K* self);
            
NDDSUSERDllExport
void OctetSequence32K_finalize_ex(
        OctetSequence32K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence32K_finalize_w_params(
        OctetSequence32K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence32K_finalize_optional_members(
        OctetSequence32K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence32K_copy(
        OctetSequence32K* dst,
        const OctetSequence32K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_OctetSequence64K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence64K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence64K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence64KSeq, OctetSequence64K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence64K_initialize(
        OctetSequence64K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence64K_initialize_ex(
        OctetSequence64K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence64K_initialize_w_params(
        OctetSequence64K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence64K_finalize(
        OctetSequence64K* self);
            
NDDSUSERDllExport
void OctetSequence64K_finalize_ex(
        OctetSequence64K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence64K_finalize_w_params(
        OctetSequence64K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence64K_finalize_optional_members(
        OctetSequence64K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence64K_copy(
        OctetSequence64K* dst,
        const OctetSequence64K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_OctetSequence128K_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef  DDS_OctetSeq  OctetSequence128K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OctetSequence128K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(OctetSequence128KSeq, OctetSequence128K);                                        
            
NDDSUSERDllExport
RTIBool OctetSequence128K_initialize(
        OctetSequence128K* self);
            
NDDSUSERDllExport
RTIBool OctetSequence128K_initialize_ex(
        OctetSequence128K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool OctetSequence128K_initialize_w_params(
        OctetSequence128K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void OctetSequence128K_finalize(
        OctetSequence128K* self);
            
NDDSUSERDllExport
void OctetSequence128K_finalize_ex(
        OctetSequence128K* self,RTIBool deletePointers);

NDDSUSERDllExport
void OctetSequence128K_finalize_w_params(
        OctetSequence128K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void OctetSequence128K_finalize_optional_members(
        OctetSequence128K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool OctetSequence128K_copy(
        OctetSequence128K* dst,
        const OctetSequence128K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence32_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence32Seq, ShortSequence32);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence32_initialize(
        ShortSequence32* self);
            
NDDSUSERDllExport
RTIBool ShortSequence32_initialize_ex(
        ShortSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence32_initialize_w_params(
        ShortSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence32_finalize(
        ShortSequence32* self);
            
NDDSUSERDllExport
void ShortSequence32_finalize_ex(
        ShortSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence32_finalize_w_params(
        ShortSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence32_finalize_optional_members(
        ShortSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence32_copy(
        ShortSequence32* dst,
        const ShortSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence64_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence64Seq, ShortSequence64);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence64_initialize(
        ShortSequence64* self);
            
NDDSUSERDllExport
RTIBool ShortSequence64_initialize_ex(
        ShortSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence64_initialize_w_params(
        ShortSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence64_finalize(
        ShortSequence64* self);
            
NDDSUSERDllExport
void ShortSequence64_finalize_ex(
        ShortSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence64_finalize_w_params(
        ShortSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence64_finalize_optional_members(
        ShortSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence64_copy(
        ShortSequence64* dst,
        const ShortSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence128_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence128Seq, ShortSequence128);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence128_initialize(
        ShortSequence128* self);
            
NDDSUSERDllExport
RTIBool ShortSequence128_initialize_ex(
        ShortSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence128_initialize_w_params(
        ShortSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence128_finalize(
        ShortSequence128* self);
            
NDDSUSERDllExport
void ShortSequence128_finalize_ex(
        ShortSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence128_finalize_w_params(
        ShortSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence128_finalize_optional_members(
        ShortSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence128_copy(
        ShortSequence128* dst,
        const ShortSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence1K_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence1K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence1KSeq, ShortSequence1K);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence1K_initialize(
        ShortSequence1K* self);
            
NDDSUSERDllExport
RTIBool ShortSequence1K_initialize_ex(
        ShortSequence1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence1K_initialize_w_params(
        ShortSequence1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence1K_finalize(
        ShortSequence1K* self);
            
NDDSUSERDllExport
void ShortSequence1K_finalize_ex(
        ShortSequence1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence1K_finalize_w_params(
        ShortSequence1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence1K_finalize_optional_members(
        ShortSequence1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence1K_copy(
        ShortSequence1K* dst,
        const ShortSequence1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence2K_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence2K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence2K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence2KSeq, ShortSequence2K);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence2K_initialize(
        ShortSequence2K* self);
            
NDDSUSERDllExport
RTIBool ShortSequence2K_initialize_ex(
        ShortSequence2K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence2K_initialize_w_params(
        ShortSequence2K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence2K_finalize(
        ShortSequence2K* self);
            
NDDSUSERDllExport
void ShortSequence2K_finalize_ex(
        ShortSequence2K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence2K_finalize_w_params(
        ShortSequence2K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence2K_finalize_optional_members(
        ShortSequence2K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence2K_copy(
        ShortSequence2K* dst,
        const ShortSequence2K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence4K_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence4K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence4K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence4KSeq, ShortSequence4K);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence4K_initialize(
        ShortSequence4K* self);
            
NDDSUSERDllExport
RTIBool ShortSequence4K_initialize_ex(
        ShortSequence4K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence4K_initialize_w_params(
        ShortSequence4K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence4K_finalize(
        ShortSequence4K* self);
            
NDDSUSERDllExport
void ShortSequence4K_finalize_ex(
        ShortSequence4K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence4K_finalize_w_params(
        ShortSequence4K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence4K_finalize_optional_members(
        ShortSequence4K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence4K_copy(
        ShortSequence4K* dst,
        const ShortSequence4K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence32K_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence32K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence32K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence32KSeq, ShortSequence32K);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence32K_initialize(
        ShortSequence32K* self);
            
NDDSUSERDllExport
RTIBool ShortSequence32K_initialize_ex(
        ShortSequence32K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence32K_initialize_w_params(
        ShortSequence32K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence32K_finalize(
        ShortSequence32K* self);
            
NDDSUSERDllExport
void ShortSequence32K_finalize_ex(
        ShortSequence32K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence32K_finalize_w_params(
        ShortSequence32K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence32K_finalize_optional_members(
        ShortSequence32K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence32K_copy(
        ShortSequence32K* dst,
        const ShortSequence32K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence64K_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence64K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence64K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence64KSeq, ShortSequence64K);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence64K_initialize(
        ShortSequence64K* self);
            
NDDSUSERDllExport
RTIBool ShortSequence64K_initialize_ex(
        ShortSequence64K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence64K_initialize_w_params(
        ShortSequence64K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence64K_finalize(
        ShortSequence64K* self);
            
NDDSUSERDllExport
void ShortSequence64K_finalize_ex(
        ShortSequence64K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence64K_finalize_w_params(
        ShortSequence64K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence64K_finalize_optional_members(
        ShortSequence64K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence64K_copy(
        ShortSequence64K* dst,
        const ShortSequence64K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence96K_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence96K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence96K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence96KSeq, ShortSequence96K);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence96K_initialize(
        ShortSequence96K* self);
            
NDDSUSERDllExport
RTIBool ShortSequence96K_initialize_ex(
        ShortSequence96K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence96K_initialize_w_params(
        ShortSequence96K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence96K_finalize(
        ShortSequence96K* self);
            
NDDSUSERDllExport
void ShortSequence96K_finalize_ex(
        ShortSequence96K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence96K_finalize_w_params(
        ShortSequence96K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence96K_finalize_optional_members(
        ShortSequence96K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence96K_copy(
        ShortSequence96K* dst,
        const ShortSequence96K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ShortSequence128K_LAST_MEMBER_ID short_LAST_MEMBER_ID
typedef  DDS_ShortSeq  ShortSequence128K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ShortSequence128K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ShortSequence128KSeq, ShortSequence128K);                                        
            
NDDSUSERDllExport
RTIBool ShortSequence128K_initialize(
        ShortSequence128K* self);
            
NDDSUSERDllExport
RTIBool ShortSequence128K_initialize_ex(
        ShortSequence128K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShortSequence128K_initialize_w_params(
        ShortSequence128K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ShortSequence128K_finalize(
        ShortSequence128K* self);
            
NDDSUSERDllExport
void ShortSequence128K_finalize_ex(
        ShortSequence128K* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShortSequence128K_finalize_w_params(
        ShortSequence128K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShortSequence128K_finalize_optional_members(
        ShortSequence128K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ShortSequence128K_copy(
        ShortSequence128K* dst,
        const ShortSequence128K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongSequence32_LAST_MEMBER_ID long_LAST_MEMBER_ID
typedef  DDS_LongSeq  LongSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongSequence32Seq, LongSequence32);                                        
            
NDDSUSERDllExport
RTIBool LongSequence32_initialize(
        LongSequence32* self);
            
NDDSUSERDllExport
RTIBool LongSequence32_initialize_ex(
        LongSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongSequence32_initialize_w_params(
        LongSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongSequence32_finalize(
        LongSequence32* self);
            
NDDSUSERDllExport
void LongSequence32_finalize_ex(
        LongSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongSequence32_finalize_w_params(
        LongSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongSequence32_finalize_optional_members(
        LongSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongSequence32_copy(
        LongSequence32* dst,
        const LongSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongSequence64_LAST_MEMBER_ID long_LAST_MEMBER_ID
typedef  DDS_LongSeq  LongSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongSequence64Seq, LongSequence64);                                        
            
NDDSUSERDllExport
RTIBool LongSequence64_initialize(
        LongSequence64* self);
            
NDDSUSERDllExport
RTIBool LongSequence64_initialize_ex(
        LongSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongSequence64_initialize_w_params(
        LongSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongSequence64_finalize(
        LongSequence64* self);
            
NDDSUSERDllExport
void LongSequence64_finalize_ex(
        LongSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongSequence64_finalize_w_params(
        LongSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongSequence64_finalize_optional_members(
        LongSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongSequence64_copy(
        LongSequence64* dst,
        const LongSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongSequence128_LAST_MEMBER_ID long_LAST_MEMBER_ID
typedef  DDS_LongSeq  LongSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongSequence128Seq, LongSequence128);                                        
            
NDDSUSERDllExport
RTIBool LongSequence128_initialize(
        LongSequence128* self);
            
NDDSUSERDllExport
RTIBool LongSequence128_initialize_ex(
        LongSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongSequence128_initialize_w_params(
        LongSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongSequence128_finalize(
        LongSequence128* self);
            
NDDSUSERDllExport
void LongSequence128_finalize_ex(
        LongSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongSequence128_finalize_w_params(
        LongSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongSequence128_finalize_optional_members(
        LongSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongSequence128_copy(
        LongSequence128* dst,
        const LongSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongSequence256_LAST_MEMBER_ID long_LAST_MEMBER_ID
typedef  DDS_LongSeq  LongSequence256;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongSequence256_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongSequence256Seq, LongSequence256);                                        
            
NDDSUSERDllExport
RTIBool LongSequence256_initialize(
        LongSequence256* self);
            
NDDSUSERDllExport
RTIBool LongSequence256_initialize_ex(
        LongSequence256* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongSequence256_initialize_w_params(
        LongSequence256* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongSequence256_finalize(
        LongSequence256* self);
            
NDDSUSERDllExport
void LongSequence256_finalize_ex(
        LongSequence256* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongSequence256_finalize_w_params(
        LongSequence256* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongSequence256_finalize_optional_members(
        LongSequence256* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongSequence256_copy(
        LongSequence256* dst,
        const LongSequence256* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongSequence512_LAST_MEMBER_ID long_LAST_MEMBER_ID
typedef  DDS_LongSeq  LongSequence512;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongSequence512_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongSequence512Seq, LongSequence512);                                        
            
NDDSUSERDllExport
RTIBool LongSequence512_initialize(
        LongSequence512* self);
            
NDDSUSERDllExport
RTIBool LongSequence512_initialize_ex(
        LongSequence512* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongSequence512_initialize_w_params(
        LongSequence512* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongSequence512_finalize(
        LongSequence512* self);
            
NDDSUSERDllExport
void LongSequence512_finalize_ex(
        LongSequence512* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongSequence512_finalize_w_params(
        LongSequence512* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongSequence512_finalize_optional_members(
        LongSequence512* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongSequence512_copy(
        LongSequence512* dst,
        const LongSequence512* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongSequence1K_LAST_MEMBER_ID long_LAST_MEMBER_ID
typedef  DDS_LongSeq  LongSequence1K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongSequence1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongSequence1KSeq, LongSequence1K);                                        
            
NDDSUSERDllExport
RTIBool LongSequence1K_initialize(
        LongSequence1K* self);
            
NDDSUSERDllExport
RTIBool LongSequence1K_initialize_ex(
        LongSequence1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongSequence1K_initialize_w_params(
        LongSequence1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongSequence1K_finalize(
        LongSequence1K* self);
            
NDDSUSERDllExport
void LongSequence1K_finalize_ex(
        LongSequence1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongSequence1K_finalize_w_params(
        LongSequence1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongSequence1K_finalize_optional_members(
        LongSequence1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongSequence1K_copy(
        LongSequence1K* dst,
        const LongSequence1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongSequence2K_LAST_MEMBER_ID long_LAST_MEMBER_ID
typedef  DDS_LongSeq  LongSequence2K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongSequence2K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongSequence2KSeq, LongSequence2K);                                        
            
NDDSUSERDllExport
RTIBool LongSequence2K_initialize(
        LongSequence2K* self);
            
NDDSUSERDllExport
RTIBool LongSequence2K_initialize_ex(
        LongSequence2K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongSequence2K_initialize_w_params(
        LongSequence2K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongSequence2K_finalize(
        LongSequence2K* self);
            
NDDSUSERDllExport
void LongSequence2K_finalize_ex(
        LongSequence2K* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongSequence2K_finalize_w_params(
        LongSequence2K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongSequence2K_finalize_optional_members(
        LongSequence2K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongSequence2K_copy(
        LongSequence2K* dst,
        const LongSequence2K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongLongSequence32_LAST_MEMBER_ID longlong_LAST_MEMBER_ID
typedef  DDS_LongLongSeq  LongLongSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongLongSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongLongSequence32Seq, LongLongSequence32);                                        
            
NDDSUSERDllExport
RTIBool LongLongSequence32_initialize(
        LongLongSequence32* self);
            
NDDSUSERDllExport
RTIBool LongLongSequence32_initialize_ex(
        LongLongSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongLongSequence32_initialize_w_params(
        LongLongSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongLongSequence32_finalize(
        LongLongSequence32* self);
            
NDDSUSERDllExport
void LongLongSequence32_finalize_ex(
        LongLongSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongLongSequence32_finalize_w_params(
        LongLongSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongLongSequence32_finalize_optional_members(
        LongLongSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongLongSequence32_copy(
        LongLongSequence32* dst,
        const LongLongSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongLongSequence64_LAST_MEMBER_ID longlong_LAST_MEMBER_ID
typedef  DDS_LongLongSeq  LongLongSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongLongSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongLongSequence64Seq, LongLongSequence64);                                        
            
NDDSUSERDllExport
RTIBool LongLongSequence64_initialize(
        LongLongSequence64* self);
            
NDDSUSERDllExport
RTIBool LongLongSequence64_initialize_ex(
        LongLongSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongLongSequence64_initialize_w_params(
        LongLongSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongLongSequence64_finalize(
        LongLongSequence64* self);
            
NDDSUSERDllExport
void LongLongSequence64_finalize_ex(
        LongLongSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongLongSequence64_finalize_w_params(
        LongLongSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongLongSequence64_finalize_optional_members(
        LongLongSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongLongSequence64_copy(
        LongLongSequence64* dst,
        const LongLongSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_LongLongSequence128_LAST_MEMBER_ID longlong_LAST_MEMBER_ID
typedef  DDS_LongLongSeq  LongLongSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* LongLongSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(LongLongSequence128Seq, LongLongSequence128);                                        
            
NDDSUSERDllExport
RTIBool LongLongSequence128_initialize(
        LongLongSequence128* self);
            
NDDSUSERDllExport
RTIBool LongLongSequence128_initialize_ex(
        LongLongSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool LongLongSequence128_initialize_w_params(
        LongLongSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void LongLongSequence128_finalize(
        LongLongSequence128* self);
            
NDDSUSERDllExport
void LongLongSequence128_finalize_ex(
        LongLongSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void LongLongSequence128_finalize_w_params(
        LongLongSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void LongLongSequence128_finalize_optional_members(
        LongLongSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool LongLongSequence128_copy(
        LongLongSequence128* dst,
        const LongLongSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_FloatSequence32_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef  DDS_FloatSeq  FloatSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FloatSequence32Seq, FloatSequence32);                                        
            
NDDSUSERDllExport
RTIBool FloatSequence32_initialize(
        FloatSequence32* self);
            
NDDSUSERDllExport
RTIBool FloatSequence32_initialize_ex(
        FloatSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FloatSequence32_initialize_w_params(
        FloatSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FloatSequence32_finalize(
        FloatSequence32* self);
            
NDDSUSERDllExport
void FloatSequence32_finalize_ex(
        FloatSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void FloatSequence32_finalize_w_params(
        FloatSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FloatSequence32_finalize_optional_members(
        FloatSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FloatSequence32_copy(
        FloatSequence32* dst,
        const FloatSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_FloatSequence64_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef  DDS_FloatSeq  FloatSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FloatSequence64Seq, FloatSequence64);                                        
            
NDDSUSERDllExport
RTIBool FloatSequence64_initialize(
        FloatSequence64* self);
            
NDDSUSERDllExport
RTIBool FloatSequence64_initialize_ex(
        FloatSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FloatSequence64_initialize_w_params(
        FloatSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FloatSequence64_finalize(
        FloatSequence64* self);
            
NDDSUSERDllExport
void FloatSequence64_finalize_ex(
        FloatSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void FloatSequence64_finalize_w_params(
        FloatSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FloatSequence64_finalize_optional_members(
        FloatSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FloatSequence64_copy(
        FloatSequence64* dst,
        const FloatSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_FloatSequence128_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef  DDS_FloatSeq  FloatSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FloatSequence128Seq, FloatSequence128);                                        
            
NDDSUSERDllExport
RTIBool FloatSequence128_initialize(
        FloatSequence128* self);
            
NDDSUSERDllExport
RTIBool FloatSequence128_initialize_ex(
        FloatSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FloatSequence128_initialize_w_params(
        FloatSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FloatSequence128_finalize(
        FloatSequence128* self);
            
NDDSUSERDllExport
void FloatSequence128_finalize_ex(
        FloatSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void FloatSequence128_finalize_w_params(
        FloatSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FloatSequence128_finalize_optional_members(
        FloatSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FloatSequence128_copy(
        FloatSequence128* dst,
        const FloatSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_FloatSequence256_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef  DDS_FloatSeq  FloatSequence256;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatSequence256_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FloatSequence256Seq, FloatSequence256);                                        
            
NDDSUSERDllExport
RTIBool FloatSequence256_initialize(
        FloatSequence256* self);
            
NDDSUSERDllExport
RTIBool FloatSequence256_initialize_ex(
        FloatSequence256* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FloatSequence256_initialize_w_params(
        FloatSequence256* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FloatSequence256_finalize(
        FloatSequence256* self);
            
NDDSUSERDllExport
void FloatSequence256_finalize_ex(
        FloatSequence256* self,RTIBool deletePointers);

NDDSUSERDllExport
void FloatSequence256_finalize_w_params(
        FloatSequence256* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FloatSequence256_finalize_optional_members(
        FloatSequence256* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FloatSequence256_copy(
        FloatSequence256* dst,
        const FloatSequence256* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_FloatSequence512_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef  DDS_FloatSeq  FloatSequence512;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatSequence512_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FloatSequence512Seq, FloatSequence512);                                        
            
NDDSUSERDllExport
RTIBool FloatSequence512_initialize(
        FloatSequence512* self);
            
NDDSUSERDllExport
RTIBool FloatSequence512_initialize_ex(
        FloatSequence512* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FloatSequence512_initialize_w_params(
        FloatSequence512* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FloatSequence512_finalize(
        FloatSequence512* self);
            
NDDSUSERDllExport
void FloatSequence512_finalize_ex(
        FloatSequence512* self,RTIBool deletePointers);

NDDSUSERDllExport
void FloatSequence512_finalize_w_params(
        FloatSequence512* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FloatSequence512_finalize_optional_members(
        FloatSequence512* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FloatSequence512_copy(
        FloatSequence512* dst,
        const FloatSequence512* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_FloatSequence1K_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef  DDS_FloatSeq  FloatSequence1K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatSequence1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FloatSequence1KSeq, FloatSequence1K);                                        
            
NDDSUSERDllExport
RTIBool FloatSequence1K_initialize(
        FloatSequence1K* self);
            
NDDSUSERDllExport
RTIBool FloatSequence1K_initialize_ex(
        FloatSequence1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FloatSequence1K_initialize_w_params(
        FloatSequence1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FloatSequence1K_finalize(
        FloatSequence1K* self);
            
NDDSUSERDllExport
void FloatSequence1K_finalize_ex(
        FloatSequence1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void FloatSequence1K_finalize_w_params(
        FloatSequence1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FloatSequence1K_finalize_optional_members(
        FloatSequence1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FloatSequence1K_copy(
        FloatSequence1K* dst,
        const FloatSequence1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_DoubleSequence32_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef  DDS_DoubleSeq  DoubleSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DoubleSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DoubleSequence32Seq, DoubleSequence32);                                        
            
NDDSUSERDllExport
RTIBool DoubleSequence32_initialize(
        DoubleSequence32* self);
            
NDDSUSERDllExport
RTIBool DoubleSequence32_initialize_ex(
        DoubleSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DoubleSequence32_initialize_w_params(
        DoubleSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DoubleSequence32_finalize(
        DoubleSequence32* self);
            
NDDSUSERDllExport
void DoubleSequence32_finalize_ex(
        DoubleSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void DoubleSequence32_finalize_w_params(
        DoubleSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DoubleSequence32_finalize_optional_members(
        DoubleSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DoubleSequence32_copy(
        DoubleSequence32* dst,
        const DoubleSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_DoubleSequence64_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef  DDS_DoubleSeq  DoubleSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DoubleSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DoubleSequence64Seq, DoubleSequence64);                                        
            
NDDSUSERDllExport
RTIBool DoubleSequence64_initialize(
        DoubleSequence64* self);
            
NDDSUSERDllExport
RTIBool DoubleSequence64_initialize_ex(
        DoubleSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DoubleSequence64_initialize_w_params(
        DoubleSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DoubleSequence64_finalize(
        DoubleSequence64* self);
            
NDDSUSERDllExport
void DoubleSequence64_finalize_ex(
        DoubleSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void DoubleSequence64_finalize_w_params(
        DoubleSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DoubleSequence64_finalize_optional_members(
        DoubleSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DoubleSequence64_copy(
        DoubleSequence64* dst,
        const DoubleSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_DoubleSequence128_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef  DDS_DoubleSeq  DoubleSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DoubleSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DoubleSequence128Seq, DoubleSequence128);                                        
            
NDDSUSERDllExport
RTIBool DoubleSequence128_initialize(
        DoubleSequence128* self);
            
NDDSUSERDllExport
RTIBool DoubleSequence128_initialize_ex(
        DoubleSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DoubleSequence128_initialize_w_params(
        DoubleSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DoubleSequence128_finalize(
        DoubleSequence128* self);
            
NDDSUSERDllExport
void DoubleSequence128_finalize_ex(
        DoubleSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void DoubleSequence128_finalize_w_params(
        DoubleSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DoubleSequence128_finalize_optional_members(
        DoubleSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DoubleSequence128_copy(
        DoubleSequence128* dst,
        const DoubleSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_DoubleSequence256_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef  DDS_DoubleSeq  DoubleSequence256;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DoubleSequence256_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DoubleSequence256Seq, DoubleSequence256);                                        
            
NDDSUSERDllExport
RTIBool DoubleSequence256_initialize(
        DoubleSequence256* self);
            
NDDSUSERDllExport
RTIBool DoubleSequence256_initialize_ex(
        DoubleSequence256* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DoubleSequence256_initialize_w_params(
        DoubleSequence256* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DoubleSequence256_finalize(
        DoubleSequence256* self);
            
NDDSUSERDllExport
void DoubleSequence256_finalize_ex(
        DoubleSequence256* self,RTIBool deletePointers);

NDDSUSERDllExport
void DoubleSequence256_finalize_w_params(
        DoubleSequence256* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DoubleSequence256_finalize_optional_members(
        DoubleSequence256* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DoubleSequence256_copy(
        DoubleSequence256* dst,
        const DoubleSequence256* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_DoubleSequence512_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef  DDS_DoubleSeq  DoubleSequence512;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DoubleSequence512_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DoubleSequence512Seq, DoubleSequence512);                                        
            
NDDSUSERDllExport
RTIBool DoubleSequence512_initialize(
        DoubleSequence512* self);
            
NDDSUSERDllExport
RTIBool DoubleSequence512_initialize_ex(
        DoubleSequence512* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DoubleSequence512_initialize_w_params(
        DoubleSequence512* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DoubleSequence512_finalize(
        DoubleSequence512* self);
            
NDDSUSERDllExport
void DoubleSequence512_finalize_ex(
        DoubleSequence512* self,RTIBool deletePointers);

NDDSUSERDllExport
void DoubleSequence512_finalize_w_params(
        DoubleSequence512* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DoubleSequence512_finalize_optional_members(
        DoubleSequence512* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DoubleSequence512_copy(
        DoubleSequence512* dst,
        const DoubleSequence512* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_DoubleSequence1K_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef  DDS_DoubleSeq  DoubleSequence1K;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DoubleSequence1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DoubleSequence1KSeq, DoubleSequence1K);                                        
            
NDDSUSERDllExport
RTIBool DoubleSequence1K_initialize(
        DoubleSequence1K* self);
            
NDDSUSERDllExport
RTIBool DoubleSequence1K_initialize_ex(
        DoubleSequence1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DoubleSequence1K_initialize_w_params(
        DoubleSequence1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DoubleSequence1K_finalize(
        DoubleSequence1K* self);
            
NDDSUSERDllExport
void DoubleSequence1K_finalize_ex(
        DoubleSequence1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void DoubleSequence1K_finalize_w_params(
        DoubleSequence1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DoubleSequence1K_finalize_optional_members(
        DoubleSequence1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DoubleSequence1K_copy(
        DoubleSequence1K* dst,
        const DoubleSequence1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String16_LAST_MEMBER_ID string_LAST_MEMBER_ID
typedef char *  String16;                
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String16Seq, String16);                                        
            
NDDSUSERDllExport
RTIBool String16_initialize(
        String16* self);
            
NDDSUSERDllExport
RTIBool String16_initialize_ex(
        String16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String16_initialize_w_params(
        String16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String16_finalize(
        String16* self);
            
NDDSUSERDllExport
void String16_finalize_ex(
        String16* self,RTIBool deletePointers);

NDDSUSERDllExport
void String16_finalize_w_params(
        String16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String16_finalize_optional_members(
        String16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String16_copy(
        String16* dst,
        const String16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String32_LAST_MEMBER_ID string_LAST_MEMBER_ID
typedef char *  String32;                
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String32Seq, String32);                                        
            
NDDSUSERDllExport
RTIBool String32_initialize(
        String32* self);
            
NDDSUSERDllExport
RTIBool String32_initialize_ex(
        String32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String32_initialize_w_params(
        String32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String32_finalize(
        String32* self);
            
NDDSUSERDllExport
void String32_finalize_ex(
        String32* self,RTIBool deletePointers);

NDDSUSERDllExport
void String32_finalize_w_params(
        String32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String32_finalize_optional_members(
        String32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String32_copy(
        String32* dst,
        const String32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String64_LAST_MEMBER_ID string_LAST_MEMBER_ID
typedef char *  String64;                
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String64Seq, String64);                                        
            
NDDSUSERDllExport
RTIBool String64_initialize(
        String64* self);
            
NDDSUSERDllExport
RTIBool String64_initialize_ex(
        String64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String64_initialize_w_params(
        String64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String64_finalize(
        String64* self);
            
NDDSUSERDllExport
void String64_finalize_ex(
        String64* self,RTIBool deletePointers);

NDDSUSERDllExport
void String64_finalize_w_params(
        String64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String64_finalize_optional_members(
        String64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String64_copy(
        String64* dst,
        const String64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String128_LAST_MEMBER_ID string_LAST_MEMBER_ID
typedef char *  String128;                
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String128Seq, String128);                                        
            
NDDSUSERDllExport
RTIBool String128_initialize(
        String128* self);
            
NDDSUSERDllExport
RTIBool String128_initialize_ex(
        String128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String128_initialize_w_params(
        String128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String128_finalize(
        String128* self);
            
NDDSUSERDllExport
void String128_finalize_ex(
        String128* self,RTIBool deletePointers);

NDDSUSERDllExport
void String128_finalize_w_params(
        String128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String128_finalize_optional_members(
        String128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String128_copy(
        String128* dst,
        const String128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String256_LAST_MEMBER_ID string_LAST_MEMBER_ID
typedef char *  String256;                
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String256_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String256Seq, String256);                                        
            
NDDSUSERDllExport
RTIBool String256_initialize(
        String256* self);
            
NDDSUSERDllExport
RTIBool String256_initialize_ex(
        String256* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String256_initialize_w_params(
        String256* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String256_finalize(
        String256* self);
            
NDDSUSERDllExport
void String256_finalize_ex(
        String256* self,RTIBool deletePointers);

NDDSUSERDllExport
void String256_finalize_w_params(
        String256* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String256_finalize_optional_members(
        String256* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String256_copy(
        String256* dst,
        const String256* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String1K_LAST_MEMBER_ID string_LAST_MEMBER_ID
typedef char *  String1K;                
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String1K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String1KSeq, String1K);                                        
            
NDDSUSERDllExport
RTIBool String1K_initialize(
        String1K* self);
            
NDDSUSERDllExport
RTIBool String1K_initialize_ex(
        String1K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String1K_initialize_w_params(
        String1K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String1K_finalize(
        String1K* self);
            
NDDSUSERDllExport
void String1K_finalize_ex(
        String1K* self,RTIBool deletePointers);

NDDSUSERDllExport
void String1K_finalize_w_params(
        String1K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String1K_finalize_optional_members(
        String1K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String1K_copy(
        String1K* dst,
        const String1K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String2K_LAST_MEMBER_ID string_LAST_MEMBER_ID
typedef char *  String2K;                
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String2K_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String2KSeq, String2K);                                        
            
NDDSUSERDllExport
RTIBool String2K_initialize(
        String2K* self);
            
NDDSUSERDllExport
RTIBool String2K_initialize_ex(
        String2K* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String2K_initialize_w_params(
        String2K* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String2K_finalize(
        String2K* self);
            
NDDSUSERDllExport
void String2K_finalize_ex(
        String2K* self,RTIBool deletePointers);

NDDSUSERDllExport
void String2K_finalize_w_params(
        String2K* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String2K_finalize_optional_members(
        String2K* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String2K_copy(
        String2K* dst,
        const String2K* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String16Sequence16_LAST_MEMBER_ID rapid_String16_LAST_MEMBER_ID
typedef  rapid::String16Seq  String16Sequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String16Sequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String16Sequence16Seq, String16Sequence16);                                        
            
NDDSUSERDllExport
RTIBool String16Sequence16_initialize(
        String16Sequence16* self);
            
NDDSUSERDllExport
RTIBool String16Sequence16_initialize_ex(
        String16Sequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String16Sequence16_initialize_w_params(
        String16Sequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String16Sequence16_finalize(
        String16Sequence16* self);
            
NDDSUSERDllExport
void String16Sequence16_finalize_ex(
        String16Sequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void String16Sequence16_finalize_w_params(
        String16Sequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String16Sequence16_finalize_optional_members(
        String16Sequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String16Sequence16_copy(
        String16Sequence16* dst,
        const String16Sequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String32Sequence16_LAST_MEMBER_ID rapid_String32_LAST_MEMBER_ID
typedef  rapid::String32Seq  String32Sequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String32Sequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String32Sequence16Seq, String32Sequence16);                                        
            
NDDSUSERDllExport
RTIBool String32Sequence16_initialize(
        String32Sequence16* self);
            
NDDSUSERDllExport
RTIBool String32Sequence16_initialize_ex(
        String32Sequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String32Sequence16_initialize_w_params(
        String32Sequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String32Sequence16_finalize(
        String32Sequence16* self);
            
NDDSUSERDllExport
void String32Sequence16_finalize_ex(
        String32Sequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void String32Sequence16_finalize_w_params(
        String32Sequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String32Sequence16_finalize_optional_members(
        String32Sequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String32Sequence16_copy(
        String32Sequence16* dst,
        const String32Sequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String128Sequence16_LAST_MEMBER_ID rapid_String128_LAST_MEMBER_ID
typedef  rapid::String128Seq  String128Sequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String128Sequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String128Sequence16Seq, String128Sequence16);                                        
            
NDDSUSERDllExport
RTIBool String128Sequence16_initialize(
        String128Sequence16* self);
            
NDDSUSERDllExport
RTIBool String128Sequence16_initialize_ex(
        String128Sequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String128Sequence16_initialize_w_params(
        String128Sequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String128Sequence16_finalize(
        String128Sequence16* self);
            
NDDSUSERDllExport
void String128Sequence16_finalize_ex(
        String128Sequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void String128Sequence16_finalize_w_params(
        String128Sequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String128Sequence16_finalize_optional_members(
        String128Sequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String128Sequence16_copy(
        String128Sequence16* dst,
        const String128Sequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String16Sequence32_LAST_MEMBER_ID rapid_String16_LAST_MEMBER_ID
typedef  rapid::String16Seq  String16Sequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String16Sequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String16Sequence32Seq, String16Sequence32);                                        
            
NDDSUSERDllExport
RTIBool String16Sequence32_initialize(
        String16Sequence32* self);
            
NDDSUSERDllExport
RTIBool String16Sequence32_initialize_ex(
        String16Sequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String16Sequence32_initialize_w_params(
        String16Sequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String16Sequence32_finalize(
        String16Sequence32* self);
            
NDDSUSERDllExport
void String16Sequence32_finalize_ex(
        String16Sequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void String16Sequence32_finalize_w_params(
        String16Sequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String16Sequence32_finalize_optional_members(
        String16Sequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String16Sequence32_copy(
        String16Sequence32* dst,
        const String16Sequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String32Sequence32_LAST_MEMBER_ID rapid_String32_LAST_MEMBER_ID
typedef  rapid::String32Seq  String32Sequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String32Sequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String32Sequence32Seq, String32Sequence32);                                        
            
NDDSUSERDllExport
RTIBool String32Sequence32_initialize(
        String32Sequence32* self);
            
NDDSUSERDllExport
RTIBool String32Sequence32_initialize_ex(
        String32Sequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String32Sequence32_initialize_w_params(
        String32Sequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String32Sequence32_finalize(
        String32Sequence32* self);
            
NDDSUSERDllExport
void String32Sequence32_finalize_ex(
        String32Sequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void String32Sequence32_finalize_w_params(
        String32Sequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String32Sequence32_finalize_optional_members(
        String32Sequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String32Sequence32_copy(
        String32Sequence32* dst,
        const String32Sequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String128Sequence32_LAST_MEMBER_ID rapid_String128_LAST_MEMBER_ID
typedef  rapid::String128Seq  String128Sequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String128Sequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String128Sequence32Seq, String128Sequence32);                                        
            
NDDSUSERDllExport
RTIBool String128Sequence32_initialize(
        String128Sequence32* self);
            
NDDSUSERDllExport
RTIBool String128Sequence32_initialize_ex(
        String128Sequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String128Sequence32_initialize_w_params(
        String128Sequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String128Sequence32_finalize(
        String128Sequence32* self);
            
NDDSUSERDllExport
void String128Sequence32_finalize_ex(
        String128Sequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void String128Sequence32_finalize_w_params(
        String128Sequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String128Sequence32_finalize_optional_members(
        String128Sequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String128Sequence32_copy(
        String128Sequence32* dst,
        const String128Sequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String128Sequence64_LAST_MEMBER_ID rapid_String128_LAST_MEMBER_ID
typedef  rapid::String128Seq  String128Sequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String128Sequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String128Sequence64Seq, String128Sequence64);                                        
            
NDDSUSERDllExport
RTIBool String128Sequence64_initialize(
        String128Sequence64* self);
            
NDDSUSERDllExport
RTIBool String128Sequence64_initialize_ex(
        String128Sequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String128Sequence64_initialize_w_params(
        String128Sequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String128Sequence64_finalize(
        String128Sequence64* self);
            
NDDSUSERDllExport
void String128Sequence64_finalize_ex(
        String128Sequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void String128Sequence64_finalize_w_params(
        String128Sequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String128Sequence64_finalize_optional_members(
        String128Sequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String128Sequence64_copy(
        String128Sequence64* dst,
        const String128Sequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String256Sequence64_LAST_MEMBER_ID rapid_String256_LAST_MEMBER_ID
typedef  rapid::String256Seq  String256Sequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String256Sequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String256Sequence64Seq, String256Sequence64);                                        
            
NDDSUSERDllExport
RTIBool String256Sequence64_initialize(
        String256Sequence64* self);
            
NDDSUSERDllExport
RTIBool String256Sequence64_initialize_ex(
        String256Sequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String256Sequence64_initialize_w_params(
        String256Sequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String256Sequence64_finalize(
        String256Sequence64* self);
            
NDDSUSERDllExport
void String256Sequence64_finalize_ex(
        String256Sequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void String256Sequence64_finalize_w_params(
        String256Sequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String256Sequence64_finalize_optional_members(
        String256Sequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String256Sequence64_copy(
        String256Sequence64* dst,
        const String256Sequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_String32Sequence128_LAST_MEMBER_ID rapid_String32_LAST_MEMBER_ID
typedef  rapid::String32Seq  String32Sequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* String32Sequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(String32Sequence128Seq, String32Sequence128);                                        
            
NDDSUSERDllExport
RTIBool String32Sequence128_initialize(
        String32Sequence128* self);
            
NDDSUSERDllExport
RTIBool String32Sequence128_initialize_ex(
        String32Sequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool String32Sequence128_initialize_w_params(
        String32Sequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void String32Sequence128_finalize(
        String32Sequence128* self);
            
NDDSUSERDllExport
void String32Sequence128_finalize_ex(
        String32Sequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void String32Sequence128_finalize_w_params(
        String32Sequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void String32Sequence128_finalize_optional_members(
        String32Sequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool String32Sequence128_copy(
        String32Sequence128* dst,
        const String32Sequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_Vec2d_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef DDS_Double  Vec2d[2];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Vec2d_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(Vec2dSeq, Vec2d);                
            
NDDSUSERDllExport
RTIBool Vec2d_initialize(
        Vec2d* self);
            
NDDSUSERDllExport
RTIBool Vec2d_initialize_ex(
        Vec2d* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Vec2d_initialize_w_params(
        Vec2d* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Vec2d_finalize(
        Vec2d* self);
            
NDDSUSERDllExport
void Vec2d_finalize_ex(
        Vec2d* self,RTIBool deletePointers);

NDDSUSERDllExport
void Vec2d_finalize_w_params(
        Vec2d* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Vec2d_finalize_optional_members(
        Vec2d* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Vec2d_copy(
        Vec2d* dst,
        const Vec2d* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_Vec3d_LAST_MEMBER_ID double_LAST_MEMBER_ID
typedef DDS_Double  Vec3d[3];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Vec3d_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(Vec3dSeq, Vec3d);                
            
NDDSUSERDllExport
RTIBool Vec3d_initialize(
        Vec3d* self);
            
NDDSUSERDllExport
RTIBool Vec3d_initialize_ex(
        Vec3d* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Vec3d_initialize_w_params(
        Vec3d* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Vec3d_finalize(
        Vec3d* self);
            
NDDSUSERDllExport
void Vec3d_finalize_ex(
        Vec3d* self,RTIBool deletePointers);

NDDSUSERDllExport
void Vec3d_finalize_w_params(
        Vec3d* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Vec3d_finalize_optional_members(
        Vec3d* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Vec3d_copy(
        Vec3d* dst,
        const Vec3d* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_Vec2f_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef DDS_Float  Vec2f[2];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Vec2f_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(Vec2fSeq, Vec2f);                
            
NDDSUSERDllExport
RTIBool Vec2f_initialize(
        Vec2f* self);
            
NDDSUSERDllExport
RTIBool Vec2f_initialize_ex(
        Vec2f* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Vec2f_initialize_w_params(
        Vec2f* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Vec2f_finalize(
        Vec2f* self);
            
NDDSUSERDllExport
void Vec2f_finalize_ex(
        Vec2f* self,RTIBool deletePointers);

NDDSUSERDllExport
void Vec2f_finalize_w_params(
        Vec2f* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Vec2f_finalize_optional_members(
        Vec2f* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Vec2f_copy(
        Vec2f* dst,
        const Vec2f* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_Vec3f_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef DDS_Float  Vec3f[3];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Vec3f_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(Vec3fSeq, Vec3f);                
            
NDDSUSERDllExport
RTIBool Vec3f_initialize(
        Vec3f* self);
            
NDDSUSERDllExport
RTIBool Vec3f_initialize_ex(
        Vec3f* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Vec3f_initialize_w_params(
        Vec3f* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Vec3f_finalize(
        Vec3f* self);
            
NDDSUSERDllExport
void Vec3f_finalize_ex(
        Vec3f* self,RTIBool deletePointers);

NDDSUSERDllExport
void Vec3f_finalize_w_params(
        Vec3f* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Vec3f_finalize_optional_members(
        Vec3f* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Vec3f_copy(
        Vec3f* dst,
        const Vec3f* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** A 3x3 rotation matrix in order: R11, R12, R13, R21, R22, R23, R31, R32, R33. */


#define rapid_Mat33f_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef DDS_Float  Mat33f[9];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Mat33f_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(Mat33fSeq, Mat33f);                
            
NDDSUSERDllExport
RTIBool Mat33f_initialize(
        Mat33f* self);
            
NDDSUSERDllExport
RTIBool Mat33f_initialize_ex(
        Mat33f* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Mat33f_initialize_w_params(
        Mat33f* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Mat33f_finalize(
        Mat33f* self);
            
NDDSUSERDllExport
void Mat33f_finalize_ex(
        Mat33f* self,RTIBool deletePointers);

NDDSUSERDllExport
void Mat33f_finalize_w_params(
        Mat33f* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Mat33f_finalize_optional_members(
        Mat33f* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Mat33f_copy(
        Mat33f* dst,
        const Mat33f* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** RGBA color */


#define rapid_Color4f_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef DDS_Float  Color4f[4];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Color4f_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(Color4fSeq, Color4f);                
            
NDDSUSERDllExport
RTIBool Color4f_initialize(
        Color4f* self);
            
NDDSUSERDllExport
RTIBool Color4f_initialize_ex(
        Color4f* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Color4f_initialize_w_params(
        Color4f* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Color4f_finalize(
        Color4f* self);
            
NDDSUSERDllExport
void Color4f_finalize_ex(
        Color4f* self,RTIBool deletePointers);

NDDSUSERDllExport
void Color4f_finalize_w_params(
        Color4f* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Color4f_finalize_optional_members(
        Color4f* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Color4f_copy(
        Color4f* dst,
        const Color4f* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** RGB color */


#define rapid_Color3f_LAST_MEMBER_ID float_LAST_MEMBER_ID
typedef DDS_Float  Color3f[3];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Color3f_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(Color3fSeq, Color3f);                
            
NDDSUSERDllExport
RTIBool Color3f_initialize(
        Color3f* self);
            
NDDSUSERDllExport
RTIBool Color3f_initialize_ex(
        Color3f* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Color3f_initialize_w_params(
        Color3f* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void Color3f_finalize(
        Color3f* self);
            
NDDSUSERDllExport
void Color3f_finalize_ex(
        Color3f* self,RTIBool deletePointers);

NDDSUSERDllExport
void Color3f_finalize_w_params(
        Color3f* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Color3f_finalize_optional_members(
        Color3f* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Color3f_copy(
        Color3f* dst,
        const Color3f* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * RotationEncoding specifies alternate rotation encodings for a Mat33f.

 * The default interpretation of Mat33f is a 3x3 rotation matrix, and that is

 * the preferred representation for rotations in RAPID. However, alternate

 * encodings are available for simplicity, compactness, or to indicate

 * whether the rotation matrix is invalid (i.e. RAPID_ROT_NONE).

 * <ul>

 *   <li>RAPID_ROT_NONE: matrix is invalid or uninitialized

 *   <li>RAPID_ROT_M33: A 3x3 rotation matrix in order: R11, R12, R13, R21, R22, R23, R31, R32, R33

 *   <li>RAPID_ROT_QUAT: quaternion, first 4 elements of Mat33 are X, Y, Z, W

 *   <li>RAPID_ROT_XYZ: euler angles, first 3 elements of Mat33 are a rotation around X in radians, followed by rotation around Y, followed by rotation around Z

 *   <li>RAPID_ROT_ZYX: euler angles, first 3 elements of Mat33 are a rotation around Z in radians, followed by rotation around Y, followed by rotation around X

 *   <li>RAPID_ROT_ZYZ: euler angles, first 3 elements of Mat33 are a rotation around Z in radians, followed by rotation around Y, followed by rotation around Z

 *   <li>RAPID_ROT_VEL: angular velocity, first 3 elements of Mat33 is the instantaneous axis of rotation

 * </ul>

 */
 
typedef enum RotationEncoding
{
    RAPID_ROT_NONE,
    RAPID_ROT_M33,
    RAPID_ROT_QUAT,
    RAPID_ROT_XYZ,
    RAPID_ROT_ZYX,
    RAPID_ROT_ZYZ,
    RAPID_ROT_VEL
} RotationEncoding;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RotationEncoding_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RotationEncodingSeq, RotationEncoding);
        
NDDSUSERDllExport
RTIBool RotationEncoding_initialize(
        RotationEncoding* self);
        
NDDSUSERDllExport
RTIBool RotationEncoding_initialize_ex(
        RotationEncoding* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RotationEncoding_initialize_w_params(
        RotationEncoding* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RotationEncoding_finalize(
        RotationEncoding* self);
                        
NDDSUSERDllExport
void RotationEncoding_finalize_ex(
        RotationEncoding* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void RotationEncoding_finalize_w_params(
        RotationEncoding* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RotationEncoding_finalize_optional_members(
        RotationEncoding* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool RotationEncoding_copy(
        RotationEncoding* dst,
        const RotationEncoding* src);


NDDSUSERDllExport
RTIBool RotationEncoding_getValues(RotationEncodingSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * DataType is used in KeyTypeValue triples to describe the type of data contained in the string value.

 * <ul>

 *   <li>RAPID_BOOL:

 *   <li>RAPID_DOUBLE:

 *   <li>RAPID_FLOAT:

 *   <li>RAPID_INT:

 *   <li>RAPID_LONGLONG:

 *   <li>RAPID_STRING:

 *   <li>RAPID_VEC3d:

 *   <li>RAPID_MAT33f:

 * </ul>

 */
 
typedef enum DataType
{
    RAPID_BOOL,
    RAPID_DOUBLE,
    RAPID_FLOAT,
    RAPID_INT,
    RAPID_LONGLONG,
    RAPID_STRING,
    RAPID_VEC3d,
    RAPID_MAT33f
} DataType;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DataType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DataTypeSeq, DataType);
        
NDDSUSERDllExport
RTIBool DataType_initialize(
        DataType* self);
        
NDDSUSERDllExport
RTIBool DataType_initialize_ex(
        DataType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DataType_initialize_w_params(
        DataType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DataType_finalize(
        DataType* self);
                        
NDDSUSERDllExport
void DataType_finalize_ex(
        DataType* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void DataType_finalize_w_params(
        DataType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DataType_finalize_optional_members(
        DataType* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool DataType_copy(
        DataType* dst,
        const DataType* src);


NDDSUSERDllExport
RTIBool DataType_getValues(DataTypeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** Arguments for commands will be specified with these types. */

                
extern const char *ParameterUnionTYPENAME;



#ifdef __cplusplus
    struct ParameterUnionSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ParameterUnionTypeSupport;
    class ParameterUnionDataWriter;
    class ParameterUnionDataReader;
#endif

#endif


typedef struct ParameterUnion {
#ifdef __cplusplus
    typedef struct ParameterUnionSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ParameterUnionTypeSupport TypeSupport;
    typedef ParameterUnionDataWriter DataWriter;
    typedef ParameterUnionDataReader DataReader;
#endif

#endif
    rapid::DataType _d;

    struct ParameterUnion_u

    {
    DDS_Boolean  b;

    DDS_Double  d;

    DDS_Float  f;

    DDS_Long  i;

    DDS_LongLong  ll;

    rapid::String128  s;

    rapid::Vec3d  vec3d;

    rapid::Mat33f  mat33f;


    } _u;
} ParameterUnion;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ParameterUnion_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ParameterUnionSeq, ParameterUnion);

NDDSUSERDllExport
RTIBool ParameterUnion_initialize(
        ParameterUnion* self);
        
NDDSUSERDllExport
RTIBool ParameterUnion_initialize_ex(
        ParameterUnion* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ParameterUnion_initialize_w_params(
        ParameterUnion* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ParameterUnion_finalize(
        ParameterUnion* self);
                        
NDDSUSERDllExport
void ParameterUnion_finalize_ex(
        ParameterUnion* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void ParameterUnion_finalize_w_params(
        ParameterUnion* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ParameterUnion_finalize_optional_members(
        ParameterUnion* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool ParameterUnion_copy(
        ParameterUnion* dst,
        const ParameterUnion* src);
        

NDDSUSERDllExport
rapid::DataType ParameterUnion_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ParameterSequence16_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  ParameterSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ParameterSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ParameterSequence16Seq, ParameterSequence16);                                        
            
NDDSUSERDllExport
RTIBool ParameterSequence16_initialize(
        ParameterSequence16* self);
            
NDDSUSERDllExport
RTIBool ParameterSequence16_initialize_ex(
        ParameterSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ParameterSequence16_initialize_w_params(
        ParameterSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ParameterSequence16_finalize(
        ParameterSequence16* self);
            
NDDSUSERDllExport
void ParameterSequence16_finalize_ex(
        ParameterSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void ParameterSequence16_finalize_w_params(
        ParameterSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ParameterSequence16_finalize_optional_members(
        ParameterSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ParameterSequence16_copy(
        ParameterSequence16* dst,
        const ParameterSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ParameterSequence64_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  ParameterSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ParameterSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ParameterSequence64Seq, ParameterSequence64);                                        
            
NDDSUSERDllExport
RTIBool ParameterSequence64_initialize(
        ParameterSequence64* self);
            
NDDSUSERDllExport
RTIBool ParameterSequence64_initialize_ex(
        ParameterSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ParameterSequence64_initialize_w_params(
        ParameterSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ParameterSequence64_finalize(
        ParameterSequence64* self);
            
NDDSUSERDllExport
void ParameterSequence64_finalize_ex(
        ParameterSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void ParameterSequence64_finalize_w_params(
        ParameterSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ParameterSequence64_finalize_optional_members(
        ParameterSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ParameterSequence64_copy(
        ParameterSequence64* dst,
        const ParameterSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** KeyTypePair defines a key with data type only. */

#define rapid_KeyTypePair_LAST_MEMBER_ID 1
        
extern const char *KeyTypePairTYPENAME;
        


#ifdef __cplusplus
    struct KeyTypePairSeq;

#ifndef NDDS_STANDALONE_TYPE
    class KeyTypePairTypeSupport;
    class KeyTypePairDataWriter;
    class KeyTypePairDataReader;
#endif

#endif

            
    
class KeyTypePair                                        
{
public:            
#ifdef __cplusplus
    typedef struct KeyTypePairSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef KeyTypePairTypeSupport TypeSupport;
    typedef KeyTypePairDataWriter DataWriter;
    typedef KeyTypePairDataReader DataReader;
#endif

#endif
    
    rapid::String32  key;

    rapid::DataType  type;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypePair_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(KeyTypePairSeq, KeyTypePair);
        
NDDSUSERDllExport
RTIBool KeyTypePair_initialize(
        KeyTypePair* self);
        
NDDSUSERDllExport
RTIBool KeyTypePair_initialize_ex(
        KeyTypePair* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool KeyTypePair_initialize_w_params(
        KeyTypePair* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void KeyTypePair_finalize(
        KeyTypePair* self);
                        
NDDSUSERDllExport
void KeyTypePair_finalize_ex(
        KeyTypePair* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void KeyTypePair_finalize_w_params(
        KeyTypePair* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void KeyTypePair_finalize_optional_members(
        KeyTypePair* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool KeyTypePair_copy(
        KeyTypePair* dst,
        const KeyTypePair* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_KeyTypeSequence4_LAST_MEMBER_ID rapid_KeyTypePair_LAST_MEMBER_ID
typedef  rapid::KeyTypePairSeq  KeyTypeSequence4;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeSequence4_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeSequence4Seq, KeyTypeSequence4);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeSequence4_initialize(
        KeyTypeSequence4* self);
            
NDDSUSERDllExport
RTIBool KeyTypeSequence4_initialize_ex(
        KeyTypeSequence4* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeSequence4_initialize_w_params(
        KeyTypeSequence4* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeSequence4_finalize(
        KeyTypeSequence4* self);
            
NDDSUSERDllExport
void KeyTypeSequence4_finalize_ex(
        KeyTypeSequence4* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeSequence4_finalize_w_params(
        KeyTypeSequence4* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeSequence4_finalize_optional_members(
        KeyTypeSequence4* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeSequence4_copy(
        KeyTypeSequence4* dst,
        const KeyTypeSequence4* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_KeyTypeSequence16_LAST_MEMBER_ID rapid_KeyTypePair_LAST_MEMBER_ID
typedef  rapid::KeyTypePairSeq  KeyTypeSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeSequence16Seq, KeyTypeSequence16);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeSequence16_initialize(
        KeyTypeSequence16* self);
            
NDDSUSERDllExport
RTIBool KeyTypeSequence16_initialize_ex(
        KeyTypeSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeSequence16_initialize_w_params(
        KeyTypeSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeSequence16_finalize(
        KeyTypeSequence16* self);
            
NDDSUSERDllExport
void KeyTypeSequence16_finalize_ex(
        KeyTypeSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeSequence16_finalize_w_params(
        KeyTypeSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeSequence16_finalize_optional_members(
        KeyTypeSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeSequence16_copy(
        KeyTypeSequence16* dst,
        const KeyTypeSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_KeyTypeSequence64_LAST_MEMBER_ID rapid_KeyTypePair_LAST_MEMBER_ID
typedef  rapid::KeyTypePairSeq  KeyTypeSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeSequence64Seq, KeyTypeSequence64);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeSequence64_initialize(
        KeyTypeSequence64* self);
            
NDDSUSERDllExport
RTIBool KeyTypeSequence64_initialize_ex(
        KeyTypeSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeSequence64_initialize_w_params(
        KeyTypeSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeSequence64_finalize(
        KeyTypeSequence64* self);
            
NDDSUSERDllExport
void KeyTypeSequence64_finalize_ex(
        KeyTypeSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeSequence64_finalize_w_params(
        KeyTypeSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeSequence64_finalize_optional_members(
        KeyTypeSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeSequence64_copy(
        KeyTypeSequence64* dst,
        const KeyTypeSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** KeyTypeValueTriple defines a key, its data type and its value. */

#define rapid_KeyTypeValueTriple_LAST_MEMBER_ID 2
        
extern const char *KeyTypeValueTripleTYPENAME;
        


#ifdef __cplusplus
    struct KeyTypeValueTripleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class KeyTypeValueTripleTypeSupport;
    class KeyTypeValueTripleDataWriter;
    class KeyTypeValueTripleDataReader;
#endif

#endif

            
    
class KeyTypeValueTriple                                        
{
public:            
#ifdef __cplusplus
    typedef struct KeyTypeValueTripleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef KeyTypeValueTripleTypeSupport TypeSupport;
    typedef KeyTypeValueTripleDataWriter DataWriter;
    typedef KeyTypeValueTripleDataReader DataReader;
#endif

#endif
    
    rapid::String32  key;

/** Place-holder to keep binary layout of the struct backward compatible. Data type should be set in ParameterUnion */

    DDS_Long  padding;

    rapid::ParameterUnion  value;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeValueTriple_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(KeyTypeValueTripleSeq, KeyTypeValueTriple);
        
NDDSUSERDllExport
RTIBool KeyTypeValueTriple_initialize(
        KeyTypeValueTriple* self);
        
NDDSUSERDllExport
RTIBool KeyTypeValueTriple_initialize_ex(
        KeyTypeValueTriple* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool KeyTypeValueTriple_initialize_w_params(
        KeyTypeValueTriple* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void KeyTypeValueTriple_finalize(
        KeyTypeValueTriple* self);
                        
NDDSUSERDllExport
void KeyTypeValueTriple_finalize_ex(
        KeyTypeValueTriple* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void KeyTypeValueTriple_finalize_w_params(
        KeyTypeValueTriple* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void KeyTypeValueTriple_finalize_optional_members(
        KeyTypeValueTriple* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool KeyTypeValueTriple_copy(
        KeyTypeValueTriple* dst,
        const KeyTypeValueTriple* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** Hash table interchange data structure with type information. */


#define rapid_KeyTypeValueSequence8_LAST_MEMBER_ID rapid_KeyTypeValueTriple_LAST_MEMBER_ID
typedef  rapid::KeyTypeValueTripleSeq  KeyTypeValueSequence8;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeValueSequence8_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeValueSequence8Seq, KeyTypeValueSequence8);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence8_initialize(
        KeyTypeValueSequence8* self);
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence8_initialize_ex(
        KeyTypeValueSequence8* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeValueSequence8_initialize_w_params(
        KeyTypeValueSequence8* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeValueSequence8_finalize(
        KeyTypeValueSequence8* self);
            
NDDSUSERDllExport
void KeyTypeValueSequence8_finalize_ex(
        KeyTypeValueSequence8* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeValueSequence8_finalize_w_params(
        KeyTypeValueSequence8* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeValueSequence8_finalize_optional_members(
        KeyTypeValueSequence8* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeValueSequence8_copy(
        KeyTypeValueSequence8* dst,
        const KeyTypeValueSequence8* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_KeyTypeValueSequence16_LAST_MEMBER_ID rapid_KeyTypeValueTriple_LAST_MEMBER_ID
typedef  rapid::KeyTypeValueTripleSeq  KeyTypeValueSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeValueSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeValueSequence16Seq, KeyTypeValueSequence16);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence16_initialize(
        KeyTypeValueSequence16* self);
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence16_initialize_ex(
        KeyTypeValueSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeValueSequence16_initialize_w_params(
        KeyTypeValueSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeValueSequence16_finalize(
        KeyTypeValueSequence16* self);
            
NDDSUSERDllExport
void KeyTypeValueSequence16_finalize_ex(
        KeyTypeValueSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeValueSequence16_finalize_w_params(
        KeyTypeValueSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeValueSequence16_finalize_optional_members(
        KeyTypeValueSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeValueSequence16_copy(
        KeyTypeValueSequence16* dst,
        const KeyTypeValueSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_KeyTypeValueSequence32_LAST_MEMBER_ID rapid_KeyTypeValueTriple_LAST_MEMBER_ID
typedef  rapid::KeyTypeValueTripleSeq  KeyTypeValueSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeValueSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeValueSequence32Seq, KeyTypeValueSequence32);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence32_initialize(
        KeyTypeValueSequence32* self);
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence32_initialize_ex(
        KeyTypeValueSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeValueSequence32_initialize_w_params(
        KeyTypeValueSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeValueSequence32_finalize(
        KeyTypeValueSequence32* self);
            
NDDSUSERDllExport
void KeyTypeValueSequence32_finalize_ex(
        KeyTypeValueSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeValueSequence32_finalize_w_params(
        KeyTypeValueSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeValueSequence32_finalize_optional_members(
        KeyTypeValueSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeValueSequence32_copy(
        KeyTypeValueSequence32* dst,
        const KeyTypeValueSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_KeyTypeValueSequence64_LAST_MEMBER_ID rapid_KeyTypeValueTriple_LAST_MEMBER_ID
typedef  rapid::KeyTypeValueTripleSeq  KeyTypeValueSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeValueSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeValueSequence64Seq, KeyTypeValueSequence64);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence64_initialize(
        KeyTypeValueSequence64* self);
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence64_initialize_ex(
        KeyTypeValueSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeValueSequence64_initialize_w_params(
        KeyTypeValueSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeValueSequence64_finalize(
        KeyTypeValueSequence64* self);
            
NDDSUSERDllExport
void KeyTypeValueSequence64_finalize_ex(
        KeyTypeValueSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeValueSequence64_finalize_w_params(
        KeyTypeValueSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeValueSequence64_finalize_optional_members(
        KeyTypeValueSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeValueSequence64_copy(
        KeyTypeValueSequence64* dst,
        const KeyTypeValueSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_KeyTypeValueSequence128_LAST_MEMBER_ID rapid_KeyTypeValueTriple_LAST_MEMBER_ID
typedef  rapid::KeyTypeValueTripleSeq  KeyTypeValueSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* KeyTypeValueSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(KeyTypeValueSequence128Seq, KeyTypeValueSequence128);                                        
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence128_initialize(
        KeyTypeValueSequence128* self);
            
NDDSUSERDllExport
RTIBool KeyTypeValueSequence128_initialize_ex(
        KeyTypeValueSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool KeyTypeValueSequence128_initialize_w_params(
        KeyTypeValueSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void KeyTypeValueSequence128_finalize(
        KeyTypeValueSequence128* self);
            
NDDSUSERDllExport
void KeyTypeValueSequence128_finalize_ex(
        KeyTypeValueSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void KeyTypeValueSequence128_finalize_w_params(
        KeyTypeValueSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void KeyTypeValueSequence128_finalize_optional_members(
        KeyTypeValueSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool KeyTypeValueSequence128_copy(
        KeyTypeValueSequence128* dst,
        const KeyTypeValueSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ValueSequence8_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  ValueSequence8;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ValueSequence8_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ValueSequence8Seq, ValueSequence8);                                        
            
NDDSUSERDllExport
RTIBool ValueSequence8_initialize(
        ValueSequence8* self);
            
NDDSUSERDllExport
RTIBool ValueSequence8_initialize_ex(
        ValueSequence8* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ValueSequence8_initialize_w_params(
        ValueSequence8* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ValueSequence8_finalize(
        ValueSequence8* self);
            
NDDSUSERDllExport
void ValueSequence8_finalize_ex(
        ValueSequence8* self,RTIBool deletePointers);

NDDSUSERDllExport
void ValueSequence8_finalize_w_params(
        ValueSequence8* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ValueSequence8_finalize_optional_members(
        ValueSequence8* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ValueSequence8_copy(
        ValueSequence8* dst,
        const ValueSequence8* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ValueSequence16_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  ValueSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ValueSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ValueSequence16Seq, ValueSequence16);                                        
            
NDDSUSERDllExport
RTIBool ValueSequence16_initialize(
        ValueSequence16* self);
            
NDDSUSERDllExport
RTIBool ValueSequence16_initialize_ex(
        ValueSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ValueSequence16_initialize_w_params(
        ValueSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ValueSequence16_finalize(
        ValueSequence16* self);
            
NDDSUSERDllExport
void ValueSequence16_finalize_ex(
        ValueSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void ValueSequence16_finalize_w_params(
        ValueSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ValueSequence16_finalize_optional_members(
        ValueSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ValueSequence16_copy(
        ValueSequence16* dst,
        const ValueSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ValueSequence32_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  ValueSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ValueSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ValueSequence32Seq, ValueSequence32);                                        
            
NDDSUSERDllExport
RTIBool ValueSequence32_initialize(
        ValueSequence32* self);
            
NDDSUSERDllExport
RTIBool ValueSequence32_initialize_ex(
        ValueSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ValueSequence32_initialize_w_params(
        ValueSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ValueSequence32_finalize(
        ValueSequence32* self);
            
NDDSUSERDllExport
void ValueSequence32_finalize_ex(
        ValueSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void ValueSequence32_finalize_w_params(
        ValueSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ValueSequence32_finalize_optional_members(
        ValueSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ValueSequence32_copy(
        ValueSequence32* dst,
        const ValueSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ValueSequence64_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  ValueSequence64;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ValueSequence64_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ValueSequence64Seq, ValueSequence64);                                        
            
NDDSUSERDllExport
RTIBool ValueSequence64_initialize(
        ValueSequence64* self);
            
NDDSUSERDllExport
RTIBool ValueSequence64_initialize_ex(
        ValueSequence64* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ValueSequence64_initialize_w_params(
        ValueSequence64* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ValueSequence64_finalize(
        ValueSequence64* self);
            
NDDSUSERDllExport
void ValueSequence64_finalize_ex(
        ValueSequence64* self,RTIBool deletePointers);

NDDSUSERDllExport
void ValueSequence64_finalize_w_params(
        ValueSequence64* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ValueSequence64_finalize_optional_members(
        ValueSequence64* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ValueSequence64_copy(
        ValueSequence64* dst,
        const ValueSequence64* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ValueSequence128_LAST_MEMBER_ID rapid_ParameterUnion_LAST_MEMBER_ID
typedef  rapid::ParameterUnionSeq  ValueSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ValueSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ValueSequence128Seq, ValueSequence128);                                        
            
NDDSUSERDllExport
RTIBool ValueSequence128_initialize(
        ValueSequence128* self);
            
NDDSUSERDllExport
RTIBool ValueSequence128_initialize_ex(
        ValueSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ValueSequence128_initialize_w_params(
        ValueSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ValueSequence128_finalize(
        ValueSequence128* self);
            
NDDSUSERDllExport
void ValueSequence128_finalize_ex(
        ValueSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void ValueSequence128_finalize_w_params(
        ValueSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ValueSequence128_finalize_optional_members(
        ValueSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ValueSequence128_copy(
        ValueSequence128* dst,
        const ValueSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** Transform3D defines an x,y,z cartesian location with a rotation. */

#define rapid_Transform3D_LAST_MEMBER_ID 1
        
extern const char *Transform3DTYPENAME;
        


#ifdef __cplusplus
    struct Transform3DSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Transform3DTypeSupport;
    class Transform3DDataWriter;
    class Transform3DDataReader;
#endif

#endif

            
    
class Transform3D                                        
{
public:            
#ifdef __cplusplus
    typedef struct Transform3DSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Transform3DTypeSupport TypeSupport;
    typedef Transform3DDataWriter DataWriter;
    typedef Transform3DDataReader DataReader;
#endif

#endif
    
    rapid::Vec3d  xyz;

/** By default, a 3x3 rotation matrix in order: R11, R12, R13, R21, R22, R23, R31, R32, R33.

 * However, some messages may supply a RotationEncoding to specify alternate rotation representations.

 * @see RotationEncoding

 */

    rapid::Mat33f  rot;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Transform3D_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Transform3DSeq, Transform3D);
        
NDDSUSERDllExport
RTIBool Transform3D_initialize(
        Transform3D* self);
        
NDDSUSERDllExport
RTIBool Transform3D_initialize_ex(
        Transform3D* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Transform3D_initialize_w_params(
        Transform3D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Transform3D_finalize(
        Transform3D* self);
                        
NDDSUSERDllExport
void Transform3D_finalize_ex(
        Transform3D* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Transform3D_finalize_w_params(
        Transform3D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Transform3D_finalize_optional_members(
        Transform3D* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Transform3D_copy(
        Transform3D* dst,
        const Transform3D* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** Sequence of floats with an identifier. */

#define rapid_NamedFloatSequence_LAST_MEMBER_ID 1
        
extern const char *NamedFloatSequenceTYPENAME;
        


#ifdef __cplusplus
    struct NamedFloatSequenceSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NamedFloatSequenceTypeSupport;
    class NamedFloatSequenceDataWriter;
    class NamedFloatSequenceDataReader;
#endif

#endif

            
    
class NamedFloatSequence                                        
{
public:            
#ifdef __cplusplus
    typedef struct NamedFloatSequenceSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NamedFloatSequenceTypeSupport TypeSupport;
    typedef NamedFloatSequenceDataWriter DataWriter;
    typedef NamedFloatSequenceDataReader DataReader;
#endif

#endif
    
    rapid::String16  name;

    rapid::FloatSequence64  values;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedFloatSequence_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NamedFloatSequenceSeq, NamedFloatSequence);
        
NDDSUSERDllExport
RTIBool NamedFloatSequence_initialize(
        NamedFloatSequence* self);
        
NDDSUSERDllExport
RTIBool NamedFloatSequence_initialize_ex(
        NamedFloatSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NamedFloatSequence_initialize_w_params(
        NamedFloatSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NamedFloatSequence_finalize(
        NamedFloatSequence* self);
                        
NDDSUSERDllExport
void NamedFloatSequence_finalize_ex(
        NamedFloatSequence* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NamedFloatSequence_finalize_w_params(
        NamedFloatSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NamedFloatSequence_finalize_optional_members(
        NamedFloatSequence* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NamedFloatSequence_copy(
        NamedFloatSequence* dst,
        const NamedFloatSequence* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_NFSeqSequence16_LAST_MEMBER_ID rapid_NamedFloatSequence_LAST_MEMBER_ID
typedef  rapid::NamedFloatSequenceSeq  NFSeqSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NFSeqSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NFSeqSequence16Seq, NFSeqSequence16);                                        
            
NDDSUSERDllExport
RTIBool NFSeqSequence16_initialize(
        NFSeqSequence16* self);
            
NDDSUSERDllExport
RTIBool NFSeqSequence16_initialize_ex(
        NFSeqSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NFSeqSequence16_initialize_w_params(
        NFSeqSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NFSeqSequence16_finalize(
        NFSeqSequence16* self);
            
NDDSUSERDllExport
void NFSeqSequence16_finalize_ex(
        NFSeqSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void NFSeqSequence16_finalize_w_params(
        NFSeqSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NFSeqSequence16_finalize_optional_members(
        NFSeqSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NFSeqSequence16_copy(
        NFSeqSequence16* dst,
        const NFSeqSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_NFSeqSequence32_LAST_MEMBER_ID rapid_NamedFloatSequence_LAST_MEMBER_ID
typedef  rapid::NamedFloatSequenceSeq  NFSeqSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NFSeqSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NFSeqSequence32Seq, NFSeqSequence32);                                        
            
NDDSUSERDllExport
RTIBool NFSeqSequence32_initialize(
        NFSeqSequence32* self);
            
NDDSUSERDllExport
RTIBool NFSeqSequence32_initialize_ex(
        NFSeqSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NFSeqSequence32_initialize_w_params(
        NFSeqSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NFSeqSequence32_finalize(
        NFSeqSequence32* self);
            
NDDSUSERDllExport
void NFSeqSequence32_finalize_ex(
        NFSeqSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void NFSeqSequence32_finalize_w_params(
        NFSeqSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NFSeqSequence32_finalize_optional_members(
        NFSeqSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NFSeqSequence32_copy(
        NFSeqSequence32* dst,
        const NFSeqSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** Two foating point numbers defining a range with minimum and maximum values. */

#define rapid_FloatRange_LAST_MEMBER_ID 1
        
extern const char *FloatRangeTYPENAME;
        


#ifdef __cplusplus
    struct FloatRangeSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FloatRangeTypeSupport;
    class FloatRangeDataWriter;
    class FloatRangeDataReader;
#endif

#endif

            
    
class FloatRange                                        
{
public:            
#ifdef __cplusplus
    typedef struct FloatRangeSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FloatRangeTypeSupport TypeSupport;
    typedef FloatRangeDataWriter DataWriter;
    typedef FloatRangeDataReader DataReader;
#endif

#endif
    
/** Lower bound of the range. */

    DDS_Float  min;

/** Upper bound of the range. */

    DDS_Float  max;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatRange_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FloatRangeSeq, FloatRange);
        
NDDSUSERDllExport
RTIBool FloatRange_initialize(
        FloatRange* self);
        
NDDSUSERDllExport
RTIBool FloatRange_initialize_ex(
        FloatRange* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FloatRange_initialize_w_params(
        FloatRange* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FloatRange_finalize(
        FloatRange* self);
                        
NDDSUSERDllExport
void FloatRange_finalize_ex(
        FloatRange* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FloatRange_finalize_w_params(
        FloatRange* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FloatRange_finalize_optional_members(
        FloatRange* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FloatRange_copy(
        FloatRange* dst,
        const FloatRange* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** A min, max range plus current value. */

#define rapid_FloatRangeValue_LAST_MEMBER_ID 2
        
extern const char *FloatRangeValueTYPENAME;
        


#ifdef __cplusplus
    struct FloatRangeValueSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FloatRangeValueTypeSupport;
    class FloatRangeValueDataWriter;
    class FloatRangeValueDataReader;
#endif

#endif

            
    
class FloatRangeValue                                        
{
public:            
#ifdef __cplusplus
    typedef struct FloatRangeValueSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FloatRangeValueTypeSupport TypeSupport;
    typedef FloatRangeValueDataWriter DataWriter;
    typedef FloatRangeValueDataReader DataReader;
#endif

#endif
    
    DDS_Float  min;

    DDS_Float  max;

    DDS_Float  value;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FloatRangeValue_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FloatRangeValueSeq, FloatRangeValue);
        
NDDSUSERDllExport
RTIBool FloatRangeValue_initialize(
        FloatRangeValue* self);
        
NDDSUSERDllExport
RTIBool FloatRangeValue_initialize_ex(
        FloatRangeValue* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FloatRangeValue_initialize_w_params(
        FloatRangeValue* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FloatRangeValue_finalize(
        FloatRangeValue* self);
                        
NDDSUSERDllExport
void FloatRangeValue_finalize_ex(
        FloatRangeValue* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FloatRangeValue_finalize_w_params(
        FloatRangeValue* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FloatRangeValue_finalize_optional_members(
        FloatRangeValue* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FloatRangeValue_copy(
        FloatRangeValue* dst,
        const FloatRangeValue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** A set of options plus the index of the current value. */

#define rapid_OptionSetValue_LAST_MEMBER_ID 1
        
extern const char *OptionSetValueTYPENAME;
        


#ifdef __cplusplus
    struct OptionSetValueSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OptionSetValueTypeSupport;
    class OptionSetValueDataWriter;
    class OptionSetValueDataReader;
#endif

#endif

            
    
class OptionSetValue                                        
{
public:            
#ifdef __cplusplus
    typedef struct OptionSetValueSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OptionSetValueTypeSupport TypeSupport;
    typedef OptionSetValueDataWriter DataWriter;
    typedef OptionSetValueDataReader DataReader;
#endif

#endif
    
    DDS_Long  index;

    rapid::String32Sequence16  options;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OptionSetValue_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OptionSetValueSeq, OptionSetValue);
        
NDDSUSERDllExport
RTIBool OptionSetValue_initialize(
        OptionSetValue* self);
        
NDDSUSERDllExport
RTIBool OptionSetValue_initialize_ex(
        OptionSetValue* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool OptionSetValue_initialize_w_params(
        OptionSetValue* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void OptionSetValue_finalize(
        OptionSetValue* self);
                        
NDDSUSERDllExport
void OptionSetValue_finalize_ex(
        OptionSetValue* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void OptionSetValue_finalize_w_params(
        OptionSetValue* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void OptionSetValue_finalize_optional_members(
        OptionSetValue* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool OptionSetValue_copy(
        OptionSetValue* dst,
        const OptionSetValue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** A named range value (min,max and current value). */

#define rapid_NamedFloatRangeValue_LAST_MEMBER_ID 1
        
extern const char *NamedFloatRangeValueTYPENAME;
        


#ifdef __cplusplus
    struct NamedFloatRangeValueSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NamedFloatRangeValueTypeSupport;
    class NamedFloatRangeValueDataWriter;
    class NamedFloatRangeValueDataReader;
#endif

#endif

            
    
class NamedFloatRangeValue                                        
{
public:            
#ifdef __cplusplus
    typedef struct NamedFloatRangeValueSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NamedFloatRangeValueTypeSupport TypeSupport;
    typedef NamedFloatRangeValueDataWriter DataWriter;
    typedef NamedFloatRangeValueDataReader DataReader;
#endif

#endif
    
    rapid::String16  name;

    rapid::FloatRangeValue  range;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedFloatRangeValue_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NamedFloatRangeValueSeq, NamedFloatRangeValue);
        
NDDSUSERDllExport
RTIBool NamedFloatRangeValue_initialize(
        NamedFloatRangeValue* self);
        
NDDSUSERDllExport
RTIBool NamedFloatRangeValue_initialize_ex(
        NamedFloatRangeValue* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NamedFloatRangeValue_initialize_w_params(
        NamedFloatRangeValue* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NamedFloatRangeValue_finalize(
        NamedFloatRangeValue* self);
                        
NDDSUSERDllExport
void NamedFloatRangeValue_finalize_ex(
        NamedFloatRangeValue* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NamedFloatRangeValue_finalize_w_params(
        NamedFloatRangeValue* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NamedFloatRangeValue_finalize_optional_members(
        NamedFloatRangeValue* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NamedFloatRangeValue_copy(
        NamedFloatRangeValue* dst,
        const NamedFloatRangeValue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_NamedFloatRangeValueSequence16_LAST_MEMBER_ID rapid_NamedFloatRangeValue_LAST_MEMBER_ID
typedef  rapid::NamedFloatRangeValueSeq  NamedFloatRangeValueSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedFloatRangeValueSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NamedFloatRangeValueSequence16Seq, NamedFloatRangeValueSequence16);                                        
            
NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence16_initialize(
        NamedFloatRangeValueSequence16* self);
            
NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence16_initialize_ex(
        NamedFloatRangeValueSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence16_initialize_w_params(
        NamedFloatRangeValueSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NamedFloatRangeValueSequence16_finalize(
        NamedFloatRangeValueSequence16* self);
            
NDDSUSERDllExport
void NamedFloatRangeValueSequence16_finalize_ex(
        NamedFloatRangeValueSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void NamedFloatRangeValueSequence16_finalize_w_params(
        NamedFloatRangeValueSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NamedFloatRangeValueSequence16_finalize_optional_members(
        NamedFloatRangeValueSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence16_copy(
        NamedFloatRangeValueSequence16* dst,
        const NamedFloatRangeValueSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_NamedFloatRangeValueSequence32_LAST_MEMBER_ID rapid_NamedFloatRangeValue_LAST_MEMBER_ID
typedef  rapid::NamedFloatRangeValueSeq  NamedFloatRangeValueSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedFloatRangeValueSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NamedFloatRangeValueSequence32Seq, NamedFloatRangeValueSequence32);                                        
            
NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence32_initialize(
        NamedFloatRangeValueSequence32* self);
            
NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence32_initialize_ex(
        NamedFloatRangeValueSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence32_initialize_w_params(
        NamedFloatRangeValueSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NamedFloatRangeValueSequence32_finalize(
        NamedFloatRangeValueSequence32* self);
            
NDDSUSERDllExport
void NamedFloatRangeValueSequence32_finalize_ex(
        NamedFloatRangeValueSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void NamedFloatRangeValueSequence32_finalize_w_params(
        NamedFloatRangeValueSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NamedFloatRangeValueSequence32_finalize_optional_members(
        NamedFloatRangeValueSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NamedFloatRangeValueSequence32_copy(
        NamedFloatRangeValueSequence32* dst,
        const NamedFloatRangeValueSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** A named option set (sequence of options and current option). */

#define rapid_NamedOptionSetValue_LAST_MEMBER_ID 1
        
extern const char *NamedOptionSetValueTYPENAME;
        


#ifdef __cplusplus
    struct NamedOptionSetValueSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NamedOptionSetValueTypeSupport;
    class NamedOptionSetValueDataWriter;
    class NamedOptionSetValueDataReader;
#endif

#endif

            
    
class NamedOptionSetValue                                        
{
public:            
#ifdef __cplusplus
    typedef struct NamedOptionSetValueSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NamedOptionSetValueTypeSupport TypeSupport;
    typedef NamedOptionSetValueDataWriter DataWriter;
    typedef NamedOptionSetValueDataReader DataReader;
#endif

#endif
    
    rapid::String16  name;

    rapid::OptionSetValue  option;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedOptionSetValue_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NamedOptionSetValueSeq, NamedOptionSetValue);
        
NDDSUSERDllExport
RTIBool NamedOptionSetValue_initialize(
        NamedOptionSetValue* self);
        
NDDSUSERDllExport
RTIBool NamedOptionSetValue_initialize_ex(
        NamedOptionSetValue* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NamedOptionSetValue_initialize_w_params(
        NamedOptionSetValue* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NamedOptionSetValue_finalize(
        NamedOptionSetValue* self);
                        
NDDSUSERDllExport
void NamedOptionSetValue_finalize_ex(
        NamedOptionSetValue* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NamedOptionSetValue_finalize_w_params(
        NamedOptionSetValue* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NamedOptionSetValue_finalize_optional_members(
        NamedOptionSetValue* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NamedOptionSetValue_copy(
        NamedOptionSetValue* dst,
        const NamedOptionSetValue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_NamedOptionSetValueSequence16_LAST_MEMBER_ID rapid_NamedOptionSetValue_LAST_MEMBER_ID
typedef  rapid::NamedOptionSetValueSeq  NamedOptionSetValueSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedOptionSetValueSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NamedOptionSetValueSequence16Seq, NamedOptionSetValueSequence16);                                        
            
NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence16_initialize(
        NamedOptionSetValueSequence16* self);
            
NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence16_initialize_ex(
        NamedOptionSetValueSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence16_initialize_w_params(
        NamedOptionSetValueSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NamedOptionSetValueSequence16_finalize(
        NamedOptionSetValueSequence16* self);
            
NDDSUSERDllExport
void NamedOptionSetValueSequence16_finalize_ex(
        NamedOptionSetValueSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void NamedOptionSetValueSequence16_finalize_w_params(
        NamedOptionSetValueSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NamedOptionSetValueSequence16_finalize_optional_members(
        NamedOptionSetValueSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence16_copy(
        NamedOptionSetValueSequence16* dst,
        const NamedOptionSetValueSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_NamedOptionSetValueSequence32_LAST_MEMBER_ID rapid_NamedOptionSetValue_LAST_MEMBER_ID
typedef  rapid::NamedOptionSetValueSeq  NamedOptionSetValueSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedOptionSetValueSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NamedOptionSetValueSequence32Seq, NamedOptionSetValueSequence32);                                        
            
NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence32_initialize(
        NamedOptionSetValueSequence32* self);
            
NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence32_initialize_ex(
        NamedOptionSetValueSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence32_initialize_w_params(
        NamedOptionSetValueSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NamedOptionSetValueSequence32_finalize(
        NamedOptionSetValueSequence32* self);
            
NDDSUSERDllExport
void NamedOptionSetValueSequence32_finalize_ex(
        NamedOptionSetValueSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void NamedOptionSetValueSequence32_finalize_w_params(
        NamedOptionSetValueSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NamedOptionSetValueSequence32_finalize_optional_members(
        NamedOptionSetValueSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NamedOptionSetValueSequence32_copy(
        NamedOptionSetValueSequence32* dst,
        const NamedOptionSetValueSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* BaseTypes_1127121220_h */
