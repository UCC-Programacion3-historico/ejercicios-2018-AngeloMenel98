#include <iostream>
#include "../Cola/Cola.h"

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;
    Cola<char> C1,C2;
    for (int i = 0; i < 5; i++) {
        C1.encolar('a');
        C2.encolar('b');
    }
    int t=0;
    for (int i = 0; i < 5; i++) {
        if(C1.desencolar()!=C2.desencolar()){
            std::cout<<"Las colas no son iguales"<<std::endl;
            t=1;
            break;
        }
    }
    if(t==0)
        std::cout<<"Las colas son iguales"<<std::endl;
}