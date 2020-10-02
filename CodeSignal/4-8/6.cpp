#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int solve(vector<int> dp) {
    int max = 0;
    int min = 20;
    int rn = 0;
    int n = dp.size();
    for(int i = 0; i < n; ++i) {
        if(max < dp[i])
            max = dp[i];
        if(min > dp[i])
            min = dp[i];
    }
    vector<int>::iterator it;
    for(int i = min; i <= max; ++i) {
        it = find(dp.begin(), dp.end(), i);//si restamos (max - min) - n para este caso. xDe
        if(it == dp.end())
            rn++;
    }
    return rn;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; ++i)
        cin >> ar[i];
    int ans = solve(ar);
    cout << ans << endl;
    return 0;
}
