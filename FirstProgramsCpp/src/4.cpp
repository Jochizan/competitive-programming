#include <iostream>
#include <math.h>

using namespace std;

const double PI =3.141592653589;

int main() {
    double x1, y1, coef_p, r;
    cout << "Ingrese los coeficientes de la ecuación de la parábola: " << endl;
    cin >> x1;
    cin >> y1;
    coef_p = x1 / 2;
    r = 2 * coef_p;
    cout << "El centro de la circunferencia es:\n(p, 0)" << endl;
    double arearestada = 0;
    double coef_int = pow(0.5+1, -1);
    arearestada = (PI * pow(r*2, 2))/ 2 - 2*(y1/2*coef_int); 
    arearestada = arearestada/(PI*pow(r*2, 2));
    cout << "La relación en decimales de AROL sobre SO es: " << arearestada << endl;
    return 0;
}
