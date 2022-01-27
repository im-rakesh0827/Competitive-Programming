#include "bits/stdc++.h"
using namespace std;
class Solution{
    public :
    string larhestNum(int n, int sum){
        vector<int>v;
        for(int i=9; i>=1; i--){
            v.push_back(i);
            for(int j=i-1; i>=1; i--){
                v.push_back(j);
                if(i+j==sum){
                    break;
                }
            }
        }
        
    }
    
};
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int sum; cin>>sum;
        Solution ob;
        cout<<ob.larhestNum(n, sum)<<"\n";
       

    }
    return 0;
}

//Question link : https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1/?company[]=Microsoft&company[]=Microsoft&problemStatus=unsolved&page=3&query=company[]MicrosoftproblemStatusunsolvedpage3company[]Microsoft