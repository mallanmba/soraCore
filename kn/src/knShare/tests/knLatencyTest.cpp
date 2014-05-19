#include "../Time.h"

#include <ace/Sched_Params.h>

#include <../Thread.h>

#include <sys/mman.h>

#include <iostream>
#include <ios>
#include <fstream>
#include <vector>
#include <numeric>

using namespace std;

int numRounds = 3;
int numIterations = 10000;
double timeout = 0.001;

int main(int argc, char * argv[]) 
{
  if (argc > 1) {
    numRounds = atoi(argv[1]);
  }
  if (argc > 2) {
    numIterations = atoi(argv[1]);
  }
  if (argc > 3) {
    timeout = atof(argv[2]);
  }
  
  cerr << "iterations: " << numIterations << endl
       << "timeout: " << timeout << endl;
  
  vector<kn::TimePoint> timestamps(numIterations + 1);
  kn::DurationD d(timeout);
  kn::Duration delta(kn::duration_cast<kn::Duration>(d));
  vector<double> deltas;
  deltas.reserve(numIterations);
  
  // RT setup
  ACE_Sched_Params schedp(ACE_SCHED_RR, 10);
  if (ACE_OS::sched_params(schedp) == -1)
    cerr << "failed to set rr scheduler: " << strerror(errno) << endl;
  mlockall(MCL_CURRENT);
  
  std::ofstream ostr("latencies.txt");
  
   for (int j = 0; j < numRounds; ++j) {
    vector<kn::TimePoint>::iterator first, last = timestamps.end();
    first = timestamps.begin();
    *first = kn::Clock::now();
    for (++first; first != last; ++first) {
      kn::this_thread::sleep_for(delta); 
      *first = kn::Clock::now();
    }
    
    deltas.clear();
    first = timestamps.begin();
    for (++first; first != last; ++first) {
      kn::DurationD elapsed(*first - *(first - 1));
      deltas.push_back(elapsed.count());
    }
    
    // resets file-counter each time...
    std::copy(deltas.begin(), deltas.end(), std::ostream_iterator<double>(ostr, "\n"));
    
    double sum = std::accumulate(deltas.begin(), deltas.end(), 0.);
    double max = *std::max_element(deltas.begin(), deltas.end());
    double min = *std::min_element(deltas.begin(), deltas.end());
        
    cerr.width(8);
    cerr.precision(9);
    cerr << fixed
         << "average over-sleep:   " << sum / deltas.size() - timeout << endl;
    cerr << "min over-sleep:       " << min - timeout << endl;
    cerr << "max over-sleep:       " << max - timeout << endl
         << endl;
  }
  
  return 0;
}
