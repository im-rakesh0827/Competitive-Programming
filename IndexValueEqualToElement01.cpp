#include "bits/stdc++.h"
using namespace std;
int element(int arr[], int n){
    int result;
    for(int i=1; i<=n; i++){
        if(arr[i]==i){
            result = arr[i];
            break;
        }else{
            result = arr[0];
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Invalid input :\n";
    }else{
        int arr[n];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        cout<<element(arr, n)<<"\n";
    }
}