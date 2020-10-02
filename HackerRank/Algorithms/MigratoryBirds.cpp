#include <bits/stdc++.h>

using namespace std;

map<int, int> dpu;

int Birds(vector<int> arr) {
    map<int, int>::iterator it;
    int mxm, cot;
    for(int i = 0; i < (int)arr.size(); ++i) {
        int cont = 1;
        for(int j = i + 1; j < (int)arr.size(); ++j) {
            if(arr[i] == arr[j])
                cont++;
        }
        if(dpu.find(arr[i]) == dpu.end())
            dpu[arr[i]] = cont;
        if(cont > mxm)
            mxm = cont;
    }
    for(it = dpu.begin(); it != dpu.end(); ++it) {
        if(mxm == it->second) {
            cot = it->first;
            break;
        }
    }
    return cot;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> dp(n);
    for(int i = 0; i < n; ++i)
        cin >> dp[i];
     int ans = Birds(dp);
     cout << ans << endl;
    return 0;
}
