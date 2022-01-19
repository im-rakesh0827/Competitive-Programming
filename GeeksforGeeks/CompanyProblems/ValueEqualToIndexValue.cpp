#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    vector<int> valueEqualToIndex(int N, int A[]){
        vector<int> v;
        for(int i=0; i<N; i++){
            if(A[i]==i+1){
                v.push_back(A[i]);
            }
        }
        return v;
    }
};
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        Solution ob;
        auto ans = ob.valueEqualToIndex(n, arr);
        if(ans.empty()){
            cout<<"Not Found : \n";
        }else{
            for(int x: ans){
                cout<<x<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

//Question link : https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1/?company[]=Flipkart&company[]=Flipkart&page=1&query=company[]Flipkartpage1company[]Flipkart#

//Input :
// 1
// 5
// 15 2 45 12 7

//Output : 2


//Input :
// 1
// 5
// 15 2 45 4 7

//Output : 2 4