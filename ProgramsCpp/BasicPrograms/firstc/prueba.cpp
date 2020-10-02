#include <bits/stdc++.h>

#define ll long long
#define	db double

using namespace std;

void solved() {
	
}

int suma(int a, int b) {
	return a + b;
}

int resta(int a, int b) {
	return a - b;
}

int multiplicacion(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return a / b;
}


bool mayor(int a, int b) {
	return max(a, b);
}

int main() {
	ll a, b;
	cin >> a >> b;
	cout << suma(a, b) << endl;
	cout << mayor(a, b) << endl;
	return 0;
}
