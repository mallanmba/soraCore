// -*- C++ -*-
#include "Trajectory2DReceiver.h"

#include "Trajectory2DIo.h"

#include "rapidUtil/RapidHelper.h"
#include "rapidUtil/Transform3DHelper.h"

#include "rapidExtDds/ExtCommandConstants.h"
#include "rapidExtDds/ExtConstants.h"
#include "rapidExtDds/Trajectory2DConfig.h"
#include "rapidExtDds/Trajectory2DConfigSupport.h"
#include "rapidExtDds/Trajectory2DSample.h"
#include "rapidExtDds/Trajectory2DSampleSupport.h"

namespace rapid
{
  namespace ext
  {
    using namespace std;

    Trajectory2DReceiver::Trajectory2DReceiver(Trajectory2DTopicPairParameters const& params) :
      Super(TRAJECTORY2D_CONFIG_TOPIC, TRAJECTORY2D_SAMPLE_TOPIC, params),
      m_trajectory()
    {
      m_trajectory.reserve(512); // max sequence length
    }
  
    Trajectory2DReceiver::~Trajectory2DReceiver() throw()
    {
    }

    void
    Trajectory2DReceiver::operator()(rapid::ext::Trajectory2DSample const * sample)
    {
      // --------------------
      // extract path
    
      // 3D pose of the original
      kn::ATrans2 pose0;
      rapid::Transform3DHelper::transform3DToATrans2(pose0, sample->origin);
    
      m_trajectory.resize(sample->trajectory.length());
      for (int i = 0; i < sample->trajectory.length(); ++i) {
        rapid::ext::RTrans2DMeta const& rtrans = sample->trajectory[i];
        kn::ATrans2 offset(Eigen::Translation2d(rtrans.x, rtrans.y) * Eigen::Rotation2Dd(rtrans.theta));
      
        m_trajectory[i] = pose0 * offset;
      }
    }
  }
}
