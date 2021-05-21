#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int n, k, bcharged, bactual;
int sum = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    vector<int> cs(n);
    for(int i = 0; i < n; ++i)
        cin >> cs[i];
    cin >> bcharged;
    for(int i = 0; i < n; ++i)
        sum += cs[i];
    sum -= cs[k];
    bactual = sum/2;
    if(bcharged == bactual) {
        cout << "Bon Appetit"  << "\n";
    }else {
        cout << abs(bcharged - bactual)<< "\n";
    }
    return 0;
}
