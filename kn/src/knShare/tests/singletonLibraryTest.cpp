#include <ace/DLL_Manager.h>
#include <ace/Default_Constants.h>
#include <ace/Log_Msg.h>

#include <iostream>

using namespace std;

typedef void* (*FooSingletonPtr) (void);

int main(int, char**)
{
  ACE_DLL_Handle dll;

  {
    cout << "main" << endl;

    int retval = dll.open (ACE_DLL_PREFIX ACE_TEXT("libknC"), RTLD_LAZY,  ACE_SHLIB_INVALID_HANDLE);
    
    if (retval != 0)
      ACE_ERROR_RETURN ((LM_ERROR,
                         "%p",
                         "dll.open"),
                        -1);

    cout << "libknC opened" << endl;

    FooSingletonPtr fooSingleton;
    
    // Cast the void* to non-pointer type first - it's not legal to
    // cast a pointer-to-object directly to a pointer-to-function.
    void *void_ptr = dll.symbol (ACE_TEXT ("libCFoo"));
    
    cout << "pointer to symbol: " << void_ptr << endl;
    
    ptrdiff_t tmp = reinterpret_cast<ptrdiff_t> (void_ptr);
    fooSingleton = reinterpret_cast<FooSingletonPtr> (tmp);
    
    if (fooSingleton == 0)
    {
      ACE_ERROR_RETURN ((LM_ERROR,
                         "%p",
                         "dll.symbol"),
                        -1);
    }
    
    {
      cout << "library C opened" << endl;
      void * foo = fooSingleton();
      cout << "Foo singleton: " << foo << endl;
    }
    
    cout << "close " << dll.close (1) << endl;
  }

  cout << "eom" << endl;
  return 0;
}
