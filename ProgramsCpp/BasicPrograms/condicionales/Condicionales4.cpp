// Escriba un programa que lea de la entrada estándar un caracter e
// indique en la salida si es un carácter es una vocal minúscula, es
// un vocal mayúscula o no es una vocal.

#include <iostream>

using namespace std;

int main() {
    char caracter;
    cin >> caracter;
    switch(caracter) {
        case 'a': cout << "Es una vocal minúscula\n"; break;
        case 'e': cout << "Es una vocal minúscula\n"; break;
        case 'i': cout << "Es una vocal minúscula\n"; break;
        case 'o': cout << "Es una vocal minúscula\n"; break;
        case 'u': cout << "Es una vocal minúscula\n"; break;
        case 'A': cout << "Es una vocal mayúscula\n"; break;
        case 'E': cout << "Es una vocal mayúscula\n"; break;
        case 'I': cout << "Es una vocal mayúscula\n"; break;
        case 'O': cout << "Es una vocal mayúscula\n"; break;
        case 'U': cout << "Es una vocal mayúscula\n"; break;
        default: cout << "No es una vocal"; break;
    }
}
