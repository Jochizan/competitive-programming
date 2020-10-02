#include <bits/stdc++.h>

#define db double
#define ll long long

using namespace std;

db fcx, fcy, LR, La, pa, pb, pc, pd;
db a, b, c1, h, k, p; 

void solve() {
    La = La*LR/2;
    c1 = La/2;
    c1 = pow(c1, 2);
    b = sqrt(c1/2);
    a = pow(b, 2);
	k = pb/-4;
	p = pc/-8;
	h = (pd - 2*pow(k, 2))/(8*p);
	fcx = h;
	fcy = k;
	cout << "La ecuación de la elipse es: " << "\n";
	cout << "(x+" << -fcx << ")^2/" << pow(a, 2) << " + " << "(y+" << -fcy << ")^2/" << pow(b, 2) << " = 1" << endl;
}

int main() {
	cout << "Ingrese el valor del Lado Recto: ";
	cin >> LR;
	cout << "Ingrese la longitud que determina en el eje 'x': ";
	cin >> La;
	cout << "Ingrese la ecuación de la parábola: ";
	cin >> pa >> pb >> pc >> pd;
	solve();
	return 0;
}
