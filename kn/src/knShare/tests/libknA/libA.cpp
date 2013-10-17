#include "libA.h"
#include "libknC/libC.h"

void * libA()
{
  TestIntSingleton i;
  return (void *) i();
}
void * libAFoo()
{
  return (void *) Foo::instance();
}
void * libAFooRepository()
{
  return (void *) FooRepository::instance();
}
