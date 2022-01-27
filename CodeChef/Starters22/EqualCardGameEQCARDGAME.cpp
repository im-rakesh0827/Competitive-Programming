#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int k; cin>>k;
        int d = 52;
        if(d%k==0){
            cout<<"0\n";
        }else{
            int ans=0;
            bool flag = false;
            for(int i=1; i<=52; i++){
                d--;
                if(d%k==0){
                    ans = i;
                    flag=true;
                    break;
                }
            }
            if(flag){
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}

//Question link : https://www.codechef.com/START22C/problems/EQCARDGAME

//Input :
// 4
// 3
// 50
// 2
// 14

//Output :
// 1
// 2
// 0
// 10

