/* -*- C++ -*- */
#ifndef libC_h
#define libC_h

#include "libknC_Export.h"
#include "knShare/Singleton.h"
#include "knShare/Repository.h"

struct libknC_Export Foo
{
  int bar;

  static kn::Singleton<Foo> instance;

  Foo();
  ~Foo();
};

LIBKNC_SINGLETON_DECLARATION(kn::Singleton<Foo>);

extern "C" libknC_Export void * libCFoo();

typedef kn::Repository<Foo> FooRepository;

typedef kn::Singleton<FooRepository> FooRepositorySingleton;
LIBKNC_SINGLETON_DECLARATION(kn::Singleton<FooRepository>);

typedef kn::Singleton<int> TestIntSingleton;
LIBKNC_SINGLETON_DECLARATION(kn::Singleton<int>);

#endif // libC_h
