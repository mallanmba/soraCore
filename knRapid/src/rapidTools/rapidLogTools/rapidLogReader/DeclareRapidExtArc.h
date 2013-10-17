#ifndef DeclareRapidExtArc_h
#define DeclareRapidExtArc_h

// NOTE: the 'slot' field in BatteryPackSample conflicts with 
// the 'slot' keyword in Qt

//#include <rapidExtArcDds/BatteryPackConfig.h>
//#include <rapidExtArcDds/BatteryPackConfigPlugin.h>
//#include <rapidExtArcDds/BatteryPackConfigSupport.h>
//#include <rapidExtArcDds/BatteryPackSample.h>
//#include <rapidExtArcDds/BatteryPackSamplePlugin.h>
//#include <rapidExtArcDds/BatteryPackSampleSupport.h>
#include <rapidExtArcDds/DlpConfig.h>
#include <rapidExtArcDds/DlpConfigPlugin.h>
#include <rapidExtArcDds/DlpConfigSupport.h>
#include <rapidExtArcDds/DlpSample.h>
#include <rapidExtArcDds/DlpSamplePlugin.h>
#include <rapidExtArcDds/DlpSampleSupport.h>
#include <rapidExtArcDds/EphemerisConfig.h>
#include <rapidExtArcDds/EphemerisConfigPlugin.h>
#include <rapidExtArcDds/EphemerisConfigSupport.h>
#include <rapidExtArcDds/EphemerisSample.h>
#include <rapidExtArcDds/EphemerisSamplePlugin.h>
#include <rapidExtArcDds/EphemerisSampleSupport.h>
#include <rapidExtArcDds/Float32Config.h>
#include <rapidExtArcDds/Float32ConfigPlugin.h>
#include <rapidExtArcDds/Float32ConfigSupport.h>
#include <rapidExtArcDds/Float32Sample.h>
#include <rapidExtArcDds/Float32SamplePlugin.h>
#include <rapidExtArcDds/Float32SampleSupport.h>
#include <rapidExtArcDds/GenericConfig.h>
#include <rapidExtArcDds/GenericConfigPlugin.h>
#include <rapidExtArcDds/GenericConfigSupport.h>
#include <rapidExtArcDds/GeometryAppearanceState.h>
#include <rapidExtArcDds/GeometryAppearanceStatePlugin.h>
#include <rapidExtArcDds/GeometryAppearanceStateSupport.h>
#include <rapidExtArcDds/GeometryConfig.h>
#include <rapidExtArcDds/GeometryConfigPlugin.h>
#include <rapidExtArcDds/GeometryConfigSupport.h>
#include <rapidExtArcDds/GeometryMeshSample.h>
#include <rapidExtArcDds/GeometryMeshSamplePlugin.h>
#include <rapidExtArcDds/GeometryMeshSampleSupport.h>
#include <rapidExtArcDds/GpsConfig.h>
#include <rapidExtArcDds/GpsConfigPlugin.h>
#include <rapidExtArcDds/GpsConfigSupport.h>
#include <rapidExtArcDds/GpsSample.h>
#include <rapidExtArcDds/GpsSamplePlugin.h>
#include <rapidExtArcDds/GpsSampleSupport.h>
#include <rapidExtArcDds/HydraSample.h>
#include <rapidExtArcDds/HydraSamplePlugin.h>
#include <rapidExtArcDds/HydraSampleSupport.h>
#include <rapidExtArcDds/MobilitySample.h>
#include <rapidExtArcDds/MobilitySamplePlugin.h>
#include <rapidExtArcDds/MobilitySampleSupport.h>
#include <rapidExtArcDds/StateMachineConfig.h>
#include <rapidExtArcDds/StateMachineConfigPlugin.h>
#include <rapidExtArcDds/StateMachineConfigSupport.h>
#include <rapidExtArcDds/StateMachineState.h>
#include <rapidExtArcDds/StateMachineStatePlugin.h>
#include <rapidExtArcDds/StateMachineStateSupport.h>
#include <rapidExtArcDds/WheelGroupSample.h>
#include <rapidExtArcDds/WheelGroupSamplePlugin.h>
#include <rapidExtArcDds/WheelGroupSampleSupport.h>

#include "DeclareDataProvider.h"

