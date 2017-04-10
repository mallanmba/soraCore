
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MacroState_2110419408_h
#define MacroState_2110419408_h

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

/**

 * Meta-information for an associated MacroConfig as seen by the MacroManager.

 */

#define rapid_MacroInfo_LAST_MEMBER_ID 2
        
extern const char *MacroInfoTYPENAME;
        


#ifdef __cplusplus
    struct MacroInfoSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MacroInfoTypeSupport;
    class MacroInfoDataWriter;
    class MacroInfoDataReader;
#endif

#endif

            
    
class MacroInfo                                        
{
public:            
#ifdef __cplusplus
    typedef struct MacroInfoSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MacroInfoTypeSupport TypeSupport;
    typedef MacroInfoDataWriter DataWriter;
    typedef MacroInfoDataReader DataReader;
#endif

#endif
    
/** Name of the macro. */

    rapid::String64  name;

/** Version number of the macro. As provided in by hdr.serial of the latest corresponding MacroConfig instance. */

    DDS_Long  serial;

/** True if the macro passed basic checking by the MacroManager. */

    DDS_Boolean  accepted;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MacroInfo_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MacroInfoSeq, MacroInfo);
        
NDDSUSERDllExport
RTIBool MacroInfo_initialize(
        MacroInfo* self);
        
NDDSUSERDllExport
RTIBool MacroInfo_initialize_ex(
        MacroInfo* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MacroInfo_initialize_w_params(
        MacroInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MacroInfo_finalize(
        MacroInfo* self);
                        
NDDSUSERDllExport
void MacroInfo_finalize_ex(
        MacroInfo* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MacroInfo_finalize_w_params(
        MacroInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MacroInfo_finalize_optional_members(
        MacroInfo* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MacroInfo_copy(
        MacroInfo* dst,
        const MacroInfo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


    /** Sequence of MacroInfo

     *

     * An asset can store at max 128 macros.

     */


#define rapid_MacroInfoSequence_LAST_MEMBER_ID rapid_MacroInfo_LAST_MEMBER_ID
typedef  rapid::MacroInfoSeq  MacroInfoSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MacroInfoSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(MacroInfoSequenceSeq, MacroInfoSequence);                                        
            
NDDSUSERDllExport
RTIBool MacroInfoSequence_initialize(
        MacroInfoSequence* self);
            
NDDSUSERDllExport
RTIBool MacroInfoSequence_initialize_ex(
        MacroInfoSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool MacroInfoSequence_initialize_w_params(
        MacroInfoSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void MacroInfoSequence_finalize(
        MacroInfoSequence* self);
            
NDDSUSERDllExport
void MacroInfoSequence_finalize_ex(
        MacroInfoSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void MacroInfoSequence_finalize_w_params(
        MacroInfoSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void MacroInfoSequence_finalize_optional_members(
        MacroInfoSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool MacroInfoSequence_copy(
        MacroInfoSequence* dst,
        const MacroInfoSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class MacroStateTypeSupport;

class MacroStateDataWriter;

class MacroStateDataReader;

struct MacroStateSeq;

#define rapid_MacroState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *MacroStateTYPENAME;
        


#ifdef __cplusplus
    struct MacroStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MacroStateTypeSupport;
    class MacroStateDataWriter;
    class MacroStateDataReader;
#endif

#endif

            
    
class MacroState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct MacroStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MacroStateTypeSupport TypeSupport;
    typedef MacroStateDataWriter DataWriter;
    typedef MacroStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef MacroStateTypeSupport TypeSupport;

typedef MacroStateDataWriter DataWriter;

typedef MacroStateDataReader DataReader;

typedef MacroStateSeq Seq;

#endif

typedef MacroState Type;

/** All of the MacroConfigs that this agent knows about. */

    rapid::MacroInfoSequence  macros;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MacroState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MacroStateSeq, MacroState);
        
NDDSUSERDllExport
RTIBool MacroState_initialize(
        MacroState* self);
        
NDDSUSERDllExport
RTIBool MacroState_initialize_ex(
        MacroState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MacroState_initialize_w_params(
        MacroState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MacroState_finalize(
        MacroState* self);
                        
NDDSUSERDllExport
void MacroState_finalize_ex(
        MacroState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MacroState_finalize_w_params(
        MacroState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MacroState_finalize_optional_members(
        MacroState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MacroState_copy(
        MacroState* dst,
        const MacroState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* MacroState_2110419408_h */
