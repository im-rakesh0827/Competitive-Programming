#include "bits/stdc++.h"
using namespace std;
#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    int solve(int n, vector<int>&A, int x, int k){
        
    }

};
int main(){
    int T; cin>>T;
    while(T--){
        int n, x, k;
        cin>>n>>x>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        Solution ob;
        cout<<ob.solve(n, v, x, k)<<"\n";

    }
    return 0;
}