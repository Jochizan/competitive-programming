#include <bits/stdc++.h>

#define db double
#define ll long int
const unsigned long long MAX = 1e9;
const int len = 2e5;

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin >> n;
	ll ans = 0;
	vector<ll> vec(n);
	for(ll i = 0; i < n; ++i)
		cin >> vec[i];
	for(ll i = 1; i < n; ++i) {
		if(vec[i] < vec[i-1]) {
			ll temp = abs(vec[i] - vec[i-1]);
			ans += temp;
			vec[i] += temp;
		}
	}
	cout << ans << endl;
	return 0;
}
