
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CommandConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CommandConfig_667935284_h
#define CommandConfig_667935284_h

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

/** A command definition. Arguments will define name of argument as Key, type of argument as Type. */

#define rapid_CommandDef_LAST_MEMBER_ID 3
        
extern const char *CommandDefTYPENAME;
        


#ifdef __cplusplus
    struct CommandDefSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CommandDefTypeSupport;
    class CommandDefDataWriter;
    class CommandDefDataReader;
#endif

#endif

            
    
class CommandDef                                        
{
public:            
#ifdef __cplusplus
    typedef struct CommandDefSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CommandDefTypeSupport TypeSupport;
    typedef CommandDefDataWriter DataWriter;
    typedef CommandDefDataReader DataReader;
#endif

#endif
    
/** The name of the command, to be used as cmdName in Command. */

    rapid::String64  name;

/** Describes whether or not this command can be aborted once begun. */

    DDS_Boolean  abortable;

/** Describes whether or not this command can be suspended once begun. */

    DDS_Boolean  suspendable;

/**

 * The arguments needed to send this command: key is the name of the argument, type is the expected

 * data type of the argument.

 */

    rapid::KeyTypeSequence16  parameters;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CommandDef_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CommandDefSeq, CommandDef);
        
NDDSUSERDllExport
RTIBool CommandDef_initialize(
        CommandDef* self);
        
