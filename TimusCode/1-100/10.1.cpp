#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int k,n;
    cin >> k >> n;
	int total = 0, num;
	for(int i = 0;i < n;++i){
        cin >> num;
		total += num;
		total = max(0, total - k);
	}
    cout << total << endl;
	return 0;
}
