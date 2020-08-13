#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double m1, m2, p, x1, y1, a1, b1, c1, a2, b2, c2, x2p, y2p, h1, k1, h2, k2;
    cout << "Ingrese los coeficientes del punto:\n";
    cin >> x1 >> y1;
    cout << "Ingrese la pendiente de la ecuación de la recta principal:\n";
    cin >> m1;
    cout << "Ingrese los valores de la otra ecuación:\n";
    cin >> a2 >> b2 >> c2;
    cout << "Ingrese los valores de la parábola:\n";
    cin >> x2p >> y2p;
    m2 = pow(m1, -1);
    p = y2p/2;
    a1 = b2;
    b1 = 4*x1;
    c1 = 4*pow(x1, 2);
    double R = abs(-b1 - sqrt(pow(b1, 2) - 4 * a1 * c1))/2*a1;
    double Ralt = pow(R*sqrt(2), 2);
    h1 = x1;
    k1 = y1 + R;
    h2 = c2;
    k2 = abs(m1*pow(c2, 2));
    cout << "La ecuación de la circunferencia es:\n";
    cout << "(x-" << h1 << ")^2" << "(y-" << k1 << ")^2=" << Ralt << endl;
    cout << "La ecuación de la parábola es:\n";
    cout << "(x" << h2 << ")^2" << "=" << y2p << "(x+" << k2 << ")"<<endl;
    return 0;
}
