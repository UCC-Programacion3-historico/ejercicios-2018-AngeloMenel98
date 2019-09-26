#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
    int suma=0;
    if (size==1){
        suma=arr[0];
    }
    else{
        suma=suma+sumatoria(arr, size-1);
    }
    return suma;
}