namespace rapid {

//  LOG_DATA_PROVIDER_DECLARE( BatteryPackConfig      , rapid::ext::arc::BatteryPackConfig      )  
//  LOG_DATA_PROVIDER_DECLARE( BatteryPackSample      , rapid::ext::arc::BatteryPackSample      )
  LOG_DATA_PROVIDER_DECLARE( DlpConfig              , rapid::ext::arc::DlpConfig              )
  LOG_DATA_PROVIDER_DECLARE( DlpSample              , rapid::ext::arc::DlpSample              )
  LOG_DATA_PROVIDER_DECLARE( EphemerisConfig        , rapid::ext::arc::EphemerisConfig        )
  LOG_DATA_PROVIDER_DECLARE( EphemerisSample        , rapid::ext::arc::EphemerisSample        )
  LOG_DATA_PROVIDER_DECLARE( Float32Config          , rapid::ext::arc::Float32Config          )
  LOG_DATA_PROVIDER_DECLARE( Float32Sample          , rapid::ext::arc::Float32Sample          )
  LOG_DATA_PROVIDER_DECLARE( GenericConfig          , rapid::ext::arc::GenericConfig          )
  LOG_DATA_PROVIDER_DECLARE( GeometryAppearanceState, rapid::ext::arc::GeometryAppearanceState)
  LOG_DATA_PROVIDER_DECLARE( GeometryConfig         , rapid::ext::arc::GeometryConfig         )
  LOG_DATA_PROVIDER_DECLARE( GeometryMeshSample     , rapid::ext::arc::GeometryMeshSample     )
  LOG_DATA_PROVIDER_DECLARE( GpsConfig              , rapid::ext::arc::GpsConfig              )
  LOG_DATA_PROVIDER_DECLARE( GpsSample              , rapid::ext::arc::GpsSample              )
  LOG_DATA_PROVIDER_DECLARE( HydraSample            , rapid::ext::arc::HydraSample            )
  LOG_DATA_PROVIDER_DECLARE( MobilitySample         , rapid::ext::arc::MobilitySample         )
  LOG_DATA_PROVIDER_DECLARE( StateMachineConfig     , rapid::ext::arc::StateMachineConfig     )
  LOG_DATA_PROVIDER_DECLARE( StateMachineState      , rapid::ext::arc::StateMachineState      )
  LOG_DATA_PROVIDER_DECLARE( WheelGroupSample       , rapid::ext::arc::WheelGroupSample       )

  class RapidExtArcLogDataProviderFactory : public LogDataProviderFactory {
  public:
    LogDataProvider* forTypeName(const QString& typeName, const QString& agentName, const QString& topicName) {
      //LOG_DATA_PROVIDER_FACTORY( BatteryPackConfig      )  
      //LOG_DATA_PROVIDER_FACTORY( BatteryPackSample      )
      LOG_DATA_PROVIDER_FACTORY( DlpConfig              )
      LOG_DATA_PROVIDER_FACTORY( DlpSample              )
      LOG_DATA_PROVIDER_FACTORY( EphemerisConfig        )
      LOG_DATA_PROVIDER_FACTORY( EphemerisSample        )
      LOG_DATA_PROVIDER_FACTORY( Float32Config          )
      LOG_DATA_PROVIDER_FACTORY( Float32Sample          )
      LOG_DATA_PROVIDER_FACTORY( GenericConfig          )
      LOG_DATA_PROVIDER_FACTORY( GeometryAppearanceState)
      LOG_DATA_PROVIDER_FACTORY( GeometryConfig         )
      LOG_DATA_PROVIDER_FACTORY( GeometryMeshSample     )
      LOG_DATA_PROVIDER_FACTORY( GpsConfig              )
      LOG_DATA_PROVIDER_FACTORY( GpsSample              )
      LOG_DATA_PROVIDER_FACTORY( HydraSample            )
      LOG_DATA_PROVIDER_FACTORY( MobilitySample         )
      LOG_DATA_PROVIDER_FACTORY( StateMachineConfig     )
      LOG_DATA_PROVIDER_FACTORY( StateMachineState      )
      LOG_DATA_PROVIDER_FACTORY( WheelGroupSample       )
      return NULL;
    }
  };

}

#endif //DeclareRapidExtArc_h
