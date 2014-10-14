#include "HydraIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidExtArcDds/HydraConfig.h"
#include "RapidExtArcIoParameters.h"

#include <iostream>


namespace rapid
{
  namespace ext
  {
    namespace arc
    {
      std::ostream& operator<< (std::ostream& ostr, HydraConfig const& rhs)
      {
        ostr << "HydraConfig: {"
             << rhs.hdr << ","
             << rhs.name << ","
             << rhs.valueKeys << "}";
        return ostr;

      }
      void operator <<= (HydraConfig& config, HydraConfigParameters const& params)
      {
        config.hdr <<= params.hdr;

        strncpy (config.name, params.name.c_str(), 31);
        config.name[31] = 0;

        config.valueKeys <<= params.valueKeys;
      }
    }
  }
}
