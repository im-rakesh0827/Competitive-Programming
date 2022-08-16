#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int sum; cin>>sum;
        int x=1, y;  //Where x>0 and y<0 : sum = x+y:
        y = -sum-x;
        cout<<y<<"\n";
    }
    return 0;
}