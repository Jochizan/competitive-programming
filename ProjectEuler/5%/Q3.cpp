#include <iostream>
#include <vector>

using namespace std;

void solved(int n) {
    vector<int> prim;
    for(int i = 1; i < n; ++i) {
        if(n % i == 0) {
            prim.push_back(i);
            for(int j = 1; j <= i; ++j) {
                if(i % prim[j] == 0) {
                    prim.pop_back();
                    break; 
                }
            }
        }
    }
    for(int i = 0; i < prim.size(); ++i) {
        cout << prim[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    solved(n);
    return 0;
}
