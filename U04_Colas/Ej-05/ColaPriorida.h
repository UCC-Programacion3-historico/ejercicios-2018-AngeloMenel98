#include "../Cola/Cola.h"

#ifndef PROGRAMACION3_COLAPRIORIDA_H
#define PROGRAMACION3_COLAPRIORIDA_H


class ColaPriorida {
    Cola<int> *colas;
    int tamanio;

public:
    explicit ColaPriorida(int cant) {
        tamanio = cant;
        colas = new Cola<int>[cant];
    }

    void encolar(int d, int prioridad) {
        if (prioridad >= 0 && prioridad < tamanio)
            colas[prioridad].encolar(d);
        else
            throw 252;
    }

    int desencolar() {
        for (int i = 0; i < tamanio; ++i) {
            if (!colas[i].esVacia())
                return colas[i].desencolar();
        }
        throw 404;
    }

    void print() {
        for (int i = 0; i < tamanio; ++i) {
            while (!colas[i].esVacia())
                std::cout << colas[i].desencolar() << "->";
        }
        std::cout << "NULL" << std::endl;
    }

    int suma() {
        int plus = 0;
        for (int i = 0; i < tamanio; ++i) {
            while (!colas[i].esVacia())
                plus = plus + colas[i].desencolar();
        }
        return plus;
    }

    int cantprior(int prioridad) {
        int plus = 0;
        while (!colas[prioridad].esVacia()) {
            colas[prioridad].desencolar();
            plus++;
        }
        return plus;
    }

};


#endif //PROGRAMACION3_COLAPRIORIDA_H
