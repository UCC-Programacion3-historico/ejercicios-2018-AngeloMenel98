//
// Created by Angelo on 28/9/2019.
//

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
