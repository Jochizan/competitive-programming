#include <bits/stdc++.h>

using namespace std;

int main() {
	int l, r, k, ans = 0;
	cin >> l >> r >> k;
	for(int i = l; i <= r; ++i) {
		if(i % k == 0) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
