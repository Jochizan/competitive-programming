#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

ll n, d, m, ans = 0;

void solve() {
	vector<ll> arr(n);
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	cin >> d >> m;
	for(int i = 0; i < n; ++i) {
		ll sum = 0;	
		ll rs = i;
		for(int j = 0; j < m; ++j) {
			sum += arr[rs];
			if(sum == d && j == m - 1) {
				ans++;
			}
			rs++;
		}
	}
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	solve();
	return 0;
}
