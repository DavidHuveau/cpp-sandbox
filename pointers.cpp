#include "pointers.hpp"

#include <iostream>

using namespace std;

void pointers() {
    int age(18);
    int *ptr(nullptr);

    ptr = &age;
    cout << "the address of the age variable is " << &age << endl;
    cout << "the pointer is " << ptr << endl;

    *ptr = 22;
    cout << "the value is " << age << endl;
}
