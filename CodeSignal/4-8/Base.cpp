#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int solve(vector<int> ar) {
    int n = ar.size();
    int max = -10000;
	for(int i = 0; i < n - 1; ++i) {
        int mp = ar[i] * ar[i+1];           
        if(max < mp)
            max = mp;
    }
    return max;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; ++i)
        cin >> dp[i];
    int ans = solve(dp);
    cout << ans << endl;
    return 0;
}
