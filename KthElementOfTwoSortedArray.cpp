#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int brr[m];
    for(int i=0; i<m; i++){
        cin>>brr[i];
    }
    int arr1[m+n];
    for(int i=0; i<(m+n); i++){
        cout<<arr1[i]<<" ";
    }
    return 0; 
}