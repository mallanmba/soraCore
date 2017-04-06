
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SpectrumConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SpectrumConfig_457348536_h
#define SpectrumConfig_457348536_h

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

class SpectrumConfigTypeSupport;

class SpectrumConfigDataWriter;

class SpectrumConfigDataReader;

struct SpectrumConfigSeq;

#define rapid_ext_arc_NamedIndexRange_LAST_MEMBER_ID 2
        
extern const char *NamedIndexRangeTYPENAME;
        


#ifdef __cplusplus
    struct NamedIndexRangeSeq;

#ifndef NDDS_STANDALONE_TYPE
    class NamedIndexRangeTypeSupport;
    class NamedIndexRangeDataWriter;
    class NamedIndexRangeDataReader;
#endif

#endif

            
    
class NamedIndexRange                                        
{
public:            
#ifdef __cplusplus
    typedef struct NamedIndexRangeSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef NamedIndexRangeTypeSupport TypeSupport;
    typedef NamedIndexRangeDataWriter DataWriter;
    typedef NamedIndexRangeDataReader DataReader;
#endif

#endif
    
    rapid::String32  name;

    DDS_Short  start;

    DDS_Short  end;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedIndexRange_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(NamedIndexRangeSeq, NamedIndexRange);
        
NDDSUSERDllExport
RTIBool NamedIndexRange_initialize(
        NamedIndexRange* self);
        
NDDSUSERDllExport
RTIBool NamedIndexRange_initialize_ex(
        NamedIndexRange* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool NamedIndexRange_initialize_w_params(
        NamedIndexRange* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void NamedIndexRange_finalize(
        NamedIndexRange* self);
                        
NDDSUSERDllExport
void NamedIndexRange_finalize_ex(
        NamedIndexRange* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void NamedIndexRange_finalize_w_params(
        NamedIndexRange* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void NamedIndexRange_finalize_optional_members(
        NamedIndexRange* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool NamedIndexRange_copy(
        NamedIndexRange* dst,
        const NamedIndexRange* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_NamedIndexRangeSequence16_LAST_MEMBER_ID rapid_ext_arc_NamedIndexRange_LAST_MEMBER_ID
typedef  rapid::ext::arc::NamedIndexRangeSeq  NamedIndexRangeSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* NamedIndexRangeSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(NamedIndexRangeSequence16Seq, NamedIndexRangeSequence16);                                        
            
NDDSUSERDllExport
RTIBool NamedIndexRangeSequence16_initialize(
        NamedIndexRangeSequence16* self);
            
NDDSUSERDllExport
RTIBool NamedIndexRangeSequence16_initialize_ex(
        NamedIndexRangeSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool NamedIndexRangeSequence16_initialize_w_params(
        NamedIndexRangeSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void NamedIndexRangeSequence16_finalize(
        NamedIndexRangeSequence16* self);
            
NDDSUSERDllExport
void NamedIndexRangeSequence16_finalize_ex(
        NamedIndexRangeSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void NamedIndexRangeSequence16_finalize_w_params(
        NamedIndexRangeSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void NamedIndexRangeSequence16_finalize_optional_members(
        NamedIndexRangeSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool NamedIndexRangeSequence16_copy(
        NamedIndexRangeSequence16* dst,
        const NamedIndexRangeSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_SpectrumConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 3)
        
extern const char *SpectrumConfigTYPENAME;
        


#ifdef __cplusplus
    struct SpectrumConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SpectrumConfigTypeSupport;
    class SpectrumConfigDataWriter;
    class SpectrumConfigDataReader;
#endif

#endif

            
    
class SpectrumConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct SpectrumConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SpectrumConfigTypeSupport TypeSupport;
    typedef SpectrumConfigDataWriter DataWriter;
    typedef SpectrumConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef SpectrumConfigTypeSupport TypeSupport;

typedef SpectrumConfigDataWriter DataWriter;

typedef SpectrumConfigDataReader DataReader;

typedef SpectrumConfigSeq Seq;

#endif

typedef SpectrumConfig Type;

/** name of instrument */

    rapid::String32  name;

/** Specifies index range information about spectrum samples */

    rapid::ext::arc::NamedIndexRangeSequence16  indexRanges;

/** Specifies any spectrum instrument specific information */

    rapid::KeyTypeValueSequence64  valueKeys;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SpectrumConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SpectrumConfigSeq, SpectrumConfig);
        
NDDSUSERDllExport
RTIBool SpectrumConfig_initialize(
        SpectrumConfig* self);
        
NDDSUSERDllExport
RTIBool SpectrumConfig_initialize_ex(
        SpectrumConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SpectrumConfig_initialize_w_params(
        SpectrumConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SpectrumConfig_finalize(
        SpectrumConfig* self);
                        
NDDSUSERDllExport
void SpectrumConfig_finalize_ex(
        SpectrumConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SpectrumConfig_finalize_w_params(
        SpectrumConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SpectrumConfig_finalize_optional_members(
        SpectrumConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SpectrumConfig_copy(
        SpectrumConfig* dst,
        const SpectrumConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* SpectrumConfig_457348536_h */
