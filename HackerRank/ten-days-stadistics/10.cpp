#include <bits/stdc++.h>

#define db double
#define ll long double
#define li long long int

using namespace std;

ll n;

ll media(vector<li> ar) {
	ll mdn = 0;
	for(int i = 0; i < n; ++i)
		mdn += ar[i];
	return mdn /= n;
}

ll mediana(vector<li> ar) {
	if(ar.size()%2 == 1) {
		return (ll)ar[n/2];
	}else {
		ll imp = ((ll)ar[n/2-1] + (ll)ar[n/2])/2;
		return imp;
	}
}

li moda(vector<li> ar) {
	li max = 0;
	li ans;
	for(int i = 0; i < (int)ar.size(); ++i) {
		li cont = 1;
		for(int j = i + 1; j < (int)ar.size(); ++j) {
			if(ar[i] == ar[j]) {
				cont++;
			}
		}
		if(max < cont) {
			max = cont;
			ans = ar[i];
		}
	}
	if(max == 1) {
		return ar[0];
	}else {
		return ans;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	vector<li> dp(n);
	for(int i = 0; i < n; ++i)
		cin >> dp[i];
	sort(dp.begin(), dp.end());
	ll a = media(dp);
	ll b = mediana(dp);
	li c = moda(dp);
	cout << fixed;
	cout << setprecision(1);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
