#include "bits/stdc++.h"
using namespace std;
string isPrime(int n){
    if(n<=1){
        return "No";
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return "No";
        }
    }
    return "Yes";
}
int main(){
    int T; cin>>T;
    while(T!=0){
        int num; cin>>num;
        cout<<isPrime(num)<<"\n";
        T--;
    }
    return 0;
}