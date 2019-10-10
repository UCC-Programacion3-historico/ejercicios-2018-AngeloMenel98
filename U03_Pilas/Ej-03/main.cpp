#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/03\n" << std::endl;
    Pila<float> P1;
    int j=0;
    P1.push(1.5);
    P1.push(1.6);
    P1.push(1.7);
    std::cout << "El dato que esta en la cima es: "<<P1.peek() << std::endl;
}