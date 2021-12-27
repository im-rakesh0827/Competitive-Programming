#include "bits/stdc++.h"
using namespace std;
int main(){
    long long n; cin>>n;
    int sign = 1, rev =0;
    if(n<0){
        sign = -1;
        n*=sign;
    }
    while(n!=0){
        if(rev>INT_MAX/10-n%10){
            return 0;
        }
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<rev*sign<<"\n";
    return 0;
}