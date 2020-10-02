#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0) ;
    int t , n , x = 0, i;
    bool ok = 0 ;
    cin >> t ;
    vector<string> ans;
    while(t--){
        cin >> n ;
        ans.resize(n) ;
        for(i=0;i<n;i++) {
            cin >> ans[i] ;
            if(ans[i][0]>='a') {
                ok = 1 ;
                x = i ;
            }
        }
        if(ok){
            for(i = x+1; i < n; i++)
                cout << ans[i] << " " ;
            cout << ans[x] << " " ;
            for(i = 0; i < x; i++)
                cout << ans[i] << " " ;
            cout << endl ;
        }else{
            for(i = 0; i < n; i++)
                cout << ans[i] << " " ;
            cout << endl ;
        }
        ok = 0 ;
    }
    return 0;
}
