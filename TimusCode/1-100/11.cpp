#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int time = 0;
    while(n >= 0) {
        n -= k;
        time++;
    }
    cout << time + 1 << endl;
    return 0;
}
