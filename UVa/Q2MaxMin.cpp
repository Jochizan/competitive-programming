#include <bits/stdc++.h>

#define db double
#define ar array
#define ll long long

using namespace std;

int a, b;

void solve() {
    cin >> a >> b;
    cout << ((a > b)?">":(a < b)?"<":"=") << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
