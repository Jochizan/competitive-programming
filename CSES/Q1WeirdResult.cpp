#include <bits/stdc++.h>

#define ll unsigned long long
#define db double

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin >> n;
	while(n != 1) {
		cout << n << " ";
		if(n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
	}
	cout << n;
	return 0;
}
