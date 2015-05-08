#include "knShare/LruPool.h"

#include <iostream>
#include <cassert>

using namespace std;
using namespace kn;

struct Foo
{
  int i;
};

typedef LruPool<Foo> FooLruPool;

bool fixedLruPool()
{
  bool rc = false;
  
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
  
  rc = true;
  return rc;
}

bool growingLruPool()
{
  bool rc = false;
  
  FooLruPool fooPool(2, 4);
  
  assert(fooPool.maxUtilization() == 0);
  FooLruPool::TypePtr foo0 = fooPool.lruObject();
  {
    assert(fooPool.maxUtilization() == 1);
    FooLruPool::TypePtr foo1 = fooPool.lruObject();
    assert(fooPool.maxUtilization() == 2);
    FooLruPool::TypePtr foo2 = fooPool.lruObject();
    assert(fooPool.maxUtilization() == 3);
    FooLruPool::TypePtr foo3 = fooPool.lruObject();
    assert(fooPool.maxUtilization() == 4);
    
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
    assert(fooPool.maxUtilization() == 4);
  }
  
  rc = true;
  return rc;
}

bool reclaimingLruPool()
{
  bool rc = false;
  
  FooLruPool fooPool(2, 4, true);
  
  
  {
  FooLruPool::TypePtr foo0 = fooPool.lruObject();
  {
    FooLruPool::TypePtr foo1 = fooPool.lruObject();
    FooLruPool::TypePtr foo2 = fooPool.lruObject();
    FooLruPool::TypePtr foo3 = fooPool.lruObject();
    
    foo0->i = 0;
    foo1->i = 1;
    foo2->i = 2;
    foo3->i = 3;
  }
  }
  // size is only adjusted on request of a new object
  FooLruPool::TypePtr foo1 = fooPool.lruObject();
  assert(fooPool.size() == 2);
  
  cout << "lru pool max util: " << fooPool.maxUtilization() << endl;
  cout << "lru pool reclaim:  " << fooPool.size() << endl;
  rc = true;
  return rc;
}

int main(int, char**)
{ 
  fixedLruPool();
  growingLruPool();
  reclaimingLruPool();
  
  return 0;
}
