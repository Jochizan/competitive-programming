#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    int a, b, c, ans = 0;
    cin >> a;
    vector<int> p1(a);
    for(int i = 0; i < a; ++i)
        cin >> p1[i];
    cin >> b;
    vector<int> p2(b);
    for(int i = 0; i < b; ++i)
        cin >> p2[i];
    cin >> c;
    vector<int> p3(c);
    for(int i = 0; i < c; ++i)
        cin >> p3[i];
    for(int i = 0; i < (int)p1.size(); ++i) {
        auto s2 = find(p2.begin(), p2.end(), p1[i]);
        auto s3 = find(p3.begin(), p3.end(), p1[i]);
        if(s2 != p2.end() && s3 != p3.end())
            ans++;
    }
    cout << ans << "\n";
    return 0;
}
