#include "bits/stdc++.h"
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp = arr[k-1];
    int count=0;
    for(int i=0 ;i<n; i++){
        if(arr[i]>=temp && arr[i]!=0){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}