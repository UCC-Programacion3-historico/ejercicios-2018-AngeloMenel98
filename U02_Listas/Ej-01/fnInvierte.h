#include "../Lista/Lista.h"
#include "../Lista/nodo.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis){
    int j=lis->getTamanio();
    for(int i=0;i<=(j/2);i++){
        lis->moverUlti(i);
        j--;
        lis->moverPri(lis->getDato(j));
    }
}


#endif //FNINVIERTE_H
