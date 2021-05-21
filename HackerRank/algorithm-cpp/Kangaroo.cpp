#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string ans;
	int x1, x2, v1, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	if(x1<x2 && v1>v2){
	    if((x2-x1)%(v1-v2)==0){
	      ans ="YES";
	    }else{
	      ans ="NO";
	    }
	}else if(x1>x2 && v2<v1){
            if((x1-x2)%(v2-v1)==0){
	      ans="YES";
	    }else{
	      ans="NO";
	    }
	}else{
	  ans = "NO";
	}
	cout << ans << endl;
	return 0;
}
