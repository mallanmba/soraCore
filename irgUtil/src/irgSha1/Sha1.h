/* sha1.h
 * SHA-1 implementation based on the public domain code by some guy.
 */

#ifndef irg_SHA1_H
#define irg_SHA1_H

#include "irgSha1_Export.h"

#include <vector>
#include <string>

#include <stdint.h>

namespace irg
{
  class irgSha1_Export SHA1Hash 
  {
  public:
    typedef std::vector<unsigned char> Hash;

    SHA1Hash() {
      init();
    };

    void init();
    void update(const unsigned char* data, unsigned int len);
    Hash final();

    static std::string hexString(Hash const& digest);

  private:
    uint32_t m_state[5];
    uint32_t m_count[2];
    uint8_t  m_buffer[64];
  };
}

#endif
