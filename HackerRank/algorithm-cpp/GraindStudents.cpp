#include <bits/stdc++.h>

#define ll long long

using namespace std;
	
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
		if(arr[i] > 35) {
			if(arr[i]%5 == 3) {
				arr[i] += 2;
			}else if(arr[i]%5 == 4) {
				arr[i] += 1;
			}
		}
	}
	for(int i = 0; i < n; ++i) {
		cout << arr[i] << endl;
	}
	return 0;
}
