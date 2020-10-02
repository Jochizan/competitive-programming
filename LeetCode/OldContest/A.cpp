#include <bits/stdc++.h>

using namespace std;

int solve(vector<string>& v) {
    string mp[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int cnt=0;
    unordered_map<string,int>m;
    for(string s: v){
        string ans="";
        for(int i=0;i<s.length();i++)
            ans+=mp[s[i]-'a'];
        m[ans]++;
    }
    for(auto it=m.begin();it!=m.end();++it){
        if(it->second>0)cnt++;
    }
    return cnt;
}
    map<char, string> morse;
        morse['a'] = ".-";
        morse['b'] = "-...";
        morse['c'] = "-.-.";
        morse['d'] = "-..";
        morse['e'] = ".";
        morse['f'] = "..-.";
        morse['g'] = "--.";
        morse['h'] = "....";
        morse['i'] = "..";
        morse['j'] = ".---";
        morse['k'] = "-.-";
        morse['l'] = ".-..";
        morse['m'] = "--";
        morse['n'] = "-.";
        morse['o'] = "---";
        morse['p'] = ".--.";
        morse['q'] = "--.-";
        morse['r'] = ".-.";
        morse['s'] = "...";
        morse['t'] = "-";
        morse['u'] = "..-";
        morse['v'] = "...-";
        morse['w'] = ".--";
        morse['x'] = "-..-";
        morse['y'] = "-.--";
        morse['z'] = "--..";
        vector<string> sub; 
        map<char, string>::iterator it;
        vector<string>::iterator nx;
        for(string val: words) {
            string conv;
            for(char ch: val) {
                conv += morse[ch];
            }
            nx = find(sub.begin(), sub.end(), conv);
            if(nx == sub.end()) {
                sub.push_back(conv);   
            }
        }
        return sub.size();
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
}
