
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EphemerisConfig_2055029897_h
#define EphemerisConfig_2055029897_h

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

#define rapid_ext_arc_EphemerisConfigEntry_LAST_MEMBER_ID 5
        
extern const char *EphemerisConfigEntryTYPENAME;
        


#ifdef __cplusplus
    struct EphemerisConfigEntrySeq;

#ifndef NDDS_STANDALONE_TYPE
    class EphemerisConfigEntryTypeSupport;
    class EphemerisConfigEntryDataWriter;
    class EphemerisConfigEntryDataReader;
#endif

#endif

            
    
class EphemerisConfigEntry                                        
{
public:            
#ifdef __cplusplus
    typedef struct EphemerisConfigEntrySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EphemerisConfigEntryTypeSupport TypeSupport;
    typedef EphemerisConfigEntryDataWriter DataWriter;
    typedef EphemerisConfigEntryDataReader DataReader;
#endif

#endif
    
    char*  solutionName; /* maximum length = (255) */

    char*  referenceFrame; /* maximum length = (255) */

    char*  sourceBody; /* maximum length = (255) */

    char*  targetBody; /* maximum length = (255) */

    DDS_LongLong  timeOffset;

    DDS_LongLong  period;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EphemerisConfigEntry_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EphemerisConfigEntrySeq, EphemerisConfigEntry);
        
NDDSUSERDllExport
RTIBool EphemerisConfigEntry_initialize(
        EphemerisConfigEntry* self);
        
NDDSUSERDllExport
RTIBool EphemerisConfigEntry_initialize_ex(
        EphemerisConfigEntry* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EphemerisConfigEntry_initialize_w_params(
        EphemerisConfigEntry* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EphemerisConfigEntry_finalize(
        EphemerisConfigEntry* self);
                        
NDDSUSERDllExport
void EphemerisConfigEntry_finalize_ex(
        EphemerisConfigEntry* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void EphemerisConfigEntry_finalize_w_params(
        EphemerisConfigEntry* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void EphemerisConfigEntry_finalize_optional_members(
        EphemerisConfigEntry* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool EphemerisConfigEntry_copy(
        EphemerisConfigEntry* dst,
        const EphemerisConfigEntry* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_EphemerisConfigVector32_LAST_MEMBER_ID rapid_ext_arc_EphemerisConfigEntry_LAST_MEMBER_ID
typedef  rapid::ext::arc::EphemerisConfigEntrySeq  EphemerisConfigVector32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EphemerisConfigVector32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(EphemerisConfigVector32Seq, EphemerisConfigVector32);                                        
            
NDDSUSERDllExport
RTIBool EphemerisConfigVector32_initialize(
        EphemerisConfigVector32* self);
            
NDDSUSERDllExport
RTIBool EphemerisConfigVector32_initialize_ex(
        EphemerisConfigVector32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool EphemerisConfigVector32_initialize_w_params(
        EphemerisConfigVector32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void EphemerisConfigVector32_finalize(
        EphemerisConfigVector32* self);
            
NDDSUSERDllExport
void EphemerisConfigVector32_finalize_ex(
        EphemerisConfigVector32* self,RTIBool deletePointers);

NDDSUSERDllExport
void EphemerisConfigVector32_finalize_w_params(
        EphemerisConfigVector32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void EphemerisConfigVector32_finalize_optional_members(
        EphemerisConfigVector32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool EphemerisConfigVector32_copy(
        EphemerisConfigVector32* dst,
        const EphemerisConfigVector32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class EphemerisConfigTypeSupport;

class EphemerisConfigDataWriter;

class EphemerisConfigDataReader;

struct EphemerisConfigSeq;

/** EphemerisConfig message sets up configuration for EphemerisSample messages. */

#define rapid_ext_arc_EphemerisConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *EphemerisConfigTYPENAME;
        


#ifdef __cplusplus
    struct EphemerisConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class EphemerisConfigTypeSupport;
    class EphemerisConfigDataWriter;
    class EphemerisConfigDataReader;
#endif

#endif

            
    
class EphemerisConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct EphemerisConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EphemerisConfigTypeSupport TypeSupport;
    typedef EphemerisConfigDataWriter DataWriter;
    typedef EphemerisConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef EphemerisConfigTypeSupport TypeSupport;

typedef EphemerisConfigDataWriter DataWriter;

typedef EphemerisConfigDataReader DataReader;

typedef EphemerisConfigSeq Seq;

#endif

typedef EphemerisConfig Type;

    rapid::ext::arc::EphemerisConfigVector32  entries;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EphemerisConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EphemerisConfigSeq, EphemerisConfig);
        
NDDSUSERDllExport
RTIBool EphemerisConfig_initialize(
        EphemerisConfig* self);
        
NDDSUSERDllExport
RTIBool EphemerisConfig_initialize_ex(
        EphemerisConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EphemerisConfig_initialize_w_params(
        EphemerisConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EphemerisConfig_finalize(
        EphemerisConfig* self);
                        
NDDSUSERDllExport
void EphemerisConfig_finalize_ex(
        EphemerisConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void EphemerisConfig_finalize_w_params(
        EphemerisConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void EphemerisConfig_finalize_optional_members(
        EphemerisConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool EphemerisConfig_copy(
        EphemerisConfig* dst,
        const EphemerisConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* EphemerisConfig_2055029897_h */
