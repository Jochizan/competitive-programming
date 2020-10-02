#include <iostream>

using namespace std;

int n;

void solved(int n) {
    int sum = 0;
    for(int i = 1; i < n; ++i) {
        if(i % 3 == 0) {
            sum += i;
        }else if(i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
}

int main() {
    cin >> n;
    solved(n);
    return 0;
}
