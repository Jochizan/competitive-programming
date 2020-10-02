#include <iostream>

using namespace std;

int main() {
    int p1, p2;
    int b1, b2;
    int ini1, ini2;
    int med1;
    int fin2;
    cin >> ini1 >> ini2;
    cin >> med1 >> p2;
    cin >> p1 >> fin2;
    b2 = ini2 - p2;
    b1 = ini1 - p1;
    cout << b1 << " " << b2;
    return 0;
}
