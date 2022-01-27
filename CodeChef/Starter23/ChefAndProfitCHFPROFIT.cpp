#include "bits/stdc++.h"
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int x, y, z;
        cin>>x>>y>>z;
        int receive = x*z;
        int spent = x*y;
        int profit = receive-spent;
        cout<<profit<<"\n";
    }
    return 0;
}

//Quection link : https://www.codechef.com/START23C/problems/CHFPROFIT

// Input : 
// 3
// 2 5 20
// 3 1 2
// 4 5 6

// Output : 
// 30
// 3
// 4