#include "libC.h"

#include <iostream>

using namespace std;

Foo::Foo()
{
  cout << "Foo ctor" << endl;
}

Foo::~Foo()
{
  cout << "Foo dtor" << endl;
}

kn::Singleton<Foo> Foo::instance;

void * libCFoo()
{
  return (void *) Foo::instance();
}

struct Bar
{
  Bar() { cout << "Executing static ctors for library knA" << endl; }
  ~Bar() { cout << "Executing static dtors for library knA" << endl; }
};

Bar bar;


KN_SINGLETON_TEMPLATE_INSTANTIATION(kn::Singleton<Foo>);
KN_SINGLETON_TEMPLATE_INSTANTIATION(kn::Singleton<FooRepository>);
KN_SINGLETON_TEMPLATE_INSTANTIATION(kn::Singleton<int>);
