#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    int N, X, Y;
    string ans;
    for(int i = 0; i < T; ++i) {
        cin >> N >> X >> Y;
        int dp[N];
        for(int j = 0; j < N; ++j) {
            cin >> dp[j];
        }
        if(dp[0] == X && dp[N-1] == Y) {
            ans = "BOTH";
        } else if(dp[0] == X) {
            ans = "EASY";
        } else if(dp[N-1] == Y) {
            ans = "HARD";
        } else if(dp[0] != X && dp[N-1] != Y){
            ans = "OKAY";
        }
        cout << ans << endl;
    }
    return 0;
}
