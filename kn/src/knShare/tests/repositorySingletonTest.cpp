#include "libknA/libA.h"
#include "libknB/libB.h"
#include "libknC/libC.h"

#include <iostream>

using namespace std;

int main(int, char**)
{

    cout << "lib knA singleton <FooRepository>" << libAFooRepository() << endl;
    cout << "lib knB singleton <FooRepository>" << libBFooRepository() << endl;
    cout << " main singleton <FooRepository>" <<
         (void *)FooRepository::instance () << endl;

    void* a = libAFooRepository();
    void* b = libBFooRepository();
    void* c = (void *)FooRepository::instance();

    if ( a == b && b == c ) {
        cout << "PASS" << endl;
        return 0;
    }
    else {
        cout << "FAIL" << endl;
        return -1;
    }
}
