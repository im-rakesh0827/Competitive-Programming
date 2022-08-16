#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    int count=0;
    while(T--){
        int a, b, c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }

    }
    cout<<count;

    return 0;
}