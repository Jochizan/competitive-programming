#include <bits/stdc++.h>

#define db double

using namespace std;

db f1x, f1y, f2x, f2y, Dd;
db fcx, fcy, a, b, c;

void solved() {
	fcx = (f1x + f2x)/2;
	fcy = (f1y + f2y)/2;
	c = (f2y - f1y)/2;
	a = sqrt(Dd*c/2);
	b = sqrt(pow(a, 2) - pow(c, 2));
	cout << "La ecuación de la eclipse es: " << endl;
	cout << "(x + " << -fcx << ")^2/" << pow(b, 2) << " + " << "(y + " << -fcy << ")^2/" << pow(a, 2) << " = 1" << endl;
}

int main() {
	cout << "Ingrese el foco 1: ";
	cin >> f1x >> f1y;
	cout << "Ingrese el foco 2: ";
	cin >> f2x >> f2y;
	cout << "Ingrese la distancia entre las directrices: ";
	cin >> Dd;
	solved();
	return 0;
}
