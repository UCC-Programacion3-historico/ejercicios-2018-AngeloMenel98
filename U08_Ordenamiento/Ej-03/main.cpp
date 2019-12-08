#include <iostream>

using namespace std;


void quicksort(float v[], int primero, int ultimo) {
    int central, i, j;
    float pivot, aux;
    central = (primero + ultimo) / 2;
    pivot = v[central];
    i = primero;
    j = ultimo;

    do {
        while (v[i] < pivot) i++;
        while (v[j] > pivot) j--;
        if (i <= j) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j)
        quicksort(v, primero, j);

    if (i < ultimo)
        quicksort(v, i, ultimo);
}

int main() {
    float v[6] = {5.2, 10, 6.5, 1.2, 8.7, 2.9};
    cout << "Ordenamiento por Quicksort" << endl;
    quicksort(v, 0, 5);
    for (int i = 0; i < 6; ++i) {
        cout << v[i] << endl;
    }
}