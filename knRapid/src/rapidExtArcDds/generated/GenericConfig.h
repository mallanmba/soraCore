
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GenericConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GenericConfig_1318546965_h
#define GenericConfig_1318546965_h

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

class GenericConfigTypeSupport;

class GenericConfigDataWriter;

class GenericConfigDataReader;

struct GenericConfigSeq;

#define rapid_ext_arc_GenericConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *GenericConfigTYPENAME;
        


#ifdef __cplusplus
    struct GenericConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GenericConfigTypeSupport;
    class GenericConfigDataWriter;
    class GenericConfigDataReader;
#endif

#endif

            
    
class GenericConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct GenericConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GenericConfigTypeSupport TypeSupport;
    typedef GenericConfigDataWriter DataWriter;
    typedef GenericConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef GenericConfigTypeSupport TypeSupport;

typedef GenericConfigDataWriter DataWriter;

typedef GenericConfigDataReader DataReader;

typedef GenericConfigSeq Seq;

#endif

typedef GenericConfig Type;

    rapid::String32  category;

    rapid::KeyTypeValueSequence32  metaData;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GenericConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GenericConfigSeq, GenericConfig);
        
NDDSUSERDllExport
RTIBool GenericConfig_initialize(
        GenericConfig* self);
        
NDDSUSERDllExport
RTIBool GenericConfig_initialize_ex(
        GenericConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GenericConfig_initialize_w_params(
        GenericConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GenericConfig_finalize(
        GenericConfig* self);
                        
NDDSUSERDllExport
void GenericConfig_finalize_ex(
        GenericConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GenericConfig_finalize_w_params(
        GenericConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GenericConfig_finalize_optional_members(
        GenericConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GenericConfig_copy(
        GenericConfig* dst,
        const GenericConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* GenericConfig_1318546965_h */
