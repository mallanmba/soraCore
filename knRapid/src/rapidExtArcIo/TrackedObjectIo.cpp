#include "TrackedObjectIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidExtArcDds/TrackedObjectConfig.h"
#include "RapidExtArcIoParameters.h"

#include <iostream>
#include <cstdlib>

// copied from PositionIo
namespace
{
  char const * rotationEncodingNames[] = {
    "ROT_NONE",
    "ROT_M33",
    "ROT_QUAT",
    "ROT_XYZ",
    "ROT_ZYX",
    "ROT_ZYZ",
    "ROT_VEL"
  };
  
  rapid::RotationEncoding rotationEncodings[] = {
    rapid::RAPID_ROT_NONE,
    rapid::RAPID_ROT_M33,
    rapid::RAPID_ROT_QUAT,
    rapid::RAPID_ROT_XYZ,
    rapid::RAPID_ROT_ZYX,
    rapid::RAPID_ROT_ZYZ,
    rapid::RAPID_ROT_VEL
  };
  int const NUM_ROTATION_ENCODINGS = sizeof(rotationEncodings) / sizeof(rapid::RotationEncoding);

}

namespace rapid
{
  namespace ext 
  {
    namespace arc
    {
      std::ostream& operator<< (std::ostream& ostr, TrackedObjectConfig const& rhs)
      {
        ostr << "TrackedObjectConfig: {"
             << rhs.hdr << ","
             << rotationEncodingNames[rhs.poseEncoding] << ","
             << rotationEncodingNames[rhs.velocityEncoding] << ","
             << rhs.valueKeys
             << "}";

        return ostr;
      }

      void operator <<= (TrackedObjectConfig& config, TrackedObjectConfigParameters const& params)
      {
        config.hdr <<= params.hdr;
        
        config.poseEncoding = rotationEncodings[params.poseEncoding];
        config.velocityEncoding = rotationEncodings[params.velocityEncoding];
        
        config.valueKeys <<= params.valueKeys;
      }
    }
  }
}
