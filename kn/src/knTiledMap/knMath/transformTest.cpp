#include "Transform.h"

#include <iostream>

using namespace kn;
using namespace std;
//using namespace Eigen;

int main(int, char **)
{
  ATrans2 a2;
  ATrans3 a3;

  cout << a2.matrix() << endl;
  cout << a3.matrix() << endl;

  return 0;
}
