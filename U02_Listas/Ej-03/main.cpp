#include <iostream>
#include "../Lista/Lista.h"
#include "../Lista/nodo.h"
int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;
    Lista<int> lis;
    int i,j;
    for (j=0; j < 10; j++) {
        lis.insertarPrimero(j);
    }
    Nodo<int> *aux;
    char c;
    while (i != 0) {
        std::cout << "Eliminar: ";
        std::cin >> j;
        while (aux->getSiguiente()!= nullptr && aux->getSiguiente()->getDato()==j){
            aux->getSiguiente();
        }
        lis.remover(aux->getSiguiente()->getDato());
        std::cout<<"Seguir eliminando?s/n";
        std::cin>>c;
        if(c=='n')
            i=0;
    }
}