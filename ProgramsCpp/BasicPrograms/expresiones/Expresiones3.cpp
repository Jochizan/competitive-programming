// Escribir la siguiente expresion en c++

#include <iostream>

using namespace std;

int main(){

    float a, b, c, d, e, f, resultado = 0;
    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;
    cout << "Ingrese el valor de d: "; cin >> d;
    cout << "Ingrese el valor de e: "; cin >> e;
    cout << "Ingrese el valor de f: "; cin >> f;
    resultado = (a+(b/c))/(d+(e/f));
    cout.precision(2);
    cout << "\nEl resultado es: " << resultado << endl;
    return 0;
}
