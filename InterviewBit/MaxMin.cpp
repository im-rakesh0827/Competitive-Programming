#include "bits/stdc++.h"
using namespace std;
int Solution(vector<int> &A) {
    int maxKey = -9999, minKey = 9999;
    for(int i=0; i<A.size(); i++){
        maxKey = max(maxKey, A[i]);
        minKey = min(minKey, A[i]);
    }
    int sum = minKey + maxKey;
    return sum;
}
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        v.push_back(v[i]);
    }
    cout<<Solution(v)<<"\n";

    return 0;
}
