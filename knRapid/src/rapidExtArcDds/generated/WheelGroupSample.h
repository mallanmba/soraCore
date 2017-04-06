
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from WheelGroupSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef WheelGroupSample_498487715_h
#define WheelGroupSample_498487715_h

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
 
typedef enum CtrlMode
{
    CTRL_POSITION,
    CTRL_TRAPECOID,
    CTRL_TRAJECTORY,
    CTRL_HOLD,
    CTRL_OFF
} CtrlMode;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CtrlMode_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CtrlModeSeq, CtrlMode);
        
NDDSUSERDllExport
RTIBool CtrlMode_initialize(
        CtrlMode* self);
        
NDDSUSERDllExport
RTIBool CtrlMode_initialize_ex(
        CtrlMode* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CtrlMode_initialize_w_params(
        CtrlMode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CtrlMode_finalize(
        CtrlMode* self);
                        
NDDSUSERDllExport
void CtrlMode_finalize_ex(
        CtrlMode* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void CtrlMode_finalize_w_params(
        CtrlMode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void CtrlMode_finalize_optional_members(
        CtrlMode* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool CtrlMode_copy(
        CtrlMode* dst,
        const CtrlMode* src);


NDDSUSERDllExport
RTIBool CtrlMode_getValues(CtrlModeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum PositionMode
{
    POS_ABS,
    POS_REL,
    POS_NA
} PositionMode;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PositionMode_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PositionModeSeq, PositionMode);
        
NDDSUSERDllExport
RTIBool PositionMode_initialize(
        PositionMode* self);
        
NDDSUSERDllExport
RTIBool PositionMode_initialize_ex(
        PositionMode* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PositionMode_initialize_w_params(
        PositionMode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PositionMode_finalize(
        PositionMode* self);
                        
NDDSUSERDllExport
void PositionMode_finalize_ex(
        PositionMode* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void PositionMode_finalize_w_params(
        PositionMode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void PositionMode_finalize_optional_members(
        PositionMode* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool PositionMode_copy(
        PositionMode* dst,
        const PositionMode* src);


NDDSUSERDllExport
RTIBool PositionMode_getValues(PositionModeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_MotorProfile_LAST_MEMBER_ID 4
        
extern const char *MotorProfileTYPENAME;
        


#ifdef __cplusplus
    struct MotorProfileSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MotorProfileTypeSupport;
    class MotorProfileDataWriter;
    class MotorProfileDataReader;
#endif

#endif

            
    
class MotorProfile                                        
{
public:            
#ifdef __cplusplus
    typedef struct MotorProfileSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MotorProfileTypeSupport TypeSupport;
    typedef MotorProfileDataWriter DataWriter;
    typedef MotorProfileDataReader DataReader;
#endif

#endif
    
    rapid::ext::arc::CtrlMode  ctrlMode;

    rapid::ext::arc::PositionMode  posMode;

    DDS_Double  position;

    DDS_Float  speed;

    DDS_Float  acc;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MotorProfile_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MotorProfileSeq, MotorProfile);
        
NDDSUSERDllExport
RTIBool MotorProfile_initialize(
        MotorProfile* self);
        
NDDSUSERDllExport
RTIBool MotorProfile_initialize_ex(
        MotorProfile* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MotorProfile_initialize_w_params(
        MotorProfile* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MotorProfile_finalize(
        MotorProfile* self);
                        
NDDSUSERDllExport
void MotorProfile_finalize_ex(
        MotorProfile* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MotorProfile_finalize_w_params(
        MotorProfile* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MotorProfile_finalize_optional_members(
        MotorProfile* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MotorProfile_copy(
        MotorProfile* dst,
        const MotorProfile* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_MotorState_LAST_MEMBER_ID 2
        
extern const char *MotorStateTYPENAME;
        


#ifdef __cplusplus
    struct MotorStateSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MotorStateTypeSupport;
    class MotorStateDataWriter;
    class MotorStateDataReader;
#endif

#endif

            
    
class MotorState                                        
{
public:            
#ifdef __cplusplus
    typedef struct MotorStateSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MotorStateTypeSupport TypeSupport;
    typedef MotorStateDataWriter DataWriter;
    typedef MotorStateDataReader DataReader;
#endif

#endif
    
    rapid::ext::arc::MotorProfile  cmd;

    DDS_Double  position;

    DDS_Float  speed;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MotorState_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MotorStateSeq, MotorState);
        
NDDSUSERDllExport
RTIBool MotorState_initialize(
        MotorState* self);
        
NDDSUSERDllExport
RTIBool MotorState_initialize_ex(
        MotorState* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MotorState_initialize_w_params(
        MotorState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MotorState_finalize(
        MotorState* self);
                        
NDDSUSERDllExport
void MotorState_finalize_ex(
        MotorState* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MotorState_finalize_w_params(
        MotorState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MotorState_finalize_optional_members(
        MotorState* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MotorState_copy(
        MotorState* dst,
        const MotorState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_MotorStateSequence32_LAST_MEMBER_ID rapid_ext_arc_MotorState_LAST_MEMBER_ID
typedef  rapid::ext::arc::MotorStateSeq  MotorStateSequence32;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MotorStateSequence32_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(MotorStateSequence32Seq, MotorStateSequence32);                                        
            
NDDSUSERDllExport
RTIBool MotorStateSequence32_initialize(
        MotorStateSequence32* self);
            
NDDSUSERDllExport
RTIBool MotorStateSequence32_initialize_ex(
        MotorStateSequence32* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool MotorStateSequence32_initialize_w_params(
        MotorStateSequence32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void MotorStateSequence32_finalize(
        MotorStateSequence32* self);
            
NDDSUSERDllExport
void MotorStateSequence32_finalize_ex(
        MotorStateSequence32* self,RTIBool deletePointers);

NDDSUSERDllExport
void MotorStateSequence32_finalize_w_params(
        MotorStateSequence32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void MotorStateSequence32_finalize_optional_members(
        MotorStateSequence32* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool MotorStateSequence32_copy(
        MotorStateSequence32* dst,
        const MotorStateSequence32* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_WheelGroupSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 15)
        
extern const char *WheelGroupSampleTYPENAME;
        


#ifdef __cplusplus
    struct WheelGroupSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class WheelGroupSampleTypeSupport;
    class WheelGroupSampleDataWriter;
    class WheelGroupSampleDataReader;
#endif

#endif

            
    
class WheelGroupSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct WheelGroupSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef WheelGroupSampleTypeSupport TypeSupport;
    typedef WheelGroupSampleDataWriter DataWriter;
    typedef WheelGroupSampleDataReader DataReader;
#endif

#endif
    
typedef WheelGroupSample Type;

    DDS_LongLong  targetTime;

    DDS_Float  curvature;

    DDS_Float  curvatureRate;

    DDS_Float  speed;

    DDS_Float  crabAngle;

    DDS_Float  crabRate;

    DDS_Float  targetCurvature;

    DDS_Float  targetCurvatureRate;

    DDS_Float  targetCrabRate;

    DDS_Float  targetSpeed;

    DDS_Float  targetCrabAngle;

    rapid::ext::arc::MotorStateSequence32  motors;

    rapid::LongSequence32  motorStatus;

    rapid::FloatSequence32  currents;

    rapid::FloatSequence32  temperatures;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* WheelGroupSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(WheelGroupSampleSeq, WheelGroupSample);
        
NDDSUSERDllExport
RTIBool WheelGroupSample_initialize(
        WheelGroupSample* self);
        
NDDSUSERDllExport
RTIBool WheelGroupSample_initialize_ex(
        WheelGroupSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool WheelGroupSample_initialize_w_params(
        WheelGroupSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void WheelGroupSample_finalize(
        WheelGroupSample* self);
                        
NDDSUSERDllExport
void WheelGroupSample_finalize_ex(
        WheelGroupSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void WheelGroupSample_finalize_w_params(
        WheelGroupSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void WheelGroupSample_finalize_optional_members(
        WheelGroupSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool WheelGroupSample_copy(
        WheelGroupSample* dst,
        const WheelGroupSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* WheelGroupSample_498487715_h */
