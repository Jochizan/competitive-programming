#include <bits/stdc++.h>

#define ll long long int
#define db long double

using namespace std;

int n;

void solve() {
    int t;
    cin >> t;
    vector<int> ar(t);
    for(int i = 0; i < t; ++i)
        cin >> ar[i];
    int ans = 0;
    for (int i = ar.size() - 1; i >= 0; i--) {
        if (ar[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, ar[i] - 2); j < i; j++)
            if (ar[j] > ar[i]) 
                ans++;
    }
    cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> n;
    n++;
    while(--n) {
        solve();
    }
	return 0;
}
