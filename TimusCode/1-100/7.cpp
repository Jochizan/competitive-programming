#include <iostream>

using namespace std;

int main()
{
    int dp[2];
    cin >> dp[0] >> dp[1];
    cout << (((dp[0] % 2) == 0) || ((dp[1] % 2) != 0) ? "yes" : "no");
    return (0);
}
