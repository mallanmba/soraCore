
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from GpsSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef GpsSample_434874120_h
#define GpsSample_434874120_h

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

class GpsSampleTypeSupport;

class GpsSampleDataWriter;

class GpsSampleDataReader;

struct GpsSampleSeq;

#define rapid_ext_arc_GpsSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 9)
        
extern const char *GpsSampleTYPENAME;
        


#ifdef __cplusplus
    struct GpsSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GpsSampleTypeSupport;
    class GpsSampleDataWriter;
    class GpsSampleDataReader;
#endif

#endif

            
    
class GpsSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct GpsSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GpsSampleTypeSupport TypeSupport;
    typedef GpsSampleDataWriter DataWriter;
    typedef GpsSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef GpsSampleTypeSupport TypeSupport;

typedef GpsSampleDataWriter DataWriter;

typedef GpsSampleDataReader DataReader;

typedef GpsSampleSeq Seq;

#endif

typedef GpsSample Type;

/** The coordinates of the receiver in meters*/

/** xyz is in NEU coordinates, z is ellipsoidal height*/

    rapid::Vec3d  xyz;

    rapid::Vec3d  sigmaXyz;

    DDS_Octet  utmZone;

    DDS_Char  utmDesig;

    DDS_Octet  mode;

    DDS_Octet  numSats;

    DDS_LongLong  diffAge;

    DDS_LongLong  solAge;

/** mean sea level(orthometric height) = z(ellipsoidal height) - undulation (geoid height)*/

    DDS_Float  undulation;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GpsSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GpsSampleSeq, GpsSample);
        
NDDSUSERDllExport
RTIBool GpsSample_initialize(
        GpsSample* self);
        
NDDSUSERDllExport
RTIBool GpsSample_initialize_ex(
        GpsSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GpsSample_initialize_w_params(
        GpsSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GpsSample_finalize(
        GpsSample* self);
                        
NDDSUSERDllExport
void GpsSample_finalize_ex(
        GpsSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GpsSample_finalize_w_params(
        GpsSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GpsSample_finalize_optional_members(
        GpsSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GpsSample_copy(
        GpsSample* dst,
        const GpsSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* GpsSample_434874120_h */
