#include "../Time.h"

#include <iostream>
#include <ios>

using namespace std;

int main(int, char **) 
{
  kn::TimePoint t = kn::Clock::now();

  cout << "time point: " << t << endl;
  ACE_Time_Value tv = kn::toAceTime(t);
  cout << "time value: " << tv << endl;
  cout << "duration: " << kn::fromAceTime(tv) << endl;

  kn::TimePoint t2 = kn::Clock::now();

  cout << "delta: " << t2 - t << endl;

  kn::DurationD d = t2 - t;

  cout << "DurationD: " << d << endl;

  d *= 2.;
  double m = d.count();

  cout << "2* duration - double: " << m << endl;

  kn::Duration t3 = boost::chrono::duration_cast<kn::Duration>(d);

  cout << "t3: " << t3 << endl;

  cout << "steady: " << boost::chrono::steady_clock::now() << endl;
  cout << "hi-res: " << boost::chrono::high_resolution_clock::now() << endl;

  return 0;
}
