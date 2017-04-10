
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Trajectory3D.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Trajectory3D_1790257475_h
#define Trajectory3D_1790257475_h

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


namespace rapid{

namespace ext{

namespace arc{

/**

 * pose rotation is assumed to be quaternion

 */

#define rapid_ext_arc_TrajPoint3D_LAST_MEMBER_ID 0
        
extern const char *TrajPoint3DTYPENAME;
        


#ifdef __cplusplus
    struct TrajPoint3DSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TrajPoint3DTypeSupport;
    class TrajPoint3DDataWriter;
    class TrajPoint3DDataReader;
#endif

#endif

            
    
class TrajPoint3D                                        
{
public:            
#ifdef __cplusplus
    typedef struct TrajPoint3DSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TrajPoint3DTypeSupport TypeSupport;
    typedef TrajPoint3DDataWriter DataWriter;
    typedef TrajPoint3DDataReader DataReader;
#endif

#endif
    
    rapid::Transform3D  pose;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TrajPoint3D_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TrajPoint3DSeq, TrajPoint3D);
        
NDDSUSERDllExport
RTIBool TrajPoint3D_initialize(
        TrajPoint3D* self);
        
NDDSUSERDllExport
RTIBool TrajPoint3D_initialize_ex(
        TrajPoint3D* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TrajPoint3D_initialize_w_params(
        TrajPoint3D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TrajPoint3D_finalize(
        TrajPoint3D* self);
                        
NDDSUSERDllExport
void TrajPoint3D_finalize_ex(
        TrajPoint3D* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TrajPoint3D_finalize_w_params(
        TrajPoint3D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TrajPoint3D_finalize_optional_members(
        TrajPoint3D* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TrajPoint3D_copy(
        TrajPoint3D* dst,
        const TrajPoint3D* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define rapid_ext_arc_TrajPoint3DSequence_LAST_MEMBER_ID rapid_ext_arc_TrajPoint3D_LAST_MEMBER_ID
typedef  rapid::ext::arc::TrajPoint3DSeq  TrajPoint3DSequence;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TrajPoint3DSequence_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(TrajPoint3DSequenceSeq, TrajPoint3DSequence);                                        
            
NDDSUSERDllExport
RTIBool TrajPoint3DSequence_initialize(
        TrajPoint3DSequence* self);
            
NDDSUSERDllExport
RTIBool TrajPoint3DSequence_initialize_ex(
        TrajPoint3DSequence* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool TrajPoint3DSequence_initialize_w_params(
        TrajPoint3DSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void TrajPoint3DSequence_finalize(
        TrajPoint3DSequence* self);
            
NDDSUSERDllExport
void TrajPoint3DSequence_finalize_ex(
        TrajPoint3DSequence* self,RTIBool deletePointers);

NDDSUSERDllExport
void TrajPoint3DSequence_finalize_w_params(
        TrajPoint3DSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void TrajPoint3DSequence_finalize_optional_members(
        TrajPoint3DSequence* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool TrajPoint3DSequence_copy(
        TrajPoint3DSequence* dst,
        const TrajPoint3DSequence* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define rapid_ext_arc_Trajectory3D_LAST_MEMBER_ID 4
        
extern const char *Trajectory3DTYPENAME;
        


#ifdef __cplusplus
    struct Trajectory3DSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Trajectory3DTypeSupport;
    class Trajectory3DDataWriter;
    class Trajectory3DDataReader;
#endif

#endif

            
    
class Trajectory3D                                        
{
public:            
#ifdef __cplusplus
    typedef struct Trajectory3DSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Trajectory3DTypeSupport TypeSupport;
    typedef Trajectory3DDataWriter DataWriter;
    typedef Trajectory3DDataReader DataReader;
#endif

#endif
    
    DDS_Float  weight;

    rapid::String32  name;

    DDS_LongLong  t0;

    DDS_LongLong  tsep;

    rapid::ext::arc::TrajPoint3DSequence  points;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Trajectory3D_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Trajectory3DSeq, Trajectory3D);
        
NDDSUSERDllExport
RTIBool Trajectory3D_initialize(
        Trajectory3D* self);
        
NDDSUSERDllExport
RTIBool Trajectory3D_initialize_ex(
        Trajectory3D* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Trajectory3D_initialize_w_params(
        Trajectory3D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Trajectory3D_finalize(
        Trajectory3D* self);
                        
NDDSUSERDllExport
void Trajectory3D_finalize_ex(
        Trajectory3D* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Trajectory3D_finalize_w_params(
        Trajectory3D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Trajectory3D_finalize_optional_members(
        Trajectory3D* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Trajectory3D_copy(
        Trajectory3D* dst,
        const Trajectory3D* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif /* Trajectory3D_1790257475_h */
