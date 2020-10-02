#include <bits/stdc++.h>

#define db double
#define ll long long int
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin >> n;
	vector<ll> vec(n);
	if(n == 1) {
		cout << 1 << endl;
		return 0;	
	}
	if(n == 4) {
		cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
		return 0; 
	}
	if(n < 4) {
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	if(n % 2 != 0) {		
		for(ll i = 1, j = 0; j < n/2+1; i+=2, j++)
			vec[j] = i;
		for(ll i = 2, j = n/2+1; j < n; i+=2, j++)
			vec[j] = i;
	}else {
		for(ll i = 1, j = 0; j < n/2; i+=2, j++)
			vec[j] = i;
		for(ll i = 2, j = n/2; j < n; i+=2, j++)
			vec[j] = i;
	}
	for(int i = 0; i < (int)vec.size(); ++i)
		cout << vec[i] << " ";
	return 0;
}
