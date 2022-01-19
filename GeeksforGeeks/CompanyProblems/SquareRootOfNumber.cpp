#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    long long int floorSquareRoot(long long int N){
        int ans = pow(N, 0.5);
        return floor(ans);
    }
};
int main(){
    int T; cin>>T;
    while(T--){
        long long int num; cin>>num;
        Solution ob;
        cout<<ob.floorSquareRoot(num)<<"\n";
    }
    return 0;
}

//Question link : https://practice.geeksforgeeks.org/problems/square-root/1/?company[]=Flipkart&company[]=Flipkart&page=1&query=company[]Flipkartpage1company[]Flipkart#

//Input : 
// 1
// 5

//Output : 2
