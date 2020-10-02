#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

string agno(int y) {
    int d = 13;
    if(!(y%4) && (y < 1918 || y%100 || !(y%400))) d--;
    if(y == 1918) d = 26;
    return to_string(d) + ".09." + to_string(y);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	string ans = agno(n);
	cout << ans << endl;
	return 0;
}
