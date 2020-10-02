#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    int n, num = 2;
    cin >> n;
    string str[n];
    for(int i = 0; i < n; ++i)
        cin >> str[i];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < (int)str[i].size(); ++j) {
            if(str[i][j] == '+') {
                num++;
                break;
            }
        }
        num++;
    }
    cout << ((num == 13)?1400:num*100) << "\n";
    return 0;
}
