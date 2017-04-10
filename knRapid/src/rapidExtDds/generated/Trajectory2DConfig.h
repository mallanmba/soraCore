
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory2DConfig.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory2DConfig_1630800299_h
#define Trajectory2DConfig_1630800299_h

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


#include "BaseTypes.h"


namespace rapid{

namespace ext{

/**

 * Specifies how to interpret the sequence of transforms

 * <ul>

 *   <li>RTRANS2D_RELATIVE_TO_ORIGIN: transforms are all offsets from the origin

 *   <li>RTRANS2D_RELATIVE_TO_PREVIOUS: transform is relative to the previous transform; the first transform is relative to the origin

 * </ul>

 */
 
typedef enum RTrans2DInterpretation
{
    RTRANS2D_RELATIVE_TO_ORIGIN,
    RTRANS2D_RELATIVE_TO_PREVIOUS
} RTrans2DInterpretation;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RTrans2DInterpretation_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RTrans2DInterpretationSeq, RTrans2DInterpretation);
        
NDDSUSERDllExport
RTIBool RTrans2DInterpretation_initialize(
        RTrans2DInterpretation* self);
        
NDDSUSERDllExport
RTIBool RTrans2DInterpretation_initialize_ex(
        RTrans2DInterpretation* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RTrans2DInterpretation_initialize_w_params(
        RTrans2DInterpretation* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RTrans2DInterpretation_finalize(
        RTrans2DInterpretation* self);
                        
NDDSUSERDllExport
void RTrans2DInterpretation_finalize_ex(
        RTrans2DInterpretation* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void RTrans2DInterpretation_finalize_w_params(
        RTrans2DInterpretation* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTrans2DInterpretation_finalize_optional_members(
        RTrans2DInterpretation* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool RTrans2DInterpretation_copy(
        RTrans2DInterpretation* dst,
        const RTrans2DInterpretation* src);


NDDSUSERDllExport
RTIBool RTrans2DInterpretation_getValues(RTrans2DInterpretationSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class Trajectory2DConfigTypeSupport;

class Trajectory2DConfigDataWriter;

class Trajectory2DConfigDataReader;

struct Trajectory2DConfigSeq;

#define rapid_ext_Trajectory2DConfig_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *Trajectory2DConfigTYPENAME;
        


#ifdef __cplusplus
    struct Trajectory2DConfigSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Trajectory2DConfigTypeSupport;
    class Trajectory2DConfigDataWriter;
    class Trajectory2DConfigDataReader;
#endif

#endif

            
    
class Trajectory2DConfig : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct Trajectory2DConfigSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Trajectory2DConfigTypeSupport TypeSupport;
    typedef Trajectory2DConfigDataWriter DataWriter;
    typedef Trajectory2DConfigDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef Trajectory2DConfigTypeSupport TypeSupport;

typedef Trajectory2DConfigDataWriter DataWriter;

typedef Trajectory2DConfigDataReader DataReader;

typedef Trajectory2DConfigSeq Seq;

#endif

typedef Trajectory2DConfig Type;

/** Denotes the frame the pose is given in. This frame should exist in the frame store. */

    rapid::String128  referenceFrame;

/** Interpretation of trajectory transforms - either relative to origin, or relative to previous */

    rapid::ext::RTrans2DInterpretation  trajectoryInterp;

/**

 * The sampling interval for the trajectory sequence in microsec. Typically 0.1s.

 * If the trajectory is not time sampled, this field should be set to 0

 */

    DDS_LongLong  samplingInterval;

/**

 * keys describing the fields in the trajectory RTransMetaSequence

 */

    rapid::KeyTypeSequence4  trajectoryMetaKeys;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Trajectory2DConfig_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Trajectory2DConfigSeq, Trajectory2DConfig);
        
NDDSUSERDllExport
RTIBool Trajectory2DConfig_initialize(
        Trajectory2DConfig* self);
        
NDDSUSERDllExport
RTIBool Trajectory2DConfig_initialize_ex(
        Trajectory2DConfig* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Trajectory2DConfig_initialize_w_params(
        Trajectory2DConfig* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Trajectory2DConfig_finalize(
        Trajectory2DConfig* self);
                        
NDDSUSERDllExport
void Trajectory2DConfig_finalize_ex(
        Trajectory2DConfig* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Trajectory2DConfig_finalize_w_params(
        Trajectory2DConfig* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Trajectory2DConfig_finalize_optional_members(
        Trajectory2DConfig* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Trajectory2DConfig_copy(
        Trajectory2DConfig* dst,
        const Trajectory2DConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif /* Trajectory2DConfig_1630800299_h */
