#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        string tp;
        cin >> tp;
        vector<int> dp;
        for(int j = 0; j < tp.size() - 1; ++j) {
            int cont = 0;
            for(int k = i + 1; k < tp.size(); ++j) {
                if(tp[j] == tp[k]) {
                    cont++;
                }
            }
            dp.push_back(cont);
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}
