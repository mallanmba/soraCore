
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HydraSample_1983579152_h
#define HydraSample_1983579152_h

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

class HydraSampleTypeSupport;

class HydraSampleDataWriter;

class HydraSampleDataReader;

struct HydraSampleSeq;

#define rapid_ext_arc_HydraSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 8)
        
extern const char *HydraSampleTYPENAME;
        


#ifdef __cplusplus
    struct HydraSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class HydraSampleTypeSupport;
    class HydraSampleDataWriter;
    class HydraSampleDataReader;
#endif

#endif

            
    
class HydraSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct HydraSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef HydraSampleTypeSupport TypeSupport;
    typedef HydraSampleDataWriter DataWriter;
    typedef HydraSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef HydraSampleTypeSupport TypeSupport;

typedef HydraSampleDataWriter DataWriter;

typedef HydraSampleDataReader DataReader;

typedef HydraSampleSeq Seq;

#endif

typedef HydraSample Type;

    DDS_UnsignedShort  soh;

    DDS_UnsignedShort  sns;

    DDS_UnsignedShort  cds;

    DDS_UnsignedShort  cmr;

     DDS_UnsignedShortSeq  sn;

     DDS_UnsignedShortSeq  cd;

     DDS_UnsignedShortSeq  reading;

    rapid::ValueSequence32  values;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* HydraSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(HydraSampleSeq, HydraSample);
        
NDDSUSERDllExport
RTIBool HydraSample_initialize(
        HydraSample* self);
        
NDDSUSERDllExport
RTIBool HydraSample_initialize_ex(
        HydraSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool HydraSample_initialize_w_params(
        HydraSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void HydraSample_finalize(
        HydraSample* self);
                        
NDDSUSERDllExport
void HydraSample_finalize_ex(
        HydraSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void HydraSample_finalize_w_params(
        HydraSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void HydraSample_finalize_optional_members(
        HydraSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool HydraSample_copy(
        HydraSample* dst,
        const HydraSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* HydraSample_1983579152_h */
