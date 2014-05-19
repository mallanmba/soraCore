#ifndef kn_FileImageData_h
#define kn_FileImageData_h

#include "MemImageData.h"
#include "knShare_Export.h"

namespace kn
{
  class knShare_Export FileImageData : public MemImageData
  {
    // no locks here because frame won't change once it's captured, and we
    // don't provide write access to it.
  public:
    FileImageData() {};
    FileImageData(const std::string & fileName,
                  const ACE_Time_Value & time);
    virtual ~FileImageData() throw();
  };

} // namespace kn

#endif
