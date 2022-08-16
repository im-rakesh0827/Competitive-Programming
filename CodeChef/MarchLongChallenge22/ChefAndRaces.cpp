#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int x, y, a, b;
        cin>>x>>y>>a>>b;
        int count=0;
        if((x!=a && y!=b)||(y!=a && x!=b)){
            count=2;
        }else if((x==a || x==b) && (y!=a || y!=b)){
            count=1;

        }else if((x==a && y==b)||(y==a && x==b)){
            count=0;
        }
        cout<<count<<"\n";

    }
    return 0;
}

// Question link : https://www.codechef.com/MARCH222C/problems/CHEFRACES