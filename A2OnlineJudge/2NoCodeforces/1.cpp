#include <bits/stdc++.h>

#define db double
#define ll long long int

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	cin.ignore(0);
	for(int i = 0; i < n; ++i) {
		vector<int> dp;
		int m = 0;
		while(m < 10) {
			int num;
			cin >> num;
			dp.push_back(num);
			m++;
		}
		sort(dp.begin(), dp.end());
		cout << dp[1] << endl;
	}
				
	return 0;
}
