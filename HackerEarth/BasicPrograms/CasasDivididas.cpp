#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int flag = 1;
	string ans;
	cin >> ans;
	for (size_t i = 0; i < n; i++) {
		if(ans[i]=='H' && ans[i+1]=='H') {
			flag=0;
			break;
		}else {
			if(ans[i]=='.')
				ans[i]='B';
		}
	}
	if(flag) {
		cout << "YES" << endl;
		cout << ans << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
