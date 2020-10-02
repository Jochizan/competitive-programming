#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int n;

void solve() {
	string pos;
	cin >> pos;
	if(pos == "a1" || pos == "a8" || pos == "h1" || pos == "h8") {
		cout << 2 << endl;
	}else {
		map<char, int>:: iterator it;
		map<char, int> letras;
		letras['a'] = 1;
		letras['b'] = 2;
		letras['c'] = 3;
		letras['d'] = 4;
		letras['e'] = 5;
		letras['f'] = 6;
		letras['g'] = 7;
		letras['h'] = 8;
		int l1 = letras[pos[0]];
		int l2 = pos[1] - '0';
		if(l1 < 7 && l1 > 2 && l2 < 7 && l2 > 2) {
			cout << 8 << endl;
		}else if(l1 < 7 && l1 > 2 && (pos[1] == '2' || pos[1] == '7')) {
			cout << 6 << endl;
		}else if(l2 < 7 && l2 > 2 && (pos[0] == 'b' || pos[0] == 'g')) {
			cout << 6 << endl;
		}else if(pos == "b1" || pos == "a2" || pos == "a7" || pos == "b8" || pos == "g8" || pos == "h7" || pos == "g1" || pos == "h2") {
			cout << 3 << endl;
		}else {
			cout << 4 << endl;
		}	
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
	while(n--)
		solve();
	return 0;
}
