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

// From ace/README:
//ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION  
//                                        For the GCC compiler
//                                        on AIX, HPUX and VxWorks we have to
//                                        explicitly instantiate static template
//                                        members else we get multiple instances
//                                        of the same static.
#if defined (ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION)
  template kn::Singleton<Foo> * kn::Singleton<Foo>::s_instance;
  template kn::Singleton<int> * kn::Singleton<int>::s_instance;
  template kn::Singleton<kn::Repository<Foo> > *
    kn::Singleton<kn::Repository<Foo> >::s_instance;
#endif /* ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION */

