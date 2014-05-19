#include "Time.h"

#include <iostream>

namespace kn
{
  std::ostream&
  operator << (std::ostream& ostr, const Time6& rhs)
  {
    Duration::rep d(rhs.m_timestamp.count());
    bool neg = d < 0;
    d = abs(d);
    int sec = (d * Duration::period::num) / Duration::period::den;
    int usec = ((d * Duration::period::num) % Duration::period::den) * 1000000 / Duration::period::den;

    if (neg) {
      ostr << '-';
    }
    ostr << sec << ".";
    ostr.width(6);
    ostr.fill('0');
    ostr << usec;
    return ostr;
    
  }
}
