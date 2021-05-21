#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, pos = 0, ans = 1, temp = 0;
    cin >> n;
    char valley[n];
    for(int i = 0; i < n; ++i)
        cin >> valley[i];
    for(int i = 0; i < n; ++i) {
        if(valley[i] == 'D') {
            pos--;
        } else {
            pos++;
        }
        if(temp < 0 && pos == 0) {
            ans++;
        }
        temp = pos;
    }
    if(ans > 0) {
        ans--;
    }
    cout << ans << endl;
    return 0;
}
