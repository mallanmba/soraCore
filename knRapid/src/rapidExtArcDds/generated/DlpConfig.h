
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef DlpConfig_1713252555_h
#define DlpConfig_1713252555_h

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

namespace arc{

#define rapid_ext_arc_DlpWarnCriticalRange_LAST_MEMBER_ID 3
        
extern const char *DlpWarnCriticalRangeTYPENAME;
        


#ifdef __cplusplus
    struct DlpWarnCriticalRangeSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DlpWarnCriticalRangeTypeSupport;
    class DlpWarnCriticalRangeDataWriter;
    class DlpWarnCriticalRangeDataReader;
#endif

#endif

            
    
class DlpWarnCriticalRange                                        
{
public:            
#ifdef __cplusplus
    typedef struct DlpWarnCriticalRangeSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DlpWarnCriticalRangeTypeSupport TypeSupport;
    typedef DlpWarnCriticalRangeDataWriter DataWriter;
    typedef DlpWarnCriticalRangeDataReader DataReader;
#endif

#endif
    
    DDS_Float  lowCritical;

    DDS_Float  lowWarn;

    DDS_Float  highWarn;

    DDS_Float  highCritical;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpWarnCriticalRange_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DlpWarnCriticalRangeSeq, DlpWarnCriticalRange);
        
NDDSUSERDllExport
RTIBool DlpWarnCriticalRange_initialize(
        DlpWarnCriticalRange* self);
        
NDDSUSERDllExport
RTIBool DlpWarnCriticalRange_initialize_ex(
        DlpWarnCriticalRange* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DlpWarnCriticalRange_initialize_w_params(
        DlpWarnCriticalRange* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DlpWarnCriticalRange_finalize(
        DlpWarnCriticalRange* self);
                        
NDDSUSERDllExport
void DlpWarnCriticalRange_finalize_ex(
        DlpWarnCriticalRange* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DlpWarnCriticalRange_finalize_w_params(
        DlpWarnCriticalRange* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DlpWarnCriticalRange_finalize_optional_members(
        DlpWarnCriticalRange* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DlpWarnCriticalRange_copy(
        DlpWarnCriticalRange* dst,
        const DlpWarnCriticalRange* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_DlpChannelConfig_LAST_MEMBER_ID 2
        
extern const char *DlpChannelConfigTYPENAME;
        


#ifdef __cplusplus
    struct DlpChannelConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DlpChannelConfigTypeSupport;
    class DlpChannelConfigDataWriter;
    class DlpChannelConfigDataReader;
#endif

#endif

            
    
class DlpChannelConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct DlpChannelConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DlpChannelConfigTypeSupport TypeSupport;
    typedef DlpChannelConfigDataWriter DataWriter;
    typedef DlpChannelConfigDataReader DataReader;
#endif

#endif
    
    rapid::String32  name;

    rapid::ext::arc::DlpWarnCriticalRange  voltageRange;

    rapid::ext::arc::DlpWarnCriticalRange  currentRange;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpChannelConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DlpChannelConfigSeq, DlpChannelConfig);
        
NDDSUSERDllExport
RTIBool DlpChannelConfig_initialize(
        DlpChannelConfig* self);
        
NDDSUSERDllExport
RTIBool DlpChannelConfig_initialize_ex(
        DlpChannelConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DlpChannelConfig_initialize_w_params(
        DlpChannelConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DlpChannelConfig_finalize(
        DlpChannelConfig* self);
                        
NDDSUSERDllExport
void DlpChannelConfig_finalize_ex(
        DlpChannelConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DlpChannelConfig_finalize_w_params(
        DlpChannelConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DlpChannelConfig_finalize_optional_members(
        DlpChannelConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DlpChannelConfig_copy(
        DlpChannelConfig* dst,
        const DlpChannelConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_DlpBoardConfig_LAST_MEMBER_ID 2
        
extern const char *DlpBoardConfigTYPENAME;
        


#ifdef __cplusplus
    struct DlpBoardConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DlpBoardConfigTypeSupport;
    class DlpBoardConfigDataWriter;
    class DlpBoardConfigDataReader;
#endif

#endif

            
    
class DlpBoardConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct DlpBoardConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DlpBoardConfigTypeSupport TypeSupport;
    typedef DlpBoardConfigDataWriter DataWriter;
    typedef DlpBoardConfigDataReader DataReader;
#endif

#endif
    
    rapid::String32  name;

    rapid::ext::arc::DlpChannelConfig  channels[3];

    rapid::ext::arc::DlpWarnCriticalRange  tempRange;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpBoardConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DlpBoardConfigSeq, DlpBoardConfig);
        
NDDSUSERDllExport
RTIBool DlpBoardConfig_initialize(
        DlpBoardConfig* self);
        
NDDSUSERDllExport
RTIBool DlpBoardConfig_initialize_ex(
        DlpBoardConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DlpBoardConfig_initialize_w_params(
        DlpBoardConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DlpBoardConfig_finalize(
        DlpBoardConfig* self);
                        
NDDSUSERDllExport
void DlpBoardConfig_finalize_ex(
        DlpBoardConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DlpBoardConfig_finalize_w_params(
        DlpBoardConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DlpBoardConfig_finalize_optional_members(
        DlpBoardConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DlpBoardConfig_copy(
        DlpBoardConfig* dst,
        const DlpBoardConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_DlpBoardConfigSequence32_LAST_MEMBER_ID rapid_ext_arc_DlpBoardConfig_LAST_MEMBER_ID
typedef  rapid::ext::arc::DlpBoardConfigSeq  DlpBoardConfigSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpBoardConfigSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DlpBoardConfigSequence32Seq, DlpBoardConfigSequence32);                                        
            
NDDSUSERDllExport
RTIBool DlpBoardConfigSequence32_initialize(
        DlpBoardConfigSequence32* self);
            
NDDSUSERDllExport
RTIBool DlpBoardConfigSequence32_initialize_ex(
        DlpBoardConfigSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DlpBoardConfigSequence32_initialize_w_params(
        DlpBoardConfigSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DlpBoardConfigSequence32_finalize(
        DlpBoardConfigSequence32* self);
            
NDDSUSERDllExport
void DlpBoardConfigSequence32_finalize_ex(
        DlpBoardConfigSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void DlpBoardConfigSequence32_finalize_w_params(
        DlpBoardConfigSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DlpBoardConfigSequence32_finalize_optional_members(
        DlpBoardConfigSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DlpBoardConfigSequence32_copy(
        DlpBoardConfigSequence32* dst,
        const DlpBoardConfigSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class DlpConfigTypeSupport;

class DlpConfigDataWriter;

class DlpConfigDataReader;

struct DlpConfigSeq;

/** DlpConfig message sets up configuration for DlpSample messages. */

#define rapid_ext_arc_DlpConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *DlpConfigTYPENAME;
        


#ifdef __cplusplus
    struct DlpConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DlpConfigTypeSupport;
    class DlpConfigDataWriter;
    class DlpConfigDataReader;
#endif

#endif

            
    
class DlpConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct DlpConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DlpConfigTypeSupport TypeSupport;
    typedef DlpConfigDataWriter DataWriter;
    typedef DlpConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef DlpConfigTypeSupport TypeSupport;

typedef DlpConfigDataWriter DataWriter;

typedef DlpConfigDataReader DataReader;

typedef DlpConfigSeq Seq;

#endif

typedef DlpConfig Type;

    rapid::ext::arc::DlpBoardConfigSequence32  dlpBoards;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DlpConfigSeq, DlpConfig);
        
NDDSUSERDllExport
RTIBool DlpConfig_initialize(
        DlpConfig* self);
        
NDDSUSERDllExport
RTIBool DlpConfig_initialize_ex(
        DlpConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DlpConfig_initialize_w_params(
        DlpConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DlpConfig_finalize(
        DlpConfig* self);
                        
NDDSUSERDllExport
void DlpConfig_finalize_ex(
        DlpConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DlpConfig_finalize_w_params(
        DlpConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DlpConfig_finalize_optional_members(
        DlpConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DlpConfig_copy(
        DlpConfig* dst,
        const DlpConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* DlpConfig_1713252555_h */
