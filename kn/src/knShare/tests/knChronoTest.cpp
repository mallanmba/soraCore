#include "../Time.h"

#include <iostream>
#include <ios>

using namespace std;

int main(int, char **) 
{
  kn::TimePoint t(kn::Clock::now());

  cout << "time point:    " << t << endl;
  cout << "as time6:      " << kn::Time6(t) << endl;

  kn::TimePoint t2 = kn::Clock::now();

  cout << "delta: " << t2 - t << endl;
  cout << "Duration: "          << kn::Time6(t2 - t) << endl;
  cout << "Duration * -1: "          << kn::Time6(t - t2) << endl;
  cout << "Duration  -1: "  << kn::Time6(t - t2 - kn::seconds(1)) << endl;
  
  kn::DurationD d = t2 - t;

  cout << "DurationD: "          << d << endl;
  
  d *= 2.;
  double m = d.count();

  cout << "2* duration - double: " << m << endl;

  kn::Duration t3 = kn::duration_cast<kn::Duration>(d);

  cout << "t3: " << t3 << endl;

  return 0;
}
