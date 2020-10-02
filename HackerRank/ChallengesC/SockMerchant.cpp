#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

map<int, int> dpu;

int sockMerchant(int n, vector<int> ar) {
	map<int, int>::iterator it;
	for(int i = 0; i < n; ++i) {
		int cont = 1;
		for(int j = i + 1; j < n; ++j) {
			if(ar[i] == ar[j]) {
				cont++;
			}
		}
		if(dpu.find(ar[i]) == dpu.end())
            dpu[ar[i]] = cont;
	}
	int temp, res = 0;
	for(it = dpu.begin(); it != dpu.end(); ++it) {
		temp = it->second;
		if(temp%2 == 0) {
			res += temp/2;
		}else if(temp%2 == 1) {
			res += (temp-1)/2;
		}
	}	
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> dp(n);
	for(int i = 0; i < n; ++i)
		cin >> dp[i];
	int ans = sockMerchant(n, dp);
	cout << ans << endl;
	return 0;
}
int count = 0;
    for(int i=0; i<n; i++){
        if(c[i]!=0){
            for(int j=i+1; j<n; j++){
                if(c[i]==c[j]){
                    count++;
                    c[j]=0;
                    break;
                }
            }           
        }
    }
    printf("%d", count);
