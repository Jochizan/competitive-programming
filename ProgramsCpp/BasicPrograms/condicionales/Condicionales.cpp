// Que un número cumpla unas determinadas condiciones establecidas.

#include <iostream>

using namespace std;

int main() {
    int numero, dato = 5;
    cout << "Digite un número: ";
    cin >> numero;
    if(numero == dato) {
        cout << "El numero es 5";
    } else {
        cout << "El número es diferente de 5";
    }
    return 0;
}
