 #include <bits/stdc++.h>

#define ll long long int
#define db long double

using namespace std;

int n;

int solve(vector<int> arr) {
    int i, c = 0, n = arr.size();
    for(i=0;i<n;i++) {
        if(arr[i] == i + 1)
            continue;
        swap(arr[i],arr[arr[i]-1]);
        c++;
        --i;
    }
    return c;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i)
        cin >> nums[i];
    int ans = solve(nums);
    cout << ans << endl;
    return 0;
}
