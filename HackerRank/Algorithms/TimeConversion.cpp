#include <bits/stdc++.h>

using namespace std;

int main() {
	string hr;
	cin >> hr;
	int firstH = stoi(hr.substr(0, 2));
	string ansH1 = hr.substr(0, 2);
	string ansH2 = hr.substr(3, 5); 
	string val = hr.substr(8, 10);
	if(val == "PM") {
		if(firstH == 12){
			ansH1 = "12";
		}else {
			firstH += 12;
			ansH1 = to_string(firstH);
		}
	}else {
		if(firstH == 12){
			ansH1 = "00";
		}
	} 
	cout << ansH1 << ":" << ansH2 << endl;
	return 0;
}
