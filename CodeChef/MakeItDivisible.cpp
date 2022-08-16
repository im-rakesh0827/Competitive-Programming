#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int ans=0;
        bool flag = false;
        for (int i = 1; i < 100; i++){
            while(n>0){
                ans*10+=i;
            }
            if(ans%3==0 && ans%9!=0){
                flag = ture;
            }
        }
        if(flag){
            cout<<ans<<"\n";
        }
    }
    return 0;
}