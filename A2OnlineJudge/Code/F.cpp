#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0);
    
    string s;
    cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = toupper(s[0]);
    cout << s << endl;
    return 0;
}
