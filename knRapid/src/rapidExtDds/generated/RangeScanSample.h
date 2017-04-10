
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RangeScanSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RangeScanSample_361358178_h
#define RangeScanSample_361358178_h

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

class RangeScanSampleTypeSupport;

class RangeScanSampleDataWriter;

class RangeScanSampleDataReader;

struct RangeScanSampleSeq;

/** Single (or multiple) line range scan. */

#define rapid_ext_RangeScanSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *RangeScanSampleTYPENAME;
        


#ifdef __cplusplus
    struct RangeScanSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class RangeScanSampleTypeSupport;
    class RangeScanSampleDataWriter;
    class RangeScanSampleDataReader;
#endif

#endif

            
    
class RangeScanSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct RangeScanSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef RangeScanSampleTypeSupport TypeSupport;
    typedef RangeScanSampleDataWriter DataWriter;
    typedef RangeScanSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef RangeScanSampleTypeSupport TypeSupport;

typedef RangeScanSampleDataWriter DataWriter;

typedef RangeScanSampleDataReader DataReader;

typedef RangeScanSampleSeq Seq;

#endif

typedef RangeScanSample Type;

/**

 * Horizontal shot angles of samples in a scan-line for those sensors

 * that have <b>dynamic</b> horizontal spacing. For sensors with static horizontal

 * spacing, this sequence will be empty and the corresponding member in

 * RangeScanConfig will be used.

 */

    rapid::ShortSequence64  scanAzimuth;

/**

 * Vertical shot angles of samples for those sensors that have <b>dynamic<b>

 * vertical spacing between scan lines. For sensors with static vertical

 * spacing, this sequence will be empty and the corresponding member in

 * RangeScanConfig will be used.

 */

    rapid::ShortSequence64  scanElevation;

/** Vector of 16 bit data samples. */

    rapid::ShortSequence2K  rangeData;

    rapid::OctetSequence2K  intensityData;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RangeScanSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RangeScanSampleSeq, RangeScanSample);
        
NDDSUSERDllExport
RTIBool RangeScanSample_initialize(
        RangeScanSample* self);
        
NDDSUSERDllExport
RTIBool RangeScanSample_initialize_ex(
        RangeScanSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RangeScanSample_initialize_w_params(
        RangeScanSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RangeScanSample_finalize(
        RangeScanSample* self);
                        
NDDSUSERDllExport
void RangeScanSample_finalize_ex(
        RangeScanSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void RangeScanSample_finalize_w_params(
        RangeScanSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void RangeScanSample_finalize_optional_members(
        RangeScanSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool RangeScanSample_copy(
        RangeScanSample* dst,
        const RangeScanSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* RangeScanSample_361358178_h */
