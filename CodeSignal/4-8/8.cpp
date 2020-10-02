#include <bits/stdc++.h>

#define db double
#define ll long long

using namespace std;

int q, w;

int solve(int ar [][]) {
	int sum = 0;
	for(int i = 1; i < q; ++i) {
		for(int j = 0; j < w; ++j) {
			if(i - 1 > 0 && ar[i-1][j] != 0) {
				sum += ar[i][j];
			}else {
				ar[i][j] = 0;
			}
		}
	}
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	cin >> q >> w;
	int vals [q][w];
//    vector<vector<int>> vals{{0,0,0,0,0},
//							 {0,0,0,0,0},
//							 {0,0,0,0,0},
//							 {0,0,0,0,0},
//							 {0,0,0,0,0}};
    for(int i = 0; i < q; ++i)
		for(int j = 0; j < w; ++j)
			cin >> vals[i][j];
	int ans = solve(vals);
	cout << ans << endl;
    return 0;
}
