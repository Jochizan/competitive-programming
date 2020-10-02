#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	vector<string> ans;
	cin >> T;
	for(int i = 0; i < T; ++i) {
		string val; 
		int cant, j, k, l;
		cin >> cant;
		vector<char> lett;
		cin.ignore(1000, '\n');
		getline(cin, val); 
		string ans, antes, despues;
		for(j = 0; val[j] != '\0'; ++j) {
			if(val[j] == '#' || val[j] == ' ') {
				lett.push_back(val[j]);
			}else if(val[j] != '#' || val[j] != ' ') {
				break;
			}
		}
		for(k = j; val[k] != '\0'; ++k) {
			if(val[k] != '#') {
				ans += val[k];
			} else if(val[j] == '#' || val[j] == ' ') {
				break;
			}
		}
		for(l = j + ans.size(); val[l] != '\0'; ++l) {
			if(val[l] != ' ') {
				despues += val[l];	
			}	
		}
		lett.pop_back();
		for(j = 0; j < lett.size(); ++j){
			antes += lett[j];
		}
		if(despues == "" && ans != "") {
			cout << ans << " " << antes << endl;
		}else if(ans == ""){ 
			cout << antes << endl;
		}else if(despues == "" && antes == ""){
			cout << val << endl;
		}else {
			cout << despues << " " << ans << antes << endl;
		}
	}
	return 0;
}
