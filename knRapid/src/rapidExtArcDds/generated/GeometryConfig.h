
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GeometryConfig_227136281_h
#define GeometryConfig_227136281_h

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

class GeometryConfigTypeSupport;

class GeometryConfigDataWriter;

class GeometryConfigDataReader;

struct GeometryConfigSeq;

/** GeometryConfig  */

#define rapid_ext_arc_GeometryConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *GeometryConfigTYPENAME;
        


#ifdef __cplusplus
    struct GeometryConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GeometryConfigTypeSupport;
    class GeometryConfigDataWriter;
    class GeometryConfigDataReader;
#endif

#endif

            
    
class GeometryConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct GeometryConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GeometryConfigTypeSupport TypeSupport;
    typedef GeometryConfigDataWriter DataWriter;
    typedef GeometryConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef GeometryConfigTypeSupport TypeSupport;

typedef GeometryConfigDataWriter DataWriter;

typedef GeometryConfigDataReader DataReader;

typedef GeometryConfigSeq Seq;

#endif

typedef GeometryConfig Type;

/** each distinct geometry must have a unique identifier */

    DDS_Long  geometryId;

    rapid::String128  geometryName;

/** reference frame for geometry - must be a valid FrameStore */

    rapid::String32  refFrame;

    rapid::KeyTypeValueSequence16  metaData;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GeometryConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GeometryConfigSeq, GeometryConfig);
        
NDDSUSERDllExport
RTIBool GeometryConfig_initialize(
        GeometryConfig* self);
        
NDDSUSERDllExport
RTIBool GeometryConfig_initialize_ex(
        GeometryConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GeometryConfig_initialize_w_params(
        GeometryConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GeometryConfig_finalize(
        GeometryConfig* self);
                        
NDDSUSERDllExport
void GeometryConfig_finalize_ex(
        GeometryConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GeometryConfig_finalize_w_params(
        GeometryConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GeometryConfig_finalize_optional_members(
        GeometryConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GeometryConfig_copy(
        GeometryConfig* dst,
        const GeometryConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* GeometryConfig_227136281_h */
