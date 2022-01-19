#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int winner(int N){
        if(N%2==0){
            return 1; //Tom win
        }else{
            return 0; //Jerry win
        }
        
    }
};
int main(){
    int T; cin>>T;
    while(T--){
        int num; cin>>num;
        Solution ob;
        cout<<ob.winner(num)<<"\n";

    }
}

//Question link : https://practice.geeksforgeeks.org/problems/tom-and-jerry1325/1/?company[]=Flipkart&company[]=Flipkart&page=1&query=company[]Flipkartpage1company[]Flipkart#