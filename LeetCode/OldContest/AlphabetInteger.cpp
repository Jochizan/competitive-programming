#include <bits/stdc++.h>

using namespace std;

void freqAlphabets(string s) {
    string ans;
    map<string, char> mpa;
    mpa["1"] = 'a';
    mpa["2"] = 'b';
    mpa["3"] = 'c';
    mpa["4"] = 'd';
    mpa["5"] = 'e';
    mpa["6"] = 'f';
    mpa["7"] = 'g';
    mpa["8"] = 'h';
    mpa["9"] = 'i';
    mpa["10#"] = 'j';
    mpa["11#"] = 'k';
    mpa["12#"] = 'l';
    mpa["13#"] = 'm';
    mpa["14#"] = 'n';
    mpa["15#"] = 'o';
    mpa["16#"] = 'p';
    mpa["17#"] = 'q';
    mpa["18#"] = 'r';
    mpa["19#"] = 's';
    mpa["20#"] = 't';
    mpa["21#"] = 'u';
    mpa["22#"] = 'v';
    mpa["23#"] = 'w';
    mpa["24#"] = 'x';
    mpa["25#"] = 'y';
    mpa["26#"] = 'z';
    string temp;
    vector<string> sub;
    for(int i = 0; i < (int)s.size(); ++i) {
        temp += s[i];
        if(s[i] == '#' || s[i+1] == '\0') {
            if(temp.size() == 3) {
                sub.push_back(temp);
                temp = "";   
            }else {
                string val;
                if(temp.size() > 3) {
                    for(int i = (int)temp.size()-3; i <= (int)temp.size()-1; ++i) {
                        val += temp[i];
                    }
                    for(int i = 0; i <= (int)temp.size()-4; ++i) {
                        int nm = temp[i] -'0';
                        string s2 = to_string(nm);
                        sub.push_back(s2);
                    }
                    sub.push_back(val);
                    temp = "";
                }else {
                    for(char ch: temp) {
                        int af = ch - '0';
                        string sl = to_string(af);
                        sub.push_back(sl);
                    }
                    temp = "";
                }
            }
        }
    }
    for(string s: sub)
        ans += mpa[s];
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string evl, ans;
    cin >> evl;
    freqAlphabets(evl);
    return 0;
} 
// Otra solución bastante buena :3
char m[26];
int i;
for(i=0;i<26;i++){
    m[i] = char('a' +i);
}
int temp;
string ans;
for(i=0;i<s.length();){
    if(i+2 < s.length() && s[i+2]=='#' ){
        temp = ((int)s[i] - '0');
        temp=temp*10;
        i++;
        temp+= ((int)s[i] - '0') - 1;
        i+=2;
    }
    else{
        temp = ((int)s[i] - '0') - 1;
        i++;
    }
    ans += m[temp];
}
return ans;
