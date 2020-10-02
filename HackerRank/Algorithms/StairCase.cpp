#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	string ans[n][n];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			if(i + j >= n - 1){
				ans[i][j] = "#";
			}else {
				ans[i][j] = " ";
			}
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cout << ans[i][j];
		}
		cout << "\n";
	}
	return 0;
}
