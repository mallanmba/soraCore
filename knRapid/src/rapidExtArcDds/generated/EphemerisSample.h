
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EphemerisSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EphemerisSample_1366671838_h
#define EphemerisSample_1366671838_h

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

class EphemerisSampleTypeSupport;

class EphemerisSampleDataWriter;

class EphemerisSampleDataReader;

struct EphemerisSampleSeq;

#define rapid_ext_arc_EphemerisSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 5)
        
extern const char *EphemerisSampleTYPENAME;
        


#ifdef __cplusplus
    struct EphemerisSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class EphemerisSampleTypeSupport;
    class EphemerisSampleDataWriter;
    class EphemerisSampleDataReader;
#endif

#endif

            
    
class EphemerisSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct EphemerisSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EphemerisSampleTypeSupport TypeSupport;
    typedef EphemerisSampleDataWriter DataWriter;
    typedef EphemerisSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef EphemerisSampleTypeSupport TypeSupport;

typedef EphemerisSampleDataWriter DataWriter;

typedef EphemerisSampleDataReader DataReader;

typedef EphemerisSampleSeq Seq;

#endif

typedef EphemerisSample Type;

    DDS_Long  configIdx;

    DDS_LongLong  solutionTime;

    DDS_Double  lat;

    DDS_Double  lon;

    rapid::Vec3f  vec;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EphemerisSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EphemerisSampleSeq, EphemerisSample);
        
NDDSUSERDllExport
RTIBool EphemerisSample_initialize(
        EphemerisSample* self);
        
NDDSUSERDllExport
RTIBool EphemerisSample_initialize_ex(
        EphemerisSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EphemerisSample_initialize_w_params(
        EphemerisSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EphemerisSample_finalize(
        EphemerisSample* self);
                        
NDDSUSERDllExport
void EphemerisSample_finalize_ex(
        EphemerisSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void EphemerisSample_finalize_w_params(
        EphemerisSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void EphemerisSample_finalize_optional_members(
        EphemerisSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool EphemerisSample_copy(
        EphemerisSample* dst,
        const EphemerisSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* EphemerisSample_1366671838_h */
