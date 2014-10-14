#ifndef Opts_h
#define Opts_h

#include <string>

struct Opts {
  static std::string topicName;
  static std::string topicSuffix;
  static std::string qosProfile;
  static int         verbosity;

  static int parseArgs(int& argc, char* argv[]);
};

#endif // Opts_h

