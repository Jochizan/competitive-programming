#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int solve(int n) {
    int np = 0;
    np = n * n + (n-1) * (n-1);
    if(n == 1)
        return 1;
    else    
        return np;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int ans = solve(n);
    cout << ans << endl;
    return 0;
}
