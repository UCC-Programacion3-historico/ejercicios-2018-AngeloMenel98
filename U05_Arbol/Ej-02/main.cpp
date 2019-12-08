#include <iostream>
#include "../Arbol/ArbolBinario.h"

int main() {
    ArbolBinario<int> Arbol;
    Arbol.put(10);
    Arbol.put(5);
    Arbol.put(15);
    Arbol.put(0);
    Arbol.put(20);

   std::cout<<"Arbol en Inorden: ";
   Arbol.inorder();
   std::cout<<"Arbol en Postorden: ";
   Arbol.postorder();
}