#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
    ll T;
    cin >> T;
    vector<ll> nums;
    for(ll i = 0; i < T; ++i) {
        ll N, K;
        cin >> N >> K;
        ll cont = 0;
        for(ll j = 0; j < N; ++j) {
            ll num;
            cin >> num;
            num -= K;
            while(num >= 0) {
                cont++;
                num -= K;
            }
        }
        cout << cont << endl;
    }
    return 0;
}
