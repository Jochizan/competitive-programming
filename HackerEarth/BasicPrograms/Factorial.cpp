#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int pier = 1;
	for(int i = 1; i <= n; ++i) {
		pier *= i;
	}
	cout << pier << endl;
	return 0;
}
