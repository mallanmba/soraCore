
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BatteryPackConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BatteryPackConfig_666013808_h
#define BatteryPackConfig_666013808_h

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


#include "Message.h"


namespace rapid{

namespace ext{

namespace arc{

class BatteryPackConfigTypeSupport;

class BatteryPackConfigDataWriter;

class BatteryPackConfigDataReader;

struct BatteryPackConfigSeq;

#define rapid_ext_arc_BatteryPackConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *BatteryPackConfigTYPENAME;
        


#ifdef __cplusplus
    struct BatteryPackConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BatteryPackConfigTypeSupport;
    class BatteryPackConfigDataWriter;
    class BatteryPackConfigDataReader;
#endif

#endif

            
    
class BatteryPackConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct BatteryPackConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BatteryPackConfigTypeSupport TypeSupport;
    typedef BatteryPackConfigDataWriter DataWriter;
    typedef BatteryPackConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef BatteryPackConfigTypeSupport TypeSupport;

typedef BatteryPackConfigDataWriter DataWriter;

typedef BatteryPackConfigDataReader DataReader;

typedef BatteryPackConfigSeq Seq;

#endif

typedef BatteryPackConfig Type;

    rapid::String32Sequence16  controllerNames;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryPackConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BatteryPackConfigSeq, BatteryPackConfig);
        
NDDSUSERDllExport
RTIBool BatteryPackConfig_initialize(
        BatteryPackConfig* self);
        
NDDSUSERDllExport
RTIBool BatteryPackConfig_initialize_ex(
        BatteryPackConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool BatteryPackConfig_initialize_w_params(
        BatteryPackConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void BatteryPackConfig_finalize(
        BatteryPackConfig* self);
                        
NDDSUSERDllExport
void BatteryPackConfig_finalize_ex(
        BatteryPackConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void BatteryPackConfig_finalize_w_params(
        BatteryPackConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void BatteryPackConfig_finalize_optional_members(
        BatteryPackConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool BatteryPackConfig_copy(
        BatteryPackConfig* dst,
        const BatteryPackConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* BatteryPackConfig_666013808_h */
