//WAP to print product of max element of first array and min element of second array : 
#include "bits/stdc++.h"
using namespace std;
int main(){
    int n, m;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int maxKey=-99999;
    int minKey=99999;
    for(int i=0; i<n; i++){
        maxKey=max(maxKey, a[i]);
    }
    for(int i=0; i<m; i++){
        minKey = min(minKey, b[i]);
    }
    int product = maxKey*minKey;
    cout<<product<<"\n";
    return 0;
}