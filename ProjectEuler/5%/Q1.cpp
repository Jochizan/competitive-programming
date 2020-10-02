#include <iostream>

using namespace std;

#define ll long long

void solved(int n) {
    ll a = 0, b = 0, c = 1, sum = 0;
    for(ll i = 0; i < n; ++i) {
        b = a;
        a = b + c;
        c = b;
        if(a % 2 == 0 && a <= 4000000) {
            sum += a;
        }
    }
    cout << sum << endl;
}

int main() {
    ll n;
    cin >> n;
    solved(n);
    return 0;
}
