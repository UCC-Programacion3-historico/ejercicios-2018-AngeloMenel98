#include <iostream>
#include <string>
#include "../HashMap/HashMapConColi.h"

using namespace std;


unsigned int miHashF(string clave);


int main() {
    HashMap<int, string> th(13);

    th.put(13, "Hola");
    th.put(325, "Chau");
    th.print();
}

unsigned int miHashF(string clave) {
    unsigned int idx = 1;
    for (int i = 0; i < clave.length(); ++i) {
        idx *= clave[i] * clave[i];
    }

    return idx;
}