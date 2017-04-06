
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FrameStoreConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FrameStoreConfig_2002790448_h
#define FrameStoreConfig_2002790448_h

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

/** Frame Definition */

#define rapid_FrameDef_LAST_MEMBER_ID 3
        
extern const char *FrameDefTYPENAME;
        


#ifdef __cplusplus
    struct FrameDefSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FrameDefTypeSupport;
    class FrameDefDataWriter;
    class FrameDefDataReader;
#endif

#endif

            
    
class FrameDef                                        
{
public:            
#ifdef __cplusplus
    typedef struct FrameDefSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FrameDefTypeSupport TypeSupport;
    typedef FrameDefDataWriter DataWriter;
    typedef FrameDefDataReader DataReader;
#endif

#endif
    
/** The name of the frame. */

    rapid::String32  name;

/**

 * The name of the parent frame. This can contain a (partial) path to ensure uniqueness. An empty

 * parent name denotes a root frame. The C++ implementation will always put the fully qualified path in

 * there for starters.

 */

    rapid::String256  parent;

/**

 * The coordinate frame transform. For frames updated by telemetry (...Sample messages), this does not

 * change with updates of the acutal value, but only contains the start configuration.

 */

    rapid::Transform3D  transform;

/** Sequence of extra values stored with the frame, such as lat/lon for UTM-grid frames. */

    rapid::KeyTypeValueSequence8  extras;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FrameDef_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FrameDefSeq, FrameDef);
        
NDDSUSERDllExport
RTIBool FrameDef_initialize(
        FrameDef* self);
        
NDDSUSERDllExport
RTIBool FrameDef_initialize_ex(
        FrameDef* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FrameDef_initialize_w_params(
        FrameDef* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FrameDef_finalize(
        FrameDef* self);
                        
NDDSUSERDllExport
void FrameDef_finalize_ex(
        FrameDef* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FrameDef_finalize_w_params(
        FrameDef* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FrameDef_finalize_optional_members(
        FrameDef* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FrameDef_copy(
        FrameDef* dst,
        const FrameDef* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


/**

 * A sequence of frame definitions. The frames are presented in depth-first pre-order. That is, any parent

 * field of a FrameDefSequence entry denotes a frame with a smaller index in the sequence than the entry

 * has.

 */


#define rapid_FrameDefSequence_LAST_MEMBER_ID rapid_FrameDef_LAST_MEMBER_ID
typedef  rapid::FrameDefSeq  FrameDefSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FrameDefSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(FrameDefSequenceSeq, FrameDefSequence);                                        
            
NDDSUSERDllExport
RTIBool FrameDefSequence_initialize(
        FrameDefSequence* self);
            
NDDSUSERDllExport
RTIBool FrameDefSequence_initialize_ex(
        FrameDefSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FrameDefSequence_initialize_w_params(
        FrameDefSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void FrameDefSequence_finalize(
        FrameDefSequence* self);
            
NDDSUSERDllExport
void FrameDefSequence_finalize_ex(
        FrameDefSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void FrameDefSequence_finalize_w_params(
        FrameDefSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FrameDefSequence_finalize_optional_members(
        FrameDefSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool FrameDefSequence_copy(
        FrameDefSequence* dst,
        const FrameDefSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class FrameStoreConfigTypeSupport;

class FrameStoreConfigDataWriter;

class FrameStoreConfigDataReader;

struct FrameStoreConfigSeq;

/**

 * FrameConfig

 */

#define rapid_FrameStoreConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 1)
        
extern const char *FrameStoreConfigTYPENAME;
        


#ifdef __cplusplus
    struct FrameStoreConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FrameStoreConfigTypeSupport;
    class FrameStoreConfigDataWriter;
    class FrameStoreConfigDataReader;
#endif

#endif

            
    
class FrameStoreConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct FrameStoreConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FrameStoreConfigTypeSupport TypeSupport;
    typedef FrameStoreConfigDataWriter DataWriter;
    typedef FrameStoreConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef FrameStoreConfigTypeSupport TypeSupport;

typedef FrameStoreConfigDataWriter DataWriter;

typedef FrameStoreConfigDataReader DataReader;

typedef FrameStoreConfigSeq Seq;

#endif

typedef FrameStoreConfig Type;

    rapid::FrameDefSequence  frames;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FrameStoreConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FrameStoreConfigSeq, FrameStoreConfig);
        
NDDSUSERDllExport
RTIBool FrameStoreConfig_initialize(
        FrameStoreConfig* self);
        
NDDSUSERDllExport
RTIBool FrameStoreConfig_initialize_ex(
        FrameStoreConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool FrameStoreConfig_initialize_w_params(
        FrameStoreConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void FrameStoreConfig_finalize(
        FrameStoreConfig* self);
                        
NDDSUSERDllExport
void FrameStoreConfig_finalize_ex(
        FrameStoreConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void FrameStoreConfig_finalize_w_params(
        FrameStoreConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void FrameStoreConfig_finalize_optional_members(
        FrameStoreConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool FrameStoreConfig_copy(
        FrameStoreConfig* dst,
        const FrameStoreConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* FrameStoreConfig_2002790448_h */
