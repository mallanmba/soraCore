
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SystemInfoConfig_1756908395_h
#define SystemInfoConfig_1756908395_h

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

#define rapid_ext_BatteryInfoConfig_LAST_MEMBER_ID 2
        
extern const char *BatteryInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct BatteryInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BatteryInfoConfigTypeSupport;
    class BatteryInfoConfigDataWriter;
    class BatteryInfoConfigDataReader;
#endif

#endif

            
    
class BatteryInfoConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct BatteryInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BatteryInfoConfigTypeSupport TypeSupport;
    typedef BatteryInfoConfigDataWriter DataWriter;
    typedef BatteryInfoConfigDataReader DataReader;
#endif

#endif
    
    rapid::String32  name;

    DDS_Octet  percentageLow;

    DDS_Octet  percentageCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BatteryInfoConfigSeq, BatteryInfoConfig);
        
NDDSUSERDllExport
RTIBool BatteryInfoConfig_initialize(
        BatteryInfoConfig* self);
        
NDDSUSERDllExport
RTIBool BatteryInfoConfig_initialize_ex(
        BatteryInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool BatteryInfoConfig_initialize_w_params(
        BatteryInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void BatteryInfoConfig_finalize(
        BatteryInfoConfig* self);
                        
NDDSUSERDllExport
void BatteryInfoConfig_finalize_ex(
        BatteryInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void BatteryInfoConfig_finalize_w_params(
        BatteryInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void BatteryInfoConfig_finalize_optional_members(
        BatteryInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool BatteryInfoConfig_copy(
        BatteryInfoConfig* dst,
        const BatteryInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_BatteryInfoConfigSequence_LAST_MEMBER_ID rapid_ext_BatteryInfoConfig_LAST_MEMBER_ID
typedef  rapid::ext::BatteryInfoConfigSeq  BatteryInfoConfigSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryInfoConfigSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(BatteryInfoConfigSequenceSeq, BatteryInfoConfigSequence);                                        
            
NDDSUSERDllExport
RTIBool BatteryInfoConfigSequence_initialize(
        BatteryInfoConfigSequence* self);
            
NDDSUSERDllExport
RTIBool BatteryInfoConfigSequence_initialize_ex(
        BatteryInfoConfigSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool BatteryInfoConfigSequence_initialize_w_params(
        BatteryInfoConfigSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void BatteryInfoConfigSequence_finalize(
        BatteryInfoConfigSequence* self);
            
NDDSUSERDllExport
void BatteryInfoConfigSequence_finalize_ex(
        BatteryInfoConfigSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void BatteryInfoConfigSequence_finalize_w_params(
        BatteryInfoConfigSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void BatteryInfoConfigSequence_finalize_optional_members(
        BatteryInfoConfigSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool BatteryInfoConfigSequence_copy(
        BatteryInfoConfigSequence* dst,
        const BatteryInfoConfigSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_MemoryInfoConfig_LAST_MEMBER_ID 2
        
extern const char *MemoryInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct MemoryInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MemoryInfoConfigTypeSupport;
    class MemoryInfoConfigDataWriter;
    class MemoryInfoConfigDataReader;
#endif

#endif

            
    
class MemoryInfoConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct MemoryInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MemoryInfoConfigTypeSupport TypeSupport;
    typedef MemoryInfoConfigDataWriter DataWriter;
    typedef MemoryInfoConfigDataReader DataReader;
#endif

#endif
    
    DDS_Long  total;

    DDS_Long  memoryLow;

    DDS_Long  memoryCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MemoryInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MemoryInfoConfigSeq, MemoryInfoConfig);
        
NDDSUSERDllExport
RTIBool MemoryInfoConfig_initialize(
        MemoryInfoConfig* self);
        
NDDSUSERDllExport
RTIBool MemoryInfoConfig_initialize_ex(
        MemoryInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MemoryInfoConfig_initialize_w_params(
        MemoryInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MemoryInfoConfig_finalize(
        MemoryInfoConfig* self);
                        
NDDSUSERDllExport
void MemoryInfoConfig_finalize_ex(
        MemoryInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MemoryInfoConfig_finalize_w_params(
        MemoryInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MemoryInfoConfig_finalize_optional_members(
        MemoryInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MemoryInfoConfig_copy(
        MemoryInfoConfig* dst,
        const MemoryInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_CpuInfoConfig_LAST_MEMBER_ID 2
        
extern const char *CpuInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct CpuInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CpuInfoConfigTypeSupport;
    class CpuInfoConfigDataWriter;
    class CpuInfoConfigDataReader;
#endif

#endif

            
    
class CpuInfoConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct CpuInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CpuInfoConfigTypeSupport TypeSupport;
    typedef CpuInfoConfigDataWriter DataWriter;
    typedef CpuInfoConfigDataReader DataReader;
#endif

#endif
    
    DDS_Long  numCpus;

    DDS_Float  busyHigh;

    DDS_Float  busyCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CpuInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CpuInfoConfigSeq, CpuInfoConfig);
        
NDDSUSERDllExport
RTIBool CpuInfoConfig_initialize(
        CpuInfoConfig* self);
        
NDDSUSERDllExport
RTIBool CpuInfoConfig_initialize_ex(
        CpuInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CpuInfoConfig_initialize_w_params(
        CpuInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CpuInfoConfig_finalize(
        CpuInfoConfig* self);
                        
NDDSUSERDllExport
void CpuInfoConfig_finalize_ex(
        CpuInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CpuInfoConfig_finalize_w_params(
        CpuInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CpuInfoConfig_finalize_optional_members(
        CpuInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CpuInfoConfig_copy(
        CpuInfoConfig* dst,
        const CpuInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_FilesystemInfoConfig_LAST_MEMBER_ID 3
        
extern const char *FilesystemInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct FilesystemInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FilesystemInfoConfigTypeSupport;
    class FilesystemInfoConfigDataWriter;
    class FilesystemInfoConfigDataReader;
#endif

#endif

            
    
class FilesystemInfoConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct FilesystemInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FilesystemInfoConfigTypeSupport TypeSupport;
    typedef FilesystemInfoConfigDataWriter DataWriter;
    typedef FilesystemInfoConfigDataReader DataReader;
#endif

#endif
    
    DDS_LongLong  capacity;

    rapid::String64  name;

    DDS_LongLong  availableLow;

    DDS_LongLong  availableCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FilesystemInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FilesystemInfoConfigSeq, FilesystemInfoConfig);
        
NDDSUSERDllExport
RTIBool FilesystemInfoConfig_initialize(
        FilesystemInfoConfig* self);
        
NDDSUSERDllExport
RTIBool FilesystemInfoConfig_initialize_ex(
        FilesystemInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FilesystemInfoConfig_initialize_w_params(
        FilesystemInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FilesystemInfoConfig_finalize(
        FilesystemInfoConfig* self);
                        
NDDSUSERDllExport
void FilesystemInfoConfig_finalize_ex(
        FilesystemInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FilesystemInfoConfig_finalize_w_params(
        FilesystemInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FilesystemInfoConfig_finalize_optional_members(
        FilesystemInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FilesystemInfoConfig_copy(
        FilesystemInfoConfig* dst,
        const FilesystemInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_FilesystemInfoConfigSequence_LAST_MEMBER_ID rapid_ext_FilesystemInfoConfig_LAST_MEMBER_ID
typedef  rapid::ext::FilesystemInfoConfigSeq  FilesystemInfoConfigSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FilesystemInfoConfigSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FilesystemInfoConfigSequenceSeq, FilesystemInfoConfigSequence);                                        
            
NDDSUSERDllExport
RTIBool FilesystemInfoConfigSequence_initialize(
        FilesystemInfoConfigSequence* self);
            
NDDSUSERDllExport
RTIBool FilesystemInfoConfigSequence_initialize_ex(
        FilesystemInfoConfigSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FilesystemInfoConfigSequence_initialize_w_params(
        FilesystemInfoConfigSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FilesystemInfoConfigSequence_finalize(
        FilesystemInfoConfigSequence* self);
            
NDDSUSERDllExport
void FilesystemInfoConfigSequence_finalize_ex(
        FilesystemInfoConfigSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void FilesystemInfoConfigSequence_finalize_w_params(
        FilesystemInfoConfigSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FilesystemInfoConfigSequence_finalize_optional_members(
        FilesystemInfoConfigSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FilesystemInfoConfigSequence_copy(
        FilesystemInfoConfigSequence* dst,
        const FilesystemInfoConfigSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_ThermalInfoConfig_LAST_MEMBER_ID 4
        
extern const char *ThermalInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct ThermalInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ThermalInfoConfigTypeSupport;
    class ThermalInfoConfigDataWriter;
    class ThermalInfoConfigDataReader;
#endif

#endif

            
    
class ThermalInfoConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct ThermalInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ThermalInfoConfigTypeSupport TypeSupport;
    typedef ThermalInfoConfigDataWriter DataWriter;
    typedef ThermalInfoConfigDataReader DataReader;
#endif

#endif
    
    rapid::String32  location;

    DDS_Float  temperatureLow;

    DDS_Float  temperatureHigh;

    DDS_Float  temperatureLowCritical;

    DDS_Float  temperatureHighCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ThermalInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ThermalInfoConfigSeq, ThermalInfoConfig);
        
NDDSUSERDllExport
RTIBool ThermalInfoConfig_initialize(
        ThermalInfoConfig* self);
        
NDDSUSERDllExport
RTIBool ThermalInfoConfig_initialize_ex(
        ThermalInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ThermalInfoConfig_initialize_w_params(
        ThermalInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ThermalInfoConfig_finalize(
        ThermalInfoConfig* self);
                        
NDDSUSERDllExport
void ThermalInfoConfig_finalize_ex(
        ThermalInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ThermalInfoConfig_finalize_w_params(
        ThermalInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ThermalInfoConfig_finalize_optional_members(
        ThermalInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ThermalInfoConfig_copy(
        ThermalInfoConfig* dst,
        const ThermalInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_ThermalInfoConfigSequence_LAST_MEMBER_ID rapid_ext_ThermalInfoConfig_LAST_MEMBER_ID
typedef  rapid::ext::ThermalInfoConfigSeq  ThermalInfoConfigSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ThermalInfoConfigSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ThermalInfoConfigSequenceSeq, ThermalInfoConfigSequence);                                        
            
NDDSUSERDllExport
RTIBool ThermalInfoConfigSequence_initialize(
        ThermalInfoConfigSequence* self);
            
NDDSUSERDllExport
RTIBool ThermalInfoConfigSequence_initialize_ex(
        ThermalInfoConfigSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ThermalInfoConfigSequence_initialize_w_params(
        ThermalInfoConfigSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ThermalInfoConfigSequence_finalize(
        ThermalInfoConfigSequence* self);
            
NDDSUSERDllExport
void ThermalInfoConfigSequence_finalize_ex(
        ThermalInfoConfigSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ThermalInfoConfigSequence_finalize_w_params(
        ThermalInfoConfigSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ThermalInfoConfigSequence_finalize_optional_members(
        ThermalInfoConfigSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ThermalInfoConfigSequence_copy(
        ThermalInfoConfigSequence* dst,
        const ThermalInfoConfigSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_NetTrafficInfoConfig_LAST_MEMBER_ID 6
        
extern const char *NetTrafficInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct NetTrafficInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NetTrafficInfoConfigTypeSupport;
    class NetTrafficInfoConfigDataWriter;
    class NetTrafficInfoConfigDataReader;
#endif

#endif

            
    
class NetTrafficInfoConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct NetTrafficInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NetTrafficInfoConfigTypeSupport TypeSupport;
    typedef NetTrafficInfoConfigDataWriter DataWriter;
    typedef NetTrafficInfoConfigDataReader DataReader;
#endif

#endif
    
    rapid::String32  name;

    DDS_Long  rxBandwidth;

    DDS_Long  txBandwidth;

    DDS_Long  rxHigh;

    DDS_Long  rxCritical;

    DDS_Long  txHigh;

    DDS_Long  txCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NetTrafficInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NetTrafficInfoConfigSeq, NetTrafficInfoConfig);
        
NDDSUSERDllExport
RTIBool NetTrafficInfoConfig_initialize(
        NetTrafficInfoConfig* self);
        
NDDSUSERDllExport
RTIBool NetTrafficInfoConfig_initialize_ex(
        NetTrafficInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NetTrafficInfoConfig_initialize_w_params(
        NetTrafficInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NetTrafficInfoConfig_finalize(
        NetTrafficInfoConfig* self);
                        
NDDSUSERDllExport
void NetTrafficInfoConfig_finalize_ex(
        NetTrafficInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NetTrafficInfoConfig_finalize_w_params(
        NetTrafficInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NetTrafficInfoConfig_finalize_optional_members(
        NetTrafficInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NetTrafficInfoConfig_copy(
        NetTrafficInfoConfig* dst,
        const NetTrafficInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_NetTrafficInfoConfigSequence_LAST_MEMBER_ID rapid_ext_NetTrafficInfoConfig_LAST_MEMBER_ID
typedef  rapid::ext::NetTrafficInfoConfigSeq  NetTrafficInfoConfigSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NetTrafficInfoConfigSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NetTrafficInfoConfigSequenceSeq, NetTrafficInfoConfigSequence);                                        
            
NDDSUSERDllExport
RTIBool NetTrafficInfoConfigSequence_initialize(
        NetTrafficInfoConfigSequence* self);
            
NDDSUSERDllExport
RTIBool NetTrafficInfoConfigSequence_initialize_ex(
        NetTrafficInfoConfigSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NetTrafficInfoConfigSequence_initialize_w_params(
        NetTrafficInfoConfigSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NetTrafficInfoConfigSequence_finalize(
        NetTrafficInfoConfigSequence* self);
            
NDDSUSERDllExport
void NetTrafficInfoConfigSequence_finalize_ex(
        NetTrafficInfoConfigSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void NetTrafficInfoConfigSequence_finalize_w_params(
        NetTrafficInfoConfigSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NetTrafficInfoConfigSequence_finalize_optional_members(
        NetTrafficInfoConfigSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NetTrafficInfoConfigSequence_copy(
        NetTrafficInfoConfigSequence* dst,
        const NetTrafficInfoConfigSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_WifiInfoConfig_LAST_MEMBER_ID 2
        
extern const char *WifiInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct WifiInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class WifiInfoConfigTypeSupport;
    class WifiInfoConfigDataWriter;
    class WifiInfoConfigDataReader;
#endif

#endif

            
    
class WifiInfoConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct WifiInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef WifiInfoConfigTypeSupport TypeSupport;
    typedef WifiInfoConfigDataWriter DataWriter;
    typedef WifiInfoConfigDataReader DataReader;
#endif

#endif
    
    rapid::String32  name;

    DDS_Long  qualityLow;

    DDS_Long  qualityCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* WifiInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(WifiInfoConfigSeq, WifiInfoConfig);
        
NDDSUSERDllExport
RTIBool WifiInfoConfig_initialize(
        WifiInfoConfig* self);
        
NDDSUSERDllExport
RTIBool WifiInfoConfig_initialize_ex(
        WifiInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool WifiInfoConfig_initialize_w_params(
        WifiInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void WifiInfoConfig_finalize(
        WifiInfoConfig* self);
                        
NDDSUSERDllExport
void WifiInfoConfig_finalize_ex(
        WifiInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void WifiInfoConfig_finalize_w_params(
        WifiInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void WifiInfoConfig_finalize_optional_members(
        WifiInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool WifiInfoConfig_copy(
        WifiInfoConfig* dst,
        const WifiInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_WifiInfoConfigSequence_LAST_MEMBER_ID rapid_ext_WifiInfoConfig_LAST_MEMBER_ID
typedef  rapid::ext::WifiInfoConfigSeq  WifiInfoConfigSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* WifiInfoConfigSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(WifiInfoConfigSequenceSeq, WifiInfoConfigSequence);                                        
            
NDDSUSERDllExport
RTIBool WifiInfoConfigSequence_initialize(
        WifiInfoConfigSequence* self);
            
NDDSUSERDllExport
RTIBool WifiInfoConfigSequence_initialize_ex(
        WifiInfoConfigSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool WifiInfoConfigSequence_initialize_w_params(
        WifiInfoConfigSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void WifiInfoConfigSequence_finalize(
        WifiInfoConfigSequence* self);
            
NDDSUSERDllExport
void WifiInfoConfigSequence_finalize_ex(
        WifiInfoConfigSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void WifiInfoConfigSequence_finalize_w_params(
        WifiInfoConfigSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void WifiInfoConfigSequence_finalize_optional_members(
        WifiInfoConfigSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool WifiInfoConfigSequence_copy(
        WifiInfoConfigSequence* dst,
        const WifiInfoConfigSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class SystemInfoConfigTypeSupport;

class SystemInfoConfigDataWriter;

class SystemInfoConfigDataReader;

struct SystemInfoConfigSeq;

#define rapid_ext_SystemInfoConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 7)
        
extern const char *SystemInfoConfigTYPENAME;
        


#ifdef __cplusplus
    struct SystemInfoConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SystemInfoConfigTypeSupport;
    class SystemInfoConfigDataWriter;
    class SystemInfoConfigDataReader;
#endif

#endif

            
    
class SystemInfoConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct SystemInfoConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SystemInfoConfigTypeSupport TypeSupport;
    typedef SystemInfoConfigDataWriter DataWriter;
    typedef SystemInfoConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef SystemInfoConfigTypeSupport TypeSupport;

typedef SystemInfoConfigDataWriter DataWriter;

typedef SystemInfoConfigDataReader DataReader;

typedef SystemInfoConfigSeq Seq;

#endif

typedef SystemInfoConfig Type;

    rapid::ext::BatteryInfoConfigSequence  batteries;

    rapid::ext::MemoryInfoConfig  memory;

    rapid::ext::CpuInfoConfig  cpus;

    rapid::ext::FilesystemInfoConfigSequence  filesystems;

    rapid::ext::ThermalInfoConfigSequence  temperatures;

    rapid::ext::NetTrafficInfoConfigSequence  netInterfaces;

    rapid::ext::WifiInfoConfigSequence  wifiInterfaces;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SystemInfoConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SystemInfoConfigSeq, SystemInfoConfig);
        
NDDSUSERDllExport
RTIBool SystemInfoConfig_initialize(
        SystemInfoConfig* self);
        
NDDSUSERDllExport
RTIBool SystemInfoConfig_initialize_ex(
        SystemInfoConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SystemInfoConfig_initialize_w_params(
        SystemInfoConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SystemInfoConfig_finalize(
        SystemInfoConfig* self);
                        
NDDSUSERDllExport
void SystemInfoConfig_finalize_ex(
        SystemInfoConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SystemInfoConfig_finalize_w_params(
        SystemInfoConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SystemInfoConfig_finalize_optional_members(
        SystemInfoConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SystemInfoConfig_copy(
        SystemInfoConfig* dst,
        const SystemInfoConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* SystemInfoConfig_1756908395_h */
