#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << min((a - (c * b)), (a - b - c)) << endl;
    return 0;
}