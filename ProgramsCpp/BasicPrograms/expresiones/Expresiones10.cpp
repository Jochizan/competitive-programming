// Escriba un programa qe calcule las soluciones de una ecuación de segundo grado
// de la forma ax^2 + bx + c = 0 teniendo en cuenta que:

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c, x1, x2;
    cout << "Ingrese los valores de la ecuación de segundo grado: " << endl;
    cin >> a >> b >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c))/2 * a;
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c))/2 * a;
    cout << "\nLos valores de la ecuación de segundo grado son: " << endl;
    cout << x1 << endl << x2 << endl;
    return 0;
}
