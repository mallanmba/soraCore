
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MacroConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MacroConfig_2101968535_h
#define MacroConfig_2101968535_h

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

 * Command is a message used to send directives to an Agent.

 */

#define rapid_MacroCommand_LAST_MEMBER_ID 4
        
extern const char *MacroCommandTYPENAME;
        


#ifdef __cplusplus
    struct MacroCommandSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MacroCommandTypeSupport;
    class MacroCommandDataWriter;
    class MacroCommandDataReader;
#endif

#endif

            
    
class MacroCommand                                        
{
public:            
#ifdef __cplusplus
    typedef struct MacroCommandSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MacroCommandTypeSupport TypeSupport;
    typedef MacroCommandDataWriter DataWriter;
    typedef MacroCommandDataReader DataReader;
#endif

#endif
    
/** Name of command being sent. Should get this from list of possible commands in CommandConfig. */

    rapid::String64  cmdName;

/** Suffix to be appended to the cmdId of the loadMacro Command.

 *  Each cmdIdSuffix within a macro MUST be unique. When the macro is loaded

 *  into the Queue, the cmdId of each command in the Macro will be

 *  <cmdId>-<cmdIdSuffix> where cmdId is the command id of the loadMacro command

 *  that loaded the Macro.

 */

    rapid::String64  cmdIdSuffix;

/** Name of subsystem to which cmdName belongs. */

    rapid::String32  subsysName;

/** Data type and value of the arguments for this particular command. */

    rapid::ParameterSequence16  arguments;

/** Data type and value for any metaData fields contained in the MacroConfig. */

    rapid::ParameterSequence16  metaData;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MacroCommand_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MacroCommandSeq, MacroCommand);
        
NDDSUSERDllExport
RTIBool MacroCommand_initialize(
        MacroCommand* self);
        
NDDSUSERDllExport
RTIBool MacroCommand_initialize_ex(
        MacroCommand* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MacroCommand_initialize_w_params(
        MacroCommand* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MacroCommand_finalize(
        MacroCommand* self);
                        
NDDSUSERDllExport
void MacroCommand_finalize_ex(
        MacroCommand* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MacroCommand_finalize_w_params(
        MacroCommand* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MacroCommand_finalize_optional_members(
        MacroCommand* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MacroCommand_copy(
        MacroCommand* dst,
        const MacroCommand* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_MacroCommandSequence128_LAST_MEMBER_ID rapid_MacroCommand_LAST_MEMBER_ID
typedef  rapid::MacroCommandSeq  MacroCommandSequence128;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MacroCommandSequence128_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(MacroCommandSequence128Seq, MacroCommandSequence128);                                        
            
NDDSUSERDllExport
RTIBool MacroCommandSequence128_initialize(
        MacroCommandSequence128* self);
            
NDDSUSERDllExport
RTIBool MacroCommandSequence128_initialize_ex(
        MacroCommandSequence128* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool MacroCommandSequence128_initialize_w_params(
        MacroCommandSequence128* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void MacroCommandSequence128_finalize(
        MacroCommandSequence128* self);
            
NDDSUSERDllExport
void MacroCommandSequence128_finalize_ex(
        MacroCommandSequence128* self,RTIBool deletePointers);

NDDSUSERDllExport
void MacroCommandSequence128_finalize_w_params(
        MacroCommandSequence128* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void MacroCommandSequence128_finalize_optional_members(
        MacroCommandSequence128* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool MacroCommandSequence128_copy(
        MacroCommandSequence128* dst,
        const MacroCommandSequence128* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class MacroConfigTypeSupport;

class MacroConfigDataWriter;

class MacroConfigDataReader;

struct MacroConfigSeq;

#define rapid_MacroConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *MacroConfigTYPENAME;
        


#ifdef __cplusplus
    struct MacroConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MacroConfigTypeSupport;
    class MacroConfigDataWriter;
    class MacroConfigDataReader;
#endif

#endif

            
    
class MacroConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct MacroConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MacroConfigTypeSupport TypeSupport;
    typedef MacroConfigDataWriter DataWriter;
    typedef MacroConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef MacroConfigTypeSupport TypeSupport;

typedef MacroConfigDataWriter DataWriter;

typedef MacroConfigDataReader DataReader;

typedef MacroConfigSeq Seq;

#endif

typedef MacroConfig Type;

/** Name of this macro. */

    rapid::String64  name;

/** The commands that are put onto the Queue when this macro is loaded. */

    rapid::MacroCommandSequence128  commands;

/** Metadata for the entire plan */

    rapid::KeyTypeValueSequence16  metaData;

/** Metadata fields found in each MacroCommnad */

    rapid::KeyTypeSequence16  commandMetaDataSpec;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MacroConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MacroConfigSeq, MacroConfig);
        
NDDSUSERDllExport
RTIBool MacroConfig_initialize(
        MacroConfig* self);
        
NDDSUSERDllExport
RTIBool MacroConfig_initialize_ex(
        MacroConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MacroConfig_initialize_w_params(
        MacroConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MacroConfig_finalize(
        MacroConfig* self);
                        
NDDSUSERDllExport
void MacroConfig_finalize_ex(
        MacroConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MacroConfig_finalize_w_params(
        MacroConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MacroConfig_finalize_optional_members(
        MacroConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MacroConfig_copy(
        MacroConfig* dst,
        const MacroConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* MacroConfig_2101968535_h */
