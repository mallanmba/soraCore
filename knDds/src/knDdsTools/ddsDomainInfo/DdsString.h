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
#ifndef kn_DdsString_h
#define kn_DdsString_h


namespace kn
{
  struct DdsString  
  {
    static const char* retCode(DDS_ReturnCode_t code) {
      switch(code) {
        case DDS_RETCODE_OK                  : return "DDS_RETCODE_OK";
        case DDS_RETCODE_ERROR               : return "DDS_RETCODE_ERROR";
        case DDS_RETCODE_UNSUPPORTED         : return "DDS_RETCODE_UNSUPPORTED";
        case DDS_RETCODE_BAD_PARAMETER       : return "DDS_RETCODE_BAD_PARAMETER";
        case DDS_RETCODE_PRECONDITION_NOT_MET: return "DDS_RETCODE_PRECONDITION_NOT_MET";
        case DDS_RETCODE_OUT_OF_RESOURCES    : return "DDS_RETCODE_OUT_OF_RESOURCES";
        case DDS_RETCODE_NOT_ENABLED         : return "DDS_RETCODE_NOT_ENABLED";
        case DDS_RETCODE_IMMUTABLE_POLICY    : return "DDS_RETCODE_IMMUTABLE_POLICY";
        case DDS_RETCODE_INCONSISTENT_POLICY : return "DDS_RETCODE_INCONSISTENT_POLICY";
        case DDS_RETCODE_ALREADY_DELETED     : return "DDS_RETCODE_ALREADY_DELETED";
        case DDS_RETCODE_TIMEOUT             : return "DDS_RETCODE_TIMEOUT";
        case DDS_RETCODE_NO_DATA             : return "DDS_RETCODE_NO_DATA";
        case DDS_RETCODE_ILLEGAL_OPERATION   : return "DDS_RETCODE_ILLEGAL_OPERATION";
      }
      return "";
    }
  };
  
}

#endif
