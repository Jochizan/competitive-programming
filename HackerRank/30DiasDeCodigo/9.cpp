#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	ll sum = 1;
	cin >> n;
	n++;
	while(--n) {
		sum *= n;
	}
	cout << sum << endl;
	return 0;
}
