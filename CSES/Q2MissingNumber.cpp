#include <bits/stdc++.h>

using namespace std;
 
int main(int argc, char const *argv[]) {
	unsigned long n;
	cin >> n;
 
	vector<bool> numbers(n);
	unsigned long temp;
	while (--n){
		cin >> temp;
		numbers[temp-1] = true;
	}
	long i;
	for (i = 0; numbers[i] != false; ++i);
		cout << i + 1;
	return 0;
}
