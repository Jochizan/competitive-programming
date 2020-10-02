#include <bits/stdc++.h>

using namespace std;

int wait(string a, string b) {
	int ans = 0;
	for(int i = 0; i < (int)a.size(); ++i) {
		for(int j = 0; j < (int)b.size(); ++j) {
			if(a[i] != b[j]) {
				ans++;
			}
		}
	}
	return ans/2;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; ++i) {
		string a, b;
		cin >> a >> b;
		cout << wait(a, b) << endl;
	}
	return 0;
}
