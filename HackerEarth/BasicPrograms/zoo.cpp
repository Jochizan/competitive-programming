#include <bits/stdc++.h>

using namespace std;

int main() {
	string cad, ans;
	cin >> cad;
	int cont1 = 0, cont2 = 0;
	for(char e: cad) {
		if(e == 'z') {
			cont1++;
		}else {
			cont2++;
		}
	}
	if(cont1 * 2 == cont2) {
		ans = "Yes";
	}else {
		ans = "No";
	}
	cout << ans << endl;
	return 0;
}
