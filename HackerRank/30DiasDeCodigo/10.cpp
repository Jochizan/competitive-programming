#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, ans, in = 0;
	string numI;
	vector<int> mxm;
	cin >> n;
	while(n != 0) {
		if(n % 2 == 0) {
			mxm.push_back(in);
			in = 0;
			//numI += to_string(0);
		}else {
			//int resto = n % 2;
			in++;
			//numI += to_string(resto);
		}
		n /= 2;
	}
	mxm.push_back(in);
	//for(char ch: numI) {
		//if(ch == '1') {
			//in++;
		//}else if(ch == '0'){
			//mxm.push_back(in); in = 0;
		//}
	//}
	//mxm.push_back();
	ans = *max_element(mxm.begin(), mxm.end());
	cout << ans << endl;
	return 0;
}
