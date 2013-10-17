#ifndef DeclareRapidExt_h
#define DeclareRapidExt_h

#include <rapidExtDds/NavMapConfig.h>
#include <rapidExtDds/NavMapConfigPlugin.h>
#include <rapidExtDds/NavMapConfigSupport.h>
#include <rapidExtDds/NavMapSample.h>
#include <rapidExtDds/NavMapSamplePlugin.h>
#include <rapidExtDds/NavMapSampleSupport.h>
#include <rapidExtDds/ProcessIoSample.h>
#include <rapidExtDds/ProcessIoSamplePlugin.h>
#include <rapidExtDds/ProcessIoSampleSupport.h>
#include <rapidExtDds/ProcessManagerConfig.h>
#include <rapidExtDds/ProcessManagerConfigPlugin.h>
#include <rapidExtDds/ProcessManagerConfigSupport.h>
#include <rapidExtDds/ProcessManagerState.h>
#include <rapidExtDds/ProcessManagerStatePlugin.h>
#include <rapidExtDds/ProcessManagerStateSupport.h>
#include <rapidExtDds/RangeScanConfig.h>
#include <rapidExtDds/RangeScanConfigPlugin.h>
#include <rapidExtDds/RangeScanConfigSupport.h>
#include <rapidExtDds/RangeScanSample.h>
#include <rapidExtDds/RangeScanSamplePlugin.h>
#include <rapidExtDds/RangeScanSampleSupport.h>
#include <rapidExtDds/SystemInfoConfig.h>
#include <rapidExtDds/SystemInfoConfigPlugin.h>
#include <rapidExtDds/SystemInfoConfigSupport.h>
#include <rapidExtDds/SystemInfoSample.h>
#include <rapidExtDds/SystemInfoSamplePlugin.h>
#include <rapidExtDds/SystemInfoSampleSupport.h>
#include <rapidExtDds/Trajectory2DConfig.h>
#include <rapidExtDds/Trajectory2DConfigPlugin.h>
#include <rapidExtDds/Trajectory2DConfigSupport.h>
#include <rapidExtDds/Trajectory2DSample.h>
#include <rapidExtDds/Trajectory2DSamplePlugin.h>
#include <rapidExtDds/Trajectory2DSampleSupport.h>
#include <rapidExtDds/TrajectoryConfig.h>
#include <rapidExtDds/TrajectoryConfigPlugin.h>
#include <rapidExtDds/TrajectoryConfigSupport.h>
#include <rapidExtDds/TrajectorySample.h>
#include <rapidExtDds/TrajectorySamplePlugin.h>
#include <rapidExtDds/TrajectorySampleSupport.h>
#include <rapidExtDds/VEStopConfig.h>
#include <rapidExtDds/VEStopConfigPlugin.h>
#include <rapidExtDds/VEStopConfigSupport.h>
#include <rapidExtDds/VEStopState.h>
#include <rapidExtDds/VEStopStatePlugin.h>
#include <rapidExtDds/VEStopStateSupport.h>

#include "DeclareDataProvider.h"

namespace rapid {

  LOG_DATA_PROVIDER_DECLARE( NavMapConfig         , rapid::ext::NavMapConfig         )
  LOG_DATA_PROVIDER_DECLARE( NavMapSample         , rapid::ext::NavMapSample         )
  LOG_DATA_PROVIDER_DECLARE( ProcessIoSample      , rapid::ext::ProcessIoSample      )
  LOG_DATA_PROVIDER_DECLARE( ProcessManagerConfig , rapid::ext::ProcessManagerConfig )
  LOG_DATA_PROVIDER_DECLARE( ProcessManagerState  , rapid::ext::ProcessManagerState  )
  LOG_DATA_PROVIDER_DECLARE( RangeScanConfig      , rapid::ext::RangeScanConfig      )
  LOG_DATA_PROVIDER_DECLARE( RangeScanSample      , rapid::ext::RangeScanSample      )
  LOG_DATA_PROVIDER_DECLARE( SystemInfoConfig     , rapid::ext::SystemInfoConfig     )
  LOG_DATA_PROVIDER_DECLARE( SystemInfoSample     , rapid::ext::SystemInfoSample     )
  LOG_DATA_PROVIDER_DECLARE( Trajectory2DConfig   , rapid::ext::Trajectory2DConfig   )
  LOG_DATA_PROVIDER_DECLARE( Trajectory2DSample   , rapid::ext::Trajectory2DSample   )
  LOG_DATA_PROVIDER_DECLARE( TrajectoryConfig     , rapid::ext::TrajectoryConfig     )
  LOG_DATA_PROVIDER_DECLARE( TrajectorySample     , rapid::ext::TrajectorySample     )
  LOG_DATA_PROVIDER_DECLARE( VEStopConfig         , rapid::ext::VEStopConfig         )
  LOG_DATA_PROVIDER_DECLARE( VEStopState          , rapid::ext::VEStopState          )

  class RapidExtLogDataProviderFactory : public LogDataProviderFactory {
  public:
    LogDataProvider* forTypeName(const QString& typeName, const QString& agentName, const QString& topicName) {
      LOG_DATA_PROVIDER_FACTORY( NavMapConfig         )
      LOG_DATA_PROVIDER_FACTORY( NavMapSample         )
      LOG_DATA_PROVIDER_FACTORY( ProcessIoSample      )
      LOG_DATA_PROVIDER_FACTORY( ProcessManagerConfig )
      LOG_DATA_PROVIDER_FACTORY( ProcessManagerState  )
      LOG_DATA_PROVIDER_FACTORY( RangeScanConfig      )
      LOG_DATA_PROVIDER_FACTORY( RangeScanSample      )
      LOG_DATA_PROVIDER_FACTORY( SystemInfoConfig     )
      LOG_DATA_PROVIDER_FACTORY( SystemInfoSample     )
      LOG_DATA_PROVIDER_FACTORY( Trajectory2DConfig   )
      LOG_DATA_PROVIDER_FACTORY( Trajectory2DSample   )
      LOG_DATA_PROVIDER_FACTORY( TrajectoryConfig     )
      LOG_DATA_PROVIDER_FACTORY( TrajectorySample     )
      LOG_DATA_PROVIDER_FACTORY( VEStopConfig         )
      LOG_DATA_PROVIDER_FACTORY( VEStopState          )
      return NULL;
    }
  };
}

#endif //DeclareRapidExt_h
