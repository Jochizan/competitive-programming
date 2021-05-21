#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, comp = 0, ans = 0;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
		if(arr[i] > comp) {
			ans = 1;
			comp = arr[i];
		}else if(comp == arr[i]){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
