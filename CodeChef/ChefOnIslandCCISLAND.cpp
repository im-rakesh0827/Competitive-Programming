#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int x, y, x1, y1, d;
        cin>>x>>y>>x1>>y1>>d;
        if(x>=(x1*d) & y>=(y1*d)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }

    }
    return 0;
}

//Question link : https://www.codechef.com/problems/CCISLAND

//Input : 
// 3
// 4 2 1 1 1
// 4 2 1 3 1
// 4 2 4 2 2

//Output : 
// Yes
// No
// No