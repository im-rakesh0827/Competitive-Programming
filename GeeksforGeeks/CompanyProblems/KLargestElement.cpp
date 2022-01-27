#include "bits/stdc++.h"
using namespace std;
class Solution{
    public :
    vector<int> kLargest(int N, int A[], int K){
        vector<int>v;
        sort(A, A+N);
        for(int i=N-1; i>=N-K; i--){
            v.push_back(A[i]);
        }
        return v;
    }
};
int main(){
    int T; cin>>T;
    while(T--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        Solution ob;
        vector<int> result = ob.kLargest(n, arr, k);
        for(int i=0; i<result.size(); i++){
            cout<<result[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}

//Question link : https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1/?company[]=Microsoft&company[]=Microsoft&problemStatus=unsolved&page=1&query=company[]MicrosoftproblemStatusunsolvedpage1company[]Microsoft#