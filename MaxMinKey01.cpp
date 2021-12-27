#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int maxKey = -99999;
    int minKey = 99999;
    for(int i=0 ;i<n; i++){
        maxKey = max(maxKey, a[i]);
        minKey = min(minKey, a[i]);
    }
    cout<<maxKey<<" "<<minKey<<"\n";
    return 0;
}