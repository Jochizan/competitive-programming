#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int x, y, z;

void solve() {
    cin >> x >> y >> z;
    int ent1 = abs(y-z);
    int ent2 = abs(x-z);
    cout << ((ent1 == ent2)?"Mouse C":(ent1 < ent2)?"Cat B":"Cat A") << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int c;
    cin >> c;
    c++;
    while(--c) {
        solve();
    }
	return 0;
}
