/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#include "HydraIo.h"
#include "RapidExtArcIoParameters.h"

#include "rapidUtil/TopicPairApp_T.h"

#include "rapidExtArcDds/HydraConfig.h"
#include "rapidExtArcDds/HydraConfigSupport.h"
#include "rapidExtArcDds/HydraSample.h"
#include "rapidExtArcDds/HydraSampleSupport.h"
#include "rapidExtArcDds/ExtArcConstants.h"

#include "rapidUtil/RapidHelper.h"

#include <iostream>

namespace rapid
{
  typedef TopicPairApp_T<ext::arc::HydraConfig, ext::arc::HydraSample, ext::arc::HydraTopicPairParameters> TopicPairApp;

  template<>
  void TopicPairApp::Printer::printData(ext::arc::HydraSample const& event)
  {
    if (s_csv > 0) {
      std::cout << rapid::RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << ","
                << event.cmr  << ","
                << event.soh  << ","
                << event.sns  << ","
                << event.cds  << ",";

      if (event.values.length() > 0) {
        for (int i = 0; i < event.values.length() && Super::m_config.valueKeys.length(); ++i) {
          switch (event.values[i]._d) {
            case rapid::RAPID_BOOL:
              std::cout << event.values[i]._u.b;
              break;
            case rapid::RAPID_DOUBLE:
              std::cout << event.values[i]._u.d;
              break;
            case rapid::RAPID_FLOAT:
              std::cout << event.values[i]._u.f;
              break;
            case rapid::RAPID_INT:
              std::cout << event.values[i]._u.i;
              break;
            case rapid::RAPID_LONGLONG:
              std::cout << event.values[i]._u.ll;
              break;
            case rapid::RAPID_STRING:
              std::cout << event.values[i]._u.s;
              break;
            case rapid::RAPID_VEC3d:
              std::cout << "-";
              break;
            case rapid::RAPID_MAT33f:
              std::cout << "-";
              break;
            default:
              break;
          }
          std::cout << ",";
        }
      }
      else {
        std::cout << ((unsigned short)event.reading[78]) * 13 << ",";
      }

      for (unsigned int i = 0; i < 32; i++) {
        std::cout << event.sn[i] << ",";
      }
      for (unsigned int i = 0; i < 32; i++) {
        std::cout << event.cd[i] << ",";
      }
      std::cout << std::endl;
      return;
    }

    std::cout << "timestamp: " << RapidHelper::rapidTime2AceTimeValue(event.hdr.timeStamp) << std::endl;
    static unsigned short sn_sum[32];
    static unsigned short cd_sum[32];
    static int count;

    if (s_verbose >= 2) {
      std::cout   << std::hex
         << "cmr:\t"   << "0x" << event.cmr << std::endl
         << "soh:\t"   << "0x" << event.soh << std::endl
         << std::dec
         << "sns:\t"   << event.sns << std::endl
         << "cds:\t"   << event.cds << std::endl;
      if (event.values.length() > 0) {
        for (int i = 0; i < event.values.length() && Super::m_config.valueKeys.length(); ++i) {
          std::cout << Super::m_config.valueKeys[i].key << ":\t";

          switch (event.values[i]._d) {
            case rapid::RAPID_BOOL:
              std::cout << event.values[i]._u.b;
              break;
            case rapid::RAPID_DOUBLE:
              std::cout << event.values[i]._u.d;
              break;
            case rapid::RAPID_FLOAT:
              std::cout << event.values[i]._u.f;
              break;
            case rapid::RAPID_INT:
              std::cout << event.values[i]._u.i;
              break;
            case rapid::RAPID_LONGLONG:
              std::cout << event.values[i]._u.ll;
              break;
            case rapid::RAPID_STRING:
              std::cout << event.values[i]._u.s;
              break;
            case rapid::RAPID_VEC3d:
              std::cout << "printing vec3d not supported.";
              break;
            case rapid::RAPID_MAT33f:
              std::cout << "printing mat33f not supported.";
              break;
            default:
              break;
          }
          std::cout << std::endl;
        }
      }
      else {
        std::cout << "HV:\t"    << ((unsigned short)event.reading[78]) * 13 << " approx(V)" << std::endl;
      }

      std::cout << "ss[24]\t" << event.sn[24] << std::endl
                << "cd[24]\t" << event.cd[24] << std::endl
                << std::endl;
    }
    if (s_verbose >= 3) {
      int running_sum = 0;
      std::cout << "spectrum: " << count++ << std::endl;
      std::cout << "\tsn\tsn_sum\tcd\tcd_sum"  << std::endl;
      for (unsigned int i = 0; i < 32; ++i) {
        sn_sum[i] += event.sn[i];
        cd_sum[i] += event.cd[i];

        if (i > 4) {
          running_sum += sn_sum[i];
          running_sum += cd_sum[i];
        }
        std::cout << "bin[" << i << "]\t" << event.sn[i] << "\t" << sn_sum[i] << "\t"
           << event.cd[i] << "\t" << cd_sum[i] << std::endl;
      }
      std::cout << "running-sum ch[5:31]: " << running_sum << std::endl << std::endl;
    }
    if (s_verbose >= 4) {
      ext::arc::HydraSample::TypeSupport::print_data(&event);
    }
  }
}

using namespace rapid;

int main(int argc, char* argv[])
{
  ext::arc::HydraTopicPairParameters params;
  TopicPairApp app(argc, argv, params);

  if (app.s_csv > 0) {
    std::cout << "#time, cmr, soh, sns, cds, smTemp, dpmTemp, hv,";
    for (unsigned int i = 0; i < 32; ++i) {
      std::cout << " sn" << i << ",";
    }
    for (unsigned int i = 0; i < 32; ++i) {
      std::cout << " cd" << i << ",";
    }
    std::cout << std::endl;
  }

  app.run(ext::arc::HYDRA_CONFIG_TOPIC, ext::arc::HYDRA_SAMPLE_TOPIC);

  return 0;
}
