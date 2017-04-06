
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BatteryPackSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BatteryPackSample_1354374548_h
#define BatteryPackSample_1354374548_h

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

#define rapid_ext_arc_Battery_LAST_MEMBER_ID 11
        
extern const char *BatteryTYPENAME;
        


#ifdef __cplusplus
    struct BatterySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BatteryTypeSupport;
    class BatteryDataWriter;
    class BatteryDataReader;
#endif

#endif

            
    
class Battery                                        
{
public:            
#ifdef __cplusplus
    typedef struct BatterySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BatteryTypeSupport TypeSupport;
    typedef BatteryDataWriter DataWriter;
    typedef BatteryDataReader DataReader;
#endif

#endif
    
    DDS_Long  serialNumber;

    DDS_Float  voltage;

    DDS_Float  averageCurrent;

    DDS_Float  temperature;

    DDS_Float  relativeState;

    DDS_Float  absoluteState;

    DDS_Float  remainingCapacity;

    DDS_Float  fullChargeCapacity;

    DDS_LongLong  remainingTime;

    DDS_LongLong  averageRemainingTime;

    DDS_LongLong  averageRemainingChargeTime;

    DDS_Long  numberOfChargeCycles;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Battery_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BatterySeq, Battery);
        
NDDSUSERDllExport
RTIBool Battery_initialize(
        Battery* self);
        
