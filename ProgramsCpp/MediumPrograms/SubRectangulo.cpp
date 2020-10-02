#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int n;
vector<int> sums;

void solve(vector<vector<int>> a) {
	ll ans = 0;
	for(int i = 0; i < (int)a.size(); ++i) {
		ll sum1 = 0;
		for(int j = 0; j < (int)a.size(); ++j) {
			for(int k = 0; k < (int)a.size(); ++k) {
				if(k == 0){ 
					sum1 += a[j][k];
				}
			}
			sums.push_back(sum1);
		}
	}
	for(int i = 0; i < (int)sums.size(); ++i)
		ans += sums[i];
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);	
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<vector<int>> a;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j)
			cin >> a[i][j];
	}
	solve(a);
	return 0;
}
