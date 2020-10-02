#include <bits/stdc++.h>

#define db double
#define ll long 
#define ar array

using namespace std;

int n, k;

void solve() {
	vector<int> dp(n);
	int ans = 0;
	for(int i = 0; i < n; ++i)
		cin >> dp[i];
	for(int i = 0; i < n - 1; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if((dp[i] + dp[j]) % k == 0) {
				ans++;
			}
		}
	}
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> k;
	solve();
	return 0;
}
