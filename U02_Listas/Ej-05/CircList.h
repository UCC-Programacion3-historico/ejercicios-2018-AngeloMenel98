#ifndef CIRCLIST_H
#define CIRCLIST_H

#include "../Lista/nodo.h"

template<class T>
class CircList {
private:
    Nodo<T> *inicio;
public:
    CircList();

    CircList(const CircList<T> &li);

    ~CircList();

    bool esVacia();

    int getTamanio();

    void insertar(unsigned int pos, T dato);

    void insertarPrimero(T dato);

    void insertarUltimo(T dato);

    T getDato(int pos);

    void remover(int pos);

    void reemplazar(int pos, T dato);

    void vaciar();

    void moverUlti(int pos);

    void moverPri(T dato);

    void print();
};

template<class T>
CircList<T>::CircList() {
    inicio = nullptr;
}

template<class T>
CircList<T>::CircList(const CircList<T> &li) {}

template<class T>
CircList<T>::~CircList() {
    vaciar();
}

template<class T>
bool CircList<T>::esVacia() {
    return inicio = nullptr;
}

template<class T>
int CircList<T>::getTamanio() {
    Nodo<T> *aux = inicio;
    int cant = 0;

    while (aux->getSiguiente() != inicio) {
        aux = aux->getSiguiente();
        cant++;
    }
    return cant;
}

template<class T>
void CircList<T>::insertar(unsigned int pos, T dato) {
    int posActual = 0;
    Nodo<T> *aux = inicio, *nuevo;

    if (pos == 0) {
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
        return;
    }

    while (posActual < pos - 1 && aux->getSiguiente() != inicio) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux->getSiguiente() == inicio)
        throw 404;

    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);
}

template<class T>
void CircList<T>::insertarPrimero(T dato) {
    insertar(0, dato);
}

template<class T>
void CircList<T>::insertarUltimo(T dato) {
    Nodo<T> *aux = inicio, *nuevo;

    if (aux == nullptr) {
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
        return;
    }

    while (aux->getSiguiente() != inicio) {
        aux = aux->getSiguiente();
    }

    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);
}

template<class T>
T CircList<T>::getDato(int pos) {
    Nodo<T> *aux = inicio;
    int posActual = 0;

    while (aux->getSiguiente() != inicio && posActual < pos) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux->getSiguiente() == inicio)
        throw 404;

    return aux->getDato();
}

template<class T>
void CircList<T>::remover(int pos) {
    Nodo<T> *aux = inicio, *aBorrar;
    int posActual = 0;

    while (aux->getSiguiente() != inicio && posActual < pos - 1) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux->getSiguiente() == inicio)
        throw 404;

    if (pos == 0) {
        inicio = inicio->getSiguiente();
        delete aux;
        return;
    }

    aBorrar = aux->getSiguiente();
    aux->setSiguiente(aBorrar->getSiguiente());

    delete aBorrar;
}

template<class T>
void CircList<T>::reemplazar(int pos, T dato) {
    Nodo<T> *aux = inicio;
    int posActual = 0;

    while (aux->getSiguiente() != inicio && posActual < pos) {
        aux = aux->getSiguiente();
        posActual++;
    }
    if (aux->getSiguiente() == inicio)
        throw 404;

    aux->setDato(dato);

}

template<class T>
void CircList<T>::vaciar() {
    Nodo<T> *aux = inicio, *aBorrar;

    while (aux->getSiguiente() != inicio) {
        aBorrar = aux;
        aux = aux->getSiguiente();
        delete aBorrar;
    }
    inicio = nullptr;
}

template<class T>
void CircList<T>::moverUlti(int pos) {
    Nodo<T> *aux = inicio, *aMover;
    int posActual = 0;
    while (aux->getSiguiente()!= inicio && posActual < pos - 1) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux->getSiguiente() != inicio) {
        throw 404;
    }

    if (pos == 0) {
        aMover = inicio;
        inicio = inicio->getSiguiente();
        aux = inicio;
    } else {
        aMover = aux->getSiguiente();
        aux->setSiguiente(aMover->getSiguiente());
    }


    aMover->setSiguiente(inicio);

    while (aux->getSiguiente() != inicio) {
        aux = aux->getSiguiente();
    }

    aux->setSiguiente(aMover);

}

template<class T>
void CircList<T>::moverPri(T dato) {
    Nodo<T> *aux = inicio, *aMover;

    // si la lista esta vacia tiro exp
    if (aux == nullptr)
        throw 404;

    // Si el dato ya está en el primer lugar no hago nada
    if (aux->getDato() == dato)
        return;

    while (aux->getSiguiente() != inicio && aux->getSiguiente()->getDato() != dato) {
        aux = aux->getSiguiente();
    }
    if (aux->getSiguiente() == inicio)
        throw 404;

    aMover = aux->getSiguiente();
    aux->setSiguiente(aMover->getSiguiente());

    aMover->setSiguiente(inicio);

    inicio = aMover;
}

template<class T>
void CircList<T>::print() {
    Nodo<T> *aux = inicio;

    while (aux->getSiguiente() != inicio) {
        std::cout << aux->getDato() << "->";
        aux = aux->getSiguiente();
    }
    std::cout << "INICIO" << std::endl;
}

#endif //CIRCLIST_H
