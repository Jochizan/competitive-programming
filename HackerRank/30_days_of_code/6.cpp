#include <bits/stdc++.h>

using namespace std;

void solved(string S) {
	string sol, ans;
    for(int i = 0; i < (int)S.size(); ++i) {
		if(i%2 == 0) {
			sol += S[i];
		}else {
			ans += S[i];
		}
	}
	cout << sol << " " << ans << endl;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; ++i) {
		string S;
		cin >> S;
		solved(S);
	}
	return 0;
}
