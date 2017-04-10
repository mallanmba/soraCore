
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueConfig_1881571180_h
#define FileQueueConfig_1881571180_h

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


#include "BaseTypes.h"


namespace rapid{

/**

 * The file queue channel configuration. The file queue can have multiple channels. Bandwidth is split up

 * between the channels through a token system.

 */

#define rapid_ChannelConfig_LAST_MEMBER_ID 1
        
extern const char *ChannelConfigTYPENAME;
        


#ifdef __cplusplus
    struct ChannelConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ChannelConfigTypeSupport;
    class ChannelConfigDataWriter;
    class ChannelConfigDataReader;
#endif

#endif

            
    
class ChannelConfig                                        
{
public:            
#ifdef __cplusplus
    typedef struct ChannelConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ChannelConfigTypeSupport TypeSupport;
    typedef ChannelConfigDataWriter DataWriter;
    typedef ChannelConfigDataReader DataReader;
#endif

#endif
    
/** Name of the channel. */

    rapid::String32  name;

/** Number of tokens that channel has. */

    DDS_Short  numTokens;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ChannelConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ChannelConfigSeq, ChannelConfig);
        
NDDSUSERDllExport
RTIBool ChannelConfig_initialize(
        ChannelConfig* self);
        
NDDSUSERDllExport
RTIBool ChannelConfig_initialize_ex(
        ChannelConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ChannelConfig_initialize_w_params(
        ChannelConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ChannelConfig_finalize(
        ChannelConfig* self);
                        
NDDSUSERDllExport
void ChannelConfig_finalize_ex(
        ChannelConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ChannelConfig_finalize_w_params(
        ChannelConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ChannelConfig_finalize_optional_members(
        ChannelConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ChannelConfig_copy(
        ChannelConfig* dst,
        const ChannelConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/** Sequence of channel specifications. */


#define rapid_ChannelConfigSequence_LAST_MEMBER_ID rapid_ChannelConfig_LAST_MEMBER_ID
typedef  rapid::ChannelConfigSeq  ChannelConfigSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ChannelConfigSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(ChannelConfigSequenceSeq, ChannelConfigSequence);                                        
            
NDDSUSERDllExport
RTIBool ChannelConfigSequence_initialize(
        ChannelConfigSequence* self);
            
NDDSUSERDllExport
RTIBool ChannelConfigSequence_initialize_ex(
        ChannelConfigSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ChannelConfigSequence_initialize_w_params(
        ChannelConfigSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void ChannelConfigSequence_finalize(
        ChannelConfigSequence* self);
            
NDDSUSERDllExport
void ChannelConfigSequence_finalize_ex(
        ChannelConfigSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void ChannelConfigSequence_finalize_w_params(
        ChannelConfigSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ChannelConfigSequence_finalize_optional_members(
        ChannelConfigSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool ChannelConfigSequence_copy(
        ChannelConfigSequence* dst,
        const ChannelConfigSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class FileQueueConfigTypeSupport;

class FileQueueConfigDataWriter;

class FileQueueConfigDataReader;

struct FileQueueConfigSeq;

/** Holds information about a file that could be transferred to the ground from the robot. */

#define rapid_FileQueueConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *FileQueueConfigTYPENAME;
        


#ifdef __cplusplus
    struct FileQueueConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FileQueueConfigTypeSupport;
    class FileQueueConfigDataWriter;
    class FileQueueConfigDataReader;
#endif

#endif

            
    
class FileQueueConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct FileQueueConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FileQueueConfigTypeSupport TypeSupport;
    typedef FileQueueConfigDataWriter DataWriter;
    typedef FileQueueConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef FileQueueConfigTypeSupport TypeSupport;

typedef FileQueueConfigDataWriter DataWriter;

typedef FileQueueConfigDataReader DataReader;

typedef FileQueueConfigSeq Seq;

#endif

typedef FileQueueConfig Type;

    rapid::ChannelConfigSequence  channels;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FileQueueConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FileQueueConfigSeq, FileQueueConfig);
        
NDDSUSERDllExport
RTIBool FileQueueConfig_initialize(
        FileQueueConfig* self);
        
NDDSUSERDllExport
RTIBool FileQueueConfig_initialize_ex(
        FileQueueConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FileQueueConfig_initialize_w_params(
        FileQueueConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FileQueueConfig_finalize(
        FileQueueConfig* self);
                        
NDDSUSERDllExport
void FileQueueConfig_finalize_ex(
        FileQueueConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FileQueueConfig_finalize_w_params(
        FileQueueConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FileQueueConfig_finalize_optional_members(
        FileQueueConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FileQueueConfig_copy(
        FileQueueConfig* dst,
        const FileQueueConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* FileQueueConfig_1881571180_h */
