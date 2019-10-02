
/*Escriba una función void recursiva que reciba como parámetro solo un entero positivo
n y que despliegue todos los enteros impares menores a n*/

#include <iostream>
void impar(int num) {
    if (num % 2 == 0)
        num--;
    num -= 2;
    std::cout << num << std::endl;
    if (num <= 1)
        return;
    impar(num);
}

int main(){
    int n;
    std::cout<<"Ingrese numero: ";
    std::cin>>n;
    impar(n);
}
