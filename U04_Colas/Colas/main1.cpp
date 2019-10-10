
/*Hacer una función que dada una frase ingresada por teclado la imprima invertida.
Implementar la función con la estructura de datos vista más adecuada*/

#include <iostream>
#include "../Cola/Cola.h"

void reverse(char a[100]) {
    Cola<char> c;
    for (int i = 0; a[i] != '\0'; i++) {
        c.encolar(a[i]);
    }
    for (int i = 0; a[i] != '\0'; i++) {
        std::cout << c.desencolar();
    }
}

int main() {
    char a[100];
    std::cout << "Ingrese frase: ";
    std::cin >> a;
    reverse(a);


}
