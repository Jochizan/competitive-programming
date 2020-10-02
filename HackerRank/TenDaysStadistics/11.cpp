#include <bits/stdc++.h>

using namespace std;

int n;

double solve(vector<int> d, vector<int> nu) {
	double mn = 0, sum = 0;
	for(int i = 0; i < n; ++i)
		mn += (double)d[i] * (double)nu[i];
	for(int i = 0; i < n; ++i)
		sum += (double)nu[i];
	return mn /= sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;	
	vector<int> dp(n);
	vector<int> num(n);
	for(int i = 0; i < n; ++i)
		cin >> dp[i];
	for(int i = 0; i < n; ++i)
		cin >> num[i];
	double ans = solve(dp, num);
	cout << fixed;
	cout << setprecision(1);
	cout << ans << endl;
	return 0;
}
