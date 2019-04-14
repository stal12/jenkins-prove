#include <iostream>

#include "mylib.h"

int main (void) {
    int a = 2;
    int b = 3;
    std::cout << a << " + " << b << " = " << Sum(a, b);
    return 0;
}