#include <bits/stdc++.h>

#define ll long long int
#define db long double

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n, d;
    cin >> n >> d;
    vector<int> mn(n);
    for(int i = 0; i < n; ++i) 
        cin >> mn[i];
    for(int i = 0; i < d; ++i) {
        mn.push_back(mn[0]);
        mn.erase(mn.begin());
    }
    cout << mn[0];
    for(int i = 1; i < n; ++i) {
        cout << " " << mn[i];
    }
	return 0;
}
