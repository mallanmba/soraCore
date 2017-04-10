
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Float32Sample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Float32Sample_220235351_h
#define Float32Sample_220235351_h

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

class Float32SampleTypeSupport;

class Float32SampleDataWriter;

class Float32SampleDataReader;

struct Float32SampleSeq;

/**

 * Float32Sample message delivers the position of the Agent. Corresponding Float32Config sets up the

 * coordinate frame and specifies how the Transform3D.rot field is to be interpreted for pose and velocity.

 */

#define rapid_ext_arc_Float32Sample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *Float32SampleTYPENAME;
        


#ifdef __cplusplus
    struct Float32SampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Float32SampleTypeSupport;
    class Float32SampleDataWriter;
    class Float32SampleDataReader;
#endif

#endif

            
    
class Float32Sample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct Float32SampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Float32SampleTypeSupport TypeSupport;
    typedef Float32SampleDataWriter DataWriter;
    typedef Float32SampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef Float32SampleTypeSupport TypeSupport;

typedef Float32SampleDataWriter DataWriter;

typedef Float32SampleDataReader DataReader;

typedef Float32SampleSeq Seq;

#endif

typedef Float32Sample Type;

    rapid::FloatSequence32  data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Float32Sample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Float32SampleSeq, Float32Sample);
        
NDDSUSERDllExport
RTIBool Float32Sample_initialize(
        Float32Sample* self);
        
NDDSUSERDllExport
RTIBool Float32Sample_initialize_ex(
        Float32Sample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Float32Sample_initialize_w_params(
        Float32Sample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Float32Sample_finalize(
        Float32Sample* self);
                        
NDDSUSERDllExport
void Float32Sample_finalize_ex(
        Float32Sample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Float32Sample_finalize_w_params(
        Float32Sample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Float32Sample_finalize_optional_members(
        Float32Sample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Float32Sample_copy(
        Float32Sample* dst,
        const Float32Sample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* Float32Sample_220235351_h */
