#include <bits/stdc++.h>

#define db double
#define ll long long int
#define ar array

using namespace std;

ll n, m;

void solve() {
	cin >> n >> m;
	vector<ll> ar1(n);
	vector<ll> ar2(m);
	vector<ll> ans1;
	vector<ll> ans2;
	for(int i = 0; i < n; ++i)
		cin >> ar1[i];
	for(int i = 0; i < m; ++i)	
		cin >> ar2[i];
	ll mxm = *max_element(ar1.begin(), ar1.end());
	ll mnm = *min_element(ar2.begin(), ar2.end());
	vector<ll>::iterator it;
	for(int i = mxm; i <= mnm; ++i) {
		ll cont = 0;
		for(int j = 0; j < n; ++j) {
			if(i % ar1[j] == 0) {
				cont++;
			}
		}
		if(cont == n) {				
			it = find(ans1.begin(), ans1.end(), i);
			if(it == ans1.end())
				ans1.push_back(i);
		}
	}	
	for(int j = 0; j < (int)ans1.size(); ++j) {
		ll cont = 0;
		for(int i = 0; i < m; ++i) {
			if(ar2[i] % ans1[j] == 0) {
				cont++;
				//ans2.push_back(ans1[j]);
			}
		}
		if(cont == m) {
			it = find(ans2.begin(), ans2.end(), ans1[j]);
			if(it == ans2.end())
				ans2.push_back(ans1[j]);
		}
	}
	cout << ans2.size() << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();
	return 0;
}
