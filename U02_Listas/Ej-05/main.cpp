#include <iostream>
#include "CircList.h"

int main() {
    std::cout << "Ejercicio 01/05\n" << std::endl;
    CircList<float> CL;
    for (int i = 0; i < 5; i++) {
        CL.insertar(i,i+1.5);
    }
    CL.print();
    CL.moverPri(4.5);
    CL.print();
    CL.remover(3);
    std::cout<<CL.getTamanio()<<std::endl;
    CL.moverUlti(0);
    CL.print();
    CL.reemplazar(2,2.5);
}