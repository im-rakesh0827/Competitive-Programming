#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int k; cin>>k;
        int ans=0;
        while(k>1){
            if(k%2==0) ans++;
            else break;
            k=k/2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

//Question link : https://www.codechef.com/START22C/problems/INTSEQ


//Input : 
// 2
// 8
// 4

//Output :
// 3
// 2

