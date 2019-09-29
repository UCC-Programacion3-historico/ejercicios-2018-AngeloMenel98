#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b) {
    if (b == 0)
        throw 404;
    unsigned int z = a / b;
    return z;
}


unsigned int resto(unsigned int a, unsigned int b) {
    if (b == 0)
        throw 404;
    unsigned int z = a % b;
    return z;
}


void escribir_espaciado(unsigned int num) {}
