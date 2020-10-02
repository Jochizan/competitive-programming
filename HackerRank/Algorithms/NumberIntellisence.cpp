#include <bits/stdc++.h>

#define db double
#define ll long long

using namespace std;	

int main() {
	int n;
	cin >> n;
	int prim[n];
	for(int i = 0; i < n; ++i) {
		cin >> prim[i];
	}
	int cont = 0;
	for(int i = 0; i < n; ++i) {
		vector<int> nums;
		for(int j = 1; j <= prim[i]; ++j) {
			if(prim[i] % j == 0) {
				cont++;
				nums.push_back(j);
			}
		}			
		if(nums.size()%2 == 0) {
			cout << "NO" << endl;
		}else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
