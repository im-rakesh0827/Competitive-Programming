#include "bits/stdc++.h"
using namespace std;
int main(){
    int n, k;
    cin>>n;
    if(n<0){
        cout<<"Invalid input : \n";
    }else{
        cin>>k;
        if(k<0 || k>n){
            cout<<"Invalid input : \n";
        }else{
             int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=k; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            for(int i=n-1; i>k; i--){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}