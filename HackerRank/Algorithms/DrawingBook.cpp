#include <bits/stdc++.h>

#define db double
#define ll long long
#define ar array

using namespace std;

int i, n, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    int cont1 = 0, cont2 = 0;
    for(i = 0; i <= n; ++i) {
        if(i == k) {
            break;
        }
        cont1++;
    }
    cont1 = floor(cont1/2.0);
    for(i = n; i >= 0; --i) {
        if(i == k) {
            break;
        }
        cont2++;
    }
    cont2 = floor(cont2/2.0);
    //falta una condición de cuando n = 6 y n = 5 xDe
    if(cont1 < cont2) {
        cout << cont1 << endl;
    } else {
        cout << cont2 << endl;
    }
    return 0;
}
