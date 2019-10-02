
/* Función recursiva que tenga un parámetro que sea entero positivo y
   despliegue en la pantalla ese número de asteriscos: “*”, todos en una línea.*/

#include <iostream>

void asteriscos(int num) {
    if (num==1){
        std::cout<<"*";
    }else{
        asteriscos(num-1);
        std::cout<<"*";
    }
}
int main(){
    int n;
    std::cout<<"Ingrese numero: ";
    std::cin>>n;
    asteriscos(n);
}
