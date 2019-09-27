#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/03\n" << std::endl;
    Pila<float> P1;
    int j=0;
    for (int i = 0; i <=2; i++) {
        P1.push(j+ 2);
    }
    std::cout << P1.peek() << std::endl;
}