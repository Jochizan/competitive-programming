#include <iostream>

using namespace std;

int main() {
    int k, n, sum = 0;
    cin >> k >> n;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += num;
    }
    int ans;
    ans = sum - k * n;
    if(ans < 0)
        ans = 0;
    cout << ans << endl;
    return 0;
}
