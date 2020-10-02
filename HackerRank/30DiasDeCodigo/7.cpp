#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for(int i = n - 1; i >= 0; --i) {
		cout << arr[i] << " ";
	}
	return 0;
}
