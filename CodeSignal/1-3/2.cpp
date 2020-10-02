#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string agno, dos;
	cin >> agno;
	int n = agno.size();
	if(n < 3 || agno == "100") {
		cout << 1 << endl;
	}else if(n == 3) {
		if(agno[n-1] != '0' || agno[n-2]  != '0') {
			cout << (agno[0] - '0') + 1 << endl;
		}else {
			cout << (agno[0] - '0') << endl;
		}
	}else if(n == 4){
		dos = to_string(agno[0] - '0') + to_string(agno[1] - '0');
		int ans = stoi(dos);
		if(agno[n-1] != '0' || agno[n-2] != '0') {
			cout << ans + 1 << endl;
		}else {
			cout << ans << endl;
		}
	}
	return 0;
}
