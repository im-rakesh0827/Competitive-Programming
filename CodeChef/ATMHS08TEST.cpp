#include "bits/stdc++.h"
using namespace std;
int main(){
    int withdraw;
    cin>>withdraw;
    float bal; cin>>bal;
    float new_bal;

    if(withdraw>bal){
        new_bal = bal;
    }else{
        if(withdraw%5==0){
            new_bal = bal-withdraw-0.5;
        }else{
            new_bal = bal;
        }
    }
    cout<<fixed<<setprecision(2)<<new_bal<<"\n";
    return 0;
}

//Input : 
// 30 120.00
//Output : 
// 89.50


// Input : 
// 300 120.00 //Here withdrawal amount is more than current account balance : 
// Output : 
// 120.00


//Input : 
// 42 120.00 //Here withdrawal amount is not the multiple of 5:
//Output : 
// 120.00