NDDSUSERDllExport
RTIBool Battery_initialize_ex(
        Battery* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Battery_initialize_w_params(
        Battery* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Battery_finalize(
        Battery* self);
                        
NDDSUSERDllExport
void Battery_finalize_ex(
        Battery* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Battery_finalize_w_params(
        Battery* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Battery_finalize_optional_members(
        Battery* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Battery_copy(
        Battery* dst,
        const Battery* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_BatterySlot_LAST_MEMBER_ID 5
        
extern const char *BatterySlotTYPENAME;
        


#ifdef __cplusplus
    struct BatterySlotSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BatterySlotTypeSupport;
    class BatterySlotDataWriter;
    class BatterySlotDataReader;
#endif

#endif

            
    
class BatterySlot                                        
{
public:            
#ifdef __cplusplus
    typedef struct BatterySlotSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BatterySlotTypeSupport TypeSupport;
    typedef BatterySlotDataWriter DataWriter;
    typedef BatterySlotDataReader DataReader;
#endif

#endif
    
    DDS_Boolean  present;

    DDS_Boolean  charging;

    DDS_Boolean  supplyingPower;

    DDS_Boolean  chargePowerPresent;

    DDS_Boolean  powerNoGood;

    DDS_Boolean  chargeInhibited;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatterySlot_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BatterySlotSeq, BatterySlot);
        
NDDSUSERDllExport
RTIBool BatterySlot_initialize(
        BatterySlot* self);
        
NDDSUSERDllExport
RTIBool BatterySlot_initialize_ex(
        BatterySlot* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool BatterySlot_initialize_w_params(
        BatterySlot* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void BatterySlot_finalize(
        BatterySlot* self);
                        
NDDSUSERDllExport
void BatterySlot_finalize_ex(
        BatterySlot* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void BatterySlot_finalize_w_params(
        BatterySlot* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void BatterySlot_finalize_optional_members(
        BatterySlot* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool BatterySlot_copy(
        BatterySlot* dst,
        const BatterySlot* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_BatteryController_LAST_MEMBER_ID 1
        
extern const char *BatteryControllerTYPENAME;
        


#ifdef __cplusplus
    struct BatteryControllerSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BatteryControllerTypeSupport;
    class BatteryControllerDataWriter;
    class BatteryControllerDataReader;
#endif

#endif

            
    
class BatteryController                                        
{
public:            
#ifdef __cplusplus
    typedef struct BatteryControllerSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BatteryControllerTypeSupport TypeSupport;
    typedef BatteryControllerDataWriter DataWriter;
    typedef BatteryControllerDataReader DataReader;
#endif

#endif
    
    rapid::ext::arc::BatterySlot  batterySlots[8];

    rapid::ext::arc::Battery  batteries[8];

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryController_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BatteryControllerSeq, BatteryController);
        
NDDSUSERDllExport
RTIBool BatteryController_initialize(
        BatteryController* self);
        
NDDSUSERDllExport
RTIBool BatteryController_initialize_ex(
        BatteryController* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool BatteryController_initialize_w_params(
        BatteryController* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void BatteryController_finalize(
        BatteryController* self);
                        
NDDSUSERDllExport
void BatteryController_finalize_ex(
        BatteryController* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void BatteryController_finalize_w_params(
        BatteryController* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void BatteryController_finalize_optional_members(
        BatteryController* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool BatteryController_copy(
        BatteryController* dst,
        const BatteryController* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_BatteryControllerSequence16_LAST_MEMBER_ID rapid_ext_arc_BatteryController_LAST_MEMBER_ID
typedef  rapid::ext::arc::BatteryControllerSeq  BatteryControllerSequence16;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryControllerSequence16_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(BatteryControllerSequence16Seq, BatteryControllerSequence16);                                        
            
NDDSUSERDllExport
RTIBool BatteryControllerSequence16_initialize(
        BatteryControllerSequence16* self);
            
NDDSUSERDllExport
RTIBool BatteryControllerSequence16_initialize_ex(
        BatteryControllerSequence16* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool BatteryControllerSequence16_initialize_w_params(
        BatteryControllerSequence16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void BatteryControllerSequence16_finalize(
        BatteryControllerSequence16* self);
            
NDDSUSERDllExport
void BatteryControllerSequence16_finalize_ex(
        BatteryControllerSequence16* self,RTIBool deletePointers);

NDDSUSERDllExport
void BatteryControllerSequence16_finalize_w_params(
        BatteryControllerSequence16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void BatteryControllerSequence16_finalize_optional_members(
        BatteryControllerSequence16* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool BatteryControllerSequence16_copy(
        BatteryControllerSequence16* dst,
        const BatteryControllerSequence16* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


class BatteryPackSampleTypeSupport;

class BatteryPackSampleDataWriter;

class BatteryPackSampleDataReader;

struct BatteryPackSampleSeq;

#define rapid_ext_arc_BatteryPackSample_LAST_MEMBER_ID (rapid_Message_LAST_MEMBER_ID + 4)
        
extern const char *BatteryPackSampleTYPENAME;
        


#ifdef __cplusplus
    struct BatteryPackSampleSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BatteryPackSampleTypeSupport;
    class BatteryPackSampleDataWriter;
    class BatteryPackSampleDataReader;
#endif

#endif

            
    
class BatteryPackSample : public rapid::Message                                        
{
public:            
#ifdef __cplusplus
    typedef struct BatteryPackSampleSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BatteryPackSampleTypeSupport TypeSupport;
    typedef BatteryPackSampleDataWriter DataWriter;
    typedef BatteryPackSampleDataReader DataReader;
#endif

#endif
    
#if RTI_DDS_VERSION_MAJOR < 4 || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR < 5) || (RTI_DDS_VERSION_MAJOR == 4  && RTI_DDS_VERSION_MINOR  == 5 && RTI_DDS_VERSION_RELEASE != 'f' )

typedef BatteryPackSampleTypeSupport TypeSupport;

typedef BatteryPackSampleDataWriter DataWriter;

typedef BatteryPackSampleDataReader DataReader;

typedef BatteryPackSampleSeq Seq;

#endif

typedef BatteryPackSample Type;

    rapid::ext::arc::BatteryControllerSequence16  controllers;

    rapid::String128  message;

    DDS_Short  minutesToEmpty;

    DDS_Short  overallCharge;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BatteryPackSample_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BatteryPackSampleSeq, BatteryPackSample);
        
NDDSUSERDllExport
RTIBool BatteryPackSample_initialize(
        BatteryPackSample* self);
        
NDDSUSERDllExport
RTIBool BatteryPackSample_initialize_ex(
        BatteryPackSample* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool BatteryPackSample_initialize_w_params(
        BatteryPackSample* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void BatteryPackSample_finalize(
        BatteryPackSample* self);
                        
NDDSUSERDllExport
void BatteryPackSample_finalize_ex(
        BatteryPackSample* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void BatteryPackSample_finalize_w_params(
        BatteryPackSample* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void BatteryPackSample_finalize_optional_members(
        BatteryPackSample* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool BatteryPackSample_copy(
        BatteryPackSample* dst,
        const BatteryPackSample* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* BatteryPackSample_1354374548_h */
