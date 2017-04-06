
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HydraConfig_1295220390_h
#define HydraConfig_1295220390_h

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

class HydraConfigTypeSupport;

class HydraConfigDataWriter;

class HydraConfigDataReader;

struct HydraConfigSeq;

#define rapid_ext_arc_HydraConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *HydraConfigTYPENAME;
        


#ifdef __cplusplus
    struct HydraConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class HydraConfigTypeSupport;
    class HydraConfigDataWriter;
    class HydraConfigDataReader;
#endif

#endif

            
    
class HydraConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct HydraConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef HydraConfigTypeSupport TypeSupport;
    typedef HydraConfigDataWriter DataWriter;
    typedef HydraConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef HydraConfigTypeSupport TypeSupport;

typedef HydraConfigDataWriter DataWriter;

typedef HydraConfigDataReader DataReader;

typedef HydraConfigSeq Seq;

#endif

typedef HydraConfig Type;

/** Specifies name of instrument */

    rapid::String32  name;

/** Specifies any additional metaData */

    rapid::KeyTypeValueSequence32  valueKeys;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* HydraConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(HydraConfigSeq, HydraConfig);
        
NDDSUSERDllExport
RTIBool HydraConfig_initialize(
        HydraConfig* self);
        
NDDSUSERDllExport
RTIBool HydraConfig_initialize_ex(
        HydraConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool HydraConfig_initialize_w_params(
        HydraConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void HydraConfig_finalize(
        HydraConfig* self);
                        
NDDSUSERDllExport
void HydraConfig_finalize_ex(
        HydraConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void HydraConfig_finalize_w_params(
        HydraConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void HydraConfig_finalize_optional_members(
        HydraConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool HydraConfig_copy(
        HydraConfig* dst,
        const HydraConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* HydraConfig_1295220390_h */
