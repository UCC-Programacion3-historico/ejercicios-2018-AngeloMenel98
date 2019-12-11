#include <iostream>
#include "HashconListas.h"
#include <string>

using namespace std;

int main() {
    HashMap<int, string> th(13);

    th.put(13, "Hola");
    th.put(325, "Chau");
    th.put(14, "Casa");

    th.print();
}