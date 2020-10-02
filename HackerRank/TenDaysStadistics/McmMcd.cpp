#include <iostream>

using namespace std;

long long mcd(long long num1, long long num2) {
    long long mcd = 0;
    long long a = max(num1, num2);
    long long b = min(num1, num2);
    do {
        mcd = b;
        b = a % b;
        a = mcd;
    }while(b != 0);
    return mcd;
}

long long mcm(long long num1, long long num2) {
    long long mcm = 0;
    long long a = max(num1, num2);
    long long b = min(num1, num2);
    mcm = (a/mcd(a, b)) * b;
    return mcm;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << mcm(a, b) << endl;
    return 0;
}
