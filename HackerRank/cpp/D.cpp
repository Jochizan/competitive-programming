#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long n, ans = 1;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for(long long i = 0; i < n; ++i) {
        ans = (ans * arr[i]) % ((long long) pow(10, 9) + 7);
    }
    cout << ans << endl;
    return 0;
}
