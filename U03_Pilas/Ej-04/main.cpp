#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/04\n" << std::endl;
    char arr[100];
    Pila<char> p;

    std::cout << "Introduzca una palabra" << std::endl;
    std::cin >> arr;

    for (int i = 0; arr[i] != '\0'; i++) {
        if(arr[i]!=')')
            p.push(arr[i]);
        for(int j=i;arr[j]=='(';j--){
            p.pop();
        }
    }
    
    if (p.esVacia())
        std::cout<<"Los parentesis estan balanceados"<<std::endl;
    else
        std::cout<<"Los parentesis no estan balanceados"<<std::endl;
}