// Escriba un programa que lea de la entrada estándar los dos catetos de
// un triángulo rectángulo y escriba en la salida estándar su hipotenusa.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float CA, CO, H;
    cout << "Ingrese los catetos del triángulo rectángulo: " << endl;
    cin >> CA >> CO;
    H = sqrt(pow(CA, 2) + pow(CO, 2));
    cout << "El valor de la hipotenusa es: " << H << endl;
    return 0;
}
