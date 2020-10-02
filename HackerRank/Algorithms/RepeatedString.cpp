#include <bits/stdc++.h>

#define ll long long int
#define db long double

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    ll ans, n, cont = 0;
    string s;
    cin.ignore(0);
    getline(cin, s);
    cin >> n;
    for(char ch: s)
        if(ch == 'a')
            cont++;
    ll l = s.size();
    ll resto = n % l;
    ll entero = floor((db)n/(db)l);
    ans = entero * cont;
    cont = 0;
    for(int i = 0; i < resto; ++i) 
        if(s[i] == 'a')
            cont++;
    ans += cont;
    cout << ans << endl;
	return 0;
}
