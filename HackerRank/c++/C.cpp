#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 0; 
    string ans;
    string word, a;
    getline(cin, word);
    for(int i = 0; word[i] != '\0'; ++i) {
        if(word[i] == 'z') {
            x++;
        }else if(word[i] == 'o') {
            y++;
        }
    }
    if(2*x == y) {
        ans = "Yes";
    }else {
        ans = "No";
    }
    cout << ans << endl;
    return 0;
}
