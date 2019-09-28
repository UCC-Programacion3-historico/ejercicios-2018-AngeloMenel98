//
// Created by Angelo on 28/9/2019.
//
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
