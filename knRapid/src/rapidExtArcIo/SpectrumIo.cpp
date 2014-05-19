#include "SpectrumIo.h"
#include "rapidIo/HeaderIo.h"
#include "rapidIo/BaseTypesIo.h"
#include "rapidExtArcDds/SpectrumConfig.h"
#include "RapidExtArcIoParameters.h"

#include <iostream>
#include <cstdlib>

namespace rapid
{
  namespace ext 
  {
    namespace arc
    {
      std::ostream& operator<< (std::ostream& ostr, SpectrumConfig const& rhs)
      {
        ostr << "SpectrumConfig: {"
             << rhs.hdr << ","
             << rhs.name << ","
             << rhs.valueKeys << ","
             << " [";

        for (int i = 0; i < rhs.indexRanges.length(); ++i) {
          if (i > 0) {
            ostr << ", ";
          }

          ostr << "{"
               << rhs.indexRanges[i].name << "("
               << rhs.indexRanges[i].start << ","
               << rhs.indexRanges[i].end << ")"
               << "}"; 
        }
        ostr << "]}";
        return ostr;
      }

      void operator <<= (SpectrumConfig& config, SpectrumConfigParameters const& params)
      {
        config.hdr <<= params.hdr;
        
        strncpy (config.name, params.name.c_str(), 31);
        config.name[31] = 0;

        config.valueKeys <<= params.valueKeys;

        if (config.indexRanges.ensure_length(params.indexRanges.size(), 16)){
          for (unsigned int i = 0; i < params.indexRanges.size() && i < 16; ++i) {
            strncpy(config.indexRanges[i].name, params.indexRanges[i].name.c_str(), 31);
            config.indexRanges[i].name[31] = 0;
            config.indexRanges[i].start = params.indexRanges[i].start;
            config.indexRanges[i].end = params.indexRanges[i].end;
          }
        }

      }

    } //namespace arc
  }
}
