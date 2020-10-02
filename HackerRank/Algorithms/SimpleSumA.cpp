#include <bits/stdc++.h>

#define ll long long 

using namespace std;

int main() {
    ll n, sum = 0;
    cin >> n;
    vector<ll> ar(n);
    for(int i = 0; i < n; ++i)
        cin >> ar[i];
    for(int i = 0; i < n; ++i)
        sum += ar[i];
    cout << sum << endl;
	return 0;
}
