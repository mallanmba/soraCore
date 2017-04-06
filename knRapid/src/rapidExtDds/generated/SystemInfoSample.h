
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SystemInfoSample_1849709991_h
#define SystemInfoSample_1849709991_h

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


#include "BaseTypes.h"


#include "Message.h"


namespace rapid{

namespace ext{

#define rapid_ext_BatteryInfoSample_LAST_MEMBER_ID 2
        
extern const char *BatteryInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct BatteryInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BatteryInfoSampleTypeSupport;
    class BatteryInfoSampleDataWriter;
    class BatteryInfoSampleDataReader;
#endif

#endif

            
    
class BatteryInfoSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct BatteryInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BatteryInfoSampleTypeSupport TypeSupport;
    typedef BatteryInfoSampleDataWriter DataWriter;
    typedef BatteryInfoSampleDataReader DataReader;
#endif

#endif
    
    DDS_Long  acStatus;

    DDS_Long  batteryStatus;

    DDS_Float  percentage;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BatteryInfoSampleSeq, BatteryInfoSample);
        
NDDSUSERDllExport
RTIBool BatteryInfoSample_initialize(
        BatteryInfoSample* self);
        
NDDSUSERDllExport
RTIBool BatteryInfoSample_initialize_ex(
        BatteryInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool BatteryInfoSample_initialize_w_params(
        BatteryInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void BatteryInfoSample_finalize(
        BatteryInfoSample* self);
                        
NDDSUSERDllExport
void BatteryInfoSample_finalize_ex(
        BatteryInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void BatteryInfoSample_finalize_w_params(
        BatteryInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void BatteryInfoSample_finalize_optional_members(
        BatteryInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool BatteryInfoSample_copy(
        BatteryInfoSample* dst,
        const BatteryInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_BatteryInfoSampleSequence_LAST_MEMBER_ID rapid_ext_BatteryInfoSample_LAST_MEMBER_ID
typedef  rapid::ext::BatteryInfoSampleSeq  BatteryInfoSampleSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryInfoSampleSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(BatteryInfoSampleSequenceSeq, BatteryInfoSampleSequence);                                        
            
NDDSUSERDllExport
RTIBool BatteryInfoSampleSequence_initialize(
        BatteryInfoSampleSequence* self);
            
NDDSUSERDllExport
RTIBool BatteryInfoSampleSequence_initialize_ex(
        BatteryInfoSampleSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool BatteryInfoSampleSequence_initialize_w_params(
        BatteryInfoSampleSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void BatteryInfoSampleSequence_finalize(
        BatteryInfoSampleSequence* self);
            
NDDSUSERDllExport
void BatteryInfoSampleSequence_finalize_ex(
        BatteryInfoSampleSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void BatteryInfoSampleSequence_finalize_w_params(
        BatteryInfoSampleSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void BatteryInfoSampleSequence_finalize_optional_members(
        BatteryInfoSampleSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool BatteryInfoSampleSequence_copy(
        BatteryInfoSampleSequence* dst,
        const BatteryInfoSampleSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_CpuInfoSample_LAST_MEMBER_ID 4
        
extern const char *CpuInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct CpuInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CpuInfoSampleTypeSupport;
    class CpuInfoSampleDataWriter;
    class CpuInfoSampleDataReader;
#endif

#endif

            
    
class CpuInfoSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct CpuInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CpuInfoSampleTypeSupport TypeSupport;
    typedef CpuInfoSampleDataWriter DataWriter;
    typedef CpuInfoSampleDataReader DataReader;
#endif

#endif
    
    DDS_Float  busy;

    DDS_Float  idle;

    DDS_Float  nice;

    DDS_Float  system;

    DDS_Float  user;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CpuInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CpuInfoSampleSeq, CpuInfoSample);
        
NDDSUSERDllExport
RTIBool CpuInfoSample_initialize(
        CpuInfoSample* self);
        
NDDSUSERDllExport
RTIBool CpuInfoSample_initialize_ex(
        CpuInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CpuInfoSample_initialize_w_params(
        CpuInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CpuInfoSample_finalize(
        CpuInfoSample* self);
                        
NDDSUSERDllExport
void CpuInfoSample_finalize_ex(
        CpuInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CpuInfoSample_finalize_w_params(
        CpuInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CpuInfoSample_finalize_optional_members(
        CpuInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CpuInfoSample_copy(
        CpuInfoSample* dst,
        const CpuInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_CpuInfoSampleSequence_LAST_MEMBER_ID rapid_ext_CpuInfoSample_LAST_MEMBER_ID
typedef  rapid::ext::CpuInfoSampleSeq  CpuInfoSampleSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CpuInfoSampleSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(CpuInfoSampleSequenceSeq, CpuInfoSampleSequence);                                        
            
NDDSUSERDllExport
RTIBool CpuInfoSampleSequence_initialize(
        CpuInfoSampleSequence* self);
            
NDDSUSERDllExport
RTIBool CpuInfoSampleSequence_initialize_ex(
        CpuInfoSampleSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool CpuInfoSampleSequence_initialize_w_params(
        CpuInfoSampleSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void CpuInfoSampleSequence_finalize(
        CpuInfoSampleSequence* self);
            
NDDSUSERDllExport
void CpuInfoSampleSequence_finalize_ex(
        CpuInfoSampleSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void CpuInfoSampleSequence_finalize_w_params(
        CpuInfoSampleSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void CpuInfoSampleSequence_finalize_optional_members(
        CpuInfoSampleSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool CpuInfoSampleSequence_copy(
        CpuInfoSampleSequence* dst,
        const CpuInfoSampleSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_FilesystemInfoSample_LAST_MEMBER_ID 1
        
extern const char *FilesystemInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct FilesystemInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FilesystemInfoSampleTypeSupport;
    class FilesystemInfoSampleDataWriter;
    class FilesystemInfoSampleDataReader;
#endif

#endif

            
    
class FilesystemInfoSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct FilesystemInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FilesystemInfoSampleTypeSupport TypeSupport;
    typedef FilesystemInfoSampleDataWriter DataWriter;
    typedef FilesystemInfoSampleDataReader DataReader;
#endif

#endif
    
    DDS_LongLong  used;

    DDS_LongLong  available;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FilesystemInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FilesystemInfoSampleSeq, FilesystemInfoSample);
        
NDDSUSERDllExport
RTIBool FilesystemInfoSample_initialize(
        FilesystemInfoSample* self);
        
NDDSUSERDllExport
RTIBool FilesystemInfoSample_initialize_ex(
        FilesystemInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FilesystemInfoSample_initialize_w_params(
        FilesystemInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FilesystemInfoSample_finalize(
        FilesystemInfoSample* self);
                        
NDDSUSERDllExport
void FilesystemInfoSample_finalize_ex(
        FilesystemInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FilesystemInfoSample_finalize_w_params(
        FilesystemInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FilesystemInfoSample_finalize_optional_members(
        FilesystemInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FilesystemInfoSample_copy(
        FilesystemInfoSample* dst,
        const FilesystemInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_FilesystemInfoSampleSequence_LAST_MEMBER_ID rapid_ext_FilesystemInfoSample_LAST_MEMBER_ID
typedef  rapid::ext::FilesystemInfoSampleSeq  FilesystemInfoSampleSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FilesystemInfoSampleSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FilesystemInfoSampleSequenceSeq, FilesystemInfoSampleSequence);                                        
            
NDDSUSERDllExport
RTIBool FilesystemInfoSampleSequence_initialize(
        FilesystemInfoSampleSequence* self);
            
NDDSUSERDllExport
RTIBool FilesystemInfoSampleSequence_initialize_ex(
        FilesystemInfoSampleSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FilesystemInfoSampleSequence_initialize_w_params(
        FilesystemInfoSampleSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FilesystemInfoSampleSequence_finalize(
        FilesystemInfoSampleSequence* self);
            
NDDSUSERDllExport
void FilesystemInfoSampleSequence_finalize_ex(
        FilesystemInfoSampleSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void FilesystemInfoSampleSequence_finalize_w_params(
        FilesystemInfoSampleSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FilesystemInfoSampleSequence_finalize_optional_members(
        FilesystemInfoSampleSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FilesystemInfoSampleSequence_copy(
        FilesystemInfoSampleSequence* dst,
        const FilesystemInfoSampleSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_MemoryInfoSample_LAST_MEMBER_ID 3
        
extern const char *MemoryInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct MemoryInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MemoryInfoSampleTypeSupport;
    class MemoryInfoSampleDataWriter;
    class MemoryInfoSampleDataReader;
#endif

#endif

            
    
class MemoryInfoSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct MemoryInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MemoryInfoSampleTypeSupport TypeSupport;
    typedef MemoryInfoSampleDataWriter DataWriter;
    typedef MemoryInfoSampleDataReader DataReader;
#endif

#endif
    
    DDS_Long  buffers;

    DDS_Long  cached;

    DDS_Long  free;

    DDS_Long  swap;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MemoryInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MemoryInfoSampleSeq, MemoryInfoSample);
        
NDDSUSERDllExport
RTIBool MemoryInfoSample_initialize(
        MemoryInfoSample* self);
        
NDDSUSERDllExport
RTIBool MemoryInfoSample_initialize_ex(
        MemoryInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MemoryInfoSample_initialize_w_params(
        MemoryInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MemoryInfoSample_finalize(
        MemoryInfoSample* self);
                        
NDDSUSERDllExport
void MemoryInfoSample_finalize_ex(
        MemoryInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MemoryInfoSample_finalize_w_params(
        MemoryInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MemoryInfoSample_finalize_optional_members(
        MemoryInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MemoryInfoSample_copy(
        MemoryInfoSample* dst,
        const MemoryInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_ThermalInfoSample_LAST_MEMBER_ID 0
        
extern const char *ThermalInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct ThermalInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ThermalInfoSampleTypeSupport;
    class ThermalInfoSampleDataWriter;
    class ThermalInfoSampleDataReader;
#endif

#endif

            
    
class ThermalInfoSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct ThermalInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ThermalInfoSampleTypeSupport TypeSupport;
    typedef ThermalInfoSampleDataWriter DataWriter;
    typedef ThermalInfoSampleDataReader DataReader;
#endif

#endif
    
    DDS_Float  temperature;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ThermalInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ThermalInfoSampleSeq, ThermalInfoSample);
        
NDDSUSERDllExport
RTIBool ThermalInfoSample_initialize(
        ThermalInfoSample* self);
        
NDDSUSERDllExport
RTIBool ThermalInfoSample_initialize_ex(
        ThermalInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ThermalInfoSample_initialize_w_params(
        ThermalInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ThermalInfoSample_finalize(
        ThermalInfoSample* self);
                        
NDDSUSERDllExport
void ThermalInfoSample_finalize_ex(
        ThermalInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ThermalInfoSample_finalize_w_params(
        ThermalInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ThermalInfoSample_finalize_optional_members(
        ThermalInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ThermalInfoSample_copy(
        ThermalInfoSample* dst,
        const ThermalInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_ThermalInfoSampleSequence_LAST_MEMBER_ID rapid_ext_ThermalInfoSample_LAST_MEMBER_ID
typedef  rapid::ext::ThermalInfoSampleSeq  ThermalInfoSampleSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ThermalInfoSampleSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ThermalInfoSampleSequenceSeq, ThermalInfoSampleSequence);                                        
            
NDDSUSERDllExport
RTIBool ThermalInfoSampleSequence_initialize(
        ThermalInfoSampleSequence* self);
            
NDDSUSERDllExport
RTIBool ThermalInfoSampleSequence_initialize_ex(
        ThermalInfoSampleSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ThermalInfoSampleSequence_initialize_w_params(
        ThermalInfoSampleSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ThermalInfoSampleSequence_finalize(
        ThermalInfoSampleSequence* self);
            
NDDSUSERDllExport
void ThermalInfoSampleSequence_finalize_ex(
        ThermalInfoSampleSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ThermalInfoSampleSequence_finalize_w_params(
        ThermalInfoSampleSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ThermalInfoSampleSequence_finalize_optional_members(
        ThermalInfoSampleSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ThermalInfoSampleSequence_copy(
        ThermalInfoSampleSequence* dst,
        const ThermalInfoSampleSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_NetTrafficInfoSample_LAST_MEMBER_ID 3
        
extern const char *NetTrafficInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct NetTrafficInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NetTrafficInfoSampleTypeSupport;
    class NetTrafficInfoSampleDataWriter;
    class NetTrafficInfoSampleDataReader;
#endif

#endif

            
    
class NetTrafficInfoSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct NetTrafficInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NetTrafficInfoSampleTypeSupport TypeSupport;
    typedef NetTrafficInfoSampleDataWriter DataWriter;
    typedef NetTrafficInfoSampleDataReader DataReader;
#endif

#endif
    
    DDS_Long  rx;

    DDS_Long  tx;

    DDS_Long  rxErrors;

    DDS_Long  txErrors;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NetTrafficInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NetTrafficInfoSampleSeq, NetTrafficInfoSample);
        
NDDSUSERDllExport
RTIBool NetTrafficInfoSample_initialize(
        NetTrafficInfoSample* self);
        
NDDSUSERDllExport
RTIBool NetTrafficInfoSample_initialize_ex(
        NetTrafficInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NetTrafficInfoSample_initialize_w_params(
        NetTrafficInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NetTrafficInfoSample_finalize(
        NetTrafficInfoSample* self);
                        
NDDSUSERDllExport
void NetTrafficInfoSample_finalize_ex(
        NetTrafficInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NetTrafficInfoSample_finalize_w_params(
        NetTrafficInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NetTrafficInfoSample_finalize_optional_members(
        NetTrafficInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NetTrafficInfoSample_copy(
        NetTrafficInfoSample* dst,
        const NetTrafficInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_NetTrafficInfoSampleSequence_LAST_MEMBER_ID rapid_ext_NetTrafficInfoSample_LAST_MEMBER_ID
typedef  rapid::ext::NetTrafficInfoSampleSeq  NetTrafficInfoSampleSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NetTrafficInfoSampleSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NetTrafficInfoSampleSequenceSeq, NetTrafficInfoSampleSequence);                                        
            
NDDSUSERDllExport
RTIBool NetTrafficInfoSampleSequence_initialize(
        NetTrafficInfoSampleSequence* self);
            
NDDSUSERDllExport
RTIBool NetTrafficInfoSampleSequence_initialize_ex(
        NetTrafficInfoSampleSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NetTrafficInfoSampleSequence_initialize_w_params(
        NetTrafficInfoSampleSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NetTrafficInfoSampleSequence_finalize(
        NetTrafficInfoSampleSequence* self);
            
NDDSUSERDllExport
void NetTrafficInfoSampleSequence_finalize_ex(
        NetTrafficInfoSampleSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void NetTrafficInfoSampleSequence_finalize_w_params(
        NetTrafficInfoSampleSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NetTrafficInfoSampleSequence_finalize_optional_members(
        NetTrafficInfoSampleSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NetTrafficInfoSampleSequence_copy(
        NetTrafficInfoSampleSequence* dst,
        const NetTrafficInfoSampleSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_WifiInfoSample_LAST_MEMBER_ID 4
        
extern const char *WifiInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct WifiInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class WifiInfoSampleTypeSupport;
    class WifiInfoSampleDataWriter;
    class WifiInfoSampleDataReader;
#endif

#endif

            
    
class WifiInfoSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct WifiInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef WifiInfoSampleTypeSupport TypeSupport;
    typedef WifiInfoSampleDataWriter DataWriter;
    typedef WifiInfoSampleDataReader DataReader;
#endif

#endif
    
    DDS_Long  linkQuality;

    DDS_Long  signalLevel;

    DDS_Long  noiseLevel;

    DDS_Float  frequency;

    DDS_Float  bitrate;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* WifiInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(WifiInfoSampleSeq, WifiInfoSample);
        
NDDSUSERDllExport
RTIBool WifiInfoSample_initialize(
        WifiInfoSample* self);
        
NDDSUSERDllExport
RTIBool WifiInfoSample_initialize_ex(
        WifiInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool WifiInfoSample_initialize_w_params(
        WifiInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void WifiInfoSample_finalize(
        WifiInfoSample* self);
                        
NDDSUSERDllExport
void WifiInfoSample_finalize_ex(
        WifiInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void WifiInfoSample_finalize_w_params(
        WifiInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void WifiInfoSample_finalize_optional_members(
        WifiInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool WifiInfoSample_copy(
        WifiInfoSample* dst,
        const WifiInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_WifiInfoSampleSequence_LAST_MEMBER_ID rapid_ext_WifiInfoSample_LAST_MEMBER_ID
typedef  rapid::ext::WifiInfoSampleSeq  WifiInfoSampleSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* WifiInfoSampleSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(WifiInfoSampleSequenceSeq, WifiInfoSampleSequence);                                        
            
NDDSUSERDllExport
RTIBool WifiInfoSampleSequence_initialize(
        WifiInfoSampleSequence* self);
            
NDDSUSERDllExport
RTIBool WifiInfoSampleSequence_initialize_ex(
        WifiInfoSampleSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool WifiInfoSampleSequence_initialize_w_params(
        WifiInfoSampleSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void WifiInfoSampleSequence_finalize(
        WifiInfoSampleSequence* self);
            
NDDSUSERDllExport
void WifiInfoSampleSequence_finalize_ex(
        WifiInfoSampleSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void WifiInfoSampleSequence_finalize_w_params(
        WifiInfoSampleSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void WifiInfoSampleSequence_finalize_optional_members(
        WifiInfoSampleSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool WifiInfoSampleSequence_copy(
        WifiInfoSampleSequence* dst,
        const WifiInfoSampleSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class SystemInfoSampleTypeSupport;

class SystemInfoSampleDataWriter;

class SystemInfoSampleDataReader;

struct SystemInfoSampleSeq;

#define rapid_ext_SystemInfoSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 7)
        
extern const char *SystemInfoSampleTYPENAME;
        


#ifdef __cplusplus
    struct SystemInfoSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SystemInfoSampleTypeSupport;
    class SystemInfoSampleDataWriter;
    class SystemInfoSampleDataReader;
#endif

#endif

            
    
class SystemInfoSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct SystemInfoSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SystemInfoSampleTypeSupport TypeSupport;
    typedef SystemInfoSampleDataWriter DataWriter;
    typedef SystemInfoSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef SystemInfoSampleTypeSupport TypeSupport;

typedef SystemInfoSampleDataWriter DataWriter;

typedef SystemInfoSampleDataReader DataReader;

typedef SystemInfoSampleSeq Seq;

#endif

typedef SystemInfoSample Type;

    rapid::ext::BatteryInfoSampleSequence  batteries;

    rapid::ext::MemoryInfoSample  memory;

    rapid::ext::CpuInfoSampleSequence  cpus;

    rapid::ext::FilesystemInfoSampleSequence  filesystems;

    rapid::ext::ThermalInfoSampleSequence  temperatures;

    rapid::ext::NetTrafficInfoSampleSequence  netInterfaces;

    rapid::ext::WifiInfoSampleSequence  wifiInterfaces;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SystemInfoSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SystemInfoSampleSeq, SystemInfoSample);
        
NDDSUSERDllExport
RTIBool SystemInfoSample_initialize(
        SystemInfoSample* self);
        
NDDSUSERDllExport
RTIBool SystemInfoSample_initialize_ex(
        SystemInfoSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SystemInfoSample_initialize_w_params(
        SystemInfoSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SystemInfoSample_finalize(
        SystemInfoSample* self);
                        
NDDSUSERDllExport
void SystemInfoSample_finalize_ex(
        SystemInfoSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SystemInfoSample_finalize_w_params(
        SystemInfoSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SystemInfoSample_finalize_optional_members(
        SystemInfoSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SystemInfoSample_copy(
        SystemInfoSample* dst,
        const SystemInfoSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* SystemInfoSample_1849709991_h */
