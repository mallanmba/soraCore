#include "FileImageData.h"

#include <stdexcept>
#include <fstream>

namespace kn 
{
  using namespace std;

  FileImageData::FileImageData(const std::string & fileName,
                               const ACE_Time_Value & time)
  {
    ifstream file(fileName.c_str(), ios::binary);

    char buffer[256];
    
    file.getline(buffer, 256);

    if(strcmp(buffer, "P5") != 0) {
      throw std::invalid_argument("Unsupported image format (only mono8 is supported).");
    }
    
    file.getline(buffer, 256, ' ');
    m_width = atoi(buffer);

    file.getline(buffer, 256, ' ');
    m_height = atoi(buffer);
    
    file.getline(buffer, 256);
    m_depth = atoi(buffer);
    
    if (m_depth == UCHAR_MAX) {
      m_depth = 8;
    }
    else {
      throw std::invalid_argument("Unsupported image depth format (only mono8 is supported).");
    }

    int imageSize = m_width * m_height;
    m_data.reset(new unsigned char[imageSize]),

    file.read(reinterpret_cast<char *>(m_data.get()), imageSize);
    m_timestamp = time;
  }
  
  FileImageData::~FileImageData() throw()
  {
  } 
}

