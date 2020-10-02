#include <bits/stdc++.h>

#define db double

using namespace std;

db rx1, ry1, rx2, ry2, Efoc, Emay;
db ans, a, b, c, f1x, f1y, f2x, f2y, fcx, fcy;

void solved() {
	a = Emay/2;
	f1y = Efoc;
	f2y = Efoc;
	f1x = -ry1*f1y/rx1;
	f2x = -ry2*f2y/rx2;
	fcx = (f1x + f2x)/2;
	fcy = (f1y + f2y)/2;
	c = (f1x - f2x)/2;
	b = sqrt(pow(a, 2) - pow(c, 2));
	cout << "La ecuación de la elipse es: " << endl;
	cout << "(x + " << -fcx << ")^2/" << pow(a, 2) << " + " << "(y + " << -fcy << ")^2/" << pow(b, 2) << " = 1" << endl;
}

int main() {
	cout << "Ingrese los coeficientes de la recta1: "; 
	cin >> rx1 >> ry1;
	cout << "Ingrese los coeficientes de la recta2: ";
	cin >> rx2 >> ry2;
	cout << "Ingrese el eje focal en y: ";
	cin >> Efoc;
	cout << "Ingrese el eje mayor: ";
	cin >> Emay;
	solved();
	return 0;
}
