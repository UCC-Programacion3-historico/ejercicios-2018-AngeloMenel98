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


void escribir_espaciado(unsigned int num) {
    if (cociente(num, 10) < 10) {
        std::cout << cociente(num,10)<<" "<<resto(num,10) << " ";
        return;
    } else {
        escribir_espaciado(cociente(num, 10));
        std::cout<<resto(num,10)<<" ";
    }
}
