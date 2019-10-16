#include <iostream>
#include "ColaPriorida.h"

int main() {
    ColaPriorida C1(2);
    C1.encolar(300,0);
    C1.encolar(252,1);
    C1.encolar(501,0);
    std::cout<<"Monto total gastado: "<<C1.suma()<<std::endl;
    C1.print();
    //std::cout<<"Cantidad de embarazadas: "<<C1.cantprior(0)<<std::endl;
}