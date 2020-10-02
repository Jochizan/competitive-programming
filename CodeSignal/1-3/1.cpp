#include <bits/stdc++.h>

using namespace std;

vector<int> dp;
vector<int> comp;

int firstRepetitive(vector<int> a) {
	for(int i = 0; i < (int)a.size() - 1; ++i) {
		if(a[i] == a[i+1]) {
			return a[i];
		}else {
			for(int j = i + 1; j < (int)a.size(); ++j) {
				if(a[i] == a[j]) {
					comp.push_back(j);
					break;
				}
			}
		}
	}
	if(comp.size() > 0) {
		sort(comp.begin(), comp.end());
		return a[comp[0]];
	}else {
		return -1;
	}	
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		dp.push_back(num);
	}
	cout << firstRepetitive(dp) << endl;
	return 0;
}
