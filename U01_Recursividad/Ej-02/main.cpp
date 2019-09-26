#include <iostream>
#include "sumatoria.h"

using namespace std;

int main() {
    cout << "Ejercicio 01/02\n" <<endl;
    int a[4];
    a[0]=5;
    a[1]=4;
    a[2]=2;
    a[3]=6;
    cout<<"La suma del arreglo es "<<sumatoria(a,4)<<endl;
    return 0;
}