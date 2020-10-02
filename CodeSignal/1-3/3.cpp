#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

bool solve(string np) {
	int n = np.size();
	string temp;
	for(int i = n - 1; i >= 0; --i)
		temp += np[i];
	return (temp == np)?true:false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string pn;
	cin >> pn;
	bool ans = solve(pn);
	cout << ans << endl;
	return 0;
}

