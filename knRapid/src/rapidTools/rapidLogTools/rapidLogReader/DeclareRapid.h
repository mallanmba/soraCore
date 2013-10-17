#ifndef DeclareRapid_h
#define DeclareRapid_h

#include <rapidDds/AccessControlState.h>
#include <rapidDds/AccessControlStatePlugin.h>
#include <rapidDds/AccessControlStateSupport.h>
#include <rapidDds/Ack.h>
#include <rapidDds/AckPlugin.h>
#include <rapidDds/AckSupport.h>
#include <rapidDds/AgentConfig.h>
#include <rapidDds/AgentConfigPlugin.h>
#include <rapidDds/AgentConfigSupport.h>
#include <rapidDds/AgentState.h>
#include <rapidDds/AgentStatePlugin.h>
#include <rapidDds/AgentStateSupport.h>
#include <rapidDds/CommandConfig.h>
#include <rapidDds/CommandConfigPlugin.h>
#include <rapidDds/CommandConfigSupport.h>
#include <rapidDds/Command.h>
#include <rapidDds/CommandPlugin.h>
#include <rapidDds/CommandSupport.h>
#include <rapidDds/FileAnnounce.h>
#include <rapidDds/FileAnnouncePlugin.h>
#include <rapidDds/FileAnnounceSupport.h>
#include <rapidDds/FileQueueConfig.h>
#include <rapidDds/FileQueueConfigPlugin.h>
#include <rapidDds/FileQueueConfigSupport.h>
#include <rapidDds/FileQueueEntryState.h>
#include <rapidDds/FileQueueEntryStatePlugin.h>
#include <rapidDds/FileQueueEntryStateSupport.h>
#include <rapidDds/FileQueueReceiverSample.h>
#include <rapidDds/FileQueueReceiverSamplePlugin.h>
#include <rapidDds/FileQueueReceiverSampleSupport.h>
#include <rapidDds/FileQueueSample.h>
#include <rapidDds/FileQueueSamplePlugin.h>
#include <rapidDds/FileQueueSampleSupport.h>
#include <rapidDds/FileQueueState.h>
#include <rapidDds/FileQueueStatePlugin.h>
#include <rapidDds/FileQueueStateSupport.h>
#include <rapidDds/FrameStoreConfig.h>
#include <rapidDds/FrameStoreConfigPlugin.h>
#include <rapidDds/FrameStoreConfigSupport.h>
#include <rapidDds/ImageSensorSample.h>
#include <rapidDds/ImageSensorSamplePlugin.h>
#include <rapidDds/ImageSensorSampleSupport.h>
#include <rapidDds/ImageSensorState.h>
#include <rapidDds/ImageSensorStatePlugin.h>
#include <rapidDds/ImageSensorStateSupport.h>
#include <rapidDds/JointConfig.h>
#include <rapidDds/JointConfigPlugin.h>
#include <rapidDds/JointConfigSupport.h>
#include <rapidDds/JointSample.h>
#include <rapidDds/JointSamplePlugin.h>
#include <rapidDds/JointSampleSupport.h>
#include <rapidDds/MacroConfig.h>
#include <rapidDds/MacroConfigPlugin.h>
#include <rapidDds/MacroConfigSupport.h>
#include <rapidDds/MacroState.h>
#include <rapidDds/MacroStatePlugin.h>
#include <rapidDds/MacroStateSupport.h>
#include <rapidDds/PointCloudConfig.h>
#include <rapidDds/PointCloudConfigPlugin.h>
#include <rapidDds/PointCloudConfigSupport.h>
#include <rapidDds/PointCloudSample.h>
#include <rapidDds/PointCloudSamplePlugin.h>
#include <rapidDds/PointCloudSampleSupport.h>
#include <rapidDds/PositionConfig.h>
#include <rapidDds/PositionConfigPlugin.h>
#include <rapidDds/PositionConfigSupport.h>
#include <rapidDds/PositionSample.h>
#include <rapidDds/PositionSamplePlugin.h>
#include <rapidDds/PositionSampleSupport.h>
#include <rapidDds/QueueState.h>
#include <rapidDds/QueueStatePlugin.h>
#include <rapidDds/QueueStateSupport.h>
#include <rapidDds/TextMessage.h>
#include <rapidDds/TextMessagePlugin.h>
#include <rapidDds/TextMessageSupport.h>

#include "DeclareDataProvider.h"

namespace rapid {

