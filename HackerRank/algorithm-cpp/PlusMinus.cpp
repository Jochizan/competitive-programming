#include <bits/stdc++.h>

#define db double

using namespace std;

db porPos, porNeg, porZero;
int cont1, cont2, cont3;

int main() {
	int t;
	cin >> t;
	int dp[t];
	for(int i = 0; i < t; ++i) {
		cin >> dp[i];
	}
	for(int i = 0; i < t; ++i) {
		if(dp[i] > 0) {
			cont1++;
		}else if(dp[i] < 0) {
			cont2++;
		}else {
			cont3++;
		}
	}
	porPos = (db)cont1/(db)t;
	porNeg = (db)cont2/(db)t;
	porZero = (db)cont3/(db)t;
	cout << fixed;
	cout << setprecision(6) << porPos << endl;
	cout << setprecision(6) << porNeg << endl;
	cout << setprecision(6) << porZero << endl;
	return 0;
}
