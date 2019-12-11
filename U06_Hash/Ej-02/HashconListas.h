#ifndef HASHMAP_H
#define HASHMAP_H

#include "../HashMap/HashEntry.h"
#include "ListaHash.h"
#include <iostream>

using namespace std;

template<class K, class T>
class HashMap {
private:
    static unsigned int hashFunc(K clave);

    unsigned int (*hashFuncP)(K clave);

    Lista <K, T> **tabla;

    unsigned int tamanio;


public:
    HashMap(unsigned int k);

    HashMap(unsigned int k, unsigned int (*hashFuncP)(K clave));

    T get(K clave);

    void put(K clave, T valor);

    void remove(K clave);

    ~HashMap();

    bool esVacio();

    void print();

};

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k) {
    tabla = new Lista <K, T> *[k];
    tamanio = k;
    hashFuncP = hashFunc;
    for (int i = 0; i < tamanio; ++i) {
        tabla[i] = nullptr;
    }
}

template<class K, class T>
HashMap<K, T>::~HashMap() {

}

template<class K, class T>
T HashMap<K, T>::get(K clave) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr)
        throw 404;
    return tabla[idx]->search(clave);
}

template<class K, class T>
void HashMap<K, T>::put(K clave, T valor) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr) {
        tabla[idx] = new Lista<K, T>;
        tabla[idx]->insertarPrimero(clave, valor);
    } else
        tabla[idx]->insertarPrimero(clave, valor);
}

template<class K, class T>
void HashMap<K, T>::remove(K clave) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    tabla[idx]->remover(clave);
}

template<class K, class T>
bool HashMap<K, T>::esVacio() {
    for (int i = 0; i < tamanio; ++i) {
        if (tabla[i] != nullptr)
            return false;
    }
    return true;
}

template<class K, class T>
unsigned int HashMap<K, T>::hashFunc(K clave) {
    return clave;
}

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k, unsigned int (*fp)(K)) {
    tabla = new Lista <K, T> *[k];
    tamanio = k;
    hashFuncP = fp;
    for (int i = 0; i < tamanio; ++i) {
        tabla[i] = nullptr;
    }
}

template<class K, class T>
void HashMap<K, T>::print() {
    for (int i = 0; i < tamanio; ++i) {
        cout << i << '\t';
        int tam = tabla[i]->getTamanio();
        if (tam >= 1)
            tabla[i]->print();
        cout << '\n';
    }
}


#endif //HASHMAP_H