#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/05\n" << std::endl;
    char arr[50];
    Pila<char> p;

    std::cout << "Introduzca una palabra" << std::endl;
    std::cin >> arr;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            std::cout << arr[i];
        }
        if (arr[i] == ')') {
            while (p.peek() != '(') {
                std::cout << p.pop();
            }
            p.pop();        //Elimina de la Pila el parentesis izquierdo.
        }
        if ((arr[i] == '+' || arr[i] == '-') && (p.peek() == '+' || p.peek() == '-')) {
            std::cout << p.pop();
            p.push(arr[i]);
        }
        if ((arr[i] == '*' || arr[i] == '/') && (p.peek() == '*' || p.peek() == '/')) {
            std::cout << p.pop();
            p.push(arr[i]);
        }
        if (arr[i] == '(' || arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/' || arr[i] == '^')
            p.push(arr[i]);
    }
}