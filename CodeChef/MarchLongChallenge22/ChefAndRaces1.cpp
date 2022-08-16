#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int x, y, a, b;
        cin>>x>>y>>a>>b;
        int chef=2, arch=2;
        int A1[]  = {x, y};
        int A2[] = {a, b};
        int count=0;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                if(A1[i]==A2[j]){
                    count++;
                }
            }
        }
        cout<<chef-count<<"\n";


    }
    return 0;
}

// Question link : https://www.codechef.com/MARCH222C/problems/CHEFRACES

// Input :
// 3
// 4 3 1 2
// 4 2 1 2
// 2 1 1 2

// Output :
// 2
// 1
// 0