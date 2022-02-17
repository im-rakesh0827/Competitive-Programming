#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int x, y;
        cin>>x>>y;
        int b = x/2;
        int ans = 0;
        if(y>=b){
            ans = b;
        }else{
            ans = y;
        }
        cout<<ans<<"\n";


    }
    return 0;
}

//Question link : https://www.codechef.com/START25C/problems/FRUITCHAAT

// Input : 
// 3
// 72 50
// 38 93
// 51 4


// Output : 
// 36
// 19
// 4