  LOG_DATA_PROVIDER_DECLARE( AccessControlState      , rapid::AccessControlState      )  
  LOG_DATA_PROVIDER_DECLARE( Ack                     , rapid::Ack                     )
  LOG_DATA_PROVIDER_DECLARE( AgentConfig             , rapid::AgentConfig             )
  LOG_DATA_PROVIDER_DECLARE( AgentState              , rapid::AgentState              )
  LOG_DATA_PROVIDER_DECLARE( CommandConfig           , rapid::CommandConfig           )
  LOG_DATA_PROVIDER_DECLARE( Command                 , rapid::Command                 )
  LOG_DATA_PROVIDER_DECLARE( FileAnnounce            , rapid::FileAnnounce            )
  LOG_DATA_PROVIDER_DECLARE( FileQueueConfig         , rapid::FileQueueConfig         )
  LOG_DATA_PROVIDER_DECLARE( FileQueueEntryState     , rapid::FileQueueEntryState     )
  LOG_DATA_PROVIDER_DECLARE( FileQueueReceiverSample , rapid::FileQueueReceiverSample )
  LOG_DATA_PROVIDER_DECLARE( FileQueueSample         , rapid::FileQueueSample         )
  LOG_DATA_PROVIDER_DECLARE( FileQueueState          , rapid::FileQueueState          )
  LOG_DATA_PROVIDER_DECLARE( FrameStoreConfig        , rapid::FrameStoreConfig        )
  LOG_DATA_PROVIDER_DECLARE( ImageSensorSample       , rapid::ImageSensorSample       )
  LOG_DATA_PROVIDER_DECLARE( ImageSensorState        , rapid::ImageSensorState        )
  LOG_DATA_PROVIDER_DECLARE( JointConfig             , rapid::JointConfig             )
  LOG_DATA_PROVIDER_DECLARE( JointSample             , rapid::JointSample             )
  LOG_DATA_PROVIDER_DECLARE( MacroConfig             , rapid::MacroConfig             )
  LOG_DATA_PROVIDER_DECLARE( MacroState              , rapid::MacroState              )
  LOG_DATA_PROVIDER_DECLARE( PointCloudConfig        , rapid::PointCloudConfig        )
  LOG_DATA_PROVIDER_DECLARE( PointCloudSample        , rapid::PointCloudSample        )
  LOG_DATA_PROVIDER_DECLARE( PositionConfig          , rapid::PositionConfig          )
  LOG_DATA_PROVIDER_DECLARE( PositionSample          , rapid::PositionSample          )
  LOG_DATA_PROVIDER_DECLARE( QueueState              , rapid::QueueState              )
  LOG_DATA_PROVIDER_DECLARE( TextMessage             , rapid::TextMessage             )
  
  class RapidLogDataProviderFactory : public LogDataProviderFactory {
  public:
    LogDataProvider* forTypeName(const QString& typeName, const QString& agentName, const QString& topicName) {
      LOG_DATA_PROVIDER_FACTORY( AccessControlState      )  
      LOG_DATA_PROVIDER_FACTORY( Ack                     )
      LOG_DATA_PROVIDER_FACTORY( AgentConfig             )
      LOG_DATA_PROVIDER_FACTORY( AgentState              )
      LOG_DATA_PROVIDER_FACTORY( CommandConfig           )
      LOG_DATA_PROVIDER_FACTORY( Command                 )
      LOG_DATA_PROVIDER_FACTORY( FileAnnounce            )
      LOG_DATA_PROVIDER_FACTORY( FileQueueConfig         )
      LOG_DATA_PROVIDER_FACTORY( FileQueueEntryState     )
      LOG_DATA_PROVIDER_FACTORY( FileQueueReceiverSample )
      LOG_DATA_PROVIDER_FACTORY( FileQueueSample         )
      LOG_DATA_PROVIDER_FACTORY( FileQueueState          )
      LOG_DATA_PROVIDER_FACTORY( FrameStoreConfig        )
      LOG_DATA_PROVIDER_FACTORY( ImageSensorSample       )
      LOG_DATA_PROVIDER_FACTORY( ImageSensorState        )
      LOG_DATA_PROVIDER_FACTORY( JointConfig             )
      LOG_DATA_PROVIDER_FACTORY( JointSample             )
      LOG_DATA_PROVIDER_FACTORY( MacroConfig             )
      LOG_DATA_PROVIDER_FACTORY( MacroState              )
      LOG_DATA_PROVIDER_FACTORY( PointCloudConfig        )
      LOG_DATA_PROVIDER_FACTORY( PointCloudSample        )
      LOG_DATA_PROVIDER_FACTORY( PositionConfig          )
      LOG_DATA_PROVIDER_FACTORY( PositionSample          )
      LOG_DATA_PROVIDER_FACTORY( QueueState              )
      LOG_DATA_PROVIDER_FACTORY( TextMessage             )
      return NULL;
    }
  };

}

#endif // DeclareRapid_h
