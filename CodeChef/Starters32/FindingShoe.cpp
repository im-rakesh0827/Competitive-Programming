#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int N, M;
        cin>>N>>M;

        if(M<=N){
            cout<<2*N-M<<"\n";
        }else{
            cout<<N<<"\n";
        }

    }
    return 0;
}