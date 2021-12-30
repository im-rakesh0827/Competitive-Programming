#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int temp = n;
        int rev = 0;
        while(n>0){
            rev = rev*10+n%10;
            n/=10;
        }
        if(temp==rev){
            cout<<"wins\n";
        }else{
            cout<<"loses\n";
        }
    }
    return 0;
}


//Input : 
// 3
// 331
// 666
// 343

//Output : 
// loses
// wins
// wins