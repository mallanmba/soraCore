
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GeometryAppearanceState.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GeometryAppearanceState_1340525930_h
#define GeometryAppearanceState_1340525930_h

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

class GeometryAppearanceStateTypeSupport;

class GeometryAppearanceStateDataWriter;

class GeometryAppearanceStateDataReader;

struct GeometryAppearanceStateSeq;

/** TODO: GeometryAppearanceState  */

#define rapid_ext_arc_GeometryAppearanceState_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 9)
        
extern const char *GeometryAppearanceStateTYPENAME;
        


#ifdef __cplusplus
    struct GeometryAppearanceStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GeometryAppearanceStateTypeSupport;
    class GeometryAppearanceStateDataWriter;
    class GeometryAppearanceStateDataReader;
#endif

#endif

            
    
class GeometryAppearanceState : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct GeometryAppearanceStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GeometryAppearanceStateTypeSupport TypeSupport;
    typedef GeometryAppearanceStateDataWriter DataWriter;
    typedef GeometryAppearanceStateDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef GeometryAppearanceStateTypeSupport TypeSupport;

typedef GeometryAppearanceStateDataWriter DataWriter;

typedef GeometryAppearanceStateDataReader DataReader;

typedef GeometryAppearanceStateSeq Seq;

#endif

typedef GeometryAppearanceState Type;

    DDS_Long  geometryId;

    DDS_Boolean  hasMaterial;

    rapid::Color4f  diffuse;

    rapid::Color4f  ambient;

    rapid::Color4f  specular;

    rapid::Color4f  emissive;

    DDS_Float  shininess;

    DDS_Boolean  hasTexture;

    rapid::String128  texImage0Url;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GeometryAppearanceState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GeometryAppearanceStateSeq, GeometryAppearanceState);
        
NDDSUSERDllExport
RTIBool GeometryAppearanceState_initialize(
        GeometryAppearanceState* self);
        
NDDSUSERDllExport
RTIBool GeometryAppearanceState_initialize_ex(
        GeometryAppearanceState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GeometryAppearanceState_initialize_w_params(
        GeometryAppearanceState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GeometryAppearanceState_finalize(
        GeometryAppearanceState* self);
                        
NDDSUSERDllExport
void GeometryAppearanceState_finalize_ex(
        GeometryAppearanceState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GeometryAppearanceState_finalize_w_params(
        GeometryAppearanceState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GeometryAppearanceState_finalize_optional_members(
        GeometryAppearanceState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GeometryAppearanceState_copy(
        GeometryAppearanceState* dst,
        const GeometryAppearanceState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* GeometryAppearanceState_1340525930_h */
