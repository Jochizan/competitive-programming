#include <bits/stdc++.h>

#define ll long long int
#define db long double

using namespace std;

int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> n;
    vector<int> nums(n);
    vector<int>::iterator it;
    int ans = 0;
    for(int i = 0; i < n; ++i) 
        cin >> nums[i];
    for(int i = 0; i < n; ++i) {
        if(nums[i] != i + 1) {
            it = find(nums.begin(), nums.end(), i+1);
            int index = distance(nums.begin(), it);
            swap(nums[i], nums[index]);
            ans++;
        }
    }
    cout << ans << endl;
	return 0;
}
