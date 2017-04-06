
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DlpSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef DlpSample_1024894760_h
#define DlpSample_1024894760_h

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

#define rapid_ext_arc_DlpChannelSample_LAST_MEMBER_ID 2
        
extern const char *DlpChannelSampleTYPENAME;
        


#ifdef __cplusplus
    struct DlpChannelSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DlpChannelSampleTypeSupport;
    class DlpChannelSampleDataWriter;
    class DlpChannelSampleDataReader;
#endif

#endif

            
    
class DlpChannelSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct DlpChannelSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DlpChannelSampleTypeSupport TypeSupport;
    typedef DlpChannelSampleDataWriter DataWriter;
    typedef DlpChannelSampleDataReader DataReader;
#endif

#endif
    
    DDS_Boolean  powered;

    DDS_Float  voltage;

    DDS_Float  current;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpChannelSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DlpChannelSampleSeq, DlpChannelSample);
        
NDDSUSERDllExport
RTIBool DlpChannelSample_initialize(
        DlpChannelSample* self);
        
NDDSUSERDllExport
RTIBool DlpChannelSample_initialize_ex(
        DlpChannelSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DlpChannelSample_initialize_w_params(
        DlpChannelSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DlpChannelSample_finalize(
        DlpChannelSample* self);
                        
NDDSUSERDllExport
void DlpChannelSample_finalize_ex(
        DlpChannelSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DlpChannelSample_finalize_w_params(
        DlpChannelSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DlpChannelSample_finalize_optional_members(
        DlpChannelSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DlpChannelSample_copy(
        DlpChannelSample* dst,
        const DlpChannelSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_DlpBoardSample_LAST_MEMBER_ID 1
        
extern const char *DlpBoardSampleTYPENAME;
        


#ifdef __cplusplus
    struct DlpBoardSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DlpBoardSampleTypeSupport;
    class DlpBoardSampleDataWriter;
    class DlpBoardSampleDataReader;
#endif

#endif

            
    
class DlpBoardSample                                        
{
public:            
#ifdef __cplusplus
    typedef struct DlpBoardSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DlpBoardSampleTypeSupport TypeSupport;
    typedef DlpBoardSampleDataWriter DataWriter;
    typedef DlpBoardSampleDataReader DataReader;
#endif

#endif
    
    rapid::ext::arc::DlpChannelSample  channels[3];

    DDS_Float  temp;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpBoardSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DlpBoardSampleSeq, DlpBoardSample);
        
NDDSUSERDllExport
RTIBool DlpBoardSample_initialize(
        DlpBoardSample* self);
        
NDDSUSERDllExport
RTIBool DlpBoardSample_initialize_ex(
        DlpBoardSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DlpBoardSample_initialize_w_params(
        DlpBoardSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DlpBoardSample_finalize(
        DlpBoardSample* self);
                        
NDDSUSERDllExport
void DlpBoardSample_finalize_ex(
        DlpBoardSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DlpBoardSample_finalize_w_params(
        DlpBoardSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DlpBoardSample_finalize_optional_members(
        DlpBoardSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DlpBoardSample_copy(
        DlpBoardSample* dst,
        const DlpBoardSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_DlpBoardSampleSequence32_LAST_MEMBER_ID rapid_ext_arc_DlpBoardSample_LAST_MEMBER_ID
typedef  rapid::ext::arc::DlpBoardSampleSeq  DlpBoardSampleSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpBoardSampleSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DlpBoardSampleSequence32Seq, DlpBoardSampleSequence32);                                        
            
NDDSUSERDllExport
RTIBool DlpBoardSampleSequence32_initialize(
        DlpBoardSampleSequence32* self);
            
NDDSUSERDllExport
RTIBool DlpBoardSampleSequence32_initialize_ex(
        DlpBoardSampleSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool DlpBoardSampleSequence32_initialize_w_params(
        DlpBoardSampleSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void DlpBoardSampleSequence32_finalize(
        DlpBoardSampleSequence32* self);
            
NDDSUSERDllExport
void DlpBoardSampleSequence32_finalize_ex(
        DlpBoardSampleSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void DlpBoardSampleSequence32_finalize_w_params(
        DlpBoardSampleSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void DlpBoardSampleSequence32_finalize_optional_members(
        DlpBoardSampleSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DlpBoardSampleSequence32_copy(
        DlpBoardSampleSequence32* dst,
        const DlpBoardSampleSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class DlpSampleTypeSupport;

class DlpSampleDataWriter;

class DlpSampleDataReader;

struct DlpSampleSeq;

/**

 * DlpSample message delivers the position of the Agent. Corresponding DlpConfig sets up the

 * coordinate frame and specifies how the Transform3D.rot field is to be interpreted for pose and velocity.

 */

#define rapid_ext_arc_DlpSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *DlpSampleTYPENAME;
        


#ifdef __cplusplus
    struct DlpSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DlpSampleTypeSupport;
    class DlpSampleDataWriter;
    class DlpSampleDataReader;
#endif

#endif

            
    
class DlpSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct DlpSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DlpSampleTypeSupport TypeSupport;
    typedef DlpSampleDataWriter DataWriter;
    typedef DlpSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef DlpSampleTypeSupport TypeSupport;

typedef DlpSampleDataWriter DataWriter;

typedef DlpSampleDataReader DataReader;

typedef DlpSampleSeq Seq;

#endif

typedef DlpSample Type;

    rapid::ext::arc::DlpBoardSampleSequence32  dlpBoards;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DlpSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DlpSampleSeq, DlpSample);
        
NDDSUSERDllExport
RTIBool DlpSample_initialize(
        DlpSample* self);
        
NDDSUSERDllExport
RTIBool DlpSample_initialize_ex(
        DlpSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DlpSample_initialize_w_params(
        DlpSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DlpSample_finalize(
        DlpSample* self);
                        
NDDSUSERDllExport
void DlpSample_finalize_ex(
        DlpSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DlpSample_finalize_w_params(
        DlpSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DlpSample_finalize_optional_members(
        DlpSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DlpSample_copy(
        DlpSample* dst,
        const DlpSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* DlpSample_1024894760_h */
