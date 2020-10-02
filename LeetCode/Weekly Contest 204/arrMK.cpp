#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

bool containsPattern(vector<int>& arr, int m, int k) {
    int n = arr.size();
    int cont = 0;
    for(int i = 0; i < n; ++i) {
        if(arr[i] != arr[i+m])
            cont = 0;
        cont += (arr[i] == arr[i+m]);
        if(cont ==(k-1) * m)
            return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> ar(n);
    int m, k;
    cin >> m >> k;
    for(int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        ar.push_back(num);
    }
    bool ans = containsPattern(ar, m, k);
    cout << ((ans == 1)?"True":"False") << endl;
    return 0;
}
