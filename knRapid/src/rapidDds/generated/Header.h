
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Header.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Header_325113614_h
#define Header_325113614_h

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


namespace rapid{

/** Header of all messages. */

#define rapid_Header_LAST_MEMBER_ID 4
        
extern const char *HeaderTYPENAME;
        


#ifdef __cplusplus
    struct HeaderSeq;

#ifndef NDDS_STANDALONE_TYPE
    class HeaderTypeSupport;
    class HeaderDataWriter;
    class HeaderDataReader;
#endif

#endif

            
    
class Header                                        
{
public:            
#ifdef __cplusplus
    typedef struct HeaderSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef HeaderTypeSupport TypeSupport;
    typedef HeaderDataWriter DataWriter;
    typedef HeaderDataReader DataReader;
#endif

#endif
    
/** Source name of the message. This is a key for filtering in DDS. */

    rapid::String32  srcName;

/**

 * Agent to which this message is being sent or from which this message was sent. This is also a key

 * for filtering in DDS.

 */

    rapid::String32  assetName;

/**

 * Timestamp is the number of microseconds elapsed since midnight proleptic

 * Coordinated Universal Time (UTC) of January 1, 1970, not counting leap seconds

 */

    DDS_LongLong  timeStamp;

/**

 * If statusCode >= 0, then all is well. If statusCode < 0, there is some sort of error.

 * Each status shall have its own convention for error codes.

 */

    DDS_Long  statusCode;

/**

 * Serial denotes a config/state pair (i.e. the code in a config header should match the code in the

 * corresponding state header).

 */

    DDS_Long  serial;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Header_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(HeaderSeq, Header);
        
NDDSUSERDllExport
RTIBool Header_initialize(
        Header* self);
        
NDDSUSERDllExport
RTIBool Header_initialize_ex(
        Header* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Header_initialize_w_params(
        Header* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Header_finalize(
        Header* self);
                        
NDDSUSERDllExport
void Header_finalize_ex(
        Header* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Header_finalize_w_params(
        Header* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Header_finalize_optional_members(
        Header* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Header_copy(
        Header* dst,
        const Header* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* Header_325113614_h */
