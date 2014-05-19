#include "PointCloud.h"

#include "knFrameStore/FrameStore.h"
#include "knFrameStore/FrameStoreSingleton.h"

#include <ace/OS_NS_sys_time.h>

#include <iostream>

using namespace std;
using namespace kn;

int main(int, char **)
{
  FrameStore * fs = FrameStoreSingleton::instance();
  FrameHandle f1 = fs->add("TestFrame", 
                           FrameHandle::NULL_HANDLE, 
                           ATrans3::Identity());
  
  PointCloud cloud1;
  PointCloud cloud2(ACE_OS::gettimeofday(), f1, PAF_INTENSITY8, ATrans3::Identity());
  
  cout << "cloud1: " << cloud1 << endl
       << "cloud2: " << cloud2 << endl;
       
  return 0; 
}