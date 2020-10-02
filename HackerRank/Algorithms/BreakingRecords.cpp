#include <bits/stdc++.h>

#define db double
#define ll long long int
#define ar array

using namespace std;

ll n;

void solve() {
	vector<ll> rds(n);
	ll high = 0, low = 0;
	for(int i = 0; i < n; ++i)
		cin >> rds[i];
	ll temp1 = rds[0], temp2 = rds[0];
	for(int i = 0; i < n; ++i) {
		ll a = rds[i];
		if(temp1 < a) {
			high++;
			temp1 = rds[i];
		}
		if(temp2 > a) {
			low++;
			temp2 = rds[i];
		}
	}
	cout << high << " " << low << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	solve();
	return 0;
}
