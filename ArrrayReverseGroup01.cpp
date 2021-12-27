#include "bits/stdc++.h"
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(k>n){
        cout<<"Invalid input :\n";
    }else{
        for(int i=k-1; i>=0; i--){
            cout<<a[i]<<" ";
        }
        for(int i=n-1; i>=k; i--){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}