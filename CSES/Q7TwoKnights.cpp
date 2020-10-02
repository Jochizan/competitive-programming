#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin >> n;
	//~ printf("", &n);
	for(ll i = 1; i <= n; ++i)
		cout << (((i*i)*((i*i)-1))-8-24-(16*(i-4))-16-((i-4)*24)-((i-4)*(i-4)*8))/2 << "\n";
	return 0;
}
