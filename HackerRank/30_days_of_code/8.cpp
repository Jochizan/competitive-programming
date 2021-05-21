#include <bits/stdc++.h>
#include <map>

#define db double
#define ll long long
#define ar array

using namespace std;

typedef pair<string, string> cmp;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int n;
    string name;
    long num;
    cin >> n;
    cin.ignore();
    map <string, long> pBook;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> num;
        pBook[name] = num;
    }
    while(cin >> name) {
        if (pBook.find(name) != pBook.end()) {
            cout << name << "=" << pBook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
	return 0;
}
