#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {
    map<int, string> map1;
    map1[1] = "Tomp";
    map1[2] = "Max";
    map1[3] = "Mark";
    map1[4] = "Jhon";
    map1[5] = "Patrick";
    map1.clear();
    for(map<int, string>::iterator it = map1.begin();it != map1.end(); ++it) {
        cout << it->first << " => " << it -> second << endl;
    }
    return 0;
}
