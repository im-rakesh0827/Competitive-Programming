#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    if(n<4 || n%2!=0){
        cout<<"Invalid input : \n";
    }else{
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=(n/2)-1; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        for(int i=n-1; i>=n/2; i--){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return 0;
    }
}