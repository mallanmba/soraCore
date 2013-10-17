#include "libB.h"
#include "libknC/libC.h"

void * libB()
{
  TestIntSingleton i;
  return (void *)i();
}
void * libBFoo()
{
  return (void *)Foo::instance();
}
void * libBFooRepository()
{
  return (void *)FooRepository::instance();
}
