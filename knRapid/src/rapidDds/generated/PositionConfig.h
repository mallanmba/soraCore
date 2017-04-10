
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from PositionConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef PositionConfig_1147397490_h
#define PositionConfig_1147397490_h

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

class PositionConfigTypeSupport;

class PositionConfigDataWriter;

class PositionConfigDataReader;

struct PositionConfigSeq;

/** PositionConfig message sets up configuration for PositionSample messages. */

#define rapid_PositionConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *PositionConfigTYPENAME;
        


#ifdef __cplusplus
    struct PositionConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class PositionConfigTypeSupport;
    class PositionConfigDataWriter;
    class PositionConfigDataReader;
#endif

#endif

            
    
class PositionConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct PositionConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef PositionConfigTypeSupport TypeSupport;
    typedef PositionConfigDataWriter DataWriter;
    typedef PositionConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef PositionConfigTypeSupport TypeSupport;

typedef PositionConfigDataWriter DataWriter;

typedef PositionConfigDataReader DataReader;

typedef PositionConfigSeq Seq;

#endif

typedef PositionConfig Type;

/** Denotes the frame that position is given in. This frame should exist in the frame store. */

/** Denotes the frame of the position. This frame should exist in the frame store. */

    rapid::String128  frameName;

/**

 * Specifies the interpretation of the rotation field in PositionSample.pose

 * @see RotationEncoding

 */

    rapid::RotationEncoding  poseEncoding;

/**

 * Specifies the interpretation of the rotation field in PositionSample.velocity

 * @see RotationEncoding

 */

    rapid::RotationEncoding  velocityEncoding;

/** Holds extra Agent-specific information about position samples. */

    rapid::KeyTypeValueSequence64  valueKeys;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PositionConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PositionConfigSeq, PositionConfig);
        
NDDSUSERDllExport
RTIBool PositionConfig_initialize(
        PositionConfig* self);
        
NDDSUSERDllExport
RTIBool PositionConfig_initialize_ex(
        PositionConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PositionConfig_initialize_w_params(
        PositionConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PositionConfig_finalize(
        PositionConfig* self);
                        
NDDSUSERDllExport
void PositionConfig_finalize_ex(
        PositionConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void PositionConfig_finalize_w_params(
        PositionConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void PositionConfig_finalize_optional_members(
        PositionConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool PositionConfig_copy(
        PositionConfig* dst,
        const PositionConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif /* PositionConfig_1147397490_h */
