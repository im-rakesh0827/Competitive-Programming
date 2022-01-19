#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int maxMoney(int N, int K){

        // if(N%2==0){
        //     return (N/2)*K;
        // }else{
        //     N=N-(N/2);
        //     return N*K;
        // }

        int count=0;
        for(int i=0; i<N; i+=2){
            count++;
        }
        return count*K;
    }
};

int main(){
    int T; cin>>T;
    while(T--){
        int house, price;
        cin>>house>>price;
        Solution ob;
        cout<<ob.maxMoney(house, price)<<"\n";
    }
    return 0;
}

//Questin link : https://practice.geeksforgeeks.org/problems/maximum-money2855/1/?company[]=Amazon&company[]=Amazon&page=1&query=company[]Amazonpage1company[]Amazon
// Input : 
// 1
// 5
// 10

//Output : 30