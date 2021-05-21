#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int b, n, m;
    cin >> b >> n >> m;
    vector<int> kb(n);
    vector<int> dr(m);
    for(int i = 0; i < n; ++i)
        cin >> kb[i];
    for(int i = 0; i < m; ++i)
        cin >> dr[i];
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int sum;
        for(int j = 0; j < m; ++j) {
            sum = kb[i] + dr[j];
            if(ans < sum && b >= sum) {
                ans = sum;
            }
        }
    }
    if(ans == 0) {
        cout << -1 << endl;
    }else {
        cout << ans << endl;
    }
	return 0;
}
