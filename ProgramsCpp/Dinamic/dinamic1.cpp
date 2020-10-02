#include <bits/stdc++.h>

#define MAX 5002
#define ll long long

using namespace std;

string v;
ll memo[MAX];

ll dp(int i)
{
    if (i >= v.size())
        return 0;
    if (memo[i])
        return memo[i];
    memo[i] += (dp(i + 1));
    if (v[i] == '1' && v[i + 1] >= '0' && v[i + 1] <= '9' && i < v.size() - 1)
        memo[i] += (1 + dp(i + 2));
    if (v[i] == '2' && v[i + 1] >= '0' && v[i + 1] <= '6' && i < v.size() - 1)
        memo[i] += (1 + dp(i + 2));
    return memo[i];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> v)
    {
        if (v[0] == '0')
            return 0;
        memset(memo, 0, sizeof(memo));
        cout << dp(0) << endl;
    }
    return 0;
}