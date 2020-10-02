#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

bool solve(vector<int> ar) {
    int counter1 = 0;
    int counter2 = 0;
    int temp1 = ar[0];
    int temp2 = ar[ar.size() - 1];
    int j = ar.size() - 1;
    int n = ar.size();
    for(int i = 1; i < n; ++i) {   
        if(temp1 >= ar[i])
            counter1++;    
        else
            temp1 = ar[i];
        if(temp2 <= ar[j-1])
            counter2++;   
        else
            temp2 = ar[j-1];
        j--;
    }
    if(counter1 <= 1 || counter2 <= 1)
        return true;  
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; ++i)
        cin >> ar[i];
    bool ans = solve(ar);
    cout << ans << endl;
    return 0;
}
