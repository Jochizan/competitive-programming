#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t, n, m;
	cin >> t;
	vector<vector<int>> dp;
	while(--t) {
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				cin >> dp[i][j];
			}
		}
		for(int = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if(dp[i][j] == dp[i+1][j+1] ||dp[i][j] dp[i][j+1] )
					
		cout << n << endl;
	}
	return 0;
}
