#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> arr;
    string comp;
    for(int i = 0; str[i] != '\0'; ++i) {
        comp += str[i];
        if(str[i+1] == ',') {
            arr.push_back(stoi(comp));
            i++;
            comp = "";
        }else if(str[i+1] == '\0'){
            arr.push_back(stoi(comp));
        }
    }
    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