NDDSUSERDllExport
RTIBool CommandDef_initialize_ex(
        CommandDef* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CommandDef_initialize_w_params(
        CommandDef* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CommandDef_finalize(
        CommandDef* self);
                        
NDDSUSERDllExport
void CommandDef_finalize_ex(
        CommandDef* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CommandDef_finalize_w_params(
        CommandDef* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CommandDef_finalize_optional_members(
        CommandDef* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CommandDef_copy(
        CommandDef* dst,
        const CommandDef* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_CommandDefSequence_LAST_MEMBER_ID rapid_CommandDef_LAST_MEMBER_ID
typedef  rapid::CommandDefSeq  CommandDefSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CommandDefSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(CommandDefSequenceSeq, CommandDefSequence);                                        
            
NDDSUSERDllExport
RTIBool CommandDefSequence_initialize(
        CommandDefSequence* self);
            
NDDSUSERDllExport
RTIBool CommandDefSequence_initialize_ex(
        CommandDefSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool CommandDefSequence_initialize_w_params(
        CommandDefSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void CommandDefSequence_finalize(
        CommandDefSequence* self);
            
NDDSUSERDllExport
void CommandDefSequence_finalize_ex(
        CommandDefSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void CommandDefSequence_finalize_w_params(
        CommandDefSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void CommandDefSequence_finalize_optional_members(
        CommandDefSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool CommandDefSequence_copy(
        CommandDefSequence* dst,
        const CommandDefSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_SubsystemType_LAST_MEMBER_ID 1
        
extern const char *SubsystemTypeTYPENAME;
        


#ifdef __cplusplus
    struct SubsystemTypeSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SubsystemTypeTypeSupport;
    class SubsystemTypeDataWriter;
    class SubsystemTypeDataReader;
#endif

#endif

            
    
class SubsystemType                                        
{
public:            
#ifdef __cplusplus
    typedef struct SubsystemTypeSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SubsystemTypeTypeSupport TypeSupport;
    typedef SubsystemTypeDataWriter DataWriter;
    typedef SubsystemTypeDataReader DataReader;
#endif

#endif
    
/** Name of subsystem type. */

    rapid::String32  name;

    rapid::CommandDefSequence  commands;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SubsystemType_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SubsystemTypeSeq, SubsystemType);
        
NDDSUSERDllExport
RTIBool SubsystemType_initialize(
        SubsystemType* self);
        
NDDSUSERDllExport
RTIBool SubsystemType_initialize_ex(
        SubsystemType* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SubsystemType_initialize_w_params(
        SubsystemType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SubsystemType_finalize(
        SubsystemType* self);
                        
NDDSUSERDllExport
void SubsystemType_finalize_ex(
        SubsystemType* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SubsystemType_finalize_w_params(
        SubsystemType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SubsystemType_finalize_optional_members(
        SubsystemType* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SubsystemType_copy(
        SubsystemType* dst,
        const SubsystemType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_Subsystem_LAST_MEMBER_ID 1
        
extern const char *SubsystemTYPENAME;
        


#ifdef __cplusplus
    struct SubsystemSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SubsystemTypeSupport;
    class SubsystemDataWriter;
    class SubsystemDataReader;
#endif

#endif

            
    
class Subsystem                                        
{
public:            
#ifdef __cplusplus
    typedef struct SubsystemSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SubsystemTypeSupport TypeSupport;
    typedef SubsystemDataWriter DataWriter;
    typedef SubsystemDataReader DataReader;
#endif

#endif
    
/** Name of subsystem instance. */

    rapid::String32  name;

/** Has to match a subsystem type name. */

    rapid::String32  subsystemTypeName;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Subsystem_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SubsystemSeq, Subsystem);
        
NDDSUSERDllExport
RTIBool Subsystem_initialize(
        Subsystem* self);
        
NDDSUSERDllExport
RTIBool Subsystem_initialize_ex(
        Subsystem* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Subsystem_initialize_w_params(
        Subsystem* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Subsystem_finalize(
        Subsystem* self);
                        
NDDSUSERDllExport
void Subsystem_finalize_ex(
        Subsystem* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Subsystem_finalize_w_params(
        Subsystem* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Subsystem_finalize_optional_members(
        Subsystem* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Subsystem_copy(
        Subsystem* dst,
        const Subsystem* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_SubsystemTypeSequence_LAST_MEMBER_ID rapid_SubsystemType_LAST_MEMBER_ID
typedef  rapid::SubsystemTypeSeq  SubsystemTypeSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SubsystemTypeSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(SubsystemTypeSequenceSeq, SubsystemTypeSequence);                                        
            
NDDSUSERDllExport
RTIBool SubsystemTypeSequence_initialize(
        SubsystemTypeSequence* self);
            
NDDSUSERDllExport
RTIBool SubsystemTypeSequence_initialize_ex(
        SubsystemTypeSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SubsystemTypeSequence_initialize_w_params(
        SubsystemTypeSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void SubsystemTypeSequence_finalize(
        SubsystemTypeSequence* self);
            
NDDSUSERDllExport
void SubsystemTypeSequence_finalize_ex(
        SubsystemTypeSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void SubsystemTypeSequence_finalize_w_params(
        SubsystemTypeSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SubsystemTypeSequence_finalize_optional_members(
        SubsystemTypeSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool SubsystemTypeSequence_copy(
        SubsystemTypeSequence* dst,
        const SubsystemTypeSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_SubsystemSequence_LAST_MEMBER_ID rapid_Subsystem_LAST_MEMBER_ID
typedef  rapid::SubsystemSeq  SubsystemSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SubsystemSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(SubsystemSequenceSeq, SubsystemSequence);                                        
            
NDDSUSERDllExport
RTIBool SubsystemSequence_initialize(
        SubsystemSequence* self);
            
NDDSUSERDllExport
RTIBool SubsystemSequence_initialize_ex(
        SubsystemSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool SubsystemSequence_initialize_w_params(
        SubsystemSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void SubsystemSequence_finalize(
        SubsystemSequence* self);
            
NDDSUSERDllExport
void SubsystemSequence_finalize_ex(
        SubsystemSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void SubsystemSequence_finalize_w_params(
        SubsystemSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SubsystemSequence_finalize_optional_members(
        SubsystemSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool SubsystemSequence_copy(
        SubsystemSequence* dst,
        const SubsystemSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class CommandConfigTypeSupport;

class CommandConfigDataWriter;

class CommandConfigDataReader;

struct CommandConfigSeq;

/**

 * Message that sets up the possible commands an Agent can send and any arguments needed to perform said

 * command.

 */

#define rapid_CommandConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *CommandConfigTYPENAME;
        


#ifdef __cplusplus
    struct CommandConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CommandConfigTypeSupport;
    class CommandConfigDataWriter;
    class CommandConfigDataReader;
#endif

#endif

            
    
class CommandConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct CommandConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CommandConfigTypeSupport TypeSupport;
    typedef CommandConfigDataWriter DataWriter;
    typedef CommandConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef CommandConfigTypeSupport TypeSupport;

typedef CommandConfigDataWriter DataWriter;

typedef CommandConfigDataReader DataReader;

typedef CommandConfigSeq Seq;

#endif

typedef CommandConfig Type;

/** Lists CommandDefs of all commands that can be performed by said Agent. */

    rapid::SubsystemTypeSequence  availableSubsystemTypes;

    rapid::SubsystemSequence  availableSubsystems;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CommandConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CommandConfigSeq, CommandConfig);
        
NDDSUSERDllExport
RTIBool CommandConfig_initialize(
        CommandConfig* self);
        
NDDSUSERDllExport
RTIBool CommandConfig_initialize_ex(
        CommandConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CommandConfig_initialize_w_params(
        CommandConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CommandConfig_finalize(
        CommandConfig* self);
                        
NDDSUSERDllExport
void CommandConfig_finalize_ex(
        CommandConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CommandConfig_finalize_w_params(
        CommandConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CommandConfig_finalize_optional_members(
        CommandConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CommandConfig_copy(
        CommandConfig* dst,
        const CommandConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* CommandConfig_667935284_h */
