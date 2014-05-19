#include "knShare/LruPool.h"

#include <iostream>

using namespace std;
using namespace kn;

struct Foo
{
  int i;
};

typedef LruPool<Foo> FooLruPool;

int main(int, char**)
{ 
  FooLruPool fooPool(4);
  
  
  FooLruPool::TypePtr foo0 = fooPool.lruObject();
  {
    FooLruPool::TypePtr foo1 = fooPool.lruObject();
    FooLruPool::TypePtr foo2 = fooPool.lruObject();
    FooLruPool::TypePtr foo3 = fooPool.lruObject();
  
    foo0->i = 0;
    foo1->i = 1;
    foo2->i = 2;
    foo3->i = 3;
  
    try {
      fooPool.lruObject();
      assert(false);
    }
    catch (std::exception const& e) {
      cout << "pool empty: " << e.what() << endl;
    }
  }
  
  int n;
  {
    FooLruPool::TypePtr foo1 = fooPool.lruObject();
    n = foo1->i;
  }

  int m;
  {
    FooLruPool::TypePtr foo1 = fooPool.lruObject();
    m = foo1->i;
  }
  
  cout << "immedidate reuse, returns objects " << n << ", " << m << endl;
  assert(n == m);

  FooLruPool::TypePtr foo1 = fooPool.lruObject();
  int f1 = foo1->i;
  FooLruPool::TypePtr foo2 = fooPool.lruObject();
  int f2 = foo2->i;
  foo1.reset();
  FooLruPool::TypePtr foo3 = fooPool.lruObject();
  int f3 = foo3->i;

  cout << "interleaving reuse, returns objects " << f1 << ", " << f2 << ", " << f3 << endl;
  assert (f1 == f3 && f1 != f2);
  
  return 0;
}
