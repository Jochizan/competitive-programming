#include <bits/stdc++.h>

using namespace std;

int main() {
	string S, ans, IS = "";
	cin >> S;
	for(int i = S.size() - 1; i >= 0; --i) {
		IS += S[i];
	}
	if(IS == S) {
		ans = "YES";
	}else {
		ans = "NO";
	}
	cout << ans << endl;
	return 0;
}
