#include <bits/stdc++.h>

#define db double
#define ll long long

using namespace std;

db a1, b1, c1, a2, b2, c2, a, b, c, LR;
db A, B, C, D, E, fc1x, fc1y, fcx, fcy;
db fe1x, fe1y; 

void solve() {
    LR = LR/2;
    fc1x = -C/2;
    fc1y = -D/2;
    a1 = fc1x;
    b1 = fc1y;
    c1 = sqrt(pow(a1, 2) - pow(b1, 2));
    fe1x = fc1x + c1;
    fe1y = fc1y;
    a = pow(fc1y, 2)*3/(3*fc1y*2-2*fc1y);
    c = fc1y - a;
    b = sqrt(pow(a, 2) - pow(c, 2));
    fcx = fe1x;
    fcy = fe1y + c;
	cout << "La ecuación de la elipse es: " << endl;
	cout << "(x + " << -fcx << ")^2/" << pow(b, 2) << " + " << "(y + " << fcy << ")^2/" << pow(a, 2) << " = 1" << endl;
}

int main() {
	cout << "Ingrese el valor del Lado Recto: ";
    cin >> LR;
    cout << "Ingrese la ecuación de la recta: ";
    cin >> a >> b >> c;
    cout << "Ingrese la ecuación de la circunferencia: ";
    cin >> A >> B >> C >> D >> E;
    solve();
	return 0;
}
