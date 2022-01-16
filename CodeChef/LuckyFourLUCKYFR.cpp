#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        long int n; cin>>n;
        int num;
        int count=0;
        while(n>0){
            num = n%10;
            if(num==4){
                count++;
            }
            n/=10;
        }
        cout<<count<<"\n";
    }
    return 0;
}

//Question link : https://www.codechef.com/problems/LUCKYFR

//Input : 
// 5
// 447474
// 228
// 6664
// 40
// 81

//Output : 
// 4
// 0
// 1
// 1
// 0