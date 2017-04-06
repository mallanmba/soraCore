
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GpsConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GpsConfig_253487379_h
#define GpsConfig_253487379_h

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

class GpsConfigTypeSupport;

class GpsConfigDataWriter;

class GpsConfigDataReader;

struct GpsConfigSeq;

#define rapid_ext_arc_GpsConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *GpsConfigTYPENAME;
        


#ifdef __cplusplus
    struct GpsConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GpsConfigTypeSupport;
    class GpsConfigDataWriter;
    class GpsConfigDataReader;
#endif

#endif

            
    
class GpsConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct GpsConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GpsConfigTypeSupport TypeSupport;
    typedef GpsConfigDataWriter DataWriter;
    typedef GpsConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef GpsConfigTypeSupport TypeSupport;

typedef GpsConfigDataWriter DataWriter;

typedef GpsConfigDataReader DataReader;

typedef GpsConfigSeq Seq;

#endif

typedef GpsConfig Type;

    rapid::String32  sensorFrame;

    rapid::String32  referenceFrame;

/** datum used for coordinates, e.g. WGS-84. Name must match reference ellipsoids in irgUtmll for dimension lookup*/

    rapid::String16  datum;

/** datum used to calculate Mean Sea Level, e.g. EGM-96, NAVD-88 */

    rapid::String16  undulationDatum;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GpsConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GpsConfigSeq, GpsConfig);
        
NDDSUSERDllExport
RTIBool GpsConfig_initialize(
        GpsConfig* self);
        
NDDSUSERDllExport
RTIBool GpsConfig_initialize_ex(
        GpsConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GpsConfig_initialize_w_params(
        GpsConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GpsConfig_finalize(
        GpsConfig* self);
                        
NDDSUSERDllExport
void GpsConfig_finalize_ex(
        GpsConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GpsConfig_finalize_w_params(
        GpsConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GpsConfig_finalize_optional_members(
        GpsConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GpsConfig_copy(
        GpsConfig* dst,
        const GpsConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* GpsConfig_253487379_h */
