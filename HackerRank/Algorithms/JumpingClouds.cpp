#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, ans = 0;
	cin >> n;
    vector<int> cloud(n);
    for(int i = 0; i < n; ++i)
        cin >> cloud[i];
    for(int i = 0; i < n - 1; ++i) {
        if(cloud[i+1] == 0 && cloud[i+2] == 0) {
            ans++;
            ++i;
        }else if(cloud[i+1] == 1 && cloud[i+2] == 0) {
            ans++;
            ++i;
        }else if(cloud[i+1] == 0 && cloud[i+2] == 1) {
            ans++;
        }else if(cloud[i+1] == 0) {
            ans++;
        }
    }
    cout << ans << endl;
	return 0;
}
