message(STATUS "Looking for knSvcs")
#
# XXX FIXME XXX stub "search" for knSvcs
include( SetArchitecture )

# Set parent directory as a search location
string(REGEX REPLACE "/[^/]*$" "" PROJ_SRC_PARENT ${PROJECT_SOURCE_DIR})

if( NOT KNSVCS_ROOT_DIR )
  set( KNSVCS_ROOT_DIR ${PROJ_SRC_PARENT}/${ARCHITECTURE} )
endif( NOT KNSVCS_ROOT_DIR )

message(STATUS "  knSvcs root hardcoded without check to ${KNSVCS_ROOT_DIR}")

set( KNSVCS_INCLUDE_DIR ${KNSVCS_ROOT_DIR}/include )
set( KNSVCS_LIBRARY_DIR ${KNSVCS_ROOT_DIR}/lib )
set( KNSVCS_FOUND TRUE )

set( LIBRARY_NAMES
  griClrtyImpl   
  knAvtCameraSvc
  knClrtyStereo      
  knDeployerSvc
  knDgpsSvc          
  knDlpManagerSvc    
  knDStarSvc
  knEphemeris
  knFieldDMapping
  knFrameManager     
  knFrameNotify      
  knIlrisLidarSvc    
  knLmsLidarSvc
  knLocalMap
  knLocomotion
  knMalaSvc         
  knMissionSvc
  knMotorSvcs
  knMrsImpl          
  knNavigation       
  knOldMath
  knPicMotorGroup    
  knPoseEstimation
  knPoseSensing
  knProcessManager
  knPtuSvcs
  knRapid2Gri
  knRapidSvcs  
  knRapidTiling      
  knRapidTrajectory
  knServices   
  knSoundPlayer      
  knSoundTrigger     
  knSunTrackerSvc    
  knSvcsShare        
  knTravMap          
  knTravMapSim
  knUrgLidarSvc      
  knUsbCameraSvc
  knVelodyneSvc
  knVEStop
  knXrfSvc
)
get_library_list(KNSVCS ${KNSVCS_LIBRARY_DIR} "d" "${LIBRARY_NAMES}")

# experimental:
get_library_imports(knSvcs "${KNSVCS_LIBRARY_DIR}" "${LIBRARY_NAMES}")



