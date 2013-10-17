#include "libknA/libA.h"
#include "libknB/libB.h"
#include "libknC/libC.h"

#include <iostream>

using namespace std;

int main(int, char**)
{
  TestIntSingleton i;
    cout << "lib knA singleton <int>" << libA() << endl;
    cout << "lib knB singleton <int>" << libB() << endl;
    cout << " main singleton <int>" << (void *)i() << endl;

    void* a = libA();
    void* b = libB();
    void* c = (void *)i();

    if ( a == b && b == c ) {
        cout << "PASS" << endl;
        return 0;
    }
    else {
        cout << "FAIL" << endl;
        return -1;
    }
}
