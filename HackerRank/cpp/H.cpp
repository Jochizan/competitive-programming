#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < 4; ++i) {
        for (int j = 0; i < 4; ++j) {
            int sum = 0;
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + 
                arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(sum > ans){
                ans = sum;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
