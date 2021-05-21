#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int n;
db sum = 0, u;

db solve(vector<db> data) {
	for(int i = 0; i < n; ++i)
		sum += data[i];
	u = sum/n;
	db cmp = 0;
	for(int i = 0; i < n; ++i)
		cmp += pow(data[i]-u, 2);
	db des = sqrt(cmp/n);
	return des;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	vector<db> data(n);
	for(int i = 0; i < n; ++i)
		cin >> data[i];
	db ans = solve(data);
	cout << fixed;
	cout << setprecision(1);
	cout << ans << endl;
	return 0;
}
