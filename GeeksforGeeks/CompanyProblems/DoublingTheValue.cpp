#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    long int doubleValue(int n, long b, long long a[]){
        for(int i=0; i<n; i++){
            if(b==a[i]){
                b=b*2;
            }
        }
        return b;
    }
};
int main(){
    int T; cin>>T;
    while(T--){
        int N, K;
        cin>>N>>K;
        long long int arr[N];
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.doubleValue(N, K, arr)<<"\n";
    }
    return 0;
}

//Question link : https://practice.geeksforgeeks.org/problems/doubling-the-value4859/1/?company[]=Flipkart&company[]=Flipkart&page=1&query=company[]Flipkartpage1company[]Flipkart#

//Input :
// 1
// 5 2
// 1 2 3 4 8
//Output : 16


//Input :
// 1
// 5 3
// 1 2 3 4 8
//Output : 6