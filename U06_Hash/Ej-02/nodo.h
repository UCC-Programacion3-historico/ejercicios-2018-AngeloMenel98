//
// Created by martin on 21/8/19.
//

#ifndef NODO_H
#define NODO_H

template<class K, class T>
class Nodo {
private:
    T dato;
    K clave;
    Nodo<K, T> *siguiente;
public:
    T getDato() {
        return dato;
    }

    void setDato(T d) {
        dato = d;
    }
    K getClave() {
        return clave;
    }

    void setClave(K d) {
        clave = d;
    }
    Nodo<K, T> *getSiguiente() {
        return siguiente;
    }

    void setSiguiente(Nodo<K, T> *siguiente) {
        this->siguiente = siguiente;
    }

};


#endif //PROGRAMACION3_NODO_H
