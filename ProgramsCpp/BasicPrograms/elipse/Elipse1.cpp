#include <bits/stdc++.h>

#define db double

using namespace std;

db a, b, c, e, Dd;

void solved() {
	a = Dd*e/2;
	c = a*e;
	b = sqrt(pow(a, 2)-pow(c, 2));
	db sum = pow(a, 2)*pow(b, 2);
	cout << "La ecuación de la elipse es: \n" << pow(a, 2) << "x^2 + " << pow(b, 2) << "y^2 = " << sum << endl; 	
}

int main() {
	cout << "Ingrese la distancia entre las directrices: ";
	cin >> Dd;
	cout << "Ingrese la excentricidad: ";
	cin >> e;
	solved();
	return 0;
}
