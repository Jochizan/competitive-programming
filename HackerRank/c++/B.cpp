#include <iostream>

using namespace std;

int main() {
    string s, ins="", ans="";
    cin >> s;
    for (int i = s.size()-1; i >= 0 ; i--)
         ins += s[i]; 
    if(s == ins) {
        ans = "YES";
    }else {
        ans = "NO";
    }
    cout << ans << endl;
    return 0;
}
