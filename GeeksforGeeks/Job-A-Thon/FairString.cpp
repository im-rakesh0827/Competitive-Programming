#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int solve(int N, string S, int A[]){

    }
};
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        string str; cin>>str;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.solve(n, str, arr)<<"\n";
    }
    return 0;
}