
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileAnnounce.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileAnnounce_13966367_h
#define FileAnnounce_13966367_h

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

class FileAnnounceTypeSupport;

class FileAnnounceDataWriter;

class FileAnnounceDataReader;

struct FileAnnounceSeq;

/**

 * Holds information about a file that could be transferred to the ground from the robot.

 */

#define rapid_FileAnnounce_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *FileAnnounceTYPENAME;
        


#ifdef __cplusplus
    struct FileAnnounceSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FileAnnounceTypeSupport;
    class FileAnnounceDataWriter;
    class FileAnnounceDataReader;
#endif

#endif

            
    
class FileAnnounce : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct FileAnnounceSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FileAnnounceTypeSupport TypeSupport;
    typedef FileAnnounceDataWriter DataWriter;
    typedef FileAnnounceDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef FileAnnounceTypeSupport TypeSupport;

typedef FileAnnounceDataWriter DataWriter;

typedef FileAnnounceDataReader DataReader;

typedef FileAnnounceSeq Seq;

#endif

typedef FileAnnounce Type;

/** The unique identifier for this file. */

    rapid::String64  fileUuid;

/** URI of where the file is located. */

    rapid::String256  fileLocator;

/** Total size of the file in bytes. */

    DDS_LongLong  fileSize;

/** Additional key/value pairs of metadata such as group-id or mime-type. */

    rapid::KeyTypeValueSequence16  metaData;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FileAnnounce_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FileAnnounceSeq, FileAnnounce);
        
NDDSUSERDllExport
RTIBool FileAnnounce_initialize(
        FileAnnounce* self);
        
NDDSUSERDllExport
RTIBool FileAnnounce_initialize_ex(
        FileAnnounce* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FileAnnounce_initialize_w_params(
        FileAnnounce* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FileAnnounce_finalize(
        FileAnnounce* self);
                        
NDDSUSERDllExport
void FileAnnounce_finalize_ex(
        FileAnnounce* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FileAnnounce_finalize_w_params(
        FileAnnounce* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FileAnnounce_finalize_optional_members(
        FileAnnounce* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FileAnnounce_copy(
        FileAnnounce* dst,
        const FileAnnounce* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* FileAnnounce_13966367_h */
