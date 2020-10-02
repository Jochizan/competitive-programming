#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<char, int> pairX;
    map<char, int> mapY;
    for(char ch = 'a'; ch <= 'z'; ch++) {
        pairX.first = ch;
        pairX.second = (int)ch;
        mapY.insert(pairX);
    }
    map<char, int>::iterator it = mapY.begin();
    for(it = mapY.begin(); it != mapY.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << "Finding value" << endl;
    it = mapY.find('j');
    cout << (*it).second << endl;
}
