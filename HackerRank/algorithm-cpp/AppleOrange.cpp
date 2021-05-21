#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll s, t, a, b, apples, oranges;
ll ans1 = 0, ans2 = 0;

void solve() {
	int ap[apples], ora[oranges];
	for(int i = 0; i < apples; ++i)
		cin >> ap[i];
	for(int i = 0; i < oranges; ++i)
		cin >> ora[i];
	for(int i = 0; i < apples; ++i) {
		if(ap[i] + a >= s && ap[i] + a <= t) {
			ans1++;
		}
	}
	for(int i = 0; i < oranges; ++i) {
		if(ora[i] + b >= s && ora[i] + b <= t) {
			ans2++;
		}
	}
	cout << ans1 << endl;
	cout << ans2 << endl;
}
			

int main() {
	cin >> s >> t;
	cin >> a >> b;
	cin >> apples >> oranges;
	solve();
	return 0;
}
