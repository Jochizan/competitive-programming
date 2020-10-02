#include <bits/stdc++.h>

#define ll long long
#define	db double

using namespace std;

ll n;

void solved() {
	for(int i = 2; n > 1; ++i) {
		while(n%i == 0) {
			cout << i << endl;
			n /= i;
		}
	}	
}

int main() {
	cin >> n;
	solved();	
	return 0;
}
