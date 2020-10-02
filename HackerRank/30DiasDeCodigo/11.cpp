#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int n = 6;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int nums[n][n];
    int max = -20;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> nums[i][j];
    for(int i = 0; i < n - 2; ++i) {
        for(int j = 0; j < n - 2; ++j) {
            int sum;
            sum = nums[i][j] + nums[i][j+1] + nums[i][j+2] + nums[i+2][j] + nums[i+2][j+1] + nums[i+2][j+2] + nums[i+1][j+1];
            if(max < sum) {
                max = sum;
            }
        }
    }
    cout << max << endl;
	return 0;
}
