#include <bits/stdc++.h>

#define db double
#define ll unsigned long long
const int MAX = 1e6;

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string ar;
	ll i = 0;
	ll cont[4] = {0, 0, 0, 0};
	vector<ll> ans;
	cin >> ar;
	while(i != ar.size()) {
		if(ar[i] == 'A') {
			cont[0]++;
		}else if(ar[i] == 'C') {
			cont[1]++;
		}else if(ar[i] == 'G') {
			cont[2]++;
		}else {
			cont[3]++;
		}
		if(ar[i] != 'A' || ar[i+1] == '\0') {
			if(cont[0] != 0) {
				ans.push_back(cont[0]);
				cont[0] = 0;
			}
		}
		if(ar[i] != 'C' || ar[i+1] == '\0') {
			if(cont[1] != 0) {	
				ans.push_back(cont[1]);
				cont[1] = 0;
			}
		}
		if(ar[i] != 'G' || ar[i+1] == '\0') {
			if(cont[2] != 0) {
				ans.push_back(cont[2]);
				cont[2] = 0;
			}
		}
		if(ar[i] != 'T' || ar[i+1] == '\0') {
			if(cont[3] != 0) {	
				ans.push_back(cont[3]);
				cont[3] = 0;
			}
		}
		++i;
	}
	cout << *max_element(ans.begin(), ans.end()) << endl;
	return 0;
}
