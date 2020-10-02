#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int N, ans = 1;
	cin >> N;
	for(int i = 1; i <= N; ++i) {
		long long int num;
		cin >> num;
		ans = (ans*num)%(1000000007);
	}
	cout << ans << endl;
	return 0;
}
