/* -*- c++ -*-
 *
 *  Trajectory2DReceiver.h
 *
 */
#ifndef rapid_Trajectory2DReceiver_h
#define rapid_Trajectory2DReceiver_h

#include "rapidExtIo_Export.h"
#include "RapidExtIoParameters.h"

#include "rapidExtDds/Trajectory2DConfig.h"
#include "rapidExtDds/Trajectory2DSample.h"
#include "rapidExtDds/Trajectory2DConfigSupport.h"
#include "rapidExtDds/Trajectory2DSampleSupport.h"

#include "rapidUtil/Receiver_T.h"

#include "knMath/ATrans.h"


namespace rapid
{
  namespace ext
  {
    class Trajectory2DReceiver;
    typedef Receiver_T<Trajectory2DConfig, Trajectory2DSample, Trajectory2DTopicPairParameters, Trajectory2DReceiver>
      Trajectory2DReceiverBase;

    class rapidExtIo_Export Trajectory2DReceiver : public Trajectory2DReceiverBase
    {
      typedef Trajectory2DReceiverBase Super;

    public:
      typedef kn::ATrans2Vector Trajectory;

      Trajectory2DReceiver(Trajectory2DTopicPairParameters const& params);
      virtual ~Trajectory2DReceiver() throw();

      // DDS callbacks
      using Super::operator();
      void operator() (rapid::ext::Trajectory2DSample const * trajectorySample);

      Trajectory const& trajectory() const {
        return m_trajectory;
      }

    private:
      Trajectory m_trajectory;
    };
  }
}

#endif // rapid_Trajectory2DReceiver_h
