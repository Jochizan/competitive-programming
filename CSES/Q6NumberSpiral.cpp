#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


int main() {
  	ios::sync_with_stdio(0);
	cin.tie(0);
  
	int t, i, j;
	cin >> t;
	while (t--) {
		cin >> i >> j;
		int a = max(i, j);
		int b = min(i, j);
		ll s = ll(a - 1) * (a - 1);
		if (a == b)
			s += a;
		else if (a % 2)
			if (j == a) 
				s += a * 2 - i;
			else 
				s += j;
		else 
			if (i == a) 
				s += a * 2 - j;
			else 
				s += i;
		cout << s << endl;
	}
	return 0;
}
