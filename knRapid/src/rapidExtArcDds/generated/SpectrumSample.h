
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SpectrumSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SpectrumSample_1145706081_h
#define SpectrumSample_1145706081_h

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

class SpectrumSampleTypeSupport;

class SpectrumSampleDataWriter;

class SpectrumSampleDataReader;

struct SpectrumSampleSeq;

#define rapid_ext_arc_SpectrumSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 2)
        
extern const char *SpectrumSampleTYPENAME;
        


#ifdef __cplusplus
    struct SpectrumSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SpectrumSampleTypeSupport;
    class SpectrumSampleDataWriter;
    class SpectrumSampleDataReader;
#endif

#endif

            
    
class SpectrumSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct SpectrumSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SpectrumSampleTypeSupport TypeSupport;
    typedef SpectrumSampleDataWriter DataWriter;
    typedef SpectrumSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef SpectrumSampleTypeSupport TypeSupport;

typedef SpectrumSampleDataWriter DataWriter;

typedef SpectrumSampleDataReader DataReader;

typedef SpectrumSampleSeq Seq;

#endif

typedef SpectrumSample Type;

/** Spectrum Data, specify name and index range in SpectrumConfig.spectrumNameRange use each element as the bin */

    rapid::LongSequence1K  spectrumData;

/** Specifies any spectrum instrument specific information */

    rapid::ValueSequence64  values;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SpectrumSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SpectrumSampleSeq, SpectrumSample);
        
NDDSUSERDllExport
RTIBool SpectrumSample_initialize(
        SpectrumSample* self);
        
NDDSUSERDllExport
RTIBool SpectrumSample_initialize_ex(
        SpectrumSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SpectrumSample_initialize_w_params(
        SpectrumSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SpectrumSample_finalize(
        SpectrumSample* self);
                        
NDDSUSERDllExport
void SpectrumSample_finalize_ex(
        SpectrumSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SpectrumSample_finalize_w_params(
        SpectrumSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SpectrumSample_finalize_optional_members(
        SpectrumSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SpectrumSample_copy(
        SpectrumSample* dst,
        const SpectrumSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* SpectrumSample_1145706081_h */
