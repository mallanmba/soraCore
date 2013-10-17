#include "knShare/Singleton.h"

#include <iostream>

using namespace std;

struct Foo
{
  Foo()
  {
    cout << "ctor" << endl;
  }
  ~Foo()
  {
    cout << "dtor" << endl;
  }

  static kn::Singleton<Foo> instance;
};

//template class kn::Singleton<Foo>;

kn::Singleton<Foo> Foo::instance;

int main(int, char**)
{
  Foo * foo = Foo::instance();

  cout << (void *) foo << endl;
  cout << "eom" << endl;
  return 0;
}

