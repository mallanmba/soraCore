#ifndef rapid_RapidLog_h
#define rapid_RapidLog_h

namespace rapid {

  class RapidLog {
  public:
    enum PreambleId {
      Uninitialized = -1,
      Samp,
      Dead,
      Invalid
    };
    
    static PreambleId preambleId(const char* buf) {
      if(strncmp(buf, "samp", 4) == 0) return Samp;
      if(strncmp(buf, "dead", 4) == 0) return Dead;
      return Invalid;
    }

    static bool protocolOk(const char* protocol) {
      return strncmp(protocol, "rapidLog", 8) == 0;
    }
  };

}
#endif // rapid_RapidLog_h
