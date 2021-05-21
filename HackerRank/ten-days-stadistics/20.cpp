#include <bits/stdc++.h>

#define db double

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<db> data(n);
    vector<int> cont(n);
    vector<db> ans;
    for(int i = 0; i < n; ++i)
        cin >> data[i];
    for(int i = 0; i < n; ++i)
		cin >> cont[i];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < cont[i]; ++j) {
			ans.push_back(data[i]);
		}
	}
	n = ans.size();
    sort(ans.begin(),ans.end());
    cout << fixed;
    cout << setprecision(1);
    cout << (ans[(n+1)/2+(n-(n+1)/2)/2] + ans[(n+1)/2+(n-(n+1)/2-1)/2])/2 - (ans[n/4] + ans[(n/2-1)/2])/2 << endl;
    return 0;
}	
