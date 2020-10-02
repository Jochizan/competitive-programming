// Hacer un programa que reconozca los números en un rango del 1- 5.

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Digite un número entre el 1-5: ";
    cin >> numero;

    switch(numero) {
        case 1: cout << "Es el número 1"; break;
        case 2: cout << "Es el número 2"; break;
        case 3: cout << "Es el número 3"; break;
        case 4: cout << "Es el número 4"; break;
        case 5: cout << "Es el número 5"; break;
        default: cout << "No esta en el rango de 1-5"; break;
    }
    return 0;
}
