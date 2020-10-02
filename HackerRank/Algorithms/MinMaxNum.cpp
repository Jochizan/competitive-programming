#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<long long int> arr(5);
	long long int s = 0;
	for(int i = 0; i < 5; ++i) {
		cin >> arr[i];
		s += arr[i];
	}
	long long int mn = *min_element(arr.begin(), arr.end());
	long long int mx = *max_element(arr.begin(), arr.end());
	cout << s - mx << " " << s - mn << endl;
	return 0;
}
