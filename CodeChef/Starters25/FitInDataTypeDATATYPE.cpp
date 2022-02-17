#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int N, x;
        cin>>N>>x;
        if(x<=N){
            cout<<x<<"\n";
        }else{
            while(x>N)
            x = x-N-1;
            cout<<x<<"\n";
        }
    
    }
    return 0;
}

//Question link : https://www.codechef.com/START25C/problems/DATATYPE

// Input : 
// 5
// 15 0
// 15 10
// 11 12
// 27 37
// 50 49

// Output : 
// 0
// 10
// 0
// 9
// 49
