
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Float32Config.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Float32Config_468125759_h
#define Float32Config_468125759_h

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

class Float32ConfigTypeSupport;

class Float32ConfigDataWriter;

class Float32ConfigDataReader;

struct Float32ConfigSeq;

/** Float32Config message sets up configuration for Float32Sample messages. */

#define rapid_ext_arc_Float32Config_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 3)
        
extern const char *Float32ConfigTYPENAME;
        


#ifdef __cplusplus
    struct Float32ConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Float32ConfigTypeSupport;
    class Float32ConfigDataWriter;
    class Float32ConfigDataReader;
#endif

#endif

            
    
class Float32Config : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct Float32ConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Float32ConfigTypeSupport TypeSupport;
    typedef Float32ConfigDataWriter DataWriter;
    typedef Float32ConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef Float32ConfigTypeSupport TypeSupport;

typedef Float32ConfigDataWriter DataWriter;

typedef Float32ConfigDataReader DataReader;

typedef Float32ConfigSeq Seq;

#endif

typedef Float32Config Type;

    rapid::String32  category;

    rapid::KeyTypeValueSequence16  metaData;

    rapid::String32Sequence32  dataKeys;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Float32Config_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Float32ConfigSeq, Float32Config);
        
NDDSUSERDllExport
RTIBool Float32Config_initialize(
        Float32Config* self);
        
NDDSUSERDllExport
RTIBool Float32Config_initialize_ex(
        Float32Config* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Float32Config_initialize_w_params(
        Float32Config* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Float32Config_finalize(
        Float32Config* self);
                        
NDDSUSERDllExport
void Float32Config_finalize_ex(
        Float32Config* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Float32Config_finalize_w_params(
        Float32Config* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Float32Config_finalize_optional_members(
        Float32Config* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Float32Config_copy(
        Float32Config* dst,
        const Float32Config* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* Float32Config_468125759_h */
