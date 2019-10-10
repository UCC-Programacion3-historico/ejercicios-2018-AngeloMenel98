#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;
    Lista<int> li;
    li.insertar(0, 5);
    li.insertar(1, 3);
    li.insertar(2, 10);
    li.insertar(3, 1);
    li.insertar(4, 2);

    std::cout << "Lista Original: ";
    li.print();
    fnInvierte(&li);

    std::cout << "Lista Invertida: ";
    li.print();
}